#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main ()
{
//	string a;
//	getline(cin,a);
//	system ("color 02");
//	Sleep(100);
//	cout<<"\t\t\t\tTT    T   TTTTTT      TTT         T       T   T  TTTT  TTTTT       TTTTT   T   T       T       TT    T   TTTTTT "<<endl;
//	Sleep(100);	
//	cout<<"\t\t\t\tT T   T   T          T   T         T     T    T  T       T           T     T   T      T T      T T   T   T      "<<endl;
//	Sleep(100);
//	cout<<"\t\t\t\tT  T  T   T   TTT   T     T         T   T     T  TTTT    T           T     TTTTT     T   T     T  T  T   T   TTT"<<endl;
//	Sleep(100);
//	cout<<"\t\t\t\tT   T T   T     T    T   T           T T      T  T       T           T     T   T    TTTTTTT    T   T T   T     T"<<endl;
//	Sleep(100);
//	cout<<"\t\t\t\tT    TT   TTTTTTT     TTT             T       T  TTTT    T           T     T   T   T       T   T    TT   TTTTTTT"<<endl;
//	Sleep(100);
//	
	
	

	
	
	
	string line;
	getline(cin,line);
	ifstream merrychristmas("C:\\merrychristmas.txt");
	while(!merrychristmas.eof())
	{
	getline(merrychristmas,line);
	cout<<line<<endl;;
	Sleep(100);
	}

	getch();
		lamp :
	system("color 01");
		Sleep(100);
	system("color 03");
		Sleep(100);
	system("color 04");
		Sleep(100);
	system("color 05");
		Sleep(100);
	system("color 06");
			Sleep(100);
	system("color 07");
			Sleep(100);
	goto lamp;
	
	}	
	
