#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;
void menu() 
{
	system("cls");
	cout << "	TOHO KOMPUTER KOTA GEDE	" << endl;
	cout << "=========================================" << endl;
	cout << "|\tDAFTAR BARANG   		|" << endl;
	cout << "=========================================" << endl;
	cout << "|Kode Barang				|" << endl;
	cout << "| 1. MOUSE		 Rp. 90000	|" << endl;
	cout << "| 2. KEYBOARD		 Rp. 300000	|" << endl;
	cout << "| 3. MOUSE PAD		 Rp. 200000	|" << endl;
	cout << "| 4. HEADSET		 Rp. 225000	|" << endl;
	cout << "| 5. MICROPHONE		 Rp. 190000	|" << endl;
	cout << "| 6. Selesai				|" << endl;
	cout << "=========================================" << endl;
}

int main()
{
	string item; 
	char yatidak;
	long harga, jumlah_barang, bayar, kembali, total = 0, total_bayar;
	float diskon;
	int pilih;

menu:
	system("Cls");
	menu();

	do
	{
		cout << "Input Kode Barang yang di pilih : ";
		cin >> pilih;

		switch (pilih)
		{
		case 1: 
			item = "MOUSE";
			harga = 90000;
			cout << "\nNama Barang		: " << item << endl;
			cout << "Jumlah Pembelian	: ";
			cin >> jumlah_barang;
			total += harga * jumlah_barang;
			cout << "Total Harga		: Rp. " << harga * jumlah_barang << endl << endl;
			break;
		case 2: 
			item = "KEYBOARD";
			harga = 300000;
			cout << "\nNama Barang		: " << item << endl;
			cout << "Jumlah Pembelian	: ";
			cin >> jumlah_barang;
			total += harga * jumlah_barang;
			cout << "Total Harga		: Rp. " << harga * jumlah_barang << endl << endl;
			break;
		case 3: 
			item = "MOUSE PAD";
			harga = 200000;
			cout << "\nNama Barang		: " << item << endl;
			cout << "Jumlah Pembelian	: ";
			cin >> jumlah_barang;
			total += harga * jumlah_barang;
			cout << "Total Harga		: Rp. " << harga * jumlah_barang << endl << endl;
			break;
		case 4: 
			item = "HEADSET";
			harga = 225000;
			cout << "\nNama Barang		: " << item << endl;
			cout << "Jumlah Pembelian	: ";
			cin >> jumlah_barang;
			total += harga * jumlah_barang;
			cout << "Total Harga		: Rp. " << harga * jumlah_barang << endl << endl;
			break;
		case 5: 
			item = "MICROPHONE";
			harga = 190000;
			cout << "\nNama Barang		: " << item << endl;
			cout << "Jumlah Pembelian	: ";
			cin >> jumlah_barang;
			total += harga * jumlah_barang;
			cout << "Total Harga		: Rp. " << harga * jumlah_barang << endl << endl;
			break;
		case 6:
			cout << "=========================================" << endl;
			cout << "	Struktur Pembayaran" << endl;
			cout << "=========================================" << endl;
					cout << "Total Harga	: Rp. " << total << endl;

					if (total > 500000){
						diskon = total * 0.05;
					}
					else if (total > 250000) {
						diskon = total * 0.02;
					}
					else {
						diskon = 0;
					}
					cout << "Diskon		: Rp. " << diskon << endl;
					total_bayar = total - diskon;
					cout << "Total Bayar	: Rp. " << total_bayar << endl;
					cout << "Uang Bayar	: Rp. ";
					cin >> bayar;
					kembali = bayar - total_bayar;
					cout << "Kembalian	: Rp. " << kembali << endl;
					break;
		default:
			break;
		}
	} while (pilih != 6);
	
	cout << "=========================================" << endl;
	tanya:
	cout << "Apakah ingin melakukan pembelian lagi (y//t)? : ";
	cin >> yatidak;

	if (yatidak == 'y' || yatidak == 'Y') {
			system("FP14.exe");
		}
	else if (yatidak == 't' || yatidak == 'T') {
			goto exit;
		}
	else {
		goto tanya;
		}
		
	exit:
	cout << "\nTerima Kasih Telah Berbelanja" << endl << endl;
	return 0;
}
