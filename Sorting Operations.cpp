#include <iostream>

using namespace std;

void bubbleSort( int A[]){
	
	int n = 4;
	
	// Sorting the list Descending
	for (int i= 0; i < n; i++){
		
		for(int i = 0; i < n; i++){
			if (A[i] < A[i+1]){
				int t = A[i];
				A[i] = A[i + 1];
				A[i + 1] = t;
			}
		}
		
	}
	
	// Traversing the array.
	cout << "Traversing using bubble method Descending: ";
	for (int i = 0; i < 5; i++){
		cout << A[i] << " ";
	}
	
	// Sorting the list in Ascending order.
	for (int i= 0; i < n; i++){
		
		for(int i = 0; i < n; i++){
			if (A[i] > A[i+1]){
				int t = A[i];
				A[i] = A[i + 1];
				A[i + 1] = t;
			}
		}
		
	}
	
	// Traversing the Ascending sort array.
	cout << endl;
	cout << "Traversing using bubble method Ascending: ";
	for (int i = 0; i < 5; i++){
		cout << A[i] << " ";
	}
}

void selectionSort(int A[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < size; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
        
        
    }
    cout << endl;
    cout << "Traversing using Selection method Ascending: ";
    for (int i = 0; i < size; i++) {
    cout << A[i] << " ";
    }
    cout << endl;
}
int main(){
	
	int A[5] = {2,5,3,1,4};
    int size = 5;
	bubbleSort(A);
    selectionSort(A, size);

	
	
		
	
	return 0;
}

















