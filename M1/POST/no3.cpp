#include<iostream>
#include<math.h>
#include <conio.h>
using namespace std;

class jarak{ 
	public:
	void dua_titik(); 
	float jarak_2titik();
	
	private: 
	int  x1,x2,y1,y2,a,b;
	float jarak; 
};
 
void jarak::dua_titik(){
	cout<<"MENGHITUNG 2 JARAK TITIK KOORDINAT"<<endl<<endl;
	cout<<"Masukkan nilai : \n";
	cout<<"Masukkan A titik X1 : ";
	cin>>x1;
	cout<<"Masukkan A titik Y1 : ";
	cin>>y1;
	cout<<"Masukkan B titik X2 : ";
	cin>>x2;
	cout<<"Masukkan B titik Y2 : ";
	cin>>y2;
	cout<<endl<<endl;
}
 
float jarak::jarak_2titik(){
	jarak=(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
	cout<<"Hasil jaraknya adalah: "<<jarak;
}
 
int main(int argc, char *argv[]){
	jarak X;
	X.dua_titik();
	X.jarak_2titik();
	getch();
	return 0; 
}
