#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 5 - Exercício:"" E""\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
//Banner
system("cls");
tela();
//Inicio
int numero, tab=0, mult;
    cout << "Digite um número para exibir a sua Tabuada: ";
    cin >> numero;
    while (tab <= 10){
          mult = numero * tab;
          cout << "\n\n "<<numero<<" X "<<tab<<" = "<<mult;
          tab = tab + 1;
          }
      
getch();
}
