#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 9""\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
//tela
system("cls");
tela();
//Inicio
int numero, contador, result;
    cout<<"\n\n Digite um número à ser exibido sua respectiva tabuada: ";
    cin>>numero;
                for(contador=1;contador<=10;contador++){
                result=numero*contador;
                cout<<"\n "<<numero<<" X "<<contador<<" = "<<result;
                }

getch();                                                                                   
}
