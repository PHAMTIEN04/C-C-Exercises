#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    while (getline(cin, name)) {
        while (name.length() > 0 && name[0] == ' ') {
            name.erase(0, 1);
        }
        while (name.length() > 0 && name[name.length() - 1] == ' ') {
            name.erase(name.length() - 1, 1);
        }

        bool check = true;
        for (int i = 0; i < name.length(); i++) {
            if (name[i] == ' ') {
                check = true;
            } else {
                if (check) {
                    name[i] = toupper(name[i]);
                    check = false;
                } else {
                    name[i] = tolower(name[i]);
                }
            }
        }

        cout << name << endl;
    }

    return 0;
}

