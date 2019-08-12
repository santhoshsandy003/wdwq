#include <stdio.h>

int main()
{
  int a[50],i,m,max;
  printf("enter the number");
  scanf("%d",&m);
  printf("enter the array values");
  for(i=0;i<m;i++)
  {
      scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<m;i++)
  {
  if(a[i]>max)
  {
      max=a[i];
  }
  }
  printf("%d",max);
}
