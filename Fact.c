#include <stdio.h>
int fact(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return n * fact(n - 1);
}
int main() {
  int n;
  printf("Enter the number= ");
  scanf("%d", &n);
  if (n < 0)
    printf("no factorial of negative number: ");
  else
    printf("factorial of %d is :%d", n, fact(n));
    printf("\n Press enter to exit");
  getchar();
  getchar();
  return 0;
}