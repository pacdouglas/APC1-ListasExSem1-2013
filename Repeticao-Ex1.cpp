#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                                  Banner\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personaliza��o de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
tela();
//Inicio
int idade, somaid, contador;
float media;
somaid = 0;
contador = 1;
while (contador <= 15){
      cin >> idade;
      somaid = somaid + idade;
      contador = contador +1;
      }
      cout << "A soma das idades �: "<< somaid;
      media = somaid / 15;
      cout << "\n\n  A m�dia das idades �: "<< media;
getch();
}
