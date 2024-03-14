#include <iostream>
using namespace std;

int arr[20];				//Membuat array dengan panjang data 20
int n;						//membuat variable inputan n

void input() {				//procedure input
	while (true)
	{
		cout << "masukkan jumlah data pada array : ";	// Membuat Inputan jumlah element Array
		cin >> n;										// memanggil variable inputan n

		if (n <= 20) {									// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // menampilkan pesan jika data lebih dari 20

		}
	}
	cout << endl;										//membuat jarak per baris prpgram
	cout << "======================" << endl;			// membuat tampilan susunan data elemen array
	cout << "Masukkan Element Array" << endl;			
	cout << "======================" << endl;


}

