#include <stdio.h>
int main()
{
    int m, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &m);

    originalInteger = m;
    while( m!=0 )
    {
        remainder = m%10;
        reversedInteger = reversedInteger*10 + remainder;
        m /= 10;
    }
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}
