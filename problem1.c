#include <stdio.h>

int main(){
  int sum = 0;
  for (int i = 1; i<1000; i++){
    if (i%3 == 0 || i%5 == 0){
      sum = sum + i;
      printf("%s%d\n", "increment: ", i );
      printf("%s%d\n", "sum: ", sum );
    }
  }

  printf("%d\n", sum);
}
