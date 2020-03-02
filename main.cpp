#include <iostream>
using namespace std;

int main(){
    int result = 0;
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    
    for(int p = 1;p <= n;p++){
        if(p <= k){
            result += x;
        }else{
            result += y;
        }
    }
    
    cout << result << endl;
}
