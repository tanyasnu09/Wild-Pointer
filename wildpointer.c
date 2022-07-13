#include <stdio.h>
int main()
{
    int a=334;
    int *ptr; // wild pointer
    ptr=&a;//not a wild pointer
    printf("valus of a is %d",*ptr);

}