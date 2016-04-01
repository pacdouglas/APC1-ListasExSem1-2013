#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Aquecimento - Exercício:"" 1""\n";
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
int contador, contdiv = 0, numero;
float div = 0, divfinal;

for (contador=1; contador<=20; contador++){
    cout << "Digite o "<<contador<<"º número: ";
    cin >> numero;
    if (numero%5==0){
    div = div + numero;
    contdiv = contdiv + 1;
    }
}
divfinal = div / contdiv;
cout << "\n\n   A quantidade de números divisíveis por 5 foi: " <<contdiv;
cout << "\n\n   A média dos números divisíveis por 5 foi: " << divfinal;
getch();
}
