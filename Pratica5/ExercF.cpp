#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Pr�tica 5 - Exerc�cio:"" F""\n";
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
char religiao;
int protestante=0, budista=0, catolico=0, contador=1;
    while(contador<=200){
                       cout<<"Digite a inicial referente a religi�o do "<<contador<<"� cidad�o: ";
                       cin >> religiao;
    while (religiao != 'p' && religiao != 'b' && religiao != 'c'){
    cout << "\nDigite ""p"" para Protestante, ""b"" para Budista ou ""c"" para Cat�lico\n Tente novamente:";
    cin >> religiao;}
                          if (religiao=='c')
                          catolico = catolico+1;
                                   else if (religiao=='p')
                                   protestante = protestante+1;
                                               else if (religiao=='b')
                                               budista = budista+1;
    contador = contador + 1;
}
system("cls");
tela();
cout << "\n\n O total de pessoas protestantes dessa cidade �: "<<protestante;
cout << "\n\n O total de pessoas cat�licas dessa cidade �: "<<catolico;
cout << "\n\n O total de pessoas protestantes dessa cidade �: "<<budista;


getch();
}                         
