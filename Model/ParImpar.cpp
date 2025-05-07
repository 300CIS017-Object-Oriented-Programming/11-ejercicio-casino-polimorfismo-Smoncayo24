//
// Created by santi on 5/7/2025.
//

#include "ParImpar.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float ParImpar::jugar(float gonzosApostar) {
    int eleccionJugador; // 0 = par, 1 = impar
    cout << "Apostarás a:" << endl;
    cout << "0. Par" << endl;
    cout << "1. Impar" << endl;
    cin >> eleccionJugador;

    srand(time(nullptr));
    numeroCasino = 1 + rand() % 10;
    cout << "El numero generado por el casino es: " << numeroCasino << endl;

    // Guardamos la elección del jugador para calcular el resultado
    numeroJugador = eleccionJugador;

    return calcularResultado(gonzosApostar);
}

float ParImpar::calcularResultado(float gonzosApostar) {
    bool esPar = numeroCasino % 2 == 0;

    if ((esPar && numeroJugador == 0) || (!esPar && numeroJugador == 1)) {
        return gonzosApostar * 2;
    } else {
        return 0;
    }
}

void ParImpar::mostrarReglas() const {
    cout << "\nREGLAS PAR O IMPAR";
    cout << "\n1) El jugador apuesta a si el numero del casino sera par o impar";
    cout << "\n2) El casino genera un numero entre 1 y 10";
    cout << "\n3) Si aciertas ganas el doble Si no, pierdes todo";

}