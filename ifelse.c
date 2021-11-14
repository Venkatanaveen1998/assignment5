#include <stdio.h>
int main() 
{
    int i,min,max;
    printf("enter min value\n");
    scanf("%d",&min);
    printf("enter max value\n");
    scanf("%d",&max);
    printf("even number: \n");
    for(i=min;i<=max;i++)
    if(i%2==0) printf("%d,",i);
    printf("\n");
    printf("odd number: \n");
    for(i=min;i<=max;i++)
    if((i%2)!=0) printf("%d,",i);
}


