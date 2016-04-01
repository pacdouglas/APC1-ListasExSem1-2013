#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 6 - Exercício:"" a""\n";
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
int idade, contador, cont1=0, cont2=0, cont3=0, cont4=0;
           for(contador=1; contador<=10; contador++){
                           cout << "Digite a idade da "<<contador<<"º pessoa: ";
                           cin >> idade;
                               if(idade >=0 && idade <= 25)
                               cont1 = cont1 + 1;
                               else if(idade >= 26 && idade <= 50)
                               cont2 = cont2 + 1;
                               else if(idade >= 51 && idade <= 75)
                               cont3 = cont3 + 1;
                               else if(idade >= 76 && idade <= 90)
                               cont4 = cont4 + 1;
                               }
        
        cout << "\n\n A quantidade de pessoas com idades entre 0 e 25 é: "<<cont1;
        cout << "\n\n A quantidade de pessoas com idades entre 26 e 50 é: "<<cont2;
        cout << "\n\n A quantidade de pessoas com idades entre 51 e 75 é: "<<cont3;     
        cout << "\n\n A quantidade de pessoas com idades entre 76 e 90 é: "<<cont4;                 
getch();
}
