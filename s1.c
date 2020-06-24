#include <stdio.h>
//Write a program in C to add two numbers using pointers. 
int main()

{
    int n1,n2;
    printf("Input the first number:\n");
    scanf("%d",&n1); //used to scan for n1 from the terminal
    printf("Input the second number:\n");
    scanf("%d",&n2); //used to scan for n2 from the terminal
    int *ptr1 = &n1; //ptr1 points to n1
    int *ptr2 = &n2; //ptr2 points to n2
    int k = *ptr1 + *ptr2; //k is the result of dereferencing of ptr1 added with dereferencing of ptr2
    int *ptr3 = &k; //ptr3 points to k
    printf("The sum of the entered numbers is : %d\n",*ptr3);

    return 0;    
}