#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, sum, bstats[100000], x;
    cout << "Enter a range between 1 - 100,000." << endl;
    cin >> n;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i<n; i++){
        cin >> x;
        if (x == 0)
        {
            bstats[i - 1] = 0;
        }
        else{
        bstats[i] = x;
        }
    }
    for(int i = 0; i<n; i++){
		sum+=bstats[i];
    }
    cout << "-----------------------------------" << endl << "Sum: " << sum;
    return 0;
}


