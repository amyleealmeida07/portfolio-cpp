// Lê as dimensões de 4 cômodos para calcular as áreas individuais e a área total da casa

#include <iostream>

using namespace std;

int main() {
    double largura1, comprimento1;
    double largura2, comprimento2;
    double largura3, comprimento3;
    double largura4, comprimento4;
    
    cout << "Informe a largura e o comprimento do cômodo 1: ";
    cin >> largura1 >> comprimento1;
    
    cout << "Informe a largura e o comprimento do cômodo 2: ";
    cin >> largura2 >> comprimento2;
    
    cout << "Informe a largura e o comprimento do cômodo 3: ";
    cin >> largura3 >> comprimento3;
    
    cout << "Informe a largura e o comprimento do cômodo 4: ";
    cin >> largura4 >> comprimento4;
    
    double area1 = largura1 * comprimento1;
    double area2 = largura2 * comprimento2;
    double area3 = largura3 * comprimento3;
    double area4 = largura4 * comprimento4;
    
    double area_total = area1 + area2 + area3 + area4;
    
    cout << "A área do cômodo 1 é igual a: " << area1 << " m²" << endl;
    cout << "A área do cômodo 2 é igual a: " << area2 << " m²" << endl;
    cout << "A área do cômodo 3 é igual a: " << area3 << " m²" << endl;
    cout << "A área do cômodo 4 é igual a: " << area4 << " m²" << endl;
    cout << "A área total da casa é: " << area_total << " m²" << endl;
    
    return 0;
}
