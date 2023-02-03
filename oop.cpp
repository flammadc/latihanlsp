#include <iostream>
using namespace std;
int main(){
	int type,ttime,price;
	char choice;
	bool repeat = true;
		
	while (repeat){
	system ("CLS");

	cout << "Program booking hotel" << endl;
	cout << "			| Superior		| Deluxe		| Premium		" << endl;
	cout << "========================================================================================" << endl;
	cout << " 1-2 Hari		| 100.000/night		| 150.000/night		| 200.000/night		" << endl;
	cout << " 3-4 Hari		| 90.000/night		| 135.000/night		| 180.000/night		" << endl;
	cout << " <5 Hari		| 80.000/night		| 120.000/night		| 160.000/night		" << endl;
	cout << "Tipe kamar" << endl;
	cout << "1. Superior" << endl;
	cout << "2. Deluxe" << endl;
	cout << "3. Premium" << endl;

	cout << "Pilih tipe kamar		: ";
	cin >> type;

	cout << "Lama menginap 			: ";
	cin >> ttime;

	
	switch (type) {
	  case 1:
	    switch(ttime){
	    	case 1:
	    		price = 1 * 100000;
	    		break;
	    	case 2:
	    		price = 2 * 100000;
	    		break;
			case 3:
	    		price = 3 * 90000;
	    		break;
			case 4:
	    		price = 4 * 90000;
	    		break;	
	    	case <5:
	    		price = 5 * 90000;
	    		break;
	    	default:
	    		price = 
		}
	    if(1 <= ttime >= 2 ){
	    	ttime = ttime * 100000;
		}
		break;
	  case 2:
	    cout << "Tuesday";
	    break;
	  case 3:
	    cout << "Wednesday";
	    break;
	  
	}
	
	cout << "Total harga			: ";
	price = 150000;
	cout << price;
	cout << endl;
	
	cout << "Ingin memesan lagi? (y/n) : ";
	cin >> choice;
	
	if(choice == 'Y' || choice == 'y'){
		repeat = true;
	}
	if(choice == 'N' || choice == 'n'){
		repeat = false;
	}
	}
	
}
