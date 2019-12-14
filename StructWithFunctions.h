//
// Created by El Mehdi Benseddik on 12/11/2019.
//

#ifndef FUNCTIONSINSTRUCT_STRUCTWITHFUNCTIONS_H
#define FUNCTIONSINSTRUCT_STRUCTWITHFUNCTIONS_H

typedef struct Player {
    int x, y;
    int speed;
    void (*moveXaYa)(int, int);
}player_t;

typedef struct newStruct{
    int a;
    int (*length) ();
}list_t;

int length() {
    int i = 0;
    while (a > 0) {
        a /= 10;
        i++;
    }
    return i;
}
list_t b;
int print() {
    b.a = 1234;
    int k = b.length();
}
list_t newVar = {134, 0};
#endif //FUNCTIONSINSTRUCT_STRUCTWITHFUNCTIONS_H
