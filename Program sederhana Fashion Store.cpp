#include<iostream>
using namespace std;

void hadiah(long a){
	if((a>=50000) && (a<=100000)){
		cout<< "Gift Voucher Diskon 10%";
	}else if((a>=100000) && (a<=500000)){
		cout<< "Mug Cantik";
	}else if((a>=500000) && (a<=1000000)){
		cout<< "Dompet Pouch";
	}else if((a>=1000000) && (a<=5000000)){
		cout<< "Tote Bag Kanvas + Pin Kecil";
	}else if((a>=5000000) && (a<=10000000)){
		cout<< "Topi + Luggage Tag";
	}else if (a>=10000000){
		cout<< "Baju Kaos + Gelang Tangan";
	}else{
		cout<< "Silahkan Belanja Kembali Lagi";
	}
}

int main(){
	long harga;
	long baju, celana, topi, tas;
	string nbarang[4];
	char ulang;
	
	do{
	system("cls");
	cout<< "\t\t\t = Selamat Datang Di Fashion Store =" << endl;
	cout<< "\t\t\t======================================\n" << endl;
	for(int i = 0; i < 4; i++){
	cout<< "Masukkan Barang yang anda beli: "; cin>> nbarang[i];
	}
	//jika salah satu kategori tidak dibeli maka harganya tulis nol (0).
	cout<< "\nHarga kategori baju Rp: "; cin>> baju;
	cout<< "Harga kategori celana Rp: "; cin>> celana;
	cout<< "Harga kategori topi Rp: "; cin>> topi;
	cout<< "Harga kategori tas Rp: "; cin>> tas;
	harga = baju + celana + topi + tas;
	cout<< "\nTotal Harga Semua Barang Rp: " << harga;
	cout<< "\nSelamat Anda Mendapatkan Bonus Belanja "; hadiah(harga);
	cout<< "\nApakah Anda Ingin Mengulang (y/t): "; cin>> ulang;
	}while(ulang=='y');
	cout<< "\n\n Terima Kasih Sudah Belanja Di Fashion Store";
}
