#include <iostream>
#include <string>

using namespace std;

int main() {
  // Sintaxe básica de operadores ternários
  // condição ? valor_se_verdadeiro : valor_se_falso

  // std::setlocale(LC_ALL, "");

  // Comparação simples
  int x = 10;
  int y = 5;

  // Determina o maior número
  int max_value = (x > y) ? x : y;
  cout << "Maior valor: " << max_value << endl;

  // Check if a number is even or odd
  int number = 7;
  string result = (number % 2 == 0) ? "PAR" : "IMPAR";
  cout << number << " E " << result << endl;

  // Operador ternário aninhado
  int a = 15;
  string category = (a < 10) ? "Pequeno" : (a < 20) ? "Medio" : "Grande";

  cout << "Categoria: " << category << endl;

  // Ternary operator with function calls
  int abs_value = (x < 0) ? -x : x;
  cout << "Valor Absoluto de x: " << abs_value << endl;

  // Ternary operator in output
  cout << "x maior que y? " << ((x > y) ? "Verdadeiro" : "Falso") << endl;

  return 0;
}