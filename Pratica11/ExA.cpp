#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 11 - Exercício:"" 3.A""\n";
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
float vendas[3][4], vendas_total=0, vendas_ind1=0, vendas_ind2=0, vendas_ind3=0, vendas_sem1=0, vendas_sem2=0, vendas_sem3=0, vendas_sem4=0;
int i, j, cont=1;
//linhas
for(i=0;i<3;i++){
                 //colunas
                 for(j=0;j<4;j++){
                                  cout<<"\nInsira o valor das vendas do "<<cont<<"º vendedor na "<<j+1<<"ª semana: ";
                                  cin>>vendas[i][j];
                                  vendas_total=vendas_total+vendas[i][j];
                                  if(i==0)
                                  vendas_ind1=vendas_ind1+vendas[i][j];
                                  if(i==1)
                                  vendas_ind2=vendas_ind2+vendas[i][j];
                                  if(i==2)
                                  vendas_ind3=vendas_ind3+vendas[i][j];
                                  if(j==0)
                                  vendas_sem1=vendas_sem1+vendas[i][j];
                                  if(j==1)
                                  vendas_sem2=vendas_sem2+vendas[i][j];
                                  if(j==2)
                                  vendas_sem3=vendas_sem3+vendas[i][j];
                                  if(j==3)
                                  vendas_sem4=vendas_sem4+vendas[i][j];                                  
                 }                
                 cont++;                 
}                 
system("cls");
tela();         
cout<<"\n\n Total de todos os vendedores no mês: "<<vendas_total;
cout<<"\n\n Total do vendedor1: "<<vendas_ind1;
cout<<"\n Total do vendedor2: "<<vendas_ind2;
cout<<"\n Total do vendedor3: "<<vendas_ind3; 
cout<<"\n Total da 1ª semana: "<<vendas_sem1;
cout<<"\n Total da 2ª semana: "<<vendas_sem2;
cout<<"\n Total da 3ª semana: "<<vendas_sem3;
cout<<"\n Total da 4ª semana: "<<vendas_sem4;  
getch();
}
