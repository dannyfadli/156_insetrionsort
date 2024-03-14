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
	cout << endl;										//membuat jarak per baris program
	cout << "======================" << endl;			// membuat tampilan susunan data elemen array
	cout << "Masukkan Element Array" << endl;			
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)							// menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";			//Memasukan atau menampilkan nilai data n
		cin >> arr[i];									//Menyimpan Nilai data n kedalam array arr
	}
}

void insertionsort() {									// Procedure insertionsort

	int temp;											//Membuat variable data temporer atau penyimpanan sementara
	int i, j;											//membuat variable i dan j sebagai penanda

	for (i = 1;i <= n - 1; i++) {						// 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];									// 2. simpan nilai arr[1] ke variable sementara temp

		j = i - 1;										// 3. Setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)					// 4. Looping while dimana nilai j lebih besar sama dengan 0 dan
														// arr[j] lebih besar daripada temp
		{
			arr[j + 1] = arr[j];						// 4a simpan arr[j] ke dalam variable arr[j + 1]
			j--;										// 4b simpan nilai j by 1
		}
		arr[j + 1] = temp;								// 5 simpan nilai temp ke dalam arr [j+1]

		cout << "\nPass " << i << ": ";					// Ouput ke layar
		for (int k = 0; k < n; k++) {					// Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << "";						// ouput ke layar
		}
	}

}
