// Inclui math library
#include <math.h>

// Calcula o factorial de f
float factorial (float f) {
    if (f == 0)
        return 1;
    return f*factorial(f-1);
}

// Calcula a serie do seno
float sinWithSerie (float rad, unsigned int n) {
    float r = 0;
    for (unsigned int k = 0; k <= n; k++) {
        r += pow(-1, k)*pow(rad, 2*k+1)/factorial(2*k+1);
    }
    return r;
}

void setup() {
    // Inicia a comunicao serial
    Serial.begin(115200);
    Serial.println("Starting..");
}

void loop() {
    // Mostra o resultado da serie de 20 termos
    static int precision = 10;
    Serial.println(sinWithSerie(M_PI/4, 20), precision);
}
