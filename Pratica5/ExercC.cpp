#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 5 - Exerc�cio:"" C""\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personaliza��o de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
//Banner
system("cls");
tela();
//Inicio
int numero, contador = 1; 
float media, soma = 0, contdiv3 = 0;
      while(contador <= 10){
                     cout << "\nDigite o "<<contador<<"� n�mero inteiro: ";
                     cin >> numero;
                     contador = contador + 1;
                                if (numero%3==0){
                                   soma = soma + numero;
                                   contdiv3 = contdiv3 + 1;
                                   }
                     }
               media = soma / contdiv3;
               cout << "\n\n   A m�dia de todos os n�meros divis�veis por 3 �: "<<media;


getch();
}
