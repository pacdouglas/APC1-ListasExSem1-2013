#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exerc�cio:"" 2""\n";
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
int contador, catolicos=0, protestantes=0, budistas=0;
char religiao;

     //repeti��o
                for(contador=1;contador<=200;contador++){
                                                         cout<<"\n Digite a religi�o do "<<contador<<"� habitante \n  [c para cat�lico - p para protestante - b para budista]: ";
                                                         cin>>religiao;
                                                         while(religiao!='c' && religiao!='p' &&religiao!='b'){
                                                                             cout<<" Digite apenas valores v�lidos! \n (c para cat�lico/p para protestante/b para budista)\n Tente novamente: ";
                                                                             cin>>religiao;
                                                                             }
                                                                             //condicionais
                                                                                           if(religiao=='c')
                                                                                           catolicos++;
                                                                                           else if(religiao=='p')
                                                                                           protestantes++;
                                                                                           else if(religiao=='b')
                                                                                           budistas++;
                                                                                           }
                
     //Exibindo resultados
                system("cls");
                tela();
                cout<<"\n\n A quantidade de cat�licos desta popula��o �: "<<catolicos;
                cout<<"\n\n A quantidade de protestantes desta popula��o �: "<<protestantes;
                cout<<"\n\n A quantidade de budistas desta popula��o �: "<<budistas;
getch();
}
