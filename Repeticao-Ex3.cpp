#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                            Estrutura de Repeti��o - Ex3\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personaliza��o de Cor
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
      cout << "Digite o "<<contador<< "� n�mero inteiro: ";
      cin >> nro;
      if (nro%3==0){
      soma = soma + nro;
      cont3 = cont3 + 1;
      }
      contador = contador +1;
      }
      media = soma/cont3;
      cout << "\n\n  A m�dia dos n�meros divis�veis por 3 �: "<<media;
getch();
}
