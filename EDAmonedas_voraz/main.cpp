#include <iostream>
#include <vector>
#include<array>
using namespace std;

void cambios(int n){
    vector<int>euros={500,200,100,50,20,10,5,2,1};
    vector<int>cambios;
    for (int i=0;i<euros.size();i++){
        while(n>=euros.at(i)){
            n=n-euros.at(i);
            cambios.push_back(euros.at(i));
        }
    }
    for (int i=0;i<cambios.size();i++){
        cout<<cambios.at(i)<<"-";
    }
}

int main()
{
   int a;
    cout<<"De cuanto quieres cambio?";
   cin>>a;
   cambios(a);
}
