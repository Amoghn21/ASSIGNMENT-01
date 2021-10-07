
// 2012143
//THIS COMPARISON IS BASED ON THE RANDOMLY GENERATED ARRAY//


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap( long int *a, long int *b){
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void bubblesort( long int arr[], long int n)
{
 for( long int i=0;i<n-1;i++)
  {  
    for( long int j=0;j<n-i-1;j++)
    { 
      if(arr[j]>arr[j+1])
      {
        swap(&arr[j],&arr[j+1]);   
      }
    }
  }
}
void selectionsort( long int arr[], long int n)
{
   long int i,j,k;
   for( i=0;i<n-1;i++)
    {   
      for( j=k=i;j<n;j++)
      {
         if(arr[j]<arr[k])
        k=j;
      }
        swap(&arr[i],&arr[k]);

    }
}

int main()
{  long int n= 100000;
   
   int k=0;

   double tim1[5],tim2[5]; // These two arrays store the time taken by bubble sort and selection sort respectively  in 10 iterations
   printf(" Array size,  Bubble,  Selection\n ");
   
   while(k++<5)
   {

     long int a[n],b[n]; // we are generating n random numbers and storing them in 2 arrays ,one for bubble sort and another for selection sort

     for(int i=0;i<n;i++)
     {
         long int num=rand()%n+1;
         a[i]=num;
         b[i]=num;
     }

     clock_t start,end;

     start=clock();
     bubblesort(a,n);
     end=clock();

     tim1[k]=((double)(end-start)/(double)CLOCKS_PER_SEC);

     start=clock();
     selectionsort(b,n);
     end=clock();

     tim2[k]=((double)(end-start)/(double)CLOCKS_PER_SEC);

     printf("%li,  %li,  %li\n",n,(long int)tim1[k],(long int)tim2[k]);
      n+=10000;
      
 }

return 0;
}

// FOR A SORTED ARRAY 
/* TO run this please remove comments //
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selection_sort(long long int a[],long long int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("Selection Sorted Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return;
}
void bubble_sort(long long int a[],long long int n)
{
    int c=1;
    while(c<n)
    {
        for(int i=0;i<n-c;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        c++;
    }
    printf("Bubble Sorted Array:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return;
}
int main()
{
    printf("Enter no of elements:\n");
    long long int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    clock_t start,end;
    long int t;
    start=clock();
    selection_sort(a,n);
    end=clock();
    t=end-start;
    printf("Total time elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
     printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
} 
*/
