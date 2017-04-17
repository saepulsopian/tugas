#include <iostream>
using namespace std;


	typedef struct 
	{
		string noKA;
		string namaKA;
	} kereta;
	
	typedef struct 
	{
		string nama;
		string ktp;
	} penumpang;
	
	typedef struct 
	{
		int jam;
		int menit;
		int detik;
	} jam;
	
	typedef struct 
	{
		string hari;
		string bulan;
		int tahun;
	} tanggal;
	
	typedef struct 
	{
		string kotaAsalKA;
		string kotatujuanKA;
		jam waktuBerangkat;
		jam waktuTiba;
		tanggal tanggalBerangkat;
		tanggal tanggalTiba;
		string harga;
	} jadwalKA;
	

int main (){
	penumpang Reni;
	kereta KA;
	jadwalKA tiket;
	
	KA.noKA = "BDO-Parahyangan-0103";
	KA.namaKA = "Parahyangan";
	
	tiket.tanggalBerangkat.hari = "Selasa, 17";
	tiket.tanggalBerangkat.bulan = " Januari ";
	tiket.tanggalBerangkat.tahun = 2007;
	
	cout << "Masukan Nama : ";
	cin >> Reni.nama ;
	cout << "Masukan No KTP : ";
	cin >> Reni.ktp;
	
	cout << " Tujuan : ";
	cin >> tiket.kotatujuanKA;
	cout << " Asal : ";
	cin >> tiket.kotaAsalKA;
	
	if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 137.000";
	}
	else if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Jakarta"){
		tiket.harga = "Rp. 157.000"; 
	}
	else {
			tiket.harga = "Rp. 0"; 
	}
	
	
	cout << endl; 
	cout << "=========== DATA PERJALANAN ===========" << endl;
	cout << "---------------------------------------" << endl;
	
	cout << "No Kereta Api : " << KA.noKA << endl;
	cout << "Nama Kereta Api : " << KA.namaKA << endl << endl;
	
	cout << "Nama Penumpang : " << Reni.nama << endl;
	cout << "No KTP : " << Reni.ktp << endl << endl;
	
	cout << "Tujuan : " << tiket.kotatujuanKA << endl;
	cout << "Asal : " << tiket.kotaAsalKA << endl << endl;
	
	cout << "Biaya : " << tiket.harga << endl << endl; 
	
	cout << "Tanggal Berangkat : " << tiket.tanggalBerangkat.hari << tiket.tanggalBerangkat.bulan << tiket.tanggalBerangkat.tahun << endl; 
	
	 return 0; 
}
