#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                           Lista3 - Exercício:"" 8""\n";
       cout << "================================================================================\n";
       }
main()
{ 
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
//Inicio
float TF, TC;
int contador = 1;
    for(contador=1;contador<=10;contador++){
                                            system("cls");
                                            tela();
                                            cout<<"Digite a temperatura em Fahrenheit do "<<contador<<"º dia: ";
                                            cin>>TF;
                                            TC=(TF-32)/1.8;
                                            cout<<"\n\n   ******************Verificando Temperatura em Celsius******************\n\n";
                                            if (TC<5)
                                            cout<<"    Super Frio!";
                                            else if (TC>=5 && TC<10)
                                            cout<<"    Frio!";
                                            else if (TC>=10 && TC<20)
                                            cout<<"    Fresco!"; 
                                            else if (TC>=20 && TC<30)
                                            cout<<"    Quente!";     
                                            else if (TC>=30)
                                            cout<<"    Super Quente!";
                                            cout<<"\n\n\n\n\n\n\n\n\n Pressione ENTER para ir ao próximo dia.";
                                            getch();
                                            
                                            }
}
