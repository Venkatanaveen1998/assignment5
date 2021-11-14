#include <stdio.h>
int j=0;
int main()
{
   int a[20],b[20];
   int n,i,cnt=0,k,s=0;
   printf("enter how many n elements required");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\norginal sequence want this like  : ");
   for(i=0;i<n;i++)
   for(k=0;k<=i;k++)
   {  j++;
     if(j<=n)
     {
     b[j]=i+1;
     printf("%d  ",i+1);
     }
   }
   printf("\n");
for(k=0;k<n;k++)
{
    if(a[k]==b[k+1]) s++;
}
if(s==n) printf("input sequence is correct"); 
else printf("but input sequence is not correct");
}

