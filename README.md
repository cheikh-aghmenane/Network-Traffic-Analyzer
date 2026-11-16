🌐 Network Traffic Analyzer

📌 Project Overview

Network Traffic Analyzer is a network analysis project developed using C++ and PHP. It reads traffic records from a text file, validates IP addresses, analyzes packet information, and generates statistical reports.

🎯 Project Objectives

* Analyze network traffic records.
* Validate IPv4 addresses.
* Display source and destination IP addresses.
* Calculate packet statistics.
* Identify maximum, minimum, and average packet sizes.

🛠️ Technologies Used

Technology	Role
C++	Packet processing, IP validation, and statistical calculations
PHP	Main interface and execution management
Text File	Stores network traffic records

📁 Project Structure

File	Description
analyzer.cpp	Core analysis and calculations
main.php	Main program and C++ integration
traffic.txt	Input data containing traffic records
analyzer.exe	Compiled C++ program

⚙️ How It Works

The project follows four main steps:

1. Input: Read traffic records from traffic.txt.
2. Validation: Check IPv4 addresses and packet sizes.
3. Processing: Analyze each packet and calculate statistics.
4. Output: Display packet details and the final analysis report.

📊 Packet Data Format

Each line contains three fields:

Source IP, Destination IP, Packet Size

Example:

192.168.1.10,192.168.1.20,1500
192.168.1.15,192.168.1.30,800

🔍 Main Features

* IPv4 address validation.
* Source and destination IP identification.
* Individual packet analysis.
* Total data calculation.
* Average packet size.
* Maximum packet size.
* Minimum packet size.
* Invalid record detection.

💻 Implementation & Screenshots

1. C++ Analysis Engine

The C++ program handles packet validation, processing, and statistical calculations.

2. PHP Integration

PHP manages the execution of the C++ analyzer and displays the results.

3. Packet Analysis

Displays individual packet information, including source IP, destination IP, and packet size.

4. Final Output

The final report displays the processed traffic data and statistical results.

⚙️ Compilation and Execution

Compile C++ using GCC:

g++ analyzer.cpp -o analyzer.exe

Run the PHP program:

php main.php

Make sure PHP, GCC, and the required project files are available.

📈 Statistical Calculations

Statistic	Description
Total Data	Sum of all packet sizes
Average Size	Total data divided by packet count
Maximum Size	Largest packet
Minimum Size	Smallest packet

🧠 Skills Developed

* C++ Programming
* PHP Programming
* IPv4 Address Validation
* File Handling
* Data Processing
* Network Fundamentals
* PHP and C++ Integration
* Statistical Analysis

🚀 Future Improvements

The following features are planned for future development:

* TCP Protocol Analysis.
* UDP Protocol Analysis.
* Advanced network traffic classification.
* More detailed network statistics.

TCP and UDP support are planned features and are not implemented in the current version.

👨‍💻 Author

Developed as a practical project to explore network traffic analysis using C++ and PHP.
