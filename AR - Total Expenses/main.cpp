#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n;
    cin>> n;
    
    for(int i=0; i<n; i++){
        double c, d;
        cin>> c >> d;
        
        if(c >= 1000){
            double j = c*0.1;
            double k = c-j;
            c = k;
        }
        
        double ans= c*d;
        
        cout<<fixed<< setprecision(6)<< ans <<endl;
    }
    

    return 0;
}