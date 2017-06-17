#include <bits/stdc++.h>
using namespace std;
int m[] = {0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};
int main() {
    int hr, mini;
    scanf("%d:%d", &hr, &mini);
    mini+=(hr*60);
    int cont = 0;
    while(true){
        if(binary_search(m, m+16, mini)) break;
        cont++;
        mini++;
        mini%=1440;
    }
    cout << cont << "\n";
}
