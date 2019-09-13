/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: roberto
 *
 * Created on September 13, 2019, 2:24 PM
 */

//LABORATORIO2

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void merge(int a[],int left_low,int left_hight,int right_low,int right_hight){
    int lenght=right_hight-left_low+1;
    int temp[lenght];
    int left=left_low;
    int right=right_low;
    for(int i=0;i<lenght;i++){
        if(left>left_hight){
            temp[i]=a[right++];
        }
        else if(right>right_hight){
            temp[i]=a[left++];
        }
        else if(a[left]<=a[right]){
            temp[i]=a[left++];
        }
        else{
            temp[i]=a[right++];
        }
    }
    for(int i=0; i<lenght;i++){
        a[left_low++]=temp[i];
    }
}

void merge_sort(int a[],int low,int hight){
    if(low>=hight)
    return;
    else{
        int mid=(low+hight)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,hight);
        merge(a,low,mid,mid+1,hight);
    }    
}
void merge_sort(int a[],int lenght){
    merge_sort(a,0,lenght-1);
}
void printar(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<i<<"-"<<a[i]<<endl;
}
}


int main() {
    int array[]={2,23,20,8,22,6};
    int array_size=sizeof(array)/sizeof(array[0]);
    cout<<"arreglo normal"<<endl;
    printar(array,array_size);
    merge_sort(array,array_size);
    cout<<"arreglo ordenado: "<<endl;
    printar(array,array_size);

    return 0;
}

