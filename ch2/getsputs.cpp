#include<cstdio>

// gets用来输入一行字符串
// 注意： gets识别\n作为结束，如果scanf一个整数或者浮点数后，如果要用gets，需要先用getchar接收掉\n
// 注意： 如果不是gets或者scanf输入的字符串，需要手动添加'\0'
int main() {
    char str1[20];
    char str2[5][10];
    gets(str1);
    for(int i=0; i<3; i++) {
        gets(str2[i]);
    }
    puts(str1);
    for(int i=0;i < 3; i++) {
        puts(str2[i]);
    }
    return 0;
}
