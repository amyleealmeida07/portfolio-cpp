// Recebe dois números e mostra o resultado das operações básicas (+, -, *, /)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b;

    cout << "Digite o primeiro valor (A): ";
    cin >> a;

    cout << "Digite o segundo valor (B): ";
    cin >> b;

    // Formata a saída para 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "\n--- Resultados das Operações ---" << endl;
    cout << "Soma (A + B): " << (a + b) << endl;
    cout << "Subtração (A - B): " << (a - b) << endl;
    cout << "Multiplicação (A * B): " << (a * b) << endl;

    // Trata a divisão por zero
    if (b != 0) {
        cout << "Divisão (A / B): " << (a / b) << endl;
    } else {
        cout << "Divisão (A / B): Não é possível dividir por zero." << endl;
    }

    return 0;
}
