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
bool itc_iseven(int num) {
    if(num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
int itc_max(int num, int num2){
    if (num > num2)
        return num;
    else
        return num2;
}
int itc_min(int num, int num2){
    if (num < num2)
        return num;
    else
        return num2;
}
double itc_fmax(double num, double num2) {
    if (num > num2) {
        return num;
    } else {
        return num2;
    }
}
double itc_fmin(double num, double num2) {
    if (num < num2) {
        return num;
    } else {
        return num2;
    }
}
int itc_sqrt(int num) {
    if (num < 0) {
        return -1;
    }

    int left = 0;
    int right = num;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (mid * mid == num) {
            return mid;
        }

        if (mid * mid < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
int itc_skv(int num){
    int Skv;
    Skv = num * num;
    if (num<= 0)
        return -1;
    else
        return Skv;
}
int itc_spr(int a, int b){
    int Skv;
    Skv = a * b;
    if (a<= 0 or b <= 0)
        return -1;
    else
        return Skv;
}
int itc_str(int a, int b, int c) {
  if (a + b > c && a + c > b && b + c > a) {
    int p = (a + b + c) / 2;
    int s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
  } else {
    return -1;
  }
}
double itc_scir(int radius){
    float pi = 3.14;
    double Skv = (radius*radius)*pi;
    if (radius<=0)
        return-1;
    else
        return Skv;
}
double itc_pow(int num, int step){
    int num2 = num;
    for (int i = 1; i<step; i++){
        num = num * num2;
    }
    return num;
}
bool itc_ispositive(int num) {
    if (num >= 0)
        return true;
    else
        return false;

}
bool itc_ispositive_d(double num) {
    if (num >= 0)
        return true;
    else
        return false;

}
