#include<stdio.h>
int main()
{
    int m,i,flag=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= m/2; ++i)
    {
        if(m%i == 0)
        {
        flag = 1;
            break;
            
        }
    }
    if (m == 1)
    {
        printf("1 is neither a prime nor a composite number.");
    }
    else
    {
        printf("%d is not a prime number.", m);
    }
}
