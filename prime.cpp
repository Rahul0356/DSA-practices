#include<iostream>
using namespace std;

bool isPrime(int n,int i=2){
    if(n<=2){
        return (n==2) ? true:false; 
    }
    if(i*i>n){
        return true;
    }
    return isPrime(n,i+1);
}
int main(){
    int n=7;
    if(isPrime(n)){
        cout<<"Prime Number";
    }
    else {
        cout<<"Not a Prime";
        return 0; 
    }
   
}