#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int n = num / 2;
    for (int row = 0; row < n;row++)
    {
        //inverted pyramid1
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        //full pyramid
        for (int col = 0; col < 2 * row +1;col++)
        {
            cout << " ";
        }
        // inverted pyramid2
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //Inverted part
    for (int row = 0; row < n; row++)
    {
        // inverted pyramid1
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        // full pyramid
        for (int col = 0; col < 2*n- 2 * row -1; col++)
        {
            cout << " ";
        }
        // inverted pyramid2
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
        return 0;
}