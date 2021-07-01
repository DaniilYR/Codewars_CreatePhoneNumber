#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr [10]){
	return "(" + std::to_string(arr[0]) 
			   + std::to_string(arr[1]) 
			   + std::to_string(arr[2]) 
			   + ") " 
			   + std::to_string(arr[3])
			   + std::to_string(arr[4])
			   + std::to_string(arr[5])
			   + "-" 
			   + std::to_string(arr[6])
			   + std::to_string(arr[7])
			   + std::to_string(arr[8])
			   + std::to_string(arr[9]);	
}


int main(){
	int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	std::cout << createPhoneNumber(n) << std::endl;
	return 0;
}
