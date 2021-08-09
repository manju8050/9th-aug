#include<stdio.h>
#define MAX 3
int stack[MAX];
int top = -1;
void push(int ele)
{
    if(top==MAX-1)
    {
        printf("over flow\n");
    }
    else
    {
        top++;
        stack[top]=ele;   
    }
}
void pop()
{
    if(top==-1)
    {
        printf("under flow\n");
    }
    else
    {
        printf("%d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top == -1)
    {
        printf("empty stack\n");
        return ;
    }
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    push(1);
    push(2);
    display();
    push(3);
    printf("pop ->\n");
    pop();
    pop();
    display();
    pop();
   
}

//
OUTPUT
2
1
pop ->
3
2
1
1

