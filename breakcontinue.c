#include<stdio.h>
int main()
{
    int i,n,add=0,data;
    printf("how much data u want take\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        if(data<0) continue;
        else if(data>0) add=add+data;
        else if(data==0){printf("terminate loop"); break;}
    }
    printf("%d ",add);
}
