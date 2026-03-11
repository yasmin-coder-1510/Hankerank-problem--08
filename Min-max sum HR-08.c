#include<stdio.h>
int main()
{
  long int arr[5], sum=0,minSum=0,maxSum=0,min,max;

  for(int i =0;i<5;i++)
  {
    scanf("%ld",&arr[i]);
  }

  for(int i=0;i<5;i++)
  {
    sum=sum+arr[i];
  }

  max=arr[0];
  min=arr[0];

  for(int i=1;i<5;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }

    if(arr[i]<min)
    {
      min=arr[i];
    }
  }

 maxSum =sum-min;
 minSum=sum-max;

  printf("%ld %ld\n",minSum,maxSum);
  return 0;
}
