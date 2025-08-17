#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);

    if(a>b){
        printf("%d is greater than %d",a,b);
    }

    else if(a<b){
        printf("%d is greater than %d",b,a);
    }

    else{
        printf("both are equal!");
    }
}