#include<stdio.h>
#include<string.h>

bool modify(char pass[]) {
    bool ret = false;
    int len = strlen(pass);
    for(int i=0; i<len; i++) {
        switch(pass[i]){
            case '1':
                pass[i]='@';
                ret=true;
                break;
            case '0':
                pass[i]='%';
                ret=true;
                break;
            case 'l':
                pass[i]='L';
                ret=true;
                break;
            case 'O':
                pass[i]='o';
                ret=true;
                break;
            default:
                break;
        }
    } 
    return ret;
}

struct User {
    char name[15];
    char pass[15];
    bool isModified;
}users[1010];

int main() {
    int n;
    scanf("%d", &n);
    int cnt_m = 0;
    for(int i=0; i<n; i++) {
        scanf("%s%s", users[i].name, users[i].pass);
        if(modify(users[i].pass)) {
            cnt_m++;
            users[i].isModified = true;
        }
    }
    if(cnt_m == 0) {
        if(n>1)printf("There are %d accounts and no account is modified\n", n);
        else printf("There is %d account and no account is modified\n", n);
        return 0;
    }
    printf("%d\n", cnt_m); 
    for(int i=0; i<n; i++) {
        if(users[i].isModified) {
            printf("%s %s\n", users[i].name, users[i].pass);
        }
    }
    return 0;
}