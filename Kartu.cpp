#include <iostream>
#include <string>

using namespace std;

int main(){
	string kartu,pilih;


cout<<"Kartu Parkir"<<endl;
cout<<"------------"<<endl;
cout<<"Kartu apa yang anda pakai?";
cin>>kartu;

//percabangan if/else/if
if(kartu == "gold"){
	cout<<"Pilih bonus (Ambil Bonus/Tukar Poin) : ";
	cin.get();
	getline(cin,pilih);
	if(pilih=="ambil bonus"){
		cout<<"Selamat Bonus Anda Telah Diambil"<<endl;
	}else if(pilih=="tukar poin"){
		cout<<"Selamat Bonus Anda Telah Masuk ke Poin"<<endl;
}
	}
	else if(kartu == "premium"){
	cout<<"Pilih bonus (Ambil Bonus/Tukar Poin) : ";
	cin.get();
	getline(cin,pilih);
	if(pilih=="ambil bonus"){
		cout<<"Selamat Bonus Anda Telah Diambil"<<endl;
	}else if(pilih=="tukar poin"){
		cout<<"Selamat Bonus Anda Telah Masuk ke Poin"<<endl;
	}
	}
	
	return 0;
}
