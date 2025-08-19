#include <iostream>
using namespace std;
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}
int main() {
    int choice;
    float celsius;
    do {
        cout << "\n====== Temperature Converter ======\n";
        cout << "1. Convert Celsius to Fahrenheit\n";
        cout << "2. Convert Celsius to Kelvin\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                cout << "Fahrenheit: " << celsiusToFahrenheit(celsius) << " �F" << endl;
                break;

            case 2:
                cout << "Enter temperature in Celsius: ";
                cin >> celsius;
                cout << "Kelvin: " << celsiusToKelvin(celsius) << " K" << endl;
                break;

            case 3:
                cout << "Exiting the program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}

