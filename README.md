Network Traffic Analyzer

A simple network traffic analysis project developed using C++ and PHP.

1. Project Overview

Network Traffic Analyzer is a file-based program designed to read network traffic records and analyze packet information.

The program reads data from a text file, processes the records using C++, and displays the analysis report through PHP in the terminal.

2. Technologies Used

* C++: Processes and analyzes packet information.
* PHP: Runs the C++ analyzer and displays the results.
* TXT: Stores sample network traffic data.

3. Main Features

* Read network traffic data from a text file.
* Display source IP addresses.
* Display destination IP addresses.
* Display packet sizes.
* Calculate total data size.
* Calculate average packet size.
* Identify maximum packet size.
* Identify minimum packet size.
* Validate IP address format.
* Detect invalid records.

4. Project Structure

Network-Traffic-Analyzer/
│
├── analyzer.cpp
├── analyzer.exe
├── main.php
├── traffic.txt
├── README.md
│
└── screenshots/
    ├── 01-project-output.png
    ├── 02-packet-details.png
    └── 03-packet-analysis.png

5. How It Works

1. The program reads packet records from traffic.txt.
2. C++ processes the packet information.
3. The program calculates packet statistics.
4. PHP executes the C++ analyzer.
5. The final report is displayed in the terminal.

6. How to Run

Compile the C++ program:

g++ analyzer.cpp -o analyzer.exe

Run the PHP program:

php main.php

7. Sample Analysis Results

The current sample data contains 8 packet records.

* Total Data: 8350 Bytes
* Average Packet Size: 1043 Bytes (as displayed by the program)
* Maximum Packet Size: 2000 Bytes
* Minimum Packet Size: 500 Bytes

8. Screenshots

Project Output

Packet Details

Packet Analysis

9. Future Improvements

The following features are planned for future development:

* TCP protocol analysis.
* UDP protocol analysis.
* Additional network traffic statistics.
* More advanced packet analysis.

Note: TCP and UDP analysis are not implemented in the current version.

10. Project Status

Current version: 1.0

Status: Initial version completed. Further improvements are planned.

⸻

Developed as a learning project using C++ and PHP.
