/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on September 12, 2019, 8:32 AM
 */
 
 //LABORATORIO1

#include <iostream>
#include <cmath>

using namespace std;
int ans=0;
float sumas(int x, int y);

int main() {
    int x, y;
    cin>>x;
    cin>>y;
    sumas(x,y);
    
    return 0;
}

float sumas(int x, int y){
    
    if(y>0){
    ans=ans+ x;
    y--;
    sumas(x,y);}
    else{
        cout<<"listo"<<endl;
        cout<<ans;}
}
