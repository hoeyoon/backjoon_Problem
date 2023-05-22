#include <stdio.h>

int main(){
  int x;
  int num[100];
  int sum = 0;
  scanf("%d", &x);
  for(int i = 0; i < x; i++){
    scanf("%1d", &num[i]);
    sum+=num[i];
  }
  printf("%d\n", sum);

  return 0;
}