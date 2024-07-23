// Data Structure Practice
void printArr(int arr[], int length);
void changeArr(int arr[], int length);
int sumArr(int arr[], int length);
double avgArr(int arr[], int length);


int main() {

	int nums[6] = {0, 2, 4, 6, 8, 10};

	printArr(nums, 6);
	std::cout << "The sum of the indexs of this array is " << sumArr(nums, 6) << std::endl;
	std::cout << "The average of the sum of the indexs of this array is " << avgArr(nums, 6);

	return 0;

}

void printArr(int arr[], int length) {

	std::cout << "[";

	for (int i = 0; i < length; i++) {

		std::cout << arr[i];

		if (i < length - 1) {
			std::cout << ", ";
		}

	}
	std::cout << "]" << std::endl;
}

void changeArr(int arr[], int length) {


	for (int z = 0; z < length; z++) {

		std::cout << "Enter replacement #"<< z + 1 << std::endl;
		std::cin >> arr[z];
		
	} 
	std::cout << "[";

	for (int x = 0; x < length; x++) {
			std::cout << arr[x];
			if (x < length - 1) {
			std::cout << ", ";
		}

	}
	std::cout << "]";


}

int sumArr(int arr[], int length) {

	int sum = 0;
	for (int i = 0; i < length ; i++) {

		sum = sum + arr[i];
	}
	return sum;

}

double avgArr(int arr[], int length) {
	return sumArr(arr, length) / length;
}
