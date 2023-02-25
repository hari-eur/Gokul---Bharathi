/* 
Task - 2
Let's Play with printf()
Get any array from the user print the array using printf() 
and if print is successful and the total number of characters printed is less 10 print "the count is less" and the count with it,
else print success!!. If printing of "success!!"is successful, print the correct sequence of Order of Evaluation in C.
*/


#include <stdio.h>

int main() {
  int count = 0, arr[10], i, n, k;

  printf("Enter the size of the array: ");
  scanf("%d",&n);
  
  printf("Enter the array elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Array Elements: ");
  for (i = 0; i < n; i++) {
    count = printf("%d ", arr[i]);
  }
  
  if (count < 10) {
    printf("\nThe count is less: %d\n", count);
    
  } else {
    k = printf("\nSuccess!!\n");
    if(k)
    	printf("Sequence of order of evaluation is : (), %, /, *, +, -");
  }
  
  return 0;
}
