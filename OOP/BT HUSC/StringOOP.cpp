#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class String{
	char *s;
	public:
		String(char* ss){
			s = new char[strlen(ss)];
			strcpy(s,ss);
			
		}
		void hienthi(){
			cout << s;
		}
		~String(){
			delete []s;
		}
			
	
};
int main(){
	String s1("aaaa");
	s1.hienthi();






	return 0;
}

