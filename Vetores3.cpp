#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                      Vetores - Exercício Teoria:"" 2""\n";
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
int i, cont=1, vetorA[50], vetorB[50], vetorC[50];
    for(i=0; i<5; i++){
             cout << "Digite o "<<cont<<"º número inteiro: ";
             cin >> vetorA[i];
             cont++;
                 if(vetorA[i]%2==0)
                 vetorA[i]=vetorB[i];
                                     else if(vetorA[i]%2!=0)
                                     vetorA[i]=vetorC[i];
                                     }
                 system("cls");
                 tela();                    
                                            
                                                           
                                
             
getch();
}
