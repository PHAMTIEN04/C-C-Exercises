#include <iostream>
#include <string>
#include <sstream>

using namespace std;



string cleanString(string input) {

 

    string result = "";


    for (int i = 0; i < input.length(); i++) {

 

        char c = input[i];


        if (isalpha(c) || c == ' ') {

 

            result += c; 

 

        }

 

    }

    stringstream ss(result);

 

    string cleanedString;

 

    string word;

 

    while (ss >> word) {

 

        cleanedString += word + " ";

 

    }

    if (!cleanedString.empty()) {

 

        cleanedString = cleanedString.substr(0, cleanedString.length() - 1);

 

    }



    return cleanedString;

 

}



int main() {

 

    string input;

 

    getline(cin, input);

    string cleanedString = cleanString(input);

    cout << cleanedString << endl; 


    return 0;

 

}
