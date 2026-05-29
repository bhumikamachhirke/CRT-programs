#include<stdio.h>
// int main()
// {
//     int arr[10] = {2,3,56,12,9,7,88,64,5,10};
//     int small,large, i;
//     small = large = arr[0];
//     for(i=0;i<10;i++)
//     {
//         if(arr[i]<small)
//         small = arr[i];
//         if(arr[i]>large)
//         large = arr[i];

//     }
//     printf("small = %d and large = %d",small,large);
//     return 0;
// }


// program  to initialize a 2D array and display the values
int main()
{
    int i,j;
    int matrix[4][3] ={ {1,2,3},
                       {4,5,6},
                       {7,8,9},
                       {10,11,12}
};
for(i=i;i<4;i++)
{
    for(j=0;j<3;j++)
    {
        printf("matrix[%d][%d]",i,j);
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
}
return 0;
}