#include <stdio.h>

   int main() {
   int num;

   printf("Digite um numero inteiro: ");
   scanf("%d", &num);

   if (num % 2 == 0) {
      printf("%d e um numero par.\n", num);
   }
   else {
      printf("%d e um numero impar.\n", num);
   }

   return 0;
}
