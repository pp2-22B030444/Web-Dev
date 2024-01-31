#include <bits/stdc++.h>
using namespace std;

int main(){



    int a;
    cin >> a;

    double gpa = 0;
    int sum_credit = 0;
    for(int i = 0; i < a; i++){
        int mid, end, final, credit;
        int sum = 0;
        double gpa1;
        cin >> mid >> end >> final >> credit;
        sum = mid + end + final;
        sum_credit += credit;
        if(mid+end<30 || final < 20){
            gpa1 = 0;
        }
        else if(sum>=50 && sum <= 54){
            gpa1 = 1.0;
        }
        else if(sum>=55 && sum <=59){
            gpa1 = 1.3333333333;
        }
        else if(sum>=60 && sum<=64){
            gpa1 = 1.66666667;
        }
        else if(sum>=65 && sum <=69){
            gpa1 = 2.0;
        }
        else if(sum>=70 && sum <=74){
            gpa1 = 2.3333333333;
        }
        else if(sum>=75 && sum <=79){
            gpa1 = 2.666666667;
        }
        else if(sum>=80 && sum <=84){
            gpa1 = 3.0;
        }
        else if(sum>=85 && sum <=89){
            gpa1 = 3.333333333;
        }
        else if(sum>=90 && sum <=94){
            gpa1 = 3.6666666667;
        }
        else if(sum>=95 && sum <=100){
            gpa1 = 4.0;
        }
        gpa+= gpa1*credit;
    }

    cout << gpa/sum_credit;
}