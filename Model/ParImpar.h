//
// Created by santi on 5/7/2025.
//

#ifndef PARIMPAR_H
#define PARIMPAR_H

#include "Juego.h"

class ParImpar : public Juego{
protected:
    float calcularResultado(float gonzosApostar) override;

public:
    float jugar(float gonzosApostar) override;
    void mostrarReglas() const override;
};



#endif //PARIMPAR_H
