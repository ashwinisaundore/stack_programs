#include<stdio.h>
#define MAX 5
struct stack
{
   int data[MAX];
   int top;
}s;
void init()
{
  s.top=-1;
}
int isfull()
{
  if(s.top==MAX-1)
    return 1;
  else
   return 0;   
}
int isempty()
{
   if(s.top==-1)
     return 1;
   else
    return 0;     
}
void push(int num)
{
  if(isfull())
    printf("Stack is full don't push");
  else
  {
     s.top++;
     s.data[s.top]=num;
     printf("\n Push succ..");
  }
}
void pop()
{
  int val;
   if(isempty())
      printf("Stack is empty Don't pop");
   else
    {
     val=s.data[s.top];
     s.top--;
     printf("\n Poped Value=%d",val);
    }
}
void disp()
{
   int i;
   for(i=s.top;i>=0;i--)
   {
      printf("%d\n",s.data[i]);
   }
}
int main()
{
   int ch,num;
   init();
   do
   {
     printf("\n 1-push \n 2-pop \n 3-disp:");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1: printf("Enter number:");
                   scanf("%d",&num);
                   push(num);
                   break;
       case 2:pop();
                break;
       case 3:disp();
                   break;
     }
   }while(ch<4);
}


