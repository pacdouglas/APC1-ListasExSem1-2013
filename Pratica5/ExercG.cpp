#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 5 - Exerc�cio:"" G""\n";
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
int contador = 1;
float altura, maiores = 0, menores = 0, maioresPorc, menoresPorc;
      while (contador <= 10){
            cout << "\n Digite a altura do "<<contador<<"� participante: "; cin >> altura;
            if (altura <= 1.80)
            menores = menores + 1;
            else
            maiores = maiores + 1;
            contador = contador + 1;
            }
            cout << "\n\n\n"<<menores<<"\n";
            menoresPorc = menores * 100 / 10;
            maioresPorc = maiores * 100 / 10;
            
            cout << "\n\n   A porcentagem de atletas com altura maior que 1.80 �: "<< maioresPorc<<"%";
            cout << "\n\n   A porcentagem de atletas com altura menor que 1.80 �: "<< menoresPorc<<"%\n";
getch();
}       
