#include<iostream>
using namespace std;

int prime(int n){
      for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            return false;
         }
      }
    return true;
}

int main(){
    int sum = 0;
    int count=0;
    for(int i=2;i<1000;i++){
        if(prime(i)){
            if(count<10){
             cout<<i<<" ";
              sum = sum+i;
              count++;
            }
        }
    }
    cout<<"sum "<<sum;
}