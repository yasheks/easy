int itc_sqrt(int num) {
    if (num < 0) {
        return -1;
    }

    long long left = 0;
    long long right = num;

    while (left <= right) {
        long long mid = (left + right) / 2;

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
  if (a>0 && b>0 && c>0 && a + b > c && a + c > b && b + c > a)
    {
        float float_a = a;
        float p = (float_a + b + c) / 2;
        float s = itc_sqrt(p * (p - float_a) * (p - b) * (p - c));
        return s;
    }
   else {
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
