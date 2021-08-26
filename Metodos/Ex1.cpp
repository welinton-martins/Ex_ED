/*Desenvolva um programa que tenha dois métodos fahrenheit e celsius,
onde você entra com um valor em fahrenheit e transforma em celsius e vice e versa.
Fórmula Celsius: (fahrenheit – 32) * 5/9;
Fahrenheit = (Celsius * 9/5) + 32;*/

#include <iostream>

using namespace std;

float celsius(float celsius) {
    return (celsius  * 9/5) + 32;
}

float fahrenheit(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    int opcao = 0, temperatura = 0;
    cout << "Conversor de Celsius/Fahrenheit" << endl;
    cout << "Opcao:\nCelsius=1\nFahrenheit=2\n";
    cin >> opcao;
    cout << "Informe a temperatura: ";
    cin >> temperatura;
    if (opcao == 1) {
        cout << "Temperatura de Celsius para Fahrenheit: " << celsius(temperatura) << endl;
    } else if (opcao == 2) {
        cout << "Temperatura de Fahrenheit para Celsius: " << fahrenheit(temperatura) << endl;
    }
	return 0;
}