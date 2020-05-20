#include<iostream>
using namespace std;

int main(){
    int A[100], B[100];
    int n, m;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    cin >> m;
    for(int j=0; j<m; j++){
        cin >> B[j];
    }
    for(int q=0; q<n; q++){
        for(int r=0; r<m; r++){
            if(A[q] == B[r]){
                cout << A[q] << " ";
            }
        }
    }


}