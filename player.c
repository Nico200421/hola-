#include "player.h"

int jugadorfila = 0;
int jugadorcolumna = 0;
int contador = 0;
void movePlayer(Direction direction) {
    int nuevafila = jugadorfila;
    int nuevacolumna = jugadorcolumna;

    switch (direction) {
        case 'w':
            nuevafila--;
            break;
        case 's':
            nuevafila++;
            break;
        case 'a':
            nuevacolumna--;
            break;
        case 'd':
            nuevacolumna++;
            break;
    }

    if (isValidMove(nuevafila, nuevacolumna)) {
        jugadorfila = nuvafila;
        jugadorcolumna = nuevacolumna;
        moveCount++;
    }
}
int hasWon() {
    return (jugadorfila == fila - 1 && jugadorcolumna == columna - 1);
}
int getcontador() {
    return contador;
}
