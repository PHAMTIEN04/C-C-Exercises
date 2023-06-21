#include <bits/stdc++.h>

using namespace std;

class SinhVien {
private:
    int msv;        // Student ID
    string tsv;     // Student Name
    double d1, d2, d3;  // Scores of subjects
    string qq;      // Hometown
    string gt;      // Gender

public:
    SinhVien();     // Constructor
    ~SinhVien();    // Destructor
    void nhap();    // Input function
    void xuat();    // Output function
    string getgt(); // Get gender
    int getid();    // Get ID
    double DTB();   // Calculate average score
    string getqq(); // Get hometown
};

string SinhVien::getqq() {
    return qq;
}

string SinhVien::getgt() {
    return this->gt;
}

int SinhVien::getid() {
    int id = (msv % 10) + 1;
    return id;
}

double SinhVien::DTB() {
    return (d1 + d2 + d3) / 3.0f;
}

SinhVien::SinhVien() {
    cout << "This is the Constructor\n";
}

SinhVien::~SinhVien() {
    cout << "This is the Destructor\n";
}

void SinhVien::nhap() {
    cout << "**Input**" << endl;
    cout << "Student ID: ";
    cin >> msv;
    cin.ignore();
    cout << "Student Name: ";
    getline(cin, tsv);
    cout << "Subject 1 score: ";
    cin >> d1;
    cin.ignore();
    cout << "Subject 2 score: ";
    cin >> d2;
    cin.ignore();
    cout << "Subject 3 score: ";
    cin >> d3;
    cin.ignore();
    cout << "Hometown: ";
    getline(cin, qq);
    cout << "Gender: ";
    getline(cin, gt);
}

void SinhVien::xuat() {
    cout << "**Output**" << endl;
    cout << "Student ID: " << msv << endl;
    cout << "Student Name: " << tsv << endl;
    cout << "Subject 1 score: " << d1 << endl;
    cout << "Subject 2 score: " << d2 << endl;
    cout << "Subject 3 score: " << d3 << endl;
    cout << "Average Score: " << DTB() << endl;
    cout << "Hometown: " << qq << endl;
    cout << "Gender: " << gt << endl;
}

class Lop {
private:
    int sl;         // Number of students
    SinhVien* sv;   // Array of students

public:
    Lop();          // Constructor
    ~Lop();         // Destructor
    void nhap();    // Input function
    void xuat();    // Output function
    void TimSvNuIdMax();  // Find female student with the highest ID
    void TimQueQuanId();  // Find hometown with the most students
};

void Lop::TimQueQuanId() {
    int count[10] = { 0 };
    string quequan[10];

    for (int i = 0; i < sl; i++) {
        int id = sv[i].getid();
        count[id - 1]++;
        quequan[id - 1] = sv[i].getqq();
    }

    int maxCount = 0;
    int maxID = -1;

    for (int i = 0; i < 10; i++) {
        if (maxCount < count[i]) {
            maxCount = count[i];
            maxID = i + 1;
        }
    }

    if (maxID != -1) {
        cout << "Hometown with the most students (ID = " << maxID << "): " << quequan[maxID - 1] << endl;
    } else {
        cout << "Not found" << endl;
    }
}

void Lop::TimSvNuIdMax() {
    int idmax = -1;
    int cnt = 0;

    for (int i = 0; i < sl; i++) {
        if (sv[i].getgt() == "Female" && idmax < sv[i].getid()) {
            idmax = sv[i].getid();
            cnt = i;
        }
    }

    if (cnt != 0) {
        cout << "**Female Student with the highest ID**\n";
        sv[cnt].xuat();
    } else {
        cout << "Not found" << endl;
    }
}

Lop::Lop() {
    cout << "This is the Constructor\n";
}

Lop::~Lop() {
    cout << "This is the Destructor\n";
}

void Lop::nhap() {
    cout << "Enter the number of students: ";
    cin >> sl;
    cin.ignore();
    sv = new SinhVien[sl];

    for (int i = 0; i < sl; i++) {
        cout << "Input Student [" << i + 1 << "]" << endl;
        sv[i].nhap();
        cout << endl;
    }
}

void Lop::xuat() {
    for (int i = 0; i < sl; i++) {
        cout << "Output Student [" << i + 1 << "]" << endl;
        sv[i].xuat();
        cout << endl;
    }
}

int main() {
    Lop l1;
    l1.nhap();
    cout << "-------------------------------\n\n";
    l1.xuat();
    cout << "-------------------------------\n\n";
    l1.TimSvNuIdMax();
    cout << "-------------------------------\n\n";
    l1.TimQueQuanId();

    return 0;
}

