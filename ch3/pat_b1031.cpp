#include<stdio.h>
#include<string.h>

char M[11]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int weight[17]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};

bool judge(char id[20]) {
    if(strlen(id)<18)return false;
    int sum=0;
    for(int i=0;i<17; i++) {
        if(id[i]<'0'||id[i]>'9') return false;
        sum+=weight[i]*(id[i]-'0');
    }
    return id[17]==M[sum%11];
}

int main() {
    int N;
    scanf("%d", &N);
    char id_no[20];
    int err_cnt=0;
    for(int i=0;i<N;i++) {
       scanf("%s", id_no); 
       if(!judge(id_no)) {
           printf("%s\n", id_no);
           err_cnt++;
       }
    }
    if(err_cnt==0) printf("All passed\n");
    return 0;
}