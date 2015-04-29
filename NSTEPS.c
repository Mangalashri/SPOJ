include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a%2==0&&b%2==0&&(a-b==0||a-b==2))
        {
            printf("%d\n",a+b);
            continue;
        }
        else if(b%2!=0&&a%2!=0&&(a-b==0||a-b==2))
        {
            printf("%d\n",a+b-1);
            continue;
        }
        printf("No Number\n");
    }
    return 0;
}
 
 