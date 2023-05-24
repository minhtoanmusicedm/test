#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i%2==1){cout << i<<"\n";}
        else{
            if(i%16==0){
                cout << "LTOL" <<"\n";
            }
            else if(i%8==0){
                cout << "LTO" <<"\n";
            }
            else if(i%4==0){
                cout << "LT" <<"\n";
            }
            else{
                cout << "L" << "\n";
            }
        }
    }
}