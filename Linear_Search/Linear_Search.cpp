#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int key) {

	for (int i = 0; i < size; i++) {
		if (key == array[i]) {
			return i;
		}
	}
	return -1;
}


int main()
{
	int array[] = { 20,30,80,70,90 };
	int size = sizeof(array) / sizeof(array[0]);//5*4=20 => 20/4 =>5

	int num;
	cout << "Enter an Integer :";
	cin >> num;

	int result = linearSearch(array, size, num);
	if (result == -1)
		cout << "The Number : (" << num << ") Was Not Found." << endl;
	else
		cout << "The Number : (" << array[result] << ") Was Found At Index : (" << result << ")" << endl;
}

