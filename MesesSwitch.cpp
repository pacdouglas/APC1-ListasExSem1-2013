#include <iostream.h>
#include <conio.h>
#include <locale.h>
main()
{ setlocale(LC_ALL, "Portuguese");
  
  int Mes;
    cout << "Insira o n�mero referente ao m�s: ";
    cin >> Mes;
    switch (Mes)
    {
           case 1:
                Mes=1;
                cout << "Janeiro";
                break;
           case 2:
                Mes=2;
                cout << "Fevereiro";
                break;
           case 3:
                Mes=3;
                cout << "Mar�o";
                break;
           case 4:
                Mes=4;
                cout << "Abril";
                break;
           case 5:
                Mes=5;
                cout << "Maio";
                break;
           case 6:
                Mes=6;
                cout << "Junho";
                break;
           case 7:
                Mes=7;
                cout << "Julho";
                break;
           case 8:
                Mes=8;
                cout << "Agosto";
                break;
           case 9:
                Mes=9;
                cout << "Setembro";
                break;
           case 10:
                Mes=10;
                cout << "Outubro";
                break;
           case 11:
                Mes=11;
                cout << "Novembro";
                break;
           case 12:
                Mes=12;
                cout << "Dezembro";
                break;
                }      

getch();
}
