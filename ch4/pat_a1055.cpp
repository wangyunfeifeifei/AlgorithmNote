#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct People{
    char name[15];
    int age;
    int money;
    friend bool operator < (People a, People b) {
        if(a.money!=b.money) return a.money>b.money;
        else if(a.age != b.age) return a.age<b.age;
        else return strcmp(a.name, b.name) <0;
    }
}peo[100010];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++) {
        scanf("%s%d%d", peo[i].name, &peo[i].age, &peo[i].money);
    } 
    sort(peo, peo+n);
    // for(int i=0; i<n; i++) {
    //     printf("%s%d%d", peo[i].name, peo[i].age, peo[i].money);
    // }
    int m,amin, amax, x;
    for(int i=0; i<k; i++) {
        x=0;
        scanf("%d%d%d", &m, &amin,&amax); 
        printf("Case #%d:\n", i+1);
        for(int j=0; j<n&&x<m; j++) {
            if(peo[j].age>=amin&&peo[j].age<=amax) {
                printf("%s %d %d\n", peo[j].name, peo[j].age, peo[j].money);
                x++; 
            }
        } 
        if(x==0)printf("None\n");
    }
    return 0;
}