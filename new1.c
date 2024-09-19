#include <stdio.h>

int main() {

  int a[20] = {1, 3, 5, 7, 9, 11, 13, 15}, n = 8, i, m, k;


  printf("Enter the index and element you want to insert: ");
  scanf("%d%d", &m, &k);

  for (i = n; i > m; i--) {
    a[i] = a[i - 1];
  }

  a[m] = k;
  
  n++;

  for (i = 0; i < n; i++) {
    printf("%d\n", a[i]);
  }

  return 0;
}
