#include<stdio.h>
#include<string.h>

char day[7][5] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"}; 

int main() {
    char s1[100], s2[100], s3[100], s4[100];
    scanf("%s%s%s%s", s1, s2, s3, s4);
    int i=0;
    for(; i<strlen(s1)&&i<strlen(s2); i++) {
        if(s1[i]==s2[i] && s1[i]>='A'&&s1[i]<='G') {
            printf("%s ", day[s1[i]-'A']);
            break;
        }
    }
    for(i=i+1; i<strlen(s1)&&i<strlen(s2);i++) {
        if(s1[i]==s2[i]) {
                if(s1[i]>='0'&&s1[i]<='9') {
                    printf("%02d:", s1[i]-'0');
                    break;
                }else if(s1[i]>='A'&&s1[i]<='N') {
                    printf("%02d:", s1[i]-'A'+10);
                    break;
                }
        }
    }
    for(i=0; i<strlen(s3)&&i<strlen(s4);i++) {
        if(s3[i]==s4[i] && (s3[i]<='z'&&s3[i]>='a' || s3[i]<='Z'&&s3[i]>='A')){
            printf("%02d\n", i);
            break;
        }
    }
    return 0;
}