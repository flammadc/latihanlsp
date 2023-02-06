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
		}
	}
}

void print(int nums[], int length){
	int i;
	for(i = 0; i < length; i++){
		cout << nums[i]<< " ";
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
	int nums[3];
	int length = sizeof(nums)/sizeof(nums[0]);
	cout << "Masukan tiga buah nilai\n";
	for(int i = 0; i < length; i++){
		cout << "Nilai ke-" << i+1 << " : ";
		cin >> nums[i];
	}
	
	
	//	start sorting section
	ascending(nums, length);
	cout << "Sorted Array Ascending : ";
	print(nums, length);
	cout << endl;
	descending(nums, length);
	cout << "Sorted Array Descending : ";
	print(nums, length);
	cout << endl;
	//	end sorting section
	
	//	max
	cout << "Nilai Max : ";
	descending(nums, length);
	zerodex(nums, length);

	cout << "Nilai Min : ";
	ascending(nums, length);
	zerodex(nums, length);

	cout << "Nilai Mean : ";
	mean(nums,length);
	return 0;
}
