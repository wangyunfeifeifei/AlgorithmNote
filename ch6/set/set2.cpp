#include<set>
#include<stdio.h>
using namespace std;

int main() {
    set<int> st;
    for(int i=1; i<=3; i++) {
        st.insert(i);
    }
    set<int>::iterator it = st.find(2);
    printf("%d\n", *it);
    return 0;
}
