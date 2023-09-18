double itc_pow(int num, int step){
    int num2 = num;
    if (step > 0)
    {

        for (int i = 1; i<step; i++){
            num = num * num2;
        }
        return num;
    }
    else if (step == 0)
    {
           return 1;
    }
    else
    {
        step = -step;
       for (int i = 1; i<step; i++){
            num = num * num2;

        }
        float flot_num = num;
        float result = 1/flot_num;
        return result;
    }


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
