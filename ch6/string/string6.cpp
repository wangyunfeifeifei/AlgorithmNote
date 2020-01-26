#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main() {
    string str = "abcxyz", str2 = "opq";
    printf("%d %d\n", str.length(), str.size());
    str.insert(3,str2);
    cout << str << endl;
    str = "abcxyz";
    str.insert(str.begin() + 3, str2.begin(), str2.end());
    cout<<str<<endl;
    return 0;
}
