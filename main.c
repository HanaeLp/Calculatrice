#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A,B;
    float X,Y,q;
 do{
 do{
     printf("choisir l'operation convenable :\n");
     printf("'+','-','*','/'\n");
     scanf("\n%c", &A);
 }while(A!= '+' && A!= '-' && A!= '*' && A!= '/' );
     printf("Donner deux nombres :\n");
     scanf("%f",&X);
     scanf("%f",&Y);
 switch(A){
   case '+' : q = X + Y;
              printf("%f + %f = %f", X, Y, q);
   break;
   case '-' : q = X - Y;
              printf("%f - %f = %f", X, Y, q);
   break;
   case '*' : q = X * Y;
              printf("%f * %f = %f", X, Y, q);
   break;
   case '/' : if (Y==0){
                  printf("Erreur Y doit etre deferente de 0");
              } else {
                  q = X / Y;
                  printf("%f / %f = %f", X, Y, q);
              }
   break;
   default : printf("Erreur!");
 }
 printf("clique sur q pour quitte ou c pour restart");
 scanf("\n%c", &B);
}while(B != 'q');
exit(0);
}
