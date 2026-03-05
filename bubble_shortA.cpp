#include <iostream>
#include <vector>
using namespace std;

int arr[20];
int n;

void input()
{
    int d;
    while (true)
    {
    cout << "Masukkan banyaknya elemen pada array: ";
    cin >> n;  
    if (n <=20)
        break;
    else
        {
        cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
}
cout << endl;
cout << "======================" << endl;
cout << "Masukkan elemen array: " <<
cout << "======================" << endl;

for (int i = 0; i < n; i++)
{
    cout << "Data ke-" << (i + 1) << ": ";
    cin >> arr[i];
}

void bubblesortarray()
{
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j < n - pass; j++)
        { // step 2}
            if (arr[j] > arr[j + 1])
            { // step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass += 1; // step 4

        cout << "\npass " << pass - 1 << ": "; // number of pass
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // menampilkan data pada number of pass
        }   
        cout << endl;
    
    } while (pass <= n - 1); // step 5
}

