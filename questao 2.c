#include <stdio.h>

   int main() {
   
   float num1, num2;

   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);

   printf("Digite o segundo numero: ");
   scanf("%f", &num2);

   if (num1 > num2) {
      printf("O primeiro numero e maior.\n");
   }
   else if (num2 > num1) {
      printf("O segundo numero e maior.\n");
   }
   else {
      printf("Numeros iguais.\n");
   }

   return 0;
}
