#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                      Vetores - Exerc�cio Teoria:"" 1""\n";
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
int i, cont=1;
float numero[50], maior=0;
    for(i=0; i<50; i++){  
    cout << "\n\n Digite o "<<cont<<"� n�mero qualquer: ";
    cin >> numero[i];
    cont++;
        if(i==0)
        maior=numero[i];
        else if(numero[i]>maior)
        maior=numero[i];     
}
        system("cls");
        tela();
               cout<<"\n\n  O maior n�mero digitado foi: "<<maior;
        
getch();
}
