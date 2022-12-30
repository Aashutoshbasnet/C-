#include<iostream>

using namespace std;

int binarySearch(int arr[],int key,int s,int e) {
	 
	 if(s > e){
	 	return -1;
	 }
	 
	 else{
	 	
	 	int mid = s + ( e - s)/2;
	 	
	 	if(key > arr[mid])
	 		return binarySearch(arr,key,mid + 1,e);
	 	else if(key < arr[mid])
	 		return binarySearch(arr,key,s,mid-1);
		 else
		 return mid;
	 }
}

int main () {
	int s = 0, e = 3;
	int array[4] = {1,3,5,6};
	int key;
	 
	 cout<<"type the element you want index of: "<<endl;
	 cin>>key;
	 
	 cout<<"The index of the key is : "<<binarySearch(array,key,s,e)<<endl;
	
	return 0;
}