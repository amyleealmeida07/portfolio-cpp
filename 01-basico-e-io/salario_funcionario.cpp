// Lê a matrícula, horas trabalhadas e valor por hora de um funcionário para calcular o salário final

#include <iostream>

using namespace std;

int main() {
    int matricula;
    double horas_trabalhadas, valor_hora;
    
    cout << "Informe o número de matrícula do funcionário: ";
    cin >> matricula;
    
    cout << "Informe o número de horas trabalhadas: ";
    cin >> horas_trabalhadas;
    
    cout << "Informe o valor recebido por hora (R$): ";
    cin >> valor_hora;
    
    double salario = horas_trabalhadas * valor_hora;
    
    cout << "MATRÍCULA = " << matricula << endl;
    cout << "SALARIO = R$ " << salario << endl;
    
    return 0;
}
