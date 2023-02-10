#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

int type, ttime, price, tprice;
float tax = 0.10;
char choice;
string name;
bool repeat = true;
	
void ui(){
	system("cls");
	
	cout << "Program Menginap Di Hotel" << endl;
	cout << "		: Superior		: Deluxe		: Premium		" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "1-2 Hari	: 100.000/night		: 150.000/night		: 200.000/night		" << endl;
	cout << "3-4 Hari	: 90.000/night		: 135.000/night		: 180.000/night		" << endl;
	cout << ">5 Hari		: 80.000/night		: 120.000/night		: 160.000/night		" << endl;	
	cout << "-------------------------------------------------------------------------------" << endl;
	
	cout << "Tipe Kamar" << endl;
	cout << "1. Superior" << endl;
	cout << "2. Deluxe" << endl;
	cout << "3. Premium" << endl;
	cout << "Masukan Nama Anda		: "; cin >> name;
	cout << "Pilih Tipe Kamar		: "; cin >> type;
	cout << "Lama Menginap			: "; cin >> ttime;
	
	switch(type){
		case 1: 
		if(ttime <= 2){
			price = ttime * 100000;
		} else if(ttime == 3 || ttime <= 4){
			price = ttime * 90000;
		} else if(ttime >= 5){
			price = ttime * 80000;
		}
		break;
		
		case 2: 
		if(ttime <=2 ){
			price = ttime * 150000;
		} else if(ttime == 3 || ttime <= 4){
			price = ttime * 135000;
		} else if(ttime >= 5){
			price = ttime * 120000;
		}
		break;
		
		case 3: 
		if(ttime <=2 ){
			price = ttime * 200000;
		} else if(ttime == 3 || ttime <= 4){
			price = ttime * 180000;
		} else if(ttime >= 5){
			price = ttime * 160000;
		}
		break;
	}
	
//	REQUESTED BY HERRY
	tprice = price * tax;
	
	time_t ltime = time(0);
    
	char* dt = ctime(&ltime);
	string dateTime;
	dateTime = dt;
	dateTime.erase(dateTime.length()-1);
	
//	REQUESTED BY HERRY
	cout << endl;
	cout << "=================================================================" <<endl;
	cout << "|\t\t\tHello Here's Your Receipt\t\t|" <<endl;
	cout << "|\tFor Mr/Mrs.\t\t: " << name << "\t\t\t\t|" <<endl;
	cout << "|\tType Room\t\t: " << type << "\t\t\t\t|" <<endl;
	cout << "|\tTotal Days\t\t: " << ttime << "\t\t\t\t|" <<endl;
	cout << "|\tTotal Price\t\t: " << price << "\t\t\t|" <<endl;
	cout << "|\tTotal Price *tax\t: " << price - tprice << "\t\t\t\t|" <<endl;
	cout << "|\tDelivered on\t\t: " << dateTime << "\t|" << endl;
	cout << "=================================================================" <<endl;
	
	
}

main(){
	while(repeat){	
		ui();
		
		cout << "Ingin Memesan Lagi (Y/N)	: "; cin >> choice;
		 if(choice == 'Y' || choice == 'y'){
		 	repeat = true;
		 }
		 if(choice == 'N' || choice == 'n'){
		 	repeat = false;
		 }
	}
	
}
