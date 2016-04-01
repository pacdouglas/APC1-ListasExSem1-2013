#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 6 - Exercício:"" b""\n";
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
int contador, idade, total_homens=0, total_mulheres=0;
char sexo;
float salario, porc_homens, homens30=0, salario_total, salario_media, homens_media;

      for(contador=1;contador<=10;contador++){
                                              cout << "\n\n Digite a idade do "<<contador<<"º habitante: ";
                                              cin >> idade;
                                              cout << "\n Digite o sexo do "<<contador<<"º habitante(M=Masculino/F=Feminino): ";
                                              cin >> sexo;
                                                  while(sexo!='m' && sexo!='f'){
                                                  cout << " \n Digite apenas valores válidos. Digite m para Masculino ou f. \n  Tente novamente: ";
                                                  cin >> sexo;
                                                  }
                                                  if (sexo=='m')
                                                     total_homens++;
                                                  if (sexo=='m' && idade>30)
                                                     homens30++;
                                              cout << " \n Digite o salário do "<<contador<<"º habitante: ";
                                              cin >> salario;
                                              salario_total = salario_total+salario;
                                                     if (sexo=='f' || sexo=='F' && salario<=700)
                                                     total_mulheres++;
                                                     system("cls");
                                                     tela();
                                                     }
      //Calculos
      salario_media=salario_total/10;
      porc_homens=homens30 * 100 / total_homens;
                                                     //Exibindo
                                                               system("cls");
                                                               tela();
                                                               cout << "\n\n A média de salário de todo o grupo é: "<<salario_media;
                                                               cout << "\n\n A quantidade de mulheres com salário até R$700,00 é: "<<total_mulheres;
                                                               cout << "\n\n A porcentagem de homens com idade superior a 30 anos é: "<<porc_homens<<"%";
getch();
}
