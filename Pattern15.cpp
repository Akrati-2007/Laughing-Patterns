#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>> n;
    
    int i =1;
    
    while(i<=n) {
        
        int j = 1;
        
        
        while(j<=n) {
            int ch= i+j-1; 
            cout<<ch<<" ";
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
  
}

/*OUTPUT
n=4
1 2 3 4
2 3 4 5 
3 4 5 6
4 5 6 7
*/