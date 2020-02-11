#include<stdio.h>
#include<stack>
#include<vector>
using namespace std;

int main() {
    long long n, b;
    stack<long long> s;
    vector<long long> q;
    scanf("%lld%lld", &n ,&b);
    if(b==0){
        printf("Yes\n0\n");
        return 0;
    }
    long long x;
    while(n!=0) {
        x=n%b;
        q.push_back(x);
        s.push(x);
        n/=b;
    }
    bool isPalindrom = true;
    while(!q.empty()) {
       if(q.front()!=q.back())isPalindrom=false;
        q.erase(q.begin());
        if(!q.empty())q.pop_back();
    } 
    if(isPalindrom)printf("Yes\n");
    else printf("No\n");
    printf("%lld", s.top());
    s.pop();
    while(!s.empty()){
        printf(" %lld",s.top());
        s.pop();
    }
    printf("\n");
    return 0;
}
