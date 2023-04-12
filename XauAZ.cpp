#include <bits/stdc++.h>

using namespace std;

 

int main (){

	string s ; 

	getline(cin,s);

	int locate_A = 0;

	int locate_Z = 0;

	int check_length = 0;

	vector<int> vt;

	for (int i = 0 ; i < s.length()-1 ; i++){

		for(int j = i+1; j < s.length();j++){

			if(s[i] == 'A' && s[j] == 'Z'){

				locate_A = i;

				locate_Z = j+1;

				check_length = locate_Z - locate_A;

				vt.push_back(check_length);

		}

	}

}

	sort(vt.begin(), vt.end(),std::greater<int>() );

 	int max = vt[0];

	cout << max;

 

return 0;

}
