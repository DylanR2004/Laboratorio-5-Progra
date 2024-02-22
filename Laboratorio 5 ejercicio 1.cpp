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
    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    bool sumarPares;
    std::cout << "¿Desea sumar los números pares? (1 para sí, 0 para no): ";
    std::cin >> sumarPares;

    int resultado = sumaParesImpares(numero, sumarPares);
    if (sumarPares) {
        std::cout << "La suma de los números pares hasta " << numero << " es: " << resultado << std::endl;
    } else {
        std::cout << "La suma de los números impares hasta " << numero << " es: " << resultado << std::endl;
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
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
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

    // Manejamos el caso especial del número 0
    if (numero == 0) {
        return 1;
    }

    // Convertimos el número en positivo para contar los dígitos
    if (numero < 0) {
        numero = -numero;
    }

    // Bucle do-while para garantizar al menos una iteración
    do {
        cantidadDigitos++;
        numero = numero / 10; // Eliminamos el último dígito dividiendo entre 10
    } while (numero != 0);

    return cantidadDigitos;
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    int cantidad = contarDigitos(numero);
    cout << "El número " << numero << " tiene " << cantidad << " dígitos." << endl;

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

    // Solicitar al usuario que ingrese los tres números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;

    // Llamamos a la función para ordenar los números
    ordenarTresNumeros(num1, num2, num3);

    // Mostramos los números ordenados
    cout << "Números ordenados de menor a mayor: " << num1 << ", " << num2 << ", " << num3 << endl;

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

