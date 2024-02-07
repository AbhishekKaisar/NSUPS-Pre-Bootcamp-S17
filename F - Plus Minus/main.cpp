#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>> n;
    
    int arr[n];
    
    int pos_counter = 0;
    int neg_counter = 0;
    int zer_counter = 0;
    
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    for(int i=0; i<n; i++){
       if(arr[i] > 0){
           pos_counter++;
       }else if(arr[i] < 0){
           neg_counter++;
       }else if(arr[i] == 0){
           zer_counter++;
       }
    }
    
    double pos = static_cast<double>(pos_counter)/n;
    double neg = static_cast<double>(neg_counter)/n;
    double zer = static_cast<double>(zer_counter)/n;
    
    cout << fixed << setprecision(6);
    cout<< pos <<endl;
    cout<< neg <<endl;
    cout<< zer <<endl;

    return 0;
}