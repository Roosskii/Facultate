#include<stdio.h>
#include<iostream>
#include<math.h>
#include "cfigura.h"
#define PI 3.14

using namespace std;

double calcul_arie(FIGURA *p_figura){
    double aria;
    switch(p_figura->tip){
        case T_CERC:
            aria = PI * pow(p_figura->cerc.raza, 2);
            break;
        case T_DREPTUNG:
            aria = fabs((p_figura->dreptung.x1 - p_figura->dreptung.x2) * (p_figura->dreptung.y1 - p_figura->dreptung.y2));
            break;
        default:
            cout<<"Figura trebuie sa fie cerc sau dreptunghi\n";
    }
    return aria;
}

void afis_figura(FIGURA *p_figura){
    cout<<"Afisare: ";
    switch(p_figura->tip){
        case T_CERC:
            cout<<"cercu cu raza "<<p_figura->cerc.raza<<" si centru in ("<<p_figura->cerc.x<<", "<<p_figura->cerc.y <<")\n";
            break;
        case T_DREPTUNG:
            cout<<"Dreptunghi cu colturile: ("<<p_figura->dreptung.x1<<", "<<p_figura->dreptung.y1<<") si ("<<p_figura->dreptung.x2<<", "<<p_figura->dreptung.y2<<")\n";
            break;
        default: cout<<"Figura necunoscuta";
    }
}
