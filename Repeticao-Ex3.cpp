#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                            Estrutura de Repetição - Ex3\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
tela();
//Inicio
int nro, soma, contador, cont3;
float media;
soma = 0;
contador = 1;
cont3 = 0;
while (contador <= 20){
      cout << "Digite o "<<contador<< "º número inteiro: ";
      cin >> nro;
      if (nro%3==0){
      soma = soma + nro;
      cont3 = cont3 + 1;
      }
      contador = contador +1;
      }
      media = soma/cont3;
      cout << "\n\n  A média dos números divisíveis por 3 é: "<<media;
getch();
}
