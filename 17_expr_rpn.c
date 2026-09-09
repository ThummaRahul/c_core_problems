#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[100],top=-1;

void push(int x)
{
    stack[++top]=x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char expr[200];
    char *tok;
    int a,b;

    fgets(expr,sizeof(expr),stdin);

    tok=strtok(expr," ");

    while(tok)
    {
        if(strcmp(tok,"+")==0)
        {
            b=pop();
            a=pop();
            push(a+b);
        }
        else if(strcmp(tok,"-")==0)
        {
            b=pop();
            a=pop();
            push(a-b);
        }
        else if(strcmp(tok,"*")==0)
        {
            b=pop();
            a=pop();
            push(a*b);
        }
        else if(strcmp(tok,"/")==0)
        {
            b=pop();
            a=pop();
            push(a/b);
        }
        else
            push(atoi(tok));

        tok=strtok(NULL," ");
    }

    printf("%d",pop());

    return 0;
}
