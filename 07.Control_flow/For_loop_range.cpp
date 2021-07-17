#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Example -1 - with specific data type.
    // int scores[]{10, 11, 35, 41};
    // for (int i : scores)
    //     cout << i << endl;

    // Example -2 - with auto keyword that automatically detect values data type.
    // int scores[]{10, 11, 35, 41};
    // for (auto i : scores)
    //     cout << i << endl;

    // Example -3
    // vector<double> temperatures{87.9, 77.6, 80.01, 57.3};
    // double average_temp{}, total{};
    // for (auto temp : temperatures)
    //     total += temp;
    // if (temperatures.size() != 0)
    //     average_temp = total / temperatures.size();
    // cout << "The average temp is without setprecision(): " << average_temp << endl
    //      << fixed << setprecision(3)
    //      << "The average temp is with setprecision(): " << average_temp << endl;

    // Example -4
    // for (auto val : {1, 2, 5, 7, 3})
    //     cout << val << endl;

    // Example -5
    for (auto c : "This is my name.")
    {
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
    }

    return 0;
}