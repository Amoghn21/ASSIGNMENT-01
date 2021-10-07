//2012143_Q.3
#include<stdio.h>
int main()
{ int row,column;
printf("enter the order of the 2-D array : row*column \n");
scanf("%d %d",&row,&column);
int arr[row][column];
printf("enter the elements of the 2-D array\n");
for(int i=0;i<row;i++)
{
   for (int j=0;j<column;j++)
    {
        scanf("%d",&arr[i][j]);
    }

}

int n=(row)*(column);
    int arr1D[n];
    int k=0;
    printf("Original 2D Array:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr1D[k]=arr[i][j];
            k++;
        }
    }
    printf("\n");
    printf(" Final 1D array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr1D[i]);


return 0;
}
