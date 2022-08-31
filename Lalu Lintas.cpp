#include <iostream>

using namespace std;

int main(){
	string warna;
	
	cout<<"Lampu Lalu Lintas"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Warna Lampu : ";
	cin>>warna;
	
	//percabangan if/else/if
	if(warna == "merah"){
		cout<<"berhenti"<<endl;
	}else if(warna == "hijau"){
		cout<<"jalan"<<endl;
	}
	
	return 0;
}
