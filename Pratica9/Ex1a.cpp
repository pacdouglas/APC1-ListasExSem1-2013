#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 09 - Exercício:"" 1.a""\n";
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
float totalV[12], totalG[12], lucro[12], total=0;
int i, cont=1;
      for(i=0;i<12;i++){
                     cout<<"\nMês "<<cont;
                     cout<<"\n  Insira o valor total das vendas: "<<"R$";
                     cin>>totalV[i];
                     cout<<"\n  Insira o valor total dos gastos: "<<"R$";
                     cin>>totalG[i];
                     system("cls");
                     tela();
                     cont++;
                     }
                     cont=1;
                     
                          for(i=0;i<12;i++){
                          lucro[i] = totalV[i] - totalG[i];
                          total=total+lucro[i];
                          }
                                                     
                                                     cout<<"\n Lucro no mês de Janeiro   "<<"R$"<<lucro[0];
                                                     cout<<"\n Lucro no mês de Fevereiro "<<"R$"<<lucro[1];
                                                     cout<<"\n Lucro no mês de Março     "<<"R$"<<lucro[2];
                                                     cout<<"\n Lucro no mês de Abril     "<<"R$"<<lucro[3];
                                                     cout<<"\n Lucro no mês de Maio      "<<"R$"<<lucro[4];
                                                     cout<<"\n Lucro no mês de Junho     "<<"R$"<<lucro[5];
                                                     cout<<"\n Lucro no mês de Julho     "<<"R$"<<lucro[6];
                                                     cout<<"\n Lucro no mês de Agosto    "<<"R$"<<lucro[7];
                                                     cout<<"\n Lucro no mês de Setembro  "<<"R$"<<lucro[8];
                                                     cout<<"\n Lucro no mês de Outubro   "<<"R$"<<lucro[9];
                                                     cout<<"\n Lucro no mês de Novembro  "<<"R$"<<lucro[10];
                                                     cout<<"\n Lucro no mês de Dezembro  "<<"R$"<<lucro[11];
                                                     cout<<"\n\n   Lucro total anual: "<<total;
                          
                        
                                                     
                            
getch();
}
