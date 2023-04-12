#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
    char s[100];
    gets(s);

    int decimal = stoi(s, nullptr, 2);

    printf("%d",decimal);
    return 0;
}
