#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 4""\n";
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
int contador, nalunos;
float notaP, notaT, media;
      cout<<"Digite o número de alunos: ";
      cin>>nalunos;
      system("cls");
      tela();
                   for(contador=1;contador<=nalunos;contador++){
                                                                cout<<"\n ***************** Aluno "<<contador<<"******************";
                                                                cout<<"\n    Digite a nota do Trabalho: ";
                                                                cin>>notaT;
                                                                cout<<"\n    Digite a nota da Prova: ";
                                                                cin>>notaP;
                                                                media=((notaT*2)+(notaP*8))/10;
                                                                                               if(media>=5)
                                                                                               cout<<"\n\n     Aluno "<<contador<<": APROVADO!";
                                                                                               else
                                                                                               cout<<"\n\n     Aluno "<<contador<<": REPROVADO!";
                                                                cout<<"\n\n\n\n\n\n\n\n\n\n\n  Pressione ENTER para ir ao Próximo aluno";
                                                                getch();                                                                                                                                                         
                                                                system("cls");
                                                                tela();
                                                                }
}
