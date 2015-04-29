#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    char *s;
    int size;
    int top;
};
int isfull(struct stack *p)
{
    if(p->top==p->size)
        return 1;
    return 0;
}
int push(struct stack *p,char c)
{
    if(isfull(p))
        return 0;
    p->s[++(p->top)]=c;
    return 1;
}
 
int isempty(struct stack *p)
{
    if(p->top==-1)
        return 1;
    return 0;
}
int pop(struct stack *p,char *c)
{
    if(isempty(p))
    {
        *c='$';
        return 0;
    }
    *c=p->s[(p->top)--];
    return 1;
}
 
int peek(struct stack *p,char *c)
{
    if(isempty(p))
    {
        *c='$';
        return 0;
    }
    *c=p->s[p->top];
    return 1;
}
int prec(char c)
{
    switch(c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    }
    return 0;
}
struct stack* create_stack(int l)
{
    struct stack *p=malloc(sizeof(struct stack));
    p->top=-1;
    p->size=l;
    p->s=malloc(sizeof(char)*l);
    return p;
}
int infixtopostfix(char *a)
{
    int i,j;
    struct stack *p=create_stack(strlen(a));
    for(i=0,j=0;a[i];i++)
    {
        char t;
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
            a[j++]=a[i];
        else if(a[i]=='(')
            push(p,a[i]);
        else if(a[i]==')')
        {
            while(peek(p,&t)&&t!='(')
                pop(p,&a[j++]);
            if(t!='(')
                return 0;
            char temp;
            pop(p,&temp);
        }
        else
        {
            while(peek(p,&t)&&(prec(a[i])<=prec(t)))
                pop(p,&a[j++]);
            push(p,a[i]);
        }
    }
    while(pop(p,&a[j++]));
    a[--j]='\0';
    return 1;
}
int main()
{
    char a[402];int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",a);
    	infixtopostfix(a);
    	printf("%s\n",a);
    }
    return 0;
} 