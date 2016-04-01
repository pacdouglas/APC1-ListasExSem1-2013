#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 3""\n";
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
int contador, nparticipantes, cont_big=0, cont_small=0;
float altura, media_big, media_small;
      cout<<"\n\n Digite o número de participantes desta prova de atletismo: ";
      cin>>nparticipantes;
                          //repetição
                          for(contador=1;contador<=nparticipantes;contador++){
                                                                              cout<<"\n\n Digite a altura do "<<contador<<"º participante: ";
                                                                              cin>>altura;
                                                                              if(altura<=1.80)
                                                                              cont_small++;
                                                                              if(altura>1.80)
                                                                              cont_big++;
                                                                              }
                          //calculos
                          media_big=cont_big*100/nparticipantes;
                          media_small=cont_small*100/nparticipantes;
                                                                    
                          //exibindo resultados
                          system("cls");
                          tela();
                                        cout<<"\n\n Total de pessoas com mais de 1.80m de altura: "<<cont_big;
                                        cout<<"\n\n Total de pessoas com menos ou exatamente 1.80m de altura: "<<cont_small;
                                        cout<<"\n\n Confira em porcentagem:\n Pessoas maiores que 1.80m: "<<media_big<<"%\n Pessoas menores ou com 1.80m: "<<media_small<<"%";
getch();
}
