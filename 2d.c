#include <stdio.h>

int main()
{
  int j,flag,low,high;
  printf("enter the number");
  scanf("%d %d",&low,&high);
  printf("enter the prime %d and %d",low,high);
  while (low<high)
  {
      flag=0;
      for(j=2;j<low/2;j++)
      {
          if(low%j==0)
          {
              flag=j;
              break;
          }
      }
      if(flag==0)
      printf("%d",low);
      low++;
  }
}
