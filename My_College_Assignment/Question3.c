#include<stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    a%2==0?printf("This is Even.\n") : printf("This is Odd.\n");
    return 0;
}