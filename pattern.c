#include<stdio.h>
int main()
{ 
    int n,a,b,d,B;
    printf("enter n value");
    scanf("%d",&n);
    for(a=0;n>=a;a++)
    {
        for(b=-n;(b<=n);b++)
        { if(b<0)  B=-b; else B=b;
        if((B<=a)&&(B!=0))
        {
        if((B==a)&&(b<0)) printf("%c",47);
        else if((B==a)&&(b>0)) printf("%c",92);
        else printf(" ");
        }
       else printf(" ");
        }
        printf("\n");
    }
}
