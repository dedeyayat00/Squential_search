#include <iostream>
using namespace std;
int main (){
	
	int a[4];
	int x;
	bool hasil;
	
	for (int i =0; i<4; ++i) {
		cout << "masukan data : \n";
		cin >> a[i];
	}
	cout << "\ndata yang ingin di cari : ";
	cin >> x; 

for (int i=0; i<4; ++i)
{
	if (a[i]==x){
		hasil = true;
		break ;
	} else {
		hasil = false;
	}

}
if (hasil == true){
		cout << "data di temukan ";
	
	} else {
		cout << "data tidak ditemukan ";
	
	}
return 0;
}