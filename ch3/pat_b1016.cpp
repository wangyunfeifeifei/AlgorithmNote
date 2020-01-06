#include<cstdio>
 
int main(){
    int a,da,b,db;
    scanf("%d%d%d%d", &a, &da, &b, &db);
    int pa=0,pb=0;
    do{
        if(a%10==da)pa = pa*10+da;
        a/=10;
    }while(a!=0);
    do{
        if(b%10==db)pb = pb*10+db;
        b/=10;
    }while(b!=0);
    printf("%d\n", pa+pb);
    return 0;
}