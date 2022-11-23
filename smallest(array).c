#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
      printf("Enter element %d:",i+1);
      scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[0]>arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("The smallest element in an array is %d",arr[0]);
    getch();
    return 0;

}

