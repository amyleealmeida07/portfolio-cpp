// Calcula o consumo de combustível e o custo total de uma viagem

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valorLitro, distanciaTotal, consumoMedio, litrosGastos, custoTotal;

    cout << "Informe o valor do litro do combustível: R$ ";
    cin >> valorLitro;

    cout << "Informe a distância total percorrida (em Km): ";
    cin >> distanciaTotal;

    cout << "Informe o consumo médio do veículo (Km por litro): ";
    cin >> consumoMedio;

    litrosGastos = distanciaTotal / consumoMedio;
    custoTotal = litrosGastos * valorLitro;

    // Formata a saída para 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "\n--- Resumo da Viagem ---" << endl;
    cout << "Total de litros gastos: " << litrosGastos << " L" << endl;
    cout << "Custo total com combustível: R$ " << custoTotal << endl;

    return 0;
}
