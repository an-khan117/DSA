//🔁 Iterative Linear Search (using a loop)
#include<stdio.h>
int main()
{
 int key;
 int arr[5]={1,2,3,4,5};
 for (int i=0;i<5;i++)
  {
   printf("%d ",arr[i]);
  }
 printf("Enter the number to be find form this array !! \n");
 scanf("%d",&key);
 for (int i=0;i<5;i++)
  {
    if (arr[i]==key)
     {
       printf(" !! Key Found !!");
       return 0;
     }
  }
   printf(" !! Key Not Found !!");
}
