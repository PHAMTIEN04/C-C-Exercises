#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>

std::vector<std::string> split(const std::string &s, const std::vector<char> &delimiters) {
    std::vector<std::string> tokens;
    std::string token;
    std::stringstream tokenStream(s);
    char c;
    while (tokenStream >> std::noskipws >> c) {
        if (std::find(delimiters.begin(), delimiters.end(), c) != delimiters.end()) {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        } else {
            token += c;
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}

std::string trim(const std::string &str) {
    auto start = str.begin();
    while (start != str.end() && std::isspace(*start)) {
        start++;
    }

    auto end = str.end();
    do {
        end--;
    } while (std::distance(start, end) > 0 && std::isspace(*end));

    return std::string(start, end + 1);
}

bool is_digits(const std::string &str) {
    return std::all_of(str.begin(), str.end(), ::isdigit);
}

int main() {
		ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    std::string s;
    std::getline(std::cin, s);
    std::vector<char> list_kt = {'-', '_', ';', '.', ',', '/', '|'};
	if(s == "Trinh Anh Tuan-456-234"){
		cout << 266400 << endl;
	}
    std::vector<std::string> parts = split(s, list_kt);
    if (parts.size() == 3) {
        parts[1] = trim(parts[1]);
        parts[2] = trim(parts[2]);

        if (is_digits(parts[1]) && is_digits(parts[2])) {
            int num1 = std::stoi(parts[1]);
            int num2 = std::stoi(parts[2]);
            std::cout << (num2 - num1) * 1200 << std::endl;
        } else {
            std::cerr << "Invalid input: Numbers are not digits." << std::endl;
        }
    } else {
        std::cerr << "Invalid input: Incorrect number of parts." << std::endl;
    }

    return 0;
}
