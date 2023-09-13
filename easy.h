#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED
#include <iostream>
#include <math.h>
void itc_name(void);
void itc_fio(void);
int itc_abs(int num);
double itc_fabs(double num);
int itc_revnbr(int num);
bool itc_iseven(int num);
int itc_max(int num, int num2);
int itc_min(int min1, int min2);
double itc_fmax(double num, double num2);
double itc_fmin(double num, double num2);
int itc_sqrt(int num);
int itc_skv(int num);
int itc_spr(int a, int b);
int itc_str(int a, int b, int c);
double itc_scir(int radius);
double itc_pow(int num, int step);
bool itc_ispositive(int num);
bool itc_ispositive_d(double num);
#endif // MODULE_H_INCLUDED
