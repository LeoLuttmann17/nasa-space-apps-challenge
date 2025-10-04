#include <iostream>
#include <cmath>
#include <iomanip>

// Define M_PI if not available
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
    int sides;
    double size;

    cout << " Welcome to the Mars Habitat Designer! 🪐" << endl;
    cout << "How many sides should your house have? (min 3): ";
    cin >> sides;

    if (sides < 3) {
        cout << "That’s too few sides! Let’s make it 3 (a triangle base)." << endl;
        sides = 3;
    }

    cout << "Enter the size of each side in meters (must be positive): ";
    cin >> size;

    while (size <= 0) {
        cout << "Size must be a positive number. Please enter again: ";
        cin >> size;
    }

    // Compute the area of the regular polygon
    double area = (sides * size * size) / (4 * tan(M_PI / sides));

    cout << fixed << setprecision(2);
    cout << "\nYour Mars house has " << sides << " sides." << endl;
    cout << "Each side is " << size << " meters long." << endl;
    cout << "The total floor area is about " << area << " square meters." << endl;

    cout << "\nHere’s a simple text version of your Mars house:\n" << endl;

    // Simple ASCII "house" (static for now)
    cout << "        ^" << endl;
    cout << "       / \\" << endl;
    cout << "      /___\\" << endl;
    cout << "     |     |" << endl;
    cout << "     |     |" << endl;
    cout << "     |_____|" << endl;

    cout << "\n(Imagine this as a " << sides << "-sided Mars house!)" << endl;

    cout << "\n Ready for life on Mars!" << endl;
    return 0;
}