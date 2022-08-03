#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A;
    float X,Y,q;
 do{
     printf("choisir l'operation convenable :\n");
     printf("'+','-','*','/'\n");
     scanf("%c", &A);
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

}
