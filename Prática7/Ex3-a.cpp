#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 7 - Exerc�cio:"" 3.a""\n";
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
int contador;
float boi_peso, boi_maisp=0;
      for(contador=1;contador<=10;contador++){
                                              cout<<"\nDigite o peso do "<<contador<<"� boi: ";
                                              cin>>boi_peso;
                                              if(boi_peso>boi_maisp)
                                              boi_maisp=boi_peso;
                                              }

                                              cout<<"\n\n O boi mais pesado tem: "<<boi_maisp<<"KG";



getch();
}
