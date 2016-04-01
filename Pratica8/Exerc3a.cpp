#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
void tela(){
       cout << "================================================================================";
       cout << "                       Pratica 08 - Exercício:"" 3.a""\n";
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
int i, vetorA[50], vetorB[50], vetorC[50], cont=1, contpar=0, contimpar=0;
       for(i=0;i<10;i++){
                      cout<<"\n Digite o "<<cont<<"º número qualquer: ";
                      cin>>vetorA[i];                  
                      cont++;
}

cont=0;
       for(i=0;i<10;i++){
              if(vetorA[i]%2==0){
              vetorB[cont]=vetorA[i];
              cont++;
              contpar++;
              }
}

cont=0;
       for(i=0;i<10;i++){
              if(vetorA[i]%2!=0){
              vetorC[cont]=vetorA[i];
              cont++;
              contimpar++;
              }
} 

system("cls");
tela();

       cout<<"\n\n  Números pares: / ";
                     for(i=0;i<contpar;i++)
                     cout<<vetorB[i]<<" / ";
                     
        cout<<"\n\n  Números impares: / ";
                     for(i=0;i<contimpar;i++)
                     cout<<vetorC[i]<<" / ";
                            
getch();
}
