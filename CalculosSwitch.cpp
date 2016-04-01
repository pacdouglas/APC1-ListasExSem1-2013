#include <iostream.h>
#include <conio.h>
#include <locale.h>
main()
{ setlocale(LC_ALL, "Portuguese");

  float Num1, Num2, Resultado;
  int Operacao;
  cout << "Insira o primeiro número: ";
  cin >> Num1;
  cout << "\nInsira o segundo número: ";
  cin >> Num2;
      cout << "\n\n Escolha o que deseja fazer com esses números: \n";
      cout << "  1 - Média entre os números digitados\n";
      cout << "  2 - Diferença do maior pelo menor\n";
      cout << "  3 - Produto entre os números digitados\n";
      cout << "  4 - Divisão do primeiro pelo segundo\n";
      cin >> Operacao;
          while (Operacao <1 && Operacao >4)
          {
                cout << "\n\n Escolha apenas uma opção válida entre 1, 2, 3 ou 4. Tente novamente: "; 
                cin >> Operacao;
                }
          switch (Operacao)
          {
                 case 1:
                      Resultado = (Num1 + Num2) / 2;
                      cout << "\n\n\n   O Resultado da média entre os dois números foi: "<<Resultado;
                      break;
                 case 2:
                      if(Num1>Num2)
                      Resultado = Num1 - Num2;
                      else
                      Resultado = Num2 - Num1;
                      cout << "\n\n\n   O Resultado da diferença do maior pelo segundo foi: "<<Resultado;
                      break;
                 case 3:
                      Resultado = Num1 * Num2;
                      cout << "\n\n\n   O Resultado do produto dos dois números foi: "<<Resultado;
                      break;
                 case 4:
                      Resultado = Num1 / Num2;
                      cout << "\n\n\n   O Resultado da divisão do primeiro número com o segundo foi: "<<Resultado;
                      break;
                      }
                      
getch();
}
