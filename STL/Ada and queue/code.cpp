// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int max_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] > array[max_idx])
        max_idx = i;
    }

    // put min at the correct position
    swap(&array[max_idx], &array[step]);
  }
}
int main()

{

int arr[4] = {4,5,2,6};
selectionSort(arr,4);
for(auto i: arr)
    cout << i << " ";
}
