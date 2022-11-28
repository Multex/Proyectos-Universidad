// Se tiene “n” postulantes a un examen de admisión en la que deberán marcar una de 5 alternativas; a, b, c, d, e, siendo la puntuación de +4 puntos por pregunta correcta y -1 por cada pregunta incorrecta.
// El jurado calificador deberá ingresar antes de calificar las claves de las “m” preguntas propuestas. Al final el programa deberá mostrar los resultados calificados.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de postulantes: ";
    cin >> n;
    int m;
    cout << "Ingrese la cantidad de preguntas: ";
    cin >> m;
    char respuestas[m];
    for (int i = 0; i < m; i++) {
        cout << "Ingrese la respuesta de la pregunta " << i + 1 << ": ";
        cin >> respuestas[i];
    }
    int puntajes[n];
    for (int i = 0; i < n; i++) {
        puntajes[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        char respuesta;
        cout << "Ingrese la respuesta de la pregunta " << i + 1 << ": ";
        cin >> respuesta;
        for (int j = 0; j < n; j++) {
            char respuesta_postulante;
            cout << "Ingrese la respuesta del postulante " << j + 1 << ": ";
            cin >> respuesta_postulante;
            if (respuesta_postulante == respuestas[i]) {
                puntajes[j] += 4;
            } else {
                puntajes[j] -= 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "El puntaje del postulante " << i + 1 << " es: " << puntajes[i] << endl;
    }
    return 0;
}