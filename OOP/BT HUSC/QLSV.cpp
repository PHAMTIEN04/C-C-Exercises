#include <bits/stdc++.h>   // Include necessary header files
#include <conio.h>
using namespace std;

class Sinhvien{
	private:
		string hoten;         // Student's name
		int namsinh;         // Birth year
		float t, nv, av, vl, hh, th, sh, mt, cn;  // Scores in various subjects

	public:
		// Constructor with default parameter values
		Sinhvien(string hoten = "", int namsinh = 0, float t = 0, float nv = 0, float vl = 0, float av = 0, float hh = 0, float th = 0, float sh = 0, float mt = 0, float cn = 0){
			this->hoten = hoten;
			this->namsinh = namsinh;
			this->t = t;
			this->nv = nv;
			this->av = av;
			this->vl = vl;
			this->hh = hh;
			this->th = th;
			this->sh = sh;
			this->mt = mt;
			this->cn = cn;
		}

		// Method to input student information
		void nhap(){
			cout << "Ho ten: ";
			getline(cin, this->hoten);   // Read student's name
			cout << "Nam sinh: ";
			cin >> this->namsinh;   // Read birth year
			cin.ignore();   // Clear the input buffer
			cout << "**Diem**\n";
			cout << "Toan: ";
			cin >> this->t;   // Read scores in various subjects
			cin.ignore();
			cout << "Ngu van: ";
			cin >> this->nv;
			cin.ignore();
			cout << "Anh van: ";
			cin >> this->av;
			cin.ignore();
			cout << "Vat ly: ";
			cin >> this->vl;
			cin.ignore();
			cout << "Hoa hoc: ";
			cin >> this->hh;
			cin.ignore();
			cout << "Tin hoc: ";
			cin >> this->th;
			cin.ignore();
			cout << "Sinh hoc: ";
			cin >> this->sh;
			cin.ignore();
			cout << "Mi thuat: ";
			cin >> this->mt;
			cin.ignore();
			cout << "Cong nghe: ";
			cin >> this->cn;
			cin.ignore();
		}

		// Method to display student information
		void hienthi(){
			cout << "Ho ten: " << this->hoten << endl;
			cout << "Nam sinh: " << this->namsinh << endl;
			cout << "**Diem**\n";
			cout << "Toan: " << this->t << endl;
			cout << "Ngu van: " << this->nv << endl;
			cout << "Anh van: " << this->av << endl;
			cout << "Vat ly: " << this->vl << endl;
			cout << "Hoa hoc: " << this->hh << endl;
			cout << "Tin hoc: " << this->th << endl;
			cout << "Sinh hoc: " << this->sh << endl;
			cout << "Mi thuat: " << this->mt << endl;
			cout << "Cong nghe: " << this->cn << endl;
		}

		// Getter method for student's name
		string gethoten(){
			return this->hoten;
		}

		// Method to calculate the average score
		float diemtb(){
			return (t + nv + av + vl + hh + th + sh + mt + cn) / 9;
		}

		// Method to check if the student's scores are all above 5
		bool kiemtraduoi5(){
			if (t < 5 || nv < 5 || av < 5 || vl < 5 || hh < 5 || th < 5 || sh < 5 || mt < 5 || cn < 5){
				return false;
			}
			return true;
		}
};

class QLSV{
	private:
		Sinhvien *sv;   // Array of student objects
		int n;          // Number of students

	public:
		// Constructor to initialize the number of students
		QLSV(int n = 0){
			this->n = n;
		}

		// Method to input student information for all students
		void nhap(){
			system("cls");  // Clear the console
			sv = new Sinhvien[n];  // Create an array of student objects
			for(int i = 0; i < n; i++){
				cout << "Input Information [" << i + 1 << "]" << endl;
				sv[i].nhap();  // Input information for each student
			}
			getch();  // Wait for user input
		}

		// Method to display information for all students
		void xuat(){
			system("cls");  // Clear the console
			for(int i = 0; i < n; i++){
				sv[i].hienthi();  // Display information for each student
			}
			getch();  // Wait for user input
		}

		// Method to display students who are eligible to write a thesis
		void khoaluan(){
			system("cls");  // Clear the console
			bool check = false;
			cout << "Sinh Vien Lam Khoa Luan\n";
			for(int i = 0; i < n; i++){
				if(sv[i].diemtb() >= 7 && sv[i].kiemtraduoi5() == true){
					sv[i].hienthi();
					check = true;
				}
			}
			if (check == false){
				cout << "Khong co ai!!!" << endl;
			}
			getch();  // Wait for user input
		}

		// Method to display students who are eligible to graduate
		void totnghiep(){
			system("cls");  // Clear the console
			bool check = false;
			cout << "Sinh Vien Thi Tot Nghiep\n";
			for(int i = 0; i < n; i++){
				if(sv[i].diemtb() < 7 && sv[i].kiemtraduoi5() == true){
					sv[i].hienthi();
					check = true;
				}
			}
			if (check == false){
				cout << "Khong co ai!!!" << endl;
			}
			getch();  // Wait for user input
		}

		// Method to display students who need to retake exams
		void thilai(){
			system("cls");  // Clear the console
			cout << "Sinh Vien Thi Lai\n";
			for(int i = 0; i < n; i++){
				if(sv[i].kiemtraduoi5() == false){
					cout << sv[i].gethoten() << endl;
				}
			}
			getch();  // Wait for user input
		}
};

int main(){
	QLSV ql(2);  // Create an instance of the QLSV class with 2 students
	ql.nhap();   // Input student information
	ql.xuat();   // Display student information
	ql.khoaluan();  // Display students who are eligible to write a thesis
	ql.totnghiep();  // Display students who are eligible to graduate
	ql.thilai();  // Display students who need to retake exams

	return 0;  // Return 0 to indicate successful program execution
}

