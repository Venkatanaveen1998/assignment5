#include<stdio.h>
int top=-1;
void push(int s,int *stack,int v)
{
    if(top==s) {printf("stack is full"); return;}
    else 
    {
        ++top;
        stack[top]=v;
    }
}
void display(int *stack)
{
    int i;
    if(top==-1) { printf("stack is empty\n"); return; }
    for(i=0;i<=top;i++) printf("%d \n",stack[i]);
}
void pop(int s,int *stack)
{
    if(top==-1) { printf("stack is empty\n"); return;}
    else
    {
      printf("removing digit is : %d\n",stack[top]);
      top--;
    }
}
int main()
{
    int s;
    printf("enter how much memory want to be allocate\n");
    scanf("%d",&s);
    int stack[s];
   push(s,stack,1); 
   push(s,stack,2);
   push(s,stack,3);
   display(stack);
   pop(s,stack);
   display(stack);
}

