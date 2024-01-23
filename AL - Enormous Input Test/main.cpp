#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int d;
    cin>>d;
    
    int arr[n];
    
    int counter = 0;
    
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]%d == 0){
            counter++;
        }
    }
    
    cout<< counter <<endl;

    return 0;
}