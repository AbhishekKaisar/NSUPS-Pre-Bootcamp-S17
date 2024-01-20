#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    char test[n];
    for(int i=0; i<n; i++){
        cin>> test[i];
    }
    for(int i=0; i<n; i++){
        if(test[i] == 'B' || test[i] == 'b' ){
            cout<< "BattleShip" <<endl;
        }
        else if(test[i] == 'C' || test[i] == 'c' ){
            cout<< "Cruiser" <<endl;
        }
        else if(test[i] == 'D' || test[i] == 'd' ){
            cout<< "Destroyer" <<endl;
        }
        else if(test[i] == 'F' || test[i] == 'f' ){
            cout<< "Frigate" <<endl;
        }
    }

    return 0;
}