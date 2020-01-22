#include<stdio.h>
#include<string.h>

struct bign {
    int d[1000];
    int len;
    bign() {
        memset(d, 0, sizeof(d));
        len=0;
    }
};

bign change(char str[]) {
    bign a;
    a.len = strlen(str);
    for(int i=0; i<a.len;i++) {
        a.d[i]=str[a.len-i-1] - '0';
    }
    return a;
}

int compare(bign a, bign b) {
    if(a.len > b.len)return 1; // a大
    else if(a.len < b.len)return -1;
    else{
        for(int i=a.len-1;i>=0;i--) {
            if(a.d[i] > b.d[i]) return 1;
            else if(a.d[i]<b.d[i])return -1;
        }
        return 0; // 两数相等
    }
}

bign add(bign a, bign b) {
    bign c;
    int carry=0;
    for(int i=0;i<a.len||i<b.len; i++) {
        int temp = a.d[i] + b.d[i] + carry;
        c.d[c.len++]=temp%10;
        carry=temp/10;
    }
    if(carry != 0) {
        c.d[c.len++] = carry;
    }
    return c;
}

bign sub(bign a, bign b) { // a-b, 用之前保证a>b
    bign c;
    for(int i=0; i<a.len||i<b.len; i++) {
        if(a.d[i] < b.d[i]) {
            a.d[i+1]--; // 向高位借位
            a.d[i] += 10; // 当前位加十
        }
        c.d[c.len++] = a.d[i] - b.d[i];
    }
    while(c.len-1 >=1 && c.d[c.len-1]==0) {
        c.len--; // 去除高位的0
    }
    return c;
}

bign multi(bign a, int b) {
    bign c;
    int carry = 0; // 进位
    for(int i=0; i<a.len; i++) {
        int temp = a.d[i] * b + carry;
        c.d[c.len++] = temp%10;
        carry=temp/10;
    }
    while(carry != 0) {
        c.d[c.len++] = carry%10;
        carry /= 10;
    }
    return c;
}

bign divide(bign a, int b, int &r) {
    bign c;
    c.len = a.len;
    for(int i=a.len-1; i>=0; i--) {
        r = r*10 + a.d[i]; // 和上一位遗留的余数组合
        if(r<b) c.d[i] = 0;
        else {
            c.d[i] = r / b; // 商
            r = r%b; // 新的余数
        }
    }
    while(c.len-1 >= 1 && c.d[c.len-1] == 0) {
        c.len--; // 去除高位的0
    }
    return c;
}
