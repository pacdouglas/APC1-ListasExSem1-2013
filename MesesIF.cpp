#include <iostream.h>
#include <conio.h>
#include <locale.h>
main()
{ setlocale(LC_ALL, "Portuguese");

int Mes;
    cout << "Insira o n�mero referente ao m�s: ";
    cin >> Mes;
           while (Mes <1 || Mes >12)
           {
                 cout << "Digite apenas valores v�lidos, referente aos m�ses do ano\n";
                 cin >> Mes;
                 }
        if (Mes==1)
        cout << "Janeiro";
        else if (Mes==2)
        cout << "Fevereiro";
        else if (Mes==3)
        cout << "Mar�o";
        else if (Mes==4)
        cout << "Abril";
        else if (Mes==5)
        cout << "Maio";
        else if (Mes==6)
        cout << "Junho";
        else if (Mes==7)
        cout << "Julho";
        else if (Mes==8)
        cout << "Agosto";
        else if (Mes==9)
        cout << "Setembro";
        else if (Mes==10)
        cout << "Outubro";
        else if (Mes==11)
        cout << "Novembro";
        else if (Mes==12)
        cout << "Dezembro";
        

getch();
}
