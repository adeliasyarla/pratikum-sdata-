#include<iostream>
using namespace std;
#define maks 5
class Array1D{
	friend ostream& operator<<(ostream&, const Array1D&);
	friend istream& operator>>(istream&, const Array1D&);
	
	public:
		Array1D();
		void cetak();
		void geser_kiri();
		void geser_kanan();
		char A[maks];
		
	private:
			
};

Array1D::Array1D() {
	for (int i=0;i<maks;i++)
	cout<<A[i]<<" ";
}
ostream& operator<<(ostream& out, const Array1D& x) {
	for(int i=0;i<maks;i++)
	cout<<x.A[i]<<" ";
	cout<<endl;
	return out;
}


istream& operator>>(istream& in, Array1D& x)
{
	int posisi;
	if(posisi>0 && posisi<=maks){
		cout<<"Mengisi Array Pada Posisi Ke : ";
	in>>x.A[posisi-1];
	}
	else
	cout<<"Anda Memasukkan Posisi Di Luar Range ...";
	return in;
	}
	

void Array1D::geser_kanan()
{
	int n=maks;
	int temp=A[n-1];
	for(int i=n-1;i>=0;i--)
	A[i+1]=A[i];
	A[0]=temp;
}

void Array1D::geser_kiri()
{
	int n=maks;
	int temp=A[0];
	
	for(int i=0;i<n;i++)
	A[i]=A[i+1];
	A[n-1]=temp;
}

main(){
	Array1D x;
	cout<<"Array Masih Kosong : "<<x;cin>>x;
	cout<<"Isi Array Saat Ini : "<<x;x.geser_kiri();
	cout<<"Isi Array Setelah Digeser Ke Kiri  : "<<x;x.geser_kanan();
	cout<<"Isi Array Setelah Digeser Ke Kanan : "<<x;
	return 0; 
}
