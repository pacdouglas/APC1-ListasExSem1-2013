#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

main()
{ setlocale(LC_ALL, "Portuguese");
  float Preco, PDesconto, PrecoF;
  cout.precision(2);
      cout << setiosflags (ios::fixed);
  cout << "Digite o valor do produto: ";
  cin >> Preco;
      if (Preco > 0 && Preco < 30)
      {
         cout << "\nProdutos até R$30,00 não ganham desconto.\n\n";
         cout << "\n\n   Valor a pagar = R$" << Preco;
         }
      else if (Preco >= 30 && Preco <= 100)
      {
           PDesconto = Preco * 10 / 100;
           PrecoF = Preco - PDesconto;
           cout << "\nProdutos entre R$30,00 e R$100,00 ganham 10% de desconto.\n\n";
           cout << "\nValor do desconto = R$" << PDesconto;
           cout << "\n\n   Valor a pagar = R$" << PrecoF;
           }
      else if (Preco >= 101)
      {
           PDesconto = Preco * 15 / 100;
           PrecoF = Preco - PDesconto;
           cout << "\nProdutos com valor maior que R$100,00 ganham 15% de desconto.\n\n";
           cout << "\n\nValor do desconto = R$" << PDesconto;
           cout << "\n\n   Valor a pagar = R$" << PrecoF;
           }    

getch();

}
