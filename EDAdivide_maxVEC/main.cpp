#include <iostream>
#include <vector>
using namespace std;

int Mayor (vector<int>v, int n, int mayor){
    if (n==v.size()){
        return mayor;
    }
    if(v.at(n)>mayor){
        mayor=v.at(n);
    }
    n++;
    return Mayor(v,n++,mayor);
}
int main()
{
    vector <int>vec={2,5,12,56,8,38,98,92837,876780,456543};
    cout<<Mayor(vec,0,0);
}
