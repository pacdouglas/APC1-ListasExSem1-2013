#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Prática 7 - Exercício:"" 3.b""\n";
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
int idade, npessoas, contador, cont50e60=0, contOlhosA=0, contRuivas=0;
float peso, altura, media150, percentOlhosA, somaidade=0, contMenor150=0;
char corO, corC;
cout<<"Digite o número de pessoas a serem analisadas: ";
cin>>npessoas;
              for(contador=1;contador<=npessoas;contador++){
              cout<<"\nDigite a idade da "<<contador<<"ª pessoa: ";
              cin>>idade;
              somaidade=somaidade+idade;
              cout<<"\nDigite o peso da "<<contador<<"ª pessoa: ";
              cin>>peso;
                        if(idade>50 && peso<60)
                        cont50e60++;
              cout<<"\nDigite a altura da "<<contador<<"ª pessoa: ";
              cin>>altura;
                          if(altura<1.50)
                          contMenor150++;
                          
              cout<<"\nDigite a cor de olhos da "<<contador<<"ª pessoa\n (A- Azul / P - Preto / V - Verde / C - Castanho): ";
              cin>>corO;
                        while(corO!='A' && corO!='P' && corO!='V' && corO!='C'){
                              cout<<"Digite apenas valores válidos! \n (A- Azul / P - Preto / V - Verde / C - Castanho): ";
                              cin>>corO;
                              }
                                        if(corO=='A')
                                        contOlhosA++;
              cout<<"\nDigite a cor dos cabelos da "<<contador<<"ª pessoa\n (P - Preto / C - Castanho / L - Louro / R - Ruivo): ";
              cin>>corC;
                        while(corC!='P' && corC!='C' && corC!='L' && corC!='R'){
                              cout<<"Digite apenas valores válidos! \n (P - Preto / C - Castanho / L - Louro / R - Ruivo): ";
                              cin>>corC;
                              } 
                                        if(corC=='R' && corO!='A')
                                        contRuivas++;
                                        system("cls");
                                        tela();
                                        }
                                        
                                        //Calculos
                                        media150 = somaidade/contMenor150;
                                        percentOlhosA = contOlhosA * 100 / npessoas;
                                        
                                        
                                                                             //Exibindo
                                                                                       system("cls");
                                                                                       tela();
                                                                                       cout<<"\n\n  Pessoas com idade superior a 50 e com peso inferior a 60: "<<cont50e60;
                                                                                       cout<<"\n\n  Média das idades de pessoas com menos de 1.50 de altura: "<<media150;
                                                                                       cout<<"\n\n  Percentual de pessoas com olhos azuis: "<<percentOlhosA<<"%";
                                                                                       cout<<"\n\n  Quantidade de pessoas ruivas que não possuem olhos azuis: "<<contRuivas;
getch();
}
