#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 5 - Exerc�cio:"" A""\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personaliza��o de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
//Banner
system("cls");ss
tela();
//Inicio
int contador = 1;
float soma = 0, media, idade;
while (contador <=5){
      cout << "\nDigite a Idade do "<<contador<<"� aluno: ";
      cin >> idade;
      soma = soma + idade;
      contador = contador + 1;
      }
      media = soma / 5;
      cout << "\n\nA soma das idades dos 5 alunos �: "<<soma;
      cout << "\n\n  A m�dia entre as 5 idades dos alunos �: "<<media;                   
getch();
}
