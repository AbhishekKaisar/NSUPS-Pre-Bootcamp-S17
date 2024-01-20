#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i=0; i<T; i++)
    {
        int N;
        cin >> N;

        while(N > 0)
        {
            if((N%3==0) || (N%4==0))
                break ;

            N -= 4;
        }

        if((N>0) &&  (N%3==0 || N%4==0))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}