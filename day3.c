#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter size of element ");
    int n;
    scanf("%d",&n);
    int *arr;
    arr=(int *)malloc(n*sizeof(int));
    printf("enter elements of array ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
printf("enter element to search  ");
int x;
scanf("%d",&x);
int index=-1;

    int count=0;
   for (int i=0;i<n;i++)
   { count ++;
    if (arr[i]==x){
    index =i;
    break;
    }
   }

if (index!=-1)
{
printf("\n element is present at index  %d\n",index);
printf("comparisons  %d \n",count);
}
else 
printf("element not found\n");
free (arr);
return 0;
}