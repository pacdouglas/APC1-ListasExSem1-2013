#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 5 - Exerc�cio:"" I""\n";
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
int contador = 1, numero, inter1 = 0, inter2 = 0, inter3 = 0, inter4 = 0;
    while (contador <= 30){
          cout << "Digite 30 n�meros inteiros e positivos quaisquer. "<<contador<<"� n�mero: "; cin >> numero;
          //elimitando n�meros negativos.
          if (numero < 0 && numero > 100){cout << "\n\n  Digite apenas n�meros inteiros e positivos! (Entre 0 e 100)\n Tente novamente: ";cin>>numero;}
          //condicionais
          else if (numero >= 0 && numero <= 25)
          inter1 = inter1 + 1;
                 else if (numero > 25 && numero <= 50)
                 inter2 = inter2 + 1;
                        else if (numero > 50 && numero <= 75)
                        inter3 = inter3 + 1;
                               else if (numero > 75 && numero <= 100)
                               inter4 = inter4 + 1;
                               contador = contador + 1;
                               }
                               
    cout << "\n\n Voc� digitou "<<inter1<<" n�meros entre 0 e 25";
        cout << "\n\n Voc� digitou "<<inter2<<" n�meros entre 26 e 50";
            cout << "\n\n Voc� digitou "<<inter3<<" n�meros entre 51 e 75";
                cout << "\n\n Voc� digitou "<<inter4<<" n�meros entre 76 e 100";

getch();
} 
