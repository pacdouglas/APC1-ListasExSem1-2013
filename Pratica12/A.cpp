#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 12 - Exerc�cio:"" 3.A""\n";
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
char s[50], letra, qtd, valid=0;
int i, aux;
cout<<"\nDigite uma frase para a string: ";
gets(s);
cout<<"\n\n Digite uma letra qualquer: ";
cin>>letra;
qtd=strlen(s);
for(i=0;i<qtd;i++){
                   if(s[i]==letra){
                                   aux=i;
                                   valid=1;
                                   i=qtd;
                   }
}
if(valid==1)
cout<<"\n\n  A letra escolhida est� na posi��o "<<aux<<" do seu vetor.";
else
cout<<"\n\n N�o foi encontrado a letra escolhida em sua frase";
getch();
}
