#include <iostream>
#include <string>
using namespace std;

class People {
protected:
    int n;
    string hoten;
    int age;

public:
    void size(int n) {
        this->n = n;
    }
};

class Player : public People {
private:
    struct PlayerInfo {
        int agep;
        string namep;
        int clonum;
        string location;
    };
    PlayerInfo* a;
    int i;

public:
    Player() {
        i = 0;
    }
    void input(int n);
    void print();
};

void Player::input(int n) {
    size(n);
    a = new PlayerInfo[n];
    
    cout << "**Input Information Player**\n";

    for (int j = i; j < n; j++) {
        cout << "Player [" << j + 1 << "]:\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, a[j].namep);
        cout << "Age: ";
        cin >> a[j].agep;
        cin.ignore();
        cout << "Clother Number: ";
        cin >> a[j].clonum;
        cin.ignore();
        cout << "Location: ";
        getline(cin, a[j].location);
        
        cout << endl;
    }
    i++;
}

void Player::print() {
    cout << "**Output Information Player**\n";
    for (int j = 0; j < n; j++) {
        cout << "Player [" << j + 1 << "]:\n";
        cout << "Name: " << a[j].namep << endl;
        cout << "Age: " << a[j].agep << endl;
        cout << "Clother Number: " << a[j].clonum << endl;
        cout << "Location: " << a[j].location << endl;
        cout << endl;
    }
}

class Student : public People {
private:
    struct StudentInfo {
        int ages;
        string names;
        string msv;
        string mn;
        int hp;
    };
    StudentInfo* a;
    int cnt;

public:
    Student() {
        cnt = 0;
    }
    void input(int n);
    void print();
};

void Student::input(int n) {
    size(n);
    a = new StudentInfo[n];
    cout << "**Input Information Student**\n";
   
    for (int j =cnt; j < n; j++) {
        cout << "Student [" << j + 1 << "]:\n";
        cout << "Student code: ";
        cin.ignore();
        getline(cin, a[j].msv);
        cout << "Name: ";
        getline(cin, a[j].names);
        cout << "Age: ";
        cin >> a[j].ages;
        cin.ignore();
        cout << "Majors: ";
        getline(cin, a[j].mn);
        cout << "Tuition: ";
        cin >> a[j].hp;
        cin.ignore();
       
        cout << endl;
    }
    cnt++;
}

void Student::print() {
    cout << "**Output Information Student**\n";
    for (int j = 0; j < n; j++) {
        cout << "Student [" << j + 1 << "]:\n";
        cout << "Student code: " << a[j].msv << endl;
        cout << "Name: " << a[j].names << endl;
        cout << "Age: " << a[j].ages << endl;
        cout << "Majors: " << a[j].mn << endl;
        cout << "Tuition: " << a[j].hp << endl;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Input Size People: ";
    cin >> n;
    cin.ignore();
    
    int choose;
    Player pl1;
    Student s1;
    int a = 1;
    int b = 1;
    
    while (n != 0) {
        cout << "Choose (1) to import players or (other 1) to import students: ";
        cin >> choose;
        cin.ignore();
        
        if (choose == 1) {
            pl1.input(a);
            a++;
            n--;
        }
        else  {
            s1.input(b);
            b++;
            n--;
        }
 
    }
    
    s1.print();
    pl1.print();
    
    return 0;
}

