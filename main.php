<?php

echo "========================================\n";
echo "       NETWORK TRAFFIC ANALYZER\n";
echo "========================================\n\n";

$dataFile = "traffic.txt";
$program = "analyzer.exe";

if (!file_exists($dataFile)) {
    die("Error: traffic.txt not found!\n");
}

if (!file_exists($program)) {
    die("Error: analyzer.exe not found! Compile C++ first.\n");
}

echo "Reading Traffic Data...\n\n";

// Connect PHP with C++ and execute the analyzer
$command = '"' . $program . '" "' . $dataFile . '"';

$output = shell_exec($command);

if ($output === null) {
    die("Error: Could not execute C++ program.\n");
}

echo $output;

echo "\n========================================\n";
echo "          ANALYSIS FINISHED\n";
echo "========================================\n";

?>