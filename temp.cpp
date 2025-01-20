#include <bits/stdc++.h>
using namespace std;

double celtofar(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fartocel(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main()
{
    double temp;
    char choice;

    cout << "Two in one thermometer :)" << endl;
    cout << "                        " << endl;

    do
    {
        cout << "Enter the value: ";
        cin >> temp;

        cout << "Select the conversion mode: " << endl;
        cout << "1.Celsius to Fahrenheit" << endl;
        cout << "2.Fahrenheit to Celsius" << endl;
        cout << "Enter your choice from above (1 or 2): ";
        cin >> choice;

        double tempconversion;
        switch (choice)
        {
        case '1':
            tempconversion = celtofar(temp);
            cout << temp << " degrees Celsius is equal to " << tempconversion << " degrees Fahrenheit." << endl;
            break;
        case '2':
            tempconversion = fartocel(temp);
            cout << temp << " degrees Fahrenheit is equal to " << tempconversion << " degrees Celsius." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }

        cout << "Wanna try this once again? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank You for using!" << endl;

    return 0;
}
