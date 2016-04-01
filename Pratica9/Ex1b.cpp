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
int vetA[5], vetB[5], vetuniao[10], i, j=5, cont=1;

    for(i=0;i<5;i++){
                    cout<<"\n Insira o "<<cont<<"º valor inteiro para o vetorA: ";
                    cin>>vetA[i];
                    cout<<"\n Insira o "<<cont<<"º valor inteiro para o vetorB: ";
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
                                                                                
               cout<<"Confira a união entre os dois vetores: "<<"\n{  ";                                                        
    for(i=0;i<10;i++)
                        cout<<vetuniao[i]<<"  ";
                        
                    cout<<"}";
                                                                            
getch();
}
