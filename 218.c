#include <stdio.h>
void main()
{
    int n,m,num1,temp=0,c,i;
    printf("Enter a number:");
    scanf("%d%d",&m,&n);
    for(i=n;i<m;i++)
    {
        c=n;
        while(n>0)
        {
            num1=n%10;
            temp=temp+(num1*num1*num1);
            n=n/10;
        }
        if(temp==c)
        {
            printf("Its armstrong number");
        }
        else
        {
            printf("Its not armstrong number");
        }
    }
    getch();
}
