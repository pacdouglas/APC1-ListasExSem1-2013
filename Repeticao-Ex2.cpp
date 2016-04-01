#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                            Estrutura de Repetição - Ex2\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
tela();
//Inicio
int numero, positivos, negativos, nulos, contador;
contador = 1;
positivos = 0;
negativos = 0;
nulos = 0;
while (contador <= 10){
      cout << "Digite o "<<contador<<"º numero: ";
      cin >> numero;
      if (numero>0)
      positivos = positivos + 1;
      else if (numero<0)
      negativos = negativos + 1;
      else if (numero==0)
      nulos = nulos + 1;
      contador = contador + 1;
      }
      cout << "\n\nVocê digitou "<<positivos<<" numeros positivos.\n\n";
      cout << "Você digitou "<<negativos<<" numeros negativos.\n\n";
      cout << "Você digitou "<<nulos<<" numeros nulos.";
getch();
}
