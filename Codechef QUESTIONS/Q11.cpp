#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x >= 2000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*"Water Consumption":-

Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.
Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.
For each test case, output YES if Chef followed the doctor's advice of drinking at least 2000 ml of water. Otherwise, output NO.*/