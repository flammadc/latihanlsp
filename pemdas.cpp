#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ascending(int nums[], int length){
	int i,j,k;
	for(i = 0; i < length-1; i++){
		for(j = 0; j < length-i-1; j++){
			if(nums[j] > nums[j+1]){
				swap(nums[j], nums[j+1]);
			}
//			for(k = 0; k < length; k++){
//				cout << nums[k] << " ";
//			}
//			cout << endl;
		}
	}
}

void descending(int nums[], int length){
	int i,j,k;
	for(i = 0; i < length-1; i++){
		for(j = 0; j < length-i-1; j++){
			if(nums[j] < nums[j+1]){
				swap(nums[j], nums[j+1]);
			}
//			for(k = 0; k < length; k++){
//				cout << nums[k] << " ";
//			}
//			cout << endl;
		}
	}
}

void print(int nums[], int length){
	int i;
	for(i = 0; i < length; i++){
		cout << nums[i]<< " ";
//		cout << endl;
	}
}

void zerodex(int nums[], int length){
	int i;
	cout << nums[0] << endl;
}

void mean(int nums[], int length){
	int i,j,k;
	j = 0;
	for(i = 0; i < length; i++){
		j += nums[i];		
		k = j / length;
	}
	cout << k;
}

int main(){
//	int nums[3] = {7,5,9};
	int nums[3];
	int length = sizeof(nums)/sizeof(nums[0]);
	cout << "Masukan tiga buah nilai\n";
	for(int i = 0; i < length; i++){
		cout << "Nilai ke-" << i+1 << " :";
		cin >> nums[i];
	}
	
	
	//	sorting section
	ascending(nums, length);
	cout << "Sorted array ascending" << endl;
	print(nums, length);
	descending(nums, length);
	cout << "\nSorted array descending" << endl;
	print(nums, length);
	cout << endl;
	//	sorting section
	
//	max

	cout << "MAX: ";
	descending(nums, length);
	zerodex(nums, length);


	cout << "MIN: ";
	ascending(nums, length);
	zerodex(nums, length);

	cout << "MEAN: ";
	mean(nums,length);
	return 0;
}
