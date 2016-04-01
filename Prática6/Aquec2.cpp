#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Aquecimento - Exercício:"" 2""\n";
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
int contador, numero, div;
cout << "\nDigite o número para ser calculado a sua respectiva tabuada: ";
cin >> numero;
    for(contador=0; contador <=10; contador++){
                   div = numero * contador;
                   cout << "\n\n  "<<numero<<" X "<<contador<<" = "<<div;
                   }                          
getch();
}
