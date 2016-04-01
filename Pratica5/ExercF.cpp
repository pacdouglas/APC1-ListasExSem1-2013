#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 5 - Exercício:"" F""\n";
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
char religiao;
int protestante=0, budista=0, catolico=0, contador=1;
    while(contador<=200){
                       cout<<"Digite a inicial referente a religião do "<<contador<<"º cidadão: ";
                       cin >> religiao;
    while (religiao != 'p' && religiao != 'b' && religiao != 'c'){
    cout << "\nDigite ""p"" para Protestante, ""b"" para Budista ou ""c"" para Católico\n Tente novamente:";
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
cout << "\n\n O total de pessoas protestantes dessa cidade é: "<<protestante;
cout << "\n\n O total de pessoas católicas dessa cidade é: "<<catolico;
cout << "\n\n O total de pessoas protestantes dessa cidade é: "<<budista;


getch();
}                         
