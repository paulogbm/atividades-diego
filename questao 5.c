#include <stdio.h>
#include <math.h>

   int main() {
   float num;

   printf("Digite um numero: ");
   scanf("%f", &num);

   if (num > 0) {
      float quadrado = pow(num, 2);
      float raiz = sqrt(num);

      printf("O numero ao quadrado e %.2f\n", quadrado);
      printf("A raiz quadrada do numero e %.2f\n", raiz);
   }
   else {
      printf("O numero digitado nao e positivo.\n");
   }

   return 0;
}
