#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 09 - Exerc�cio:"" 1.b""\n";
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
int i, vet[50], escolha, cont=1;
    cout<<"\n Digite quantos n�meros deseja digitar: ";
    cin>>escolha;
    while(escolha<0){
                    cout<<"\n Digite apenas n�meros positivos para a quantidade. Tente novamente: ";
                    cin>>escolha;
                    }
              for(i=0;i<escolha;i++){
                                     cout<<"\n Digite o "<<cont<<"� n�mero:";
                                     cin>>vet[i];
                                                 if(vet[i]<0)
                                                 vet[i]=0;
                                                 cont++;
                                     }
                                     system("cls");
                                     tela();
                                                 cout<<"Transformamos todos os n�meros negativos em um n�mero nulo.\n  Confira:\n   { ";
                                                 
                                                                      for(i=0;i<escolha;i++)
                                                                                             cout<<vet[i]<<"  ";
                                                                                             cout<<"}";
                                                                                                                                               
getch();
}
