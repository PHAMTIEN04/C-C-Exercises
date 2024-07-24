/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
        string s;getline(cin,s);
        if(s == "#") break;
        long long checksum = 0;
        for(int i = 1 ; i <= s.length();i++){
            switch(s[i-1]){
                
                case 'A':
                    checksum+=(i*1);
                    break;
                case 'B':
                    checksum+=i*2;
                    break;
                case 'C':
                    checksum+=(i*3);
                    break;
                case 'D':
                    checksum+=i*4;
                    break;
                case 'E':
                    checksum+=i*5;
                    break;
                case 'F':
                    checksum+=i*6;
                    break;
                case 'G':
                    checksum+=i*7;
                    break;
                case 'H':
                    checksum+=i*8;
                    break;
                case 'I':
                    checksum+=i*9;
                    break;
                case 'J':
                    checksum+=i*10;
                    break;
                case 'K':
                    checksum+=i*11;
                    break;
                case 'L':
                    checksum+=i*12;
                    break;
                case 'M':
                    checksum+=(i*13);
                    break;
                case 'N':
                    checksum+=i*14;
                    break;
                case 'O':
                    checksum+=i*15;
                    break;
                case 'P':
                    checksum+=i*16;
                    break;
                case 'Q':
                    checksum+=i*17;
                    break;
                case 'R':
                    checksum+=i*18;
                    break;
                case 'S':
                    checksum+=i*19;
                    break;
                case 'T':
                    checksum+=i*20;
                    break;
                case 'U':
                    checksum+=i*21;
                    break;
                case 'V':
                    checksum+=i*22;
                    break;
                case 'W':
                    checksum+=i*23;
                    break;
                case 'X':
                    checksum+=i*24;
                    break;
                case 'Y':
                    checksum+=i*25;
                    break;
                case 'Z':
                    checksum+=i*26;
                    break;
                    
            }
        }
        cout << checksum<<endl;
        
    }
    return 0;
}
