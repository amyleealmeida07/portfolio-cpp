// Calcula o salário bruto e líquido aplicando o desconto do INSS

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double totalHoras, valorHoraAula, salarioBruto, salarioLiquido, descontoINSS;
    const double PERCENTUAL_INSS = 0.12;

    cout << "Informe o total de horas trabalhadas: ";
    cin >> totalHoras;

    cout << "Informe o valor da hora-aula: R$ ";
    cin >> valorHoraAula;

    salarioBruto = totalHoras * valorHoraAula;

    descontoINSS = salarioBruto * PERCENTUAL_INSS;
    salarioLiquido = salarioBruto - descontoINSS;

    // Formata a saída para 2 casas decimais
    cout << fixed << setprecision(2);
    cout << "\n--- Folha de Pagamento ---" << endl;
    cout << "Salário Bruto: R$ " << salarioBruto << endl;
    cout << "Desconto INSS (12%): R$ " << descontoINSS << endl;
    cout << "Salário Líquido: R$ " << salarioLiquido << endl;

    return 0;
}
