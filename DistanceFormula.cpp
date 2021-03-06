#include <iostream>
#include <cmath>
using namespace std;

int main() {

    char c1, c2, c3;
    double x1, x2, y1, y2;
    double distance;

    cin >> c1 >> x1 >> c2 >> y1 >> c3;
    if (c1 != '(' || c2 != ',' || c3 != ')')
    {
        cout << "Please try again with the format (x, y).\n";
    }
    else
    {
        cin >> c1 >> x2 >> c2 >> y2 >> c3;
        if (c1 != '(' || c2 != ',' || c3 != ')')
        {
            cout << "Please try again with the format (x, y).\n";
        }
        else
        {
            distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

            cout << distance << endl;
        }
    }

    return 0;
}