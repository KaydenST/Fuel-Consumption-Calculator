#include <iostream>
#include <cmath>
using namespace std;

int main () {
    string input = "";
    short int choice = 0;
    
    cout << endl << "This fuel consumption calculator will determine the amount of fuel you will burn over the entire flight." << endl;
    
    if (true) {
          cout << "Press any key to continue: " << endl;
          getline (cin, input);
          if (choice != 0.0000001);
          {
                    goto Time;
                    }
                    
Time:
          
          float f = 0;
          float t = 0;
          
          while (true) {
          cout << endl << "Please enter the fuel flow (gallons per hour): ";
          cin >> f;
          cout << endl << "Please enter the total planned flight time in hours: ";
          cin >> t;
          float z = f * t;
          cout << endl << "The approximate fuel burn is: " << z << " gal." << endl;
          }
}
}
