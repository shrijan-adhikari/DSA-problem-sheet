#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("size of first element\n");
    int n;
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    printf("\n enter elements\n");
    for (int i=0;i<n;i++)
        scanf("%d",&arr);
     printf("size of second element\n");
    int n2;
    scanf("%d",&n2);
    int *arr2;
    arr2=(int*)malloc(n2*sizeof(int));
    printf("\n enter elements\n");
    for (int j=0;j<n2;j++)
        scanf("%d",&arr2);
     
    free(arr);
    free(arr2);
    return 0;
}