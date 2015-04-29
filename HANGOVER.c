#include<stdio.h>
int main()
{
    float c,s,i;
    int j;
    while(1)
    {
        scanf("%f",&c);
        if(c==0.00)
            break;
        else
        {
            s=0;
            for(i=2,j=0;;i++,j++)
            {
                s+=(1/i);
                if(s>c)
                {
                    printf("%d card(s)\n",j+1);
                    break;
                }
            }
        }
    }
    return 0;
}
 