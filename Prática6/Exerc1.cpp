#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exerc�cio:"" 1""\n";
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
int contador=1, numero;
float div3=0, total, media;
      //repeti��o
      for(contador=1;contador<=50;contador++){
                                              cout<<"Digite o "<<contador<<"� n�mero: ";
                                              cin>>numero;
                                              if(numero%3==0){
                                              div3++;
                                              total=total+numero;
                                              }
                                              }
      media=total/div3;
                       //Exibindo Resultados
                       system("cls");
                       tela();
                       cout<<"\n\n A quantidade de n�meros divis�veis por 3 digitados foi: "<<div3;
                       cout<<"\n\n A m�dia aritim�tica dos n�meros divis�veis por 3 foi: "<<media;
getch();
}
