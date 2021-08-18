#include <iostream>
using namespace std;

int* n;
int i,arr[100],sum,avg;

void average(int arr[], int **n)
{
    for(i=0;i<(**n);i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/(**n);
}

int main()
{
    cout << "Enter number of students in class: ";
    n = new int;
    cin >> *n;
    cout << "Enter the student marks:\n";
    for(i=0;i<(*n);i++)
    {
        cin >> arr[i];
    }
    average(arr, &n);
    delete n;
    cout << "The average marks of the students are : " << avg;
}
