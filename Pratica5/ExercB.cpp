#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 5 - Exerc�cio:"" B""\n";
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
int numero, soma = 0, positivos = 0, negativos = 0, nulos = 0, contador = 1;
    while(contador <= 10){
                   
                   cout << "\nDigite o "<<contador<<"� n�mero inteiro: ";
                   cin >> numero;
                   contador = contador + 1;
                            if (numero > 0)
                               positivos = positivos + 1;
                                         else if (numero < 0)
                                              negativos = negativos + 1;
                                                        else if (numero == 0)
                                                             nulos = nulos + 1;
                }
                
                cout << "\n\n A quantidade de n�meros positivos digitados foi: "<<positivos;
                cout << "\n\n A quantidade de n�meros negativos digitados foi: "<<negativos;
                cout << "\n\n A quantidade de n�meros nulos digitados foi: "<<nulos;
getch();
}
