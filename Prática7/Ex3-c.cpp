#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 7 - Exercício:"" 3.c""\n";
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
int escolha, cont;
float nota1, nota2, mediaA, nota3, peso1, peso2, peso3, mediaP;


cout<< "                                   Menu de Opções\n";
cout<< "\nDigite a opção de cálculo e pressione ENTER";
cout<< "\n\n 1 - Média Aritimética\n 2 - Média Ponderada\n 3 - Sair";
cin>>escolha; 
       while(escolha!=1 && escolha!=2 && escolha!=3){
       cout<<"\n Digite apenas valores válidos!\n   \n\n 1 - Média Aritimética\n 2 - Média Ponderada\n 3 - Sair\n";
       cin>>escolha;  
       }   
           if(escolha==1)
           system("cls");
           tela();
                      



getch();
}
