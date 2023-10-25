#include <iostream>
using namespace std;
class Time{
	int h,m,s;
	public:
		Time();
		Time(int gio,int phut,int giay);
		void setH(int gio);
		int getH();
		void setM(int phut);
		int getM();
		void setS(int giay);
		int getS();				
		void normalize(); 
		void advance(int gio,int phut,int giay);
		void reset(int gio,int phut,int giay);
		void print();
};
Time::Time(){
	h=m=s=0;
}
Time::Time(int gio,int phut,int giay){
	h=gio; m=phut; s=giay;
}
void Time::print(){
	cout<<h<<":"<<m<<":"<<s<<endl;
}
void Time::setH(int gio){
	h=gio%24;
}
int Time::getH(){
	return h;
}
void Time::setM(int phut){
	m=phut%60;
}
int Time::getM(){
	return m;
}
void Time::setS(int giay){
	m=giay%60;
}
int Time::getS(){
	return s;
}
void Time::advance(int gio,int phut,int giay){
	h=h+gio; m=m+phut; s=s+giay;
}
void Time::reset(int gio,int phut,int giay){
	h=gio; m=phut; s=giay;
}
int main(){
	Time d;
	d.setH(4);
	d.advance(1,62,30);
	d.print();
	Time d1(3,5,46);
	d1.setH(49);
	d1.reset(0,0,0);
	d1.print();	
}
