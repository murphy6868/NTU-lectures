#include "stdio.h"
void a(void) {
    int i;
    printf("%d ", i);
    i = 10;
    printf("%d\n", i);
}
void b(void) {
    int i;
    printf("%d ", i);
    i = 20;
    printf("%d\n", i);
}
int main(){
	printf("Hello, world!\n");
	a();
    b();
    a();
	return 0;
}





