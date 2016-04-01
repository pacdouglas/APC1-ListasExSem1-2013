#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 5""\n";
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
int contador, qtd, idade, ver_novo=200, ver_velho=0;
    cout<<"\n\n Digite a quantidade de pessoas para verificar as idades: ";
    cin>>qtd;
             for(contador=1;contador<=qtd;contador++){
                                                      system("cls");
                                                      tela();
                                                      cout<<"\n\n Digite a idade da "<<contador<<"ª pessoa: ";
                                                      cin>>idade;
                                                      if(idade < ver_novo)
                                                      ver_novo = idade;
                                                      if(idade > ver_velho)
                                                      ver_velho = idade;
                                                      }
             //Exibindo
             system("cls");
             tela();
             cout<<"\n\n A pessoa com a maior idade digitada foi: "<<ver_velho;
             cout<<"\n\n A pessoa com a menor idade digitada foi: "<<ver_novo;                                       
getch();
}
