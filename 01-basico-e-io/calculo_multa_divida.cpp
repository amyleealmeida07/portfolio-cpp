// Calcula a multa por dias de atraso e o valor total de uma dívida

#include <iostream>

using namespace std;

int main() {
    double valor_original, multa_por_dia;
    int dias;
    
    cout << "Informe o valor original da dívida (R$): ";
    cin >> valor_original;
    
    cout << "Informe a quantidade de dias em atraso: ";
    cin >> dias;
    
    cout << "Informe o valor da multa por dia de atraso (R$): ";
    cin >> multa_por_dia;
    
    double valor_multa = dias * multa_por_dia;
    double total_divida = valor_original + valor_multa;
    
    cout << "O valor total da multa é: R$ " << valor_multa << endl;
    cout << "O valor total da dívida em atraso é: R$ " << total_divida << endl;
    
    return 0;
}
