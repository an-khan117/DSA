//🔁 Iterative Binary Search (using a loop)

#include<stdio.h>
int binarysearch(int array[],int n,int key)
 {
  int l=0 , h=n-1;
  while (l<=h) {
    int mid = (l+h) / 2;
      if (array[mid] == key)
            return mid;
        else if (array[mid] < key)
            l = mid + 1;
        else
            h = mid - 1;
    }
   return -1;

  }
  int main() {
    int array[] = {1,2,3,4,5};
    int key = 4;
    int n = sizeof(array) / sizeof(array[0]);

    int result = binarysearch(array, n, key);
     if (result == -1)
        printf("Not found\n");
    else
        printf("Found %d at index %d\n", key,result);

    return 0;
}
