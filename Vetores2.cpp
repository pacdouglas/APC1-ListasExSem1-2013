#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                      Vetores - Exercício Teoria:"" 2""\n";
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
int i=0, cont=1, numero[10];
float media, contimpar=0, somaimpar=0;
      for(i=0; i<10; i++){
               cout << "\n Digite o "<<cont<<"º número qualquer: ";
               cin >> numero[i];
               cont++;
                      if(numero[i]%2!=0){
                      contimpar++;
                      somaimpar=somaimpar+numero[i];
                      }
}
if(contimpar==0)
contimpar=1;
system("cls");
tela();
                      media=somaimpar/contimpar;
                      cout<<"A média aritimética dos números impares foi: "<<media;
getch();
}
