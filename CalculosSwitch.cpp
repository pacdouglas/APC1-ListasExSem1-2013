#include <iostream.h>
#include <conio.h>
#include <locale.h>
main()
{ setlocale(LC_ALL, "Portuguese");

  float Num1, Num2, Resultado;
  int Operacao;
  cout << "Insira o primeiro n�mero: ";
  cin >> Num1;
  cout << "\nInsira o segundo n�mero: ";
  cin >> Num2;
      cout << "\n\n Escolha o que deseja fazer com esses n�meros: \n";
      cout << "  1 - M�dia entre os n�meros digitados\n";
      cout << "  2 - Diferen�a do maior pelo menor\n";
      cout << "  3 - Produto entre os n�meros digitados\n";
      cout << "  4 - Divis�o do primeiro pelo segundo\n";
      cin >> Operacao;
          while (Operacao <1 && Operacao >4)
          {
                cout << "\n\n Escolha apenas uma op��o v�lida entre 1, 2, 3 ou 4. Tente novamente: "; 
                cin >> Operacao;
                }
          switch (Operacao)
          {
                 case 1:
                      Resultado = (Num1 + Num2) / 2;
                      cout << "\n\n\n   O Resultado da m�dia entre os dois n�meros foi: "<<Resultado;
                      break;
                 case 2:
                      if(Num1>Num2)
                      Resultado = Num1 - Num2;
                      else
                      Resultado = Num2 - Num1;
                      cout << "\n\n\n   O Resultado da diferen�a do maior pelo segundo foi: "<<Resultado;
                      break;
                 case 3:
                      Resultado = Num1 * Num2;
                      cout << "\n\n\n   O Resultado do produto dos dois n�meros foi: "<<Resultado;
                      break;
                 case 4:
                      Resultado = Num1 / Num2;
                      cout << "\n\n\n   O Resultado da divis�o do primeiro n�mero com o segundo foi: "<<Resultado;
                      break;
                      }
                      
getch();
}
