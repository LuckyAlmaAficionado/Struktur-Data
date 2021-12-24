#include <iostream>
using namespace std;

int data[5];
int event[5];
int odd[5];

int main()
{
    int count1 = 0;
    int count2 = 0;
    int number;
    cout << "Enter size of array: 5" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Input element-" << i << ": ";
        cin >> number;
        data[i] = number;
    }

    cout << "Array: [";
    for (int i = 0; i < 5; i++)
    {
        cout << data[i];
        if (i == 4)
        {
            break;
        }
        cout << ", ";
    }
    cout << "]" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (data[i] % 2 == 0)
        {
            event[count1] = data[i];
            count1++;
        }
        else
        {
            odd[count2] = data[i];
            count2++;
        }
    }

    cout << "Even Array: [";
    for (int i = 0; i < count1; i++)
    {
        cout << event[i];
        if (i == count1 - 1)
        {
            break;
        }
        cout << ", ";
    }
    cout << "]";
    cout << endl;

    cout << "Odd Array: [";
    for (int i = 0; i < count2; i++)
    {
        cout << odd[i];
        if (i == count2 - 1)
        {
            break;
        }
        cout << ", ";
    }
    cout << "]";

    return 0;
}