#include <stdio.h>

void swap(int *ptr1, int *ptr2){
    if (ptr1 != NULL && ptr2 != NULL) {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}

int main() {
    int num1 = 1, num2 = 2;
    int *ptr1 = &num1, *ptr2 = &num2;

    printf("Value of num: %d\nAddress of num: %p\n", num1, &num1);
    printf("Value of num: %d\nAddress of num: %p\n", num2, &num2);

    swap(ptr1, ptr2);

    printf("Value of num: %d\nAddress of num: %p\n", num1, &num1);
    printf("Value of num: %d\nAddress of num: %p\n", num2, &num2);

    return 0;
}
