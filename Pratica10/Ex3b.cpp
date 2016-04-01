#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 10 - Exercício:"" 3.2""\n";
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
int matriz[3][5], qtd=0, i, j;
//Linhas
for(i=0; i<3; i++){
         //Colunas
         for(j=0; j<5; j++){
                  cout<<"\nInsira um valor para a Matriz: ";
                  cin>>matriz[i][j];
                  if(matriz[i][j]>=15 && matriz[i][j]<=20)
                  
                  qtd++;
         }
}
if(qtd==0)
             cout<<"\n\nNão houveram números entre 15 e 20";
else
     cout<<"\n\nA quantidade de elementos digitados entre 15 e 20 foi: "<<qtd;
     
getch();
}
