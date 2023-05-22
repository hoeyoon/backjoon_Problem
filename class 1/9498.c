#include <stdio.h>

int main(){
  int x;
  char y;
  scanf("%d", &x);

  if(90 <= x && x <= 100){
    y = 'A';
  }
  else if(80 <= x && x <= 89){
    y = 'B';
  }
  else if(70 <= x && x <= 79){
    y = 'C';
  }
  else if(60 <= x && x <= 69){
    y = 'D';
  }
  else{
    y = 'F';
  }
  printf("%c\n", y);
  return 0;
}