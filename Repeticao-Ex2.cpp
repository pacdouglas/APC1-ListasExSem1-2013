#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                            Estrutura de Repeti��o - Ex2\n";
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
int numero, positivos, negativos, nulos, contador;
contador = 1;
positivos = 0;
negativos = 0;
nulos = 0;
while (contador <= 10){
      cout << "Digite o "<<contador<<"� numero: ";
      cin >> numero;
      if (numero>0)
      positivos = positivos + 1;
      else if (numero<0)
      negativos = negativos + 1;
      else if (numero==0)
      nulos = nulos + 1;
      contador = contador + 1;
      }
      cout << "\n\nVoc� digitou "<<positivos<<" numeros positivos.\n\n";
      cout << "Voc� digitou "<<negativos<<" numeros negativos.\n\n";
      cout << "Voc� digitou "<<nulos<<" numeros nulos.";
getch();
}
