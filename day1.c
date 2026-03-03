/*Problem: Write a C program to insert an element x at a given 1-based position pos in
 an array of n integers.rShift existing elements to the right to make space.*/
 
#include <stdio.h>
# define  UB 100
void insert(int arr[],int n,int k,int x );
int main ()
{
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int n=10;
    printf("present array = [ ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
printf("]\n");
printf("enter in which postion you want to enter element: ");
int k;
scanf("%d",&k);
printf("\nenter element to enter: ");
int  x;
scanf("%d", &x);
insert(arr,n,k,x);
printf("\nnew array = [");
 for(int i=0;i<=n;i++)
    {
        printf("%d, ",arr[i]);
    }
printf("]\n");
return 0;
}
void insert(int arr[],int n,int k,int x)
{
int j=n;
while (j>=k-1)
{
    arr[j]=arr[j-1];
    j--;
}
arr[k-1]=x;
}