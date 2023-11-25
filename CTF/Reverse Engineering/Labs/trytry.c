#include <stdio.h>

int foo(int a, int b) {
    puts("this is foo");
    int c = a + b;
    return c;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    int out = foo(x, y);
    if (out == 0xdeadbeef) {
        puts("this is 0xdeadbeef");
    }
    return 0;
}