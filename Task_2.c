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
