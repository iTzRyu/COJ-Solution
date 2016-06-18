#include <iostream>
#include <algorithm>
using namespace std;
string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
int busca(char letra,int N){
    int r;
    for(int x=0;x<abc.size();x++){
        if(abc[x] == letra){
            r = (x+N)%abc.size();
            break;
        }
    }
    return r;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N;
    string linea;
    while(cin >> N && N){
        cin >> linea;
        for(int x=linea.length()-1;x>=0;x--){
            cout << abc[busca(linea[x],N)];
        }
        cout << "\n";
    }
}
