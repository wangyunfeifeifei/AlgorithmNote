#include<stdio.h>

char c[13] = {'0','1','2','3','4','5','6','7','8','9','A', 'B', 'C'};

void outColor(int x) {
    int x2 = x%13;
    x/=13;
    printf("%c%c", c[x], c[x2]);
}

int main() {
    int colors[3];
    scanf("%d%d%d", &colors[0], &colors[1], &colors[2]);
    printf("#");
    for(int i=0; i<3; i++) {
        outColor(colors[i]);
    }
    printf("\n");
    return 0;
}