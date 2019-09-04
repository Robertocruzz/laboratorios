#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main() {

    int arreglaso[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    
    for(int i=0; i<5; i++)
        cin>>arreglaso[0][i];
    for(int j=0; j<4; j++)
        cin>>arreglaso[1][j+1];
    for(int z=0; z<3; z++)
        cin>>arreglaso[2][z+2];
    for(int k=0; k<2; k++)
        cin>>arreglaso[3][k+3];
    for(int f=0; f<1; f++)
        cin>>arreglaso[4][f+4];
    
    
    for(int t=0; t<5; t++){
    cout<<arreglaso[0][t];
    cout<<arreglaso[1][t];
    cout<<arreglaso[2][t];
    cout<<arreglaso[3][t];
    cout<<arreglaso[4][t];
    }
    return 0;
}
