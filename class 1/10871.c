#include <stdio.h>

int main(){
  int x[10000], y, z;
  scanf("%d %d", &y, &z);

  for(int i = 0; i < y; i++){
    scanf("%d", &x[i]);
    if(x[i] < z){
      printf("%d ", x[i]);
    }
  }
  printf("\n");
  return 0;
}