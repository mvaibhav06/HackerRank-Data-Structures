#include<iostream>
using namespace std;

int max_sum(int a[][6]){
    int b[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            b[i][j] = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];

        }
    }

    int max = -99999;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(b[i][j]>max){
                max = b[i][j];
            }
        }
    }

    return max;
}

int main(){
    int c[6][6];

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>c[i][j];
        }
    }

    cout<<max_sum(c);
}
