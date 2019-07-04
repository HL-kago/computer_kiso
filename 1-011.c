#include <stdio.h>
int main(int argc, char const *argv[]) {
  int x,y;

  scanf("%d", &x);
  scanf("%d", &y);

  int length;

  length = x * x + y * y;

  printf("%d\n", length);
  return 0;
}
