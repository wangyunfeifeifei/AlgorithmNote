#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

int main() {
    string str = "abcdefg";
    str.erase(3, 2); // 删除从3号位开始的两个字符, 即de
    cout << str<<endl;
    return 0;
}