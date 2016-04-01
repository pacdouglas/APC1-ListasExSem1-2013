#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 2""\n";
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
int contador, catolicos=0, protestantes=0, budistas=0;
char religiao;

     //repetição
                for(contador=1;contador<=200;contador++){
                                                         cout<<"\n Digite a religião do "<<contador<<"º habitante \n  [c para católico - p para protestante - b para budista]: ";
                                                         cin>>religiao;
                                                         while(religiao!='c' && religiao!='p' &&religiao!='b'){
                                                                             cout<<" Digite apenas valores válidos! \n (c para católico/p para protestante/b para budista)\n Tente novamente: ";
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
                cout<<"\n\n A quantidade de católicos desta população é: "<<catolicos;
                cout<<"\n\n A quantidade de protestantes desta população é: "<<protestantes;
                cout<<"\n\n A quantidade de budistas desta população é: "<<budistas;
getch();
}
