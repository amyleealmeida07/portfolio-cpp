// Converte a temperatura de Fahrenheit para Celsius

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Digite a temperatura em graus Fahrenheit: ";
    cin >> fahrenheit;

    celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;

    cout << fixed << setprecision(2);
    cout << "A temperatura em graus Celsius é: " << celsius << " °C" << endl;

    return 0;
}
