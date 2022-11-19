#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i;
    printf("Enter %d elements in an array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n\nDisplaying array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d]= %d\n",i,arr[i]);
    }
    getch();
    return 0;

}
