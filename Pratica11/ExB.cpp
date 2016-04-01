#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 11 - Exercício:"" 3.B""\n";
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
int estoque[4][4], cont=1, i, j, total_ar1, total_ar2, total_ar3;
for(i=0;i<4;i++){                 
                 cout<<"\nInsira o custo do "<<cont<<"º produto: ";
                 cin>>estoque[3][i];
                 cont++;
}
system("cls");
tela();
cont=1;
//linha
for(i=0;i<3;i++){
                 //coluna
                 for(j=0;j<4;j++){
                                  cout<<"\n\nInsira a quantidade do "<<j+1<<"º produto no "<<cont<<"º armazém: ";
                                  cin>>estoque[i][j];                                  
                 }
                 cont++;
}
for(i=0;i>3;i++){
                 if(i==0)
                 total_ar1=estoque[i][j]+total_ar1;
                 if(i==1)
                 total_ar2=estoque[i][j]+total_ar2;
                 if(i==2)
                 total_ar3=estoque[i][j]+total_ar3;                 
                 j++;
}
getch();
}
