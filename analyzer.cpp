#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool validIP(const string& ip) {
    stringstream ss(ip);
    string part;
    int count = 0;

    while (getline(ss, part, '.')) {
        if (part.empty() || part.size() > 3)
            return false;

        for (char c : part) {
            if (c < '0' || c > '9')
                return false;
        }

        int value = stoi(part);

        if (value < 0 || value > 255)
            return false;

        count++;
    }

    return count == 4;
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cout << "Error: Traffic file not provided.\n";
        return 1;
    }

    ifstream file(argv[1]);

    if (!file.is_open()) {
        std::cout << "Error: Cannot open traffic file.\n";
        return 1;
    }

    string line;
    string sourceIP, destinationIP;
    string sizeText;

    int totalPackets = 0;
    int invalidRecords = 0;

    long long totalSize = 0;
    int maxSize = 0;
    int minSize = 0;

    set<string> sources;
    set<string> destinations;
    std::cout << "\n=========== Packet Details ========\n\n";
    while (getline(file, line)) {

        if (line.empty())
            continue;

        stringstream ss(line);

        if (!getline(ss, sourceIP, ',') ||
            !getline(ss, destinationIP, ',') ||
            !getline(ss, sizeText, ',')) {
            invalidRecords++;
            continue;
        }

        string extra;

        if (getline(ss, extra, ',')) {
            invalidRecords++;
            continue;
        }

        if (!validIP(sourceIP) ||
            !validIP(destinationIP)) {
            invalidRecords++;
            continue;
        }

        try {
            size_t position = 0;
            int packetSize = stoi(sizeText, &position);

            if (position != sizeText.size() ||
                packetSize <= 0) {
                invalidRecords++;
                continue;
            }
            std::cout << "Packet " << (totalPackets + 1) << ":\n";

            std::cout << "Source IP      : " << sourceIP << endl;

            std::cout << "Destination IP : " << destinationIP << endl;

            std::cout << "Packet Size    : " << packetSize << " Bytes\n";

            std::cout << "----------------------------------------\n";

            if (totalPackets == 0) {
                minSize = packetSize;
                maxSize = packetSize;
            }

            totalPackets++;
            totalSize += packetSize;

            minSize = min(minSize, packetSize);
            maxSize = max(maxSize, packetSize);

            sources.insert(sourceIP);
            destinations.insert(destinationIP);

        } catch (...) {
            invalidRecords++;
        }
    }

    file.close();

    std::cout << "========================================\n";
    std::cout << "          NETWORK ANALYSIS REPORT\n";
    std::cout << "========================================\n\n";

    std::cout << "Total Valid Packets    : " << totalPackets << endl;
    std::cout << "Invalid Records        : " << invalidRecords << endl;

    std::cout << "Unique Source IPs      : " << sources.size() << endl;
    std::cout << "Unique Destination IPs : " << destinations.size() << endl;

    std::cout << "\nPACKET STATISTICS\n";
    std::cout << "----------------------------------------\n";

    std::cout << "Total Data             : " << totalSize << " Bytes\n";

    if (totalPackets > 0) {
        std::cout << "Average Packet Size    : "
             << totalSize / totalPackets << " Bytes\n";

        std::cout << "Maximum Packet Size    : "
             << maxSize << " Bytes\n";

        std::cout << "Minimum Packet Size    : "
             << minSize << " Bytes\n";
    } else {
        std::cout << "No valid packets found.\n";
    }

    std::cout << "\n========================================\n";

    return 0;
}