/*
    Frank's carpet cleaning service
    charges $30 per room
    Sales tax rate is 6 %
    estimates are valid+ for 30 days

    Prompt the user for the no. of room they would like to cleaned and provide as estimate such as:

        Estimate for carpet cleaning service:
        No. of Rooms - 2
        Price per Room - $30
        Cost - $60
        Tax - $3.6
        Total estimate - $63.6
        ---This estimate valid for 30 days---

    Pseudo Code:
    i.Prompt the user to enter the no. of rooms
    ii.Display no. of room:
    iii.Display price per room:
    iv.Display cost: (no. of rooms * price per room)
    v.Display tax: (no. of rooms * price per room * tax rate)
    vi.Total estimate: (no. of rooms * price per room) + (no. of rooms * price per room * tax rate)
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, Welcome to the franks carpet cleaning service" << endl;

    // Literal constants
    /*/ Normal version   
    cout<<"How many rooms would you like to cleaned? ";
    int no_of_rooms {0};
    cin>>no_of_rooms;

    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"\tNo. of rooms: "<<no_of_rooms<<endl;
    cout<<"\tPrice per room: $"<<30<<endl;
    cout<<"\tCost: $"<<30 * no_of_rooms <<endl;
    cout<<"\tTax: $"<<30 * no_of_rooms * 0.06<<endl;

    cout<<"------------------------------------"<<endl;
    cout<<"\tTotal estimate: $"<<(30 * no_of_rooms) + (30 * no_of_rooms * 0.06)<<endl;
    cout << "This estimate is valid for " << 30 << " days.." << endl;
    */

    // Enhanced version
    cout << "How many rooms would you like to cleaned? ";
    int no_of_rooms{0};
    cin >> no_of_rooms;

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "\tNo. of rooms: " << no_of_rooms << endl;
    double price_per_room{30}; //Here, We can change this variable value anywhere in the program
    cout << "\tPrice per room: $" << price_per_room << endl;
    cout << "\tCost: $" << price_per_room * no_of_rooms << endl;
    double sales_tax{0.06}; //Here, We can change this variable value anywhere in the program
    cout << "\tTax: $" << price_per_room * no_of_rooms * sales_tax << endl;

    cout << "------------------------------------" << endl;
    cout << "\tTotal estimate: $" << (price_per_room * no_of_rooms) + (price_per_room * no_of_rooms * sales_tax) << endl;
    int estimate_expiry{30}; //Here, We can change this variable value anywhere in the program
    cout << "This estimate is valid for " << estimate_expiry << " days.." << endl;

    return 0;
}