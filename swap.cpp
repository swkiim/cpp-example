#include<stdio.h>
void swap(int *x, int *y);

int main(void) {
    int a = 10, b = 20;
    printf("before swap() a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("after swap() a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y){
    int tmp;
    
    tmp = *x;
    *x = *y;
    *y = tmp;
}