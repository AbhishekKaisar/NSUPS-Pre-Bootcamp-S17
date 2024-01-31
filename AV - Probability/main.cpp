#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i=1; i<=T; i++){

        int A, B;
        cin >> A >> B;

        int numerator = 0, denominator = B - A + 1;

        if(A == 0)
            numerator++;

        for(int j=A; j<=B; j++){

            int temp = j;

            while(temp > 0){

                if(temp%10 == 0){
                    numerator++;
                    break;
                }

                temp /= 10;
            }
        }

        cout << numerator << "/" << denominator << endl;
    }

    return 0;
}
