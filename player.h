#ifndef PLAYER_H
#define PLAYER_H

typedef enum {
    'w',
    's',
    'a',
    'd'
} Direction;

extern int jugadorfila;
extern int jugadorcolumna;
extern int moveCount;

void movePlayer(Direction direction);
int hasWon();
int getcontador();

#endif 
``
