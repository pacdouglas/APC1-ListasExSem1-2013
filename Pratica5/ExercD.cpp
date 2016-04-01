#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 5 - Exercício:"" D""\n";
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
float tempC = 0, tempF;
      cout << "Para saber as variações de temperatudas entre 0° e 50° em Celsius e Farenheit\nPressione ENTER";
      getch();
      system("cls");
      tela();
              while (tempC <=50){
                    tempF = 1.8*tempC+32;
                    cout<<"\n "<<tempC<<"°C em F: "<<tempF;
                    tempC = tempC + 1;                            
                    }

getch();
}
