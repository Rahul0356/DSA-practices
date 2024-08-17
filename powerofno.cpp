#include<iostream>
using namespace std;
int  power(int base,int x){
if(x==0){
    return 1;
}
return base*power(base,x-1);
}
int main(){
    int base=19, x=3;
    cout << "Required power is " << power(base, x) << endl;
return 0;
}
