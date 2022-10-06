#include<iostream>
using namespace std;

class balik{
	public:
		void operasi(int);
		int operasi_rekursif(int);
};

void balik::operasi(int bilangan){
	while(bilangan>0){
		cout<<bilangan%10;
		bilangan=(bilangan-bilangan%10)/10;
	}
}

int balik::operasi_rekursif(int bilangan){
	if(bilangan==1){
		return 1;
	}else{
		cout<<bilangan%10;
		bilangan=(bilangan-bilangan%10)/10;
		
		return operasi_rekursif(bilangan/1);
	}
}
main(){
	int bilangan;
	cout<<"Masukkan Bilangan : ";
	cin>>bilangan;
	balik angka;
	cout<<"------------------------------------------"<<endl;
	cout<<"Pembalikan Bilangan Secara Iteratif : ";
	angka.operasi(bilangan);
	cout<<endl<<endl;
	cout<<"Pembalikan Bilangan Secara Rekursif : ";
	cout<<angka.operasi_rekursif(bilangan);
}
