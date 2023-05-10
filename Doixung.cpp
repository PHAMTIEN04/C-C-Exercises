#include <iostream>
#include <string>
#include <algorithm>

std::string HoaThanhThuong(const std::string& s)
{
    std::string result = s;
    for (char& c : result)
    {
        c = std::tolower(c);
    }
    return result;
}

void xoaPhanTu(std::string& s, int vtXoa)
{
    s.erase(vtXoa, 1);
}

void xKhoangTrang(std::string& s)
{
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
}

bool DoiXung(const std::string& s)
{
    int l = 0;
    int r = s.length() - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
            return false;

        l++;
        r--;
    }

    return true;
}

int main()
{
    std::string s;
    while (std::getline(std::cin, s))
    {
        std::string bienS = HoaThanhThuong(s);
        xKhoangTrang(bienS);
        bool checkDoiXung = DoiXung(bienS);

        if (checkDoiXung)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}

