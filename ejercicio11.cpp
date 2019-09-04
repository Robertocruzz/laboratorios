#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
int x;
    cout<<"cuantos numeros va a ingresar"<<endl;
    cin>>x;
    
    int arreglito[x];
    cout<<"ingrese los valores"<<endl;
    for(int i=0; i<x ; i++)
        cin>>arreglito[i];
    
    
   int b=0;   
         
   for(int j=0;j<x; j++){
       if(arreglito[j]>b)
           b=arreglito[j];
   }
    cout<<b;
    
    return 0;
}
