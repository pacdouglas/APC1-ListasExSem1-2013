#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 09 - Exercício:"" 1.b""\n";
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
int i, vet[50], escolha, cont=1;
    cout<<"\n Digite quantos números deseja digitar: ";
    cin>>escolha;
    while(escolha<0){
                    cout<<"\n Digite apenas números positivos para a quantidade. Tente novamente: ";
                    cin>>escolha;
                    }
              for(i=0;i<escolha;i++){
                                     cout<<"\n Digite o "<<cont<<"º número:";
                                     cin>>vet[i];
                                                 if(vet[i]<0)
                                                 vet[i]=0;
                                                 cont++;
                                     }
                                     system("cls");
                                     tela();
                                                 cout<<"Transformamos todos os números negativos em um número nulo.\n  Confira:\n   { ";
                                                 
                                                                      for(i=0;i<escolha;i++)
                                                                                             cout<<vet[i]<<"  ";
                                                                                             cout<<"}";
                                                                                                                                               
getch();
}
