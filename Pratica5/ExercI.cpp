#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 5 - Exercício:"" I""\n";
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
int contador = 1;
float notaP, notaT, media;

      while (contador <= 50){
            cout << "\n "<<contador<<"º aluno - Digite a nota do trabalho: "; cin >> notaT;
            cout << "\n "<<contador<<"º aluno - Digite a nota da prova: "; cin >> notaP;
            cout << "\n\n ";
                 media = (notaT*2+notaP*8)/10;
                       if (media >= 5)
                       cout << "Aluno "<<contador<<" aprovado!\n\n ";
                       else
                       cout << "Aluno "<<contador<<" reprovado!\n\n ";
                       cout << "________________________________________________________________\n\n";
                       contador = contador + 1;
                       }
                       
getch();
}       
