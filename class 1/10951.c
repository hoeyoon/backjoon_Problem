#include <stdio.h>

int main(){
  int x, y;
  while(1){
    if(scanf("%d %d", &x, &y) == EOF){
      break;
    }
    printf("%d\n", x+y);
  }
  return 0;
}