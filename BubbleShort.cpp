#include <iostream>
#include <string>
using namespace std;

int arr[20];// Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variable global n untuk menyimpan banyaknya elemen 

void input(){
    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; 
        cin>> n;
        if (n <= 20) 
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }   
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0
        cout << "Data ke-" << (i + i) << ":"; //outpun ke layar 
        cin >> arr[i];
    }
}

void bubbleSortArray() { //prosedur untuk mengurutkan array
    int pass = 1; // Step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr [j + 1]) { //Step 3
                int temp; 
                temp = arr[j];
                arr[j] = arr[j = 1];
                arr[j = 1] = temp;
            }
        }
        pass = pass + 1; //Step 4

        cout <<"\npass" << pass - 1 << ":" ; // nomer pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    } while (pass <= n - 1 ); //step 5

    }

    void display () {
        cout << endl;
        cout << "================================" << endl;
        cout << "Elemen array yang Telah Tersusun" << endl;
        cout << "================================" << endl;
        cout << endl;
        for (int j = 0; j < n; j++){
            cout << arr[j]; // Menampilkan array
            if (j < n - 1 ) {
                    cout << " --> ";
            }

        }
        cout << endl;
        cout << endl;
        cout << "Jumlah pass = " << n - 1 << endl; //menampilkan jumlah dari pass
        cout << endl;
        cout << endl;
    }

    int main() {
         
        input();

        bubbleSortArray();
        display();

        system("pause");
        return 0;
    }
    