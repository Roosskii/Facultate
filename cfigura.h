#ifndef CFIGURA_H
#define CFIGURA_H
#define T_CERC 1
#define T_DREPTUNG 2

typedef struct CERC_FIGURA
{
    short tip;
    double x, y;
    double raza;
}CERC_FIGURA;

typedef struct DREPTUNG_FIGURA
{
    short tip;
    double x1, y1;
    double x2, y2;
}DREPTUNG_FIGURA;

typedef union FIGURA
{
    short tip;
    CERC_FIGURA cerc;
    DREPTUNG_FIGURA dreptung;
}FIGURA;

double calcul_arie(FIGURA *p_f);
double afis_figura(FIGURA *p_f);
#endif
