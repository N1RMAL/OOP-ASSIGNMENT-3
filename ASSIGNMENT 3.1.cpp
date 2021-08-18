#include <iostream>
using namespace std;

int main()
{
    int* num;
    int yards, feet, inches;
    cout << "Enter the measurement in inches:";
    num = new int;
    cin >> *num;
    yards = *num/36;
    feet = (*num-(yards*36))/12;
    inches = *num - ((yards*36)+(feet*12));
    cout << "The conversion results to " << yards << " yards, " << feet << " feet and " << inches << "inches.";
    delete num;
}

