#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int x, y;

    while (cin >> x >> y){

        string str1 = bitset<32>(x).to_string();
        string str2 = bitset<32>(y).to_string();
        string str3;

        for (int i = 0; i < 32; i++){

            if ((str1[i] == '1' && str2[i] == '0') || (str2[i] == '1' && str1[i] == '0')){
                str3 += '1';
            }

            else{
                str3 += '0';
            }
        }

        int z = bitset<32>(str3).to_ulong();
        cout << z << endl;
    }
    return 0;
}
