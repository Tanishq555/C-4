#include<iostream>
using namespace std;

int main(){

    int a,sum;
    cin>>a;
    sum=1;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            
            cout<<sum;
            sum++;
        }cout<<endl;
    }
}
