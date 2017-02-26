#include <iostream>
using namespace std;

int main(){
    int i,j,k,x,y,z,b,baling;

    cout << "Insert the desired radius : " << "\n";
    cin >> baling;

    for(i=0;i<baling;i++){
        for(j=baling-1;j>i;j--){
            cout << " ";
        }
        for(k=0;k<=i;k++){
            cout << "*";
        }
        cout << "\n";
    }

    for(x=0;x<baling;x++){
        for(b=0;b<baling;b++){
            cout << " ";
        }

        for(z=baling;z>x;z--){
            cout << "*";
        }
        for(y=0;y<x;y++){
            cout << " ";
        }

        cout << "\n";
    }

    return 0;
}
