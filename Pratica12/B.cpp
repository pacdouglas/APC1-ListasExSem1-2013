#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <string.h>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 12 - Exercício:"" 3.B""\n";
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
char string[50];
int i, n;
cout<<"Digite um texto para a string: ";
gets(string);
n=strlen(string);
for(i=0;i<n;i++){
                 if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'){
                 string[i]='#';
                 }
}
cout<<"\n\n Configura a nova string sem vogais: ";
cout<<string;
getch();
}
