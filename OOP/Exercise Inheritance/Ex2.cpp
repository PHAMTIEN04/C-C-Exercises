#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class Person{
	public:
	virtual void Infomation()=0;
};
//Employee
class Employee:public Person{
	private:
		string Ename;
		string Eday,Emonth,Eyear;
		string Ecode;
		int En;
		Employee *E;
	public:
		void IInfomation();
		void Infomation();
};
void Employee::IInfomation(){
	cout << "**Information Employee**\n";
	cout <<"\nInput Information Employee\n";
	cout << "Input Number of employees: "; 
	cin >> En;
	cin.ignore();
	E = new Employee[En];
	for(int i = 0; i < En;i++){
		cout <<"Input Employee ["<<i+1<<"]: "<<endl;
		cout << "Input Code: ";
		cin>> E[i].Ecode;
		cin.ignore();
		cout << "Input Name: ";
		getline(cin,E[i].Ename);
		cout << "Input Date of birth: ";
		getline(cin,E[i].Eday,'/');
		getline(cin,E[i].Emonth,'/');
		cin >> E[i].Eyear;
		cin.ignore();
	}

}
void Employee::Infomation(){
	cout << "\nOutput Information Employee\n";
	for(int i = 0 ; i < En;i++ ){
		
		cout <<"Ouput Employee ["<<i+1<<"]: "<<endl;
		cout <<"Output Code: "<<E[i].Ecode<<endl;
		cout <<"Ouput Name: "<< E[i].Ename<<endl;
		cout <<"Output Date of birth: "<<E[i].Eday<<"/"<<E[i].Emonth<<"/"<<E[i].Eyear<<endl;
		cout <<endl;
	}
}
//Worker
class Worker:public Person{
	private:
		string Wname;
		string Wday,Wmonth,Wyear;
		string Wcode;
		int Wn;
		Worker *W;
	public:
		void IInfomation();
		void Infomation();
};
void Worker::IInfomation(){
	cout << "**Information Worker**\n";
	cout <<"\nInput Information Worker\n";
	cout << "Input Number of Workers: "; 
	cin >> Wn;
	cin.ignore();
	W = new Worker[Wn];
	for(int i = 0; i < Wn;i++){
		cout <<"Input Worker ["<<i+1<<"]: "<<endl;
		cout << "Input Code: ";
		cin>> W[i].Wcode;
		cin.ignore();
		cout << "Input Name: ";
		getline(cin,W[i].Wname);
		cout << "Input Date of birth: ";
		getline(cin,W[i].Wday,'/');
		getline(cin,W[i].Wmonth,'/');
		cin >> W[i].Wyear;
		cin.ignore();
	}

}
void Worker::Infomation(){
	cout << "\nOutput Information Worker\n";
	for(int i = 0 ; i < Wn;i++ ){
		
		cout <<"Ouput Worker ["<<i+1<<"]: "<<endl;
		cout <<"Output Code: "<<W[i].Wcode<<endl;
		cout <<"Ouput Name: "<< W[i].Wname<<endl;
		cout <<"Output Date of birth: "<<W[i].Wday<<"/"<<W[i].Wmonth<<"/"<<W[i].Wyear<<endl;
		cout <<endl;
	}
}
//Manager
class Manager:public Person{
	private:
		string Mname;
		string Mday,Mmonth,Myear;
		string Mcode;
		int Mn;
		Manager *M;
	public:
		void IInfomation();
		void Infomation();
};
void Manager::IInfomation(){
	cout << "**Information Manager**\n";
	cout <<"\nInput Information Manager\n";
	cout << "Input Number of Manager: "; 
	cin >> Mn;
	cin.ignore();
	M = new Manager[Mn];
	for(int i = 0; i < Mn;i++){
		cout <<"Input Manager ["<<i+1<<"]: "<<endl;
		cout << "Input Code: ";
		cin>> M[i].Mcode;
		cin.ignore();
		cout << "Input Name: ";
		getline(cin,M[i].Mname);
		cout << "Input Date of birth: ";
		getline(cin,M[i].Mday,'/');
		getline(cin,M[i].Mmonth,'/');
		cin >> M[i].Myear;
		cin.ignore();
	}

}
void Manager::Infomation(){
	cout << "\nOutput Information Manager\n";
	for(int i = 0 ; i < Mn;i++ ){
		
		cout <<"Ouput Manager ["<<i+1<<"]: "<<endl;
		cout <<"Output Code: "<<M[i].Mcode<<endl;
		cout <<"Ouput Name: "<< M[i].Mname<<endl;
		cout <<"Output Date of birth: "<<M[i].Mday<<"/"<<M[i].Mmonth<<"/"<<M[i].Myear<<endl;
		cout <<endl;
	}
}
//Director
class Director:public Person{
	private:
		string Dname;
		string Dday,Dmonth,Dyear;
		string Dcode;
		int Dn;
		Director *D;
	public:
		void IInfomation();
		void Infomation();
};
void Director::IInfomation(){
	cout << "**Information Director**\n";
	cout <<"\nInput Information Director\n";
	cout << "Input Number of Director: "; 
	cin >> Dn;
	cin.ignore();
	D = new Director[Dn];
	for(int i = 0; i < Dn;i++){
		cout <<"Input Director ["<<i+1<<"]: "<<endl;
		cout << "Input Code: ";
		cin>> D[i].Dcode;
		cin.ignore();
		cout << "Input Name: ";
		getline(cin,D[i].Dname);
		cout << "Input Date of birth: ";
		getline(cin,D[i].Dday,'/');
		getline(cin,D[i].Dmonth,'/');
		cin >> D[i].Dyear;
		cin.ignore();
	}

}
void Director::Infomation(){
	cout << "\nOutput Information Director\n";
	for(int i = 0 ; i < Dn;i++ ){
		
		cout <<"Ouput Director ["<<i+1<<"]: "<<endl;
		cout <<"Output Code: "<<D[i].Dcode<<endl;
		cout <<"Ouput Name: "<< D[i].Dname<<endl;
		cout <<"Output Date of birth: "<<D[i].Dday<<"/"<<D[i].Dmonth<<"/"<<D[i].Dyear<<endl;
		cout <<endl;
	}
}

int main(){
	Employee e1;
	e1.IInfomation();
	e1.Infomation();
	getch();
	system("cls");
	Worker w1;
	w1.IInfomation();
	w1.Infomation();
	getch();
	system("cls");
	Manager m1;
	m1.IInfomation();
	m1.Infomation();
	getch();
	system("cls");
	Director d1;
	d1.IInfomation();
	d1.Infomation();


	return 0;
}

