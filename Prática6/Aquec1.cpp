#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Aquecimento - Exerc�cio:"" 1""\n";
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
int contador, contdiv = 0, numero;
float div = 0, divfinal;

for (contador=1; contador<=20; contador++){
    cout << "Digite o "<<contador<<"� n�mero: ";
    cin >> numero;
    if (numero%5==0){
    div = div + numero;
    contdiv = contdiv + 1;
    }
}
divfinal = div / contdiv;
cout << "\n\n   A quantidade de n�meros divis�veis por 5 foi: " <<contdiv;
cout << "\n\n   A m�dia dos n�meros divis�veis por 5 foi: " << divfinal;
getch();
}
