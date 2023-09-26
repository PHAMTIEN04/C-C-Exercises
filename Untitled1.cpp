#include <iostream>
#include <fstream>
#include <string>

int main() {
    const std::string filename = "a.txt";
    const std::string replacement = "rooster";
    const std::string target = "chicken";

    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Unable to open input file: " << filename << std::endl;
        return 1;
    }

    std::string line;
    std::string fileContent;

    while (std::getline(inFile, line)) {
        if (line == target) {
            fileContent += replacement + '\n';
        } else {
            fileContent += line + '\n';
        }
    }

    inFile.close();

    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Unable to open output file: " << filename << std::endl;
        return 1;
    }

    outFile << fileContent;
    outFile.close();

    std::cout << "Replacement completed." << std::endl;

    return 0;
}

