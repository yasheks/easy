#include <iostream>
#include "easy.h"
#include <math.h>
using namespace std;

void itc_name(void){

    cout<<"Yasha ";
}
void itc_fio(void){
    itc_name();
    cout<< "Zeldovich Kirillovich" << endl;
}
int itc_abs(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}
double itc_fabs(double num){
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}
int itc_revnbr(int num){
    int en, home, mid;
    en = num/100;
    mid = (num/10)%10;
    home = num%10;
    int new_num = home*100 + mid*10 + en;
    return new_num;

}



