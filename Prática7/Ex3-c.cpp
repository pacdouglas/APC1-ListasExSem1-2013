#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 7 - Exerc�cio:"" 3.c""\n";
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
int escolha, cont;
float nota1, nota2, mediaA, nota3, peso1, peso2, peso3, mediaP;


cout<< "                                   Menu de Op��es\n";
cout<< "\nDigite a op��o de c�lculo e pressione ENTER";
cout<< "\n\n 1 - M�dia Aritim�tica\n 2 - M�dia Ponderada\n 3 - Sair";
cin>>escolha; 
       while(escolha!=1 && escolha!=2 && escolha!=3){
       cout<<"\n Digite apenas valores v�lidos!\n   \n\n 1 - M�dia Aritim�tica\n 2 - M�dia Ponderada\n 3 - Sair\n";
       cin>>escolha;  
       }   
           if(escolha==1)
           system("cls");
           tela();
                      



getch();
}
