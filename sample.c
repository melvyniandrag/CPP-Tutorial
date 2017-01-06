#include <stdio.h>

int main(){
    char arr[5];
    arr[0] = 126;
    arr[1] = 1;
    printf("%c", arr[0]);

    int a =10;
    //&a[1] = 11; // Doesnt work
    int *c = &a;
    c + 1 = &a;
    printf("%d", c+1);
    return 0;
}
