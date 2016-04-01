#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 5 - Exercício:"" A""\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personalização de Cor
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
      cout << "\nDigite a Idade do "<<contador<<"º aluno: ";
      cin >> idade;
      soma = soma + idade;
      contador = contador + 1;
      }
      media = soma / 5;
      cout << "\n\nA soma das idades dos 5 alunos é: "<<soma;
      cout << "\n\n  A média entre as 5 idades dos alunos é: "<<media;                   
getch();
}
