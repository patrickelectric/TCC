// Inclui a biblioteca Arduino Standard Template Library (STL)
#include <ArduinoSTL.h>

// Cria vetor
static std::vector<int> list;
static unsigned int size = 10;

void setup() {
    // Inicia comunicao serial
    Serial.begin(115200);
    Serial.println("Starting..");

    // Popula vetor
    for(unsigned int i = 0; i < size; i++)
        list.push_back(i);
}

void loop() {
    // Mostra o vetor
    Serial.println("Printing list.. ");
    for(const auto& item : list)
        Serial.println(item);
}
