#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ascending(int nums[]){
	int i,j;
	for(i = 0; i < 3-1; i++){
		for(j = 0; j < 3-i-1; j++){
			if(nums[j] > nums[j+1]){
				swap(nums[j], nums[j+1]);
			}
		}
	}
}

void descending(int nums[]){
	int i,j;
	for(i = 0; i < 3-1; i++){
		for(j = 0; j < 3-i-1; j++){
			if(nums[j] < nums[j+1]){
				swap(nums[j], nums[j+1]);
			}
		}
	}
}

void mean(int nums[]){
	int i,j,k;
	for(i = 0; i < 3; i++){
		j += nums[i];
		k = j / 3;
	}
		cout << k;	
}

void zerodex(int nums []){
	cout << nums[0];
}

void print(int nums[]){
	int i; 
	for(i = 0; i < 3; i++){
		cout << nums[i] << " ";
	}
}


main(){
	int i, nums[3];
	
	cout << "Masukan Tiga Buah Nilai" << endl;
	cout << "Nilai A : "; cin >> nums[0];
	cout << "Nilai B : "; cin >> nums[1];
	cout << "Nilai C : "; cin >> nums[2];
	
	cout << "Urutan Nilai Ascending :";
	ascending(nums);
	print(nums);
	
	cout << endl;
	
	cout << "Urutan Nilai Descending :";
	descending(nums);
	print(nums);
	
	cout << endl;
	
	cout << "Nilai MAX : ";
	zerodex(nums);
	
	cout << endl;
	
	cout << "Nilai MIN : ";
	ascending(nums);
	zerodex(nums);
	
	cout << endl;

	
	cout << "Nilai Rata Rata : ";
	mean(nums);
	
	
}
