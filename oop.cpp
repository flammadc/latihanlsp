#include <iostream>
#include <conio.h>
using namespace std;

int type,ttime,price;
char choice;
bool repeat = true;


void booking() {
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
			
	    if (ttime <= 2 ) {
	    	price = ttime * 100000;
		} else if(ttime == 3 || ttime <= 4){
			price = ttime * 90000;
		} else if(ttime >= 5){
			price = ttime * 80000; 
		}
		
	    break;
		
	  case 2:
	    if (ttime <= 2 ) {
	    	price = ttime * 150000;
		} else if(ttime == 3 || ttime <= 4){
			price = ttime * 135000;
		} else if(ttime >= 5){
			price = ttime * 120000; 
		}
		break;
	  
	  	case 3:
	    if (ttime <= 2 ) {
	    	price = ttime * 200000;
		} else if(ttime == 3 || ttime <= 4){
			price = ttime * 180000;
		} else if(ttime >= 5){
			price = ttime * 160000; 
		}
	    break;
	  
	}
	
	cout << "Total harga			: ";
	cout << price;
	cout << endl;
	getch();
}

main(){
    while(repeat){
       booking();
       cout << endl << endl;
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

