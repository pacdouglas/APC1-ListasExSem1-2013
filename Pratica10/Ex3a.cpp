#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <string.h>
void tela(){
       cout << "================================================================================";
       cout << "                       String - Exercício:"" 1""\n";
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
char senha[30];
int aux;

do{
   cout<<"\n Digite a senha: ";
   cin>>senha;
   aux=strcmp(senha, "apc1")
   if(aux!=0)
   cout<<"\n Senha Invalida! ";
}
while(aux!=0)
cout<<"\n Senha Correta!";
getch();
}
