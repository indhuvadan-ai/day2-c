#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum=0;

    printf("enter the number of digits to add\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum=sum+i;
    }

    printf("the sum of 1st %d natural numbers is %d",n,sum);

}