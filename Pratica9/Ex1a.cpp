#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 09 - Exerc�cio:"" 1.a""\n";
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
float totalV[12], totalG[12], lucro[12], total=0;
int i, cont=1;
      for(i=0;i<12;i++){
                     cout<<"\nM�s "<<cont;
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
                                                     
                                                     cout<<"\n Lucro no m�s de Janeiro   "<<"R$"<<lucro[0];
                                                     cout<<"\n Lucro no m�s de Fevereiro "<<"R$"<<lucro[1];
                                                     cout<<"\n Lucro no m�s de Mar�o     "<<"R$"<<lucro[2];
                                                     cout<<"\n Lucro no m�s de Abril     "<<"R$"<<lucro[3];
                                                     cout<<"\n Lucro no m�s de Maio      "<<"R$"<<lucro[4];
                                                     cout<<"\n Lucro no m�s de Junho     "<<"R$"<<lucro[5];
                                                     cout<<"\n Lucro no m�s de Julho     "<<"R$"<<lucro[6];
                                                     cout<<"\n Lucro no m�s de Agosto    "<<"R$"<<lucro[7];
                                                     cout<<"\n Lucro no m�s de Setembro  "<<"R$"<<lucro[8];
                                                     cout<<"\n Lucro no m�s de Outubro   "<<"R$"<<lucro[9];
                                                     cout<<"\n Lucro no m�s de Novembro  "<<"R$"<<lucro[10];
                                                     cout<<"\n Lucro no m�s de Dezembro  "<<"R$"<<lucro[11];
                                                     cout<<"\n\n   Lucro total anual: "<<total;
                          
                        
                                                     
                            
getch();
}
