#include <stdio.h>

int main() {
   int sm = 1;

   for(int cm = sm; cm < 100; cm++) {
      printf("%d", cm);

      if(cm % 3 == 0 && cm % 5 == 0) {
         printf(" FizzBuzz \n");
      }
      else if(cm % 3 == 0) {
         printf(" Fizz \n");
      }
      else if(cm % 5 == 0) {
         printf(" Buzz \n");
      }
      else {
         printf(" \n");
      }
   }
}
