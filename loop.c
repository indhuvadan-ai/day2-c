#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("enter how long numbers u need to print\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
}