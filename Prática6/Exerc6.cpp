#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 6""\n";
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
int contador, numero=0, cont1=0, cont2=0, cont3=0, cont4=0;
   while(numero>=0){
                                           cout<<"\n Digite um número qualquer: ";
                                           cin>>numero;
                                           if(numero>=0 && numero<=25)
                                           cont1++;
                                           else if(numero>=26 && numero<=50)
                                           cont2++;
                                           else if(numero>=51 && numero<=75)
                                           cont3++;
                                           else if(numero>=76 && numero<=100)
                                           cont4++;
                                           }
                                           system("cls");
                                           tela();
                                                  cout<<"\n\n Você digitou os seguintes números entre os seguintes intervalos:";
                                                  cout<<"\n [ 0  - 25 ]: "<<cont1;
                                                  cout<<"\n [ 26 - 50 ]: "<<cont2;
                                                  cout<<"\n [ 51 - 75 ]: "<<cont3;
                                                  cout<<"\n [ 76 - 100]: "<<cont4;
                                                  
getch();
}
