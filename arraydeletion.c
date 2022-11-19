#include<stdio.h>
#include<conio.h>
int main()
{
    int n=5;
    int arr[n],i,ele,loc;
    for(i=0;i<n;++i)
    {
        printf("Enter Element[%d]:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the location of element to be deleted:");
    scanf("%d",&loc);


    for(i=loc-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("\nArray element after Deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("\nElement[%d]=%d\n",i+1,arr[i]);
    }
    getch();
    return 0;
}

