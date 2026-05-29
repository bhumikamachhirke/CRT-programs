#include<stdio.h>
int main()
{
    int arr[10], i;
    int sum;
    for(i=0;i<10;i++)
    {
        printf("Enter a value for arr[%d]",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }
    printf("sum=%d",sum);
    return 0;
}