#include<stdio.h>
#include<vector>
using namespace std;

int main() {
    vector<int> vi;
    for(int i=1; i<=3; i++) {
        vi.push_back(i);
    }
    vi.pop_back(); // 删除尾部元素
    for(int i=0; i<vi.size(); i++) {
        printf("%d ", vi[i]);
    }
    return 0;
}