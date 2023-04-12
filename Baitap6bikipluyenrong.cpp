#include <bits/stdc++.h>
#include <string.h>

void HOAN_VI(char &x,char &y)//Ham hoan vi
{
	char temp = x;
	x = y;
	y = temp;
}



void STRREV (char s[] )//Ham dao nguoc chuoi
{	
	int dodai = strlen(s);
	for(int i = 0 ; i < (dodai/2) ;i++)
	{
		HOAN_VI(s[i],s[dodai-i-1]);
	}
	
	
	
	
}




using namespace std;
int main(){
	char s[100];
	cin>>s;
	STRREV(s);
	cout<< s;



	return 0;
}

