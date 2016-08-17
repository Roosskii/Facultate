#include <iostream>
#include <stdio.h>
#include "cfigura.h"

using namespace std;

int main()
{
   int i;
   FIGURA s[2];
   
   s[0].tip=T_DREPTUNG;
   s[0].dreptung.x1=80.0;
   s[0].dreptung.x2=40.0;
   s[0].dreptung.y1=120.0;
   s[0].dreptung.y2=160.0;
   
   s[1].tip=T_CERC;
   s[1].cerc.x=40.0;
   s[1].cerc.y=80.0;
   s[1].cerc.raza=40;
   
   for(i=1;i<2;i++){
       cout<<"Aria elementului de indice "<<i<<" din vector (de tipul "<<s[i].tip<<") este ="<<calcul_arie(&s[i])<<"\n";
   }
   for(i=0; i<2;i++)
       afis_figura(&s[i]);
   return 0;
}
