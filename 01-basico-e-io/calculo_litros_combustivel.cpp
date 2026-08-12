// Calcula quantos litros de combustível é possível abastecer com determinado valor em dinheiro

#include <iostream>

using namespace std;

int main() {
    double preco_litro, valor_abastecer;
    
    cout << "Informe o valor do litro de combustível (R$): ";
    cin >> preco_litro;
    
    cout << "Informe o valor em dinheiro que deseja abastecer (R$): ";
    cin >> valor_abastecer;
    
    double litros = valor_abastecer / preco_litro;
    
    cout << "Com o dinheiro que você tem poderá comprar " << litros << " litros de combustível" << endl;
    
    return 0;
}
