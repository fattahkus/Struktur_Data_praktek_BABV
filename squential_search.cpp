#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int Array[]={1,2,3,4,5,6,7,8,9,10};
	int cari=0;
	
	cout<<"Masukan Angka Yang Ingin Anda Cari : ";cin>>cari;
	
	for(int i=0;i<10;i++){
		if(Array[i]==cari){
			cout<<"Ketemu Gan!!";
			break;
		}else{
			cout<<"Ora Ketemu Gan!!";
			break;
		}
	}
}
