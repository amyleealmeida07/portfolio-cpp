// Calcula a área de um triângulo usando base e altura digitadas pelo usuário

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double base, altura, area;

    cout << "Digite o valor da base do triângulo: ";
    cin >> base;

    cout << "Digite o valor da altura do triângulo: ";
    cin >> altura;

    area = (base * altura) / 2.0;

    // Formata a saída para 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "A área do triângulo é: " << area << endl;

    return 0;
}
