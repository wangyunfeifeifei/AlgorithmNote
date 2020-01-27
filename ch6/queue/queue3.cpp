#include<stdio.h>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    if(q.empty()) {
        printf("Empty\n");
    } else {
        printf("Not Empty");
    }
    q.push(1);
    if(q.empty()) {
        printf("Empty\n");
    } else {
        printf("Not Empty\n");
    }
    return 0;
}