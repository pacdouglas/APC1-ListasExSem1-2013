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
char str1[50], str2[50], Sconcat[50];
int i, n, m, o=0;
cout<<" Digite a primeira string: ";
gets(str1);
n=strlen(str1);
cout<<"\n\n Digite a segunda string: ";
gets(str2);
m=strlen(str2);
for(i=0;i<n;i++)
Sconcat[i]=str1[i];
for(i=n;i<m+3;i++){
Sconcat[i]=str2[o];
o++;
}
cout<<"\n\nConfigura as strings concatenadas: "<<Sconcat;   
getch();
}
