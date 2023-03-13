//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.
#include <stdio.h>
int main() {
    int n, num, positive = 0, negative = 0;
    
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);      
        if(num > 0) {
            positive++;
        }
        else if(num < 0){
            negative++;
        }
    }
    
    printf("Total positive numbers: %d\n", positive);
    printf("Total negative numbers: %d\n", negative);
    
    return 0;
}

