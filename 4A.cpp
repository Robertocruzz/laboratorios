/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on September 11, 2019, 9:22 PM
 */

//LABORATORIO2


#include <iostream>
#include <cmath>

using namespace std;

int y=0;
float ans=0;

int sumas(int k){
    ans += 4*(pow(-1,y))/(2*y+1);
    y++;
    if(y>k){
        return ans;
    }
    else{
        sumas(k);
    }
}

int main() {
    int k;
    cout<<"ingrese el valor de k"<<endl;
    cin>>k;
    sumas(k);
    cout<<"el resultado de la sumatoria es: "<<endl;
    cout<<ans;

    return 0;
}

