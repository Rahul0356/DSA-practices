#include<iostream>
using namespace std;

int getHCF(int num1,int num2){
    if(num1==0){
        return num2;
    }
    if(num2 ==0){
        return num1;
    }
    if(num1==num2){
        return num1;
    }
    if(num1>num2){
        return getHCF(num1-num2,num2);

    }
}
    int main() {
        int num1=96,num2=56,HCF=1;
        HCF =getHCF(num1,num2);
        cout<<"HCF of"<<num1<<"and"<<num2<<"is"<<HCF;
        return 0;
    }
