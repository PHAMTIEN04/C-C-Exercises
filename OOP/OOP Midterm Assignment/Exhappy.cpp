#include <iostream>
#include <string>
#include <iomanip>
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
    // Define a struct to store player information
    struct Playerst {
        int agep;
        string namep;
        int clonum;
        string location;
 		double Salary;
    };

    Playerst* a; // Array to store player objects
    int i; // Counter variable

public:
    Player() {
        i = 0;
    }

    // Allocate memory for player objects
    void capphatpl(int n) {
        size(n);
        a = new Playerst[n];
    }

    void input(int na); // Function to input player information
    void print(); // Function to print player information
};

void Player::input(int na) {
    cout << "**Input Information Player**\n";

    for (int j = i; j < na; j++) {
        cout << "Player [" << j + 1 << "]:\n";
        cout << "Name: ";
        getline(cin, a[j].namep);
        cout << "Age: ";
        cin >> a[j].agep;
        cin.ignore();
        cout << "Clother Number: ";
        cin >> a[j].clonum;
        cin.ignore();
        cout << "Location: ";
        getline(cin, a[j].location);
        cout << "Salary: ";
        cin >> a[j].Salary;
        cin.ignore();

        cout << endl;
    }
    i++;
}

void Player::print() {
	double sum =0;
    cout << "**Output Information Player**\n";
    for (int j = 0; j < i; j++) {
        cout << "Player [" << j + 1 << "]:\n";
        cout << "Name: " << a[j].namep << endl;
        cout << "Age: " << a[j].agep << endl;
        cout << "Clother Number: " << a[j].clonum << endl;
        cout << "Location: " << a[j].location << endl;
        if(a[j].agep > 2005){
        	sum +=a[j].Salary+(a[j].Salary*0.03);
        	cout << fixed << setprecision(0);
        	cout << "Salary: "<< a[j].Salary+(a[j].Salary*0.03)<<endl;
		}
		else{
			sum+=a[j].Salary;
			cout << "Salary: "<< a[j].Salary<<endl;
		}
        
        cout << endl;
    }
    cout << "Sum Salary: "<<sum<<endl;
}

class Student : public People {
private:
    // Define a struct to store student information
    struct Studentst {
        int ages;
        string names;
        string msv;
        string mn;
        double hp;
    };

    Studentst* a; // Array to store student objects
    int cnt; // Counter variable

public:
    Student() {
        cnt = 0;
    }

    // Allocate memory for student objects
    void capphatst(int n) {
        size(n);
        a = new Studentst[n];
    }

    void input(int nb); // Function to input student information
    void print(); // Function to print student information
};

void Student::input(int nb) {
    cout << "**Input Information Student**\n";

    for (int j = cnt; j < nb; j++) {
        cout << "Student [" << j + 1 << "]:\n";
        cout << "Student code: ";
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
	double sum=0;
    cout << "**Output Information Student**\n";
    for (int j = 0; j < cnt; j++) {
        cout << "Student [" << j + 1 << "]:\n";
        cout << "Student code: " << a[j].msv << endl;
        cout << "Name: " << a[j].names << endl;
        cout << "Age: " << a[j].ages << endl;
        cout << "Majors: " << a[j].mn << endl;
        if(a[j].ages > 2005){
        	sum += a[j].hp - (a[j].hp*0.05);
        	cout << fixed << setprecision(0);
        	cout << "Tuition: " << a[j].hp - (a[j].hp*0.05)<< endl;
		}
		else{
			sum+= a[j].hp;
			cout << "Tuition: "<<a[j].hp << endl;
		}
        	
        cout << endl;
    }
    
    cout << "Sum Tuition: "<< sum<<endl;
    
}

int main() {
    int n;
    cout << "Input Size People: ";
    cin >> n;
    cin.ignore();

    int choose;
    Player pl1;
    pl1.capphatpl(n);
    Student s1;
    s1.capphatst(n);
    int a = 1;
    int b = 1;

    while (n != 0) {
        cout << "Choose (1) to import players or (other than 1) to import students: ";
        cin >> choose;
        cin.ignore();

        if (choose == 1) {
            pl1.input(a);
            a++;
            n--;
        } else {
            s1.input(b);
            b++;
            n--;
        }
    }

    s1.print();
    pl1.print();

    return 0;
}

