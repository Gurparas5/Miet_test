#include <iostream>

using namespace std;

int divisibleBy3(int arr[], int size) {
  if (size <= 0) { 
    return -1; 
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) { 
      return -1;
    }
    if (arr[i] % 3 == 0) {
      count++;
    }
  }
  return count;
}

int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  if (n <= 0) { 
    cout << "Invalid Input" << endl;
    return 1;
  }

  int arr[20];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = divisibleBy3(arr, n);
  if (count == -1) { 
    cout << "Invalid Input" << endl;
  } else {
    cout << "Count of 3 multiples: " << count << endl;
  }

  return 0;
}
