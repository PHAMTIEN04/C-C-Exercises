#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int count=0;
	int maxCount=0;
	for(int i=0; i<s.length();i++)
	{
		if(isalnum(s[i]))
		{
			count++;
		}
		else{
			if(count > maxCount)
			{
				maxCount=count;
			}
			count=0;
		}
	}
	if(count > maxCount)
	{
		maxCount=count;
	}
	cout<<maxCount<<endl;
	return 0;
}
