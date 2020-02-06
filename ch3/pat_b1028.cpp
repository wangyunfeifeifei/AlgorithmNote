#include<string>
#include<iostream>
using namespace std;

struct Person {
    string name;
    string birth;
}p, yong, old, l, r; // l和r分别为左右边界 1814/09/06-2014/09/06;

int main() {
    int n;
    int valid = 0; // 有效日期个数
    cin>>n;
    l.birth = "1814/09/06";
    r.birth = "2014/09/06";
    yong = l;
    old = r;
    for(int i=0; i<n; i++) {
        cin>>p.name>>p.birth;
        if(p.birth>=l.birth&&p.birth<=r.birth){
            valid++;
            if(p.birth<=old.birth)old=p;
            if(p.birth>=yong.birth)yong=p;
        }
    }    
    if(valid)
        printf("%d %s %s\n", valid, old.name.c_str(), yong.name.c_str());
    else
        printf("0\n");
    return 0;
}