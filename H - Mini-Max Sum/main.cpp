#include <iostream>

using namespace std;

int main()
{
    long long int arr[5];
    
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    long long int min_num = arr[0];
    long long int max_num = arr[0];
    long long int arr_sum = 0;
    
    for(int i = 0; i < 5; i++){
       if(min_num > arr[i]){
           min_num = arr[i];
       }
    }
    
    for(int i = 0; i < 5; i++){
       if(max_num < arr[i]){
           max_num = arr[i];
       }
    }
    
    for(int i = 0; i < 5; i++){
       arr_sum += arr[i];
    }
   
    long long int min_sum = arr_sum - max_num;
    long long int max_sum = arr_sum - min_num;

    cout << min_sum << " " << max_sum << endl;

    return 0;
}
