/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: uca
 *
 * Created on 11 de septiembre de 2019, 13:42
 */

#include <iostream>

using namespace std;

int numeros(int x=0,int y=0);


int main(){
    int x=0,y=0;
    cout<<"introdusca valor menor"<<endl;
    cin>>x;
    cout<<"introdusca valor mayor"<<endl;
    cin>>y;
    cout<<"valores entre los numeros: "<<endl;
    numeros(x, y);
}

int numeros(int x,int y)
{   
    int n=x+1;
    if(n==y){
        cout<<"listo"<<endl;
        return x;}
    else {
        cout<<n<<endl;
        numeros(n, y);
        return 0;
}
}