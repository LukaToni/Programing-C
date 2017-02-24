#include <stdio.h>

int main() {
  int days = 1;
  int day = 0;
  int Tday = 0;
  int length = 0;
  int TLength  = 0;
  
  int temp;
  
  while(scanf("%d", temp) == 1 && temp != EOF) {
    if(temp >= 300 && Tday == 0 && TLength == 0) {
      Tday = days;
      TLength++;
      days++;  
      continue;
    }
    
    if(temp >= 300 && Tday != 0) {
      TLength++;
      days++;
      continue;
    }
    
    if(temp < 300) {
      if (length < TLength) {
        day = Tday;
        length = TLength;
      }
      
      if(temp == -9999) {
        break;
      }
    }
    
    Tday = 0;
    TLength = 0;
    days++;  
  }
  
  printf("%d %d\n", days, length);
  
  return 0;
}
