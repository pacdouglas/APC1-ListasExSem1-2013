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
int vetA[5], vetB[5], vetuniao[10], i, j=5, cont=1;

    for(i=0;i<5;i++){
                    cout<<"\n Insira o "<<cont<<"� valor inteiro para o vetorA: ";
                    cin>>vetA[i];
                    cout<<"\n Insira o "<<cont<<"� valor inteiro para o vetorB: ";
                    cin>>vetB[i];
                    cont++;
                    system("cls");
                    tela();
                    }
                    
    for(i=0;i<5;i++)
                    vetuniao[i]=vetA[i];
    for(i=0;i<5;i++){
                         vetuniao[j]=vetB[i];
                         j++;
                         }
                                                                                
               cout<<"Confira a uni�o entre os dois vetores: "<<"\n{  ";                                                        
    for(i=0;i<10;i++)
                        cout<<vetuniao[i]<<"  ";
                        
                    cout<<"}";
                                                                            
getch();
}
