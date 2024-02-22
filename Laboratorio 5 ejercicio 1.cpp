//Ejercicio 1

#include <iostream>

int sumaParesImpares(int numero, bool sumarPares) {
    int suma = 0;
    for (int i = 1; i <= numero; i++) {
        if (sumarPares) {
            if (i % 2 == 0) {
                suma += i;
            }
        } else {
            if (i % 2 != 0) {
                suma += i;
            }
        }
    }
    return suma;
}

int main() {
    int numero;
    std::cout << "Ingrese un n�mero entero: ";
    std::cin >> numero;

    bool sumarPares;
    std::cout << "�Desea sumar los n�meros pares? (1 para s�, 0 para no): ";
    std::cin >> sumarPares;

    int resultado = sumaParesImpares(numero, sumarPares);
    if (sumarPares) {
        std::cout << "La suma de los n�meros pares hasta " << numero << " es: " << resultado << std::endl;
    } else {
        std::cout << "La suma de los n�meros impares hasta " << numero << " es: " << resultado << std::endl;
    }

    return 0;
}

//Ejercicio 2

#include <iostream>

using namespace std;

unsigned long long calcularFactorial(int numero) {
    unsigned long long factorial = 1;
    int i = 1;

    while (i <= numero) {
        factorial *= i;
        i++;
    }

    return factorial;
}

int main() {
    int numero;
    cout << "Ingrese un n�mero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no est� definido para n�meros negativos." << endl;
    } else {
        unsigned long long resultado = calcularFactorial(numero);
        cout << "El factorial de " << numero << " es: " << resultado << endl;
    }

    return 0;
}

//Ejercicio 3

#include <iostream>

using namespace std;

int contarDigitos(int numero) {
    int cantidadDigitos = 0;

    // Manejamos el caso especial del n�mero 0
    if (numero == 0) {
        return 1;
    }

    // Convertimos el n�mero en positivo para contar los d�gitos
    if (numero < 0) {
        numero = -numero;
    }

    // Bucle do-while para garantizar al menos una iteraci�n
    do {
        cantidadDigitos++;
        numero = numero / 10; // Eliminamos el �ltimo d�gito dividiendo entre 10
    } while (numero != 0);

    return cantidadDigitos;
}

int main() {
    int numero;
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;

    int cantidad = contarDigitos(numero);
    cout << "El n�mero " << numero << " tiene " << cantidad << " d�gitos." << endl;

    return 0;
}

// Ejercicio 4

#include <iostream>

using namespace std;

void ordenarTresNumeros(int& a, int& b, int& c) {
    // Comparamos y realizamos intercambios si es necesario
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
}

int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los tres n�meros
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;
    cout << "Ingrese el tercer n�mero: ";
    cin >> num3;

    // Llamamos a la funci�n para ordenar los n�meros
    ordenarTresNumeros(num1, num2, num3);

    // Mostramos los n�meros ordenados
    cout << "N�meros ordenados de menor a mayor: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

//Ejercicio 5

#include <iostream>

using namespace std;

int sumaDigitos(int numero) {
    int suma = 0;

    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        suma += numero % 10;
        numero /= 10; 
    }

    return suma;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    int resultado = sumaDigitos(numero);
    cout << "La suma de los digitos de " << numero << " es: " << resultado << endl;

    return 0;
}

