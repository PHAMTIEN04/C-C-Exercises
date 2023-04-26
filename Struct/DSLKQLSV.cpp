#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>


using namespace std;

typedef long long ll;

struct sinhvien
{
    string ho;
    string ten;
    double diem;
};
bool cmp(sinhvien a, sinhvien b)
{
    return a.diem > b.diem;
}
int main()
{
    string s;
    vector<sinhvien> ds;
    while (getline(cin, s))
    {
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while (getline(ss, tmp, ','))
        {
            v.push_back(tmp);
        }
        sinhvien cntt;
        cntt.ho = v[0];
        cntt.ten = v[1];
        cntt.diem = stod(v[2]);
        ds.push_back(cntt);
    }
    cout << "<?xml version=1 encoding=UTF-8?>" << endl;
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < ds.size(); i++)
    {
        if (ds[i].diem >= 5)
        {
            cout << "<Student>" << endl;
            cout << " "
                 << "<LastName>" << ds[i].ho << "</LastName>" << endl;
            cout << " "
                 << "<FirstName>" << ds[i].ten << "</FirstName>" << endl;
            cout << " "
                 << "<Mark>" << fixed << setprecision(2) << ds[i].diem << "</Mark>" << endl;
            cout << "</Student>" << endl;
        }
    }
}
