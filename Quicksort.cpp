/* C++ implementation of QuickSort */
#include<iostream>
#include<time.h>
using namespace std;

// A utility function to swap two elements  
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot  
	int i = (low - 1); // Index of smaller element  

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot  
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element  
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before  
		// partition and after partition  
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	cout << arr[i] << " ";
	cout << endl;
}

// Driver Code 
int main()
{
	//Input size: 100
	int arr[100];
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}

	int size_1 = sizeof(arr) / sizeof(arr[0]);
	clock_t startTime_1 = clock();
	quickSort(arr, 0, size_1 - 1);
	cout << "time = " << double(clock() - startTime_1) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100 \n";
	printArray(arr, n);

	
	return 0;
}

Task 2 Code:
void AverageCase() {
	cout << "\nQuicksort Average Case Analysis: \n";
	//Input size: 100
	int arr[100];
	srand(time(NULL));

	int size_1 = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size_1; i++) {
		arr[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}

	clock_t startTime_1 = clock();
	quickSort(arr, 0, size_1 - 1);
	cout << "time = " << double(clock() - startTime_1) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100 \n";
	//printArray(arr, n);

	//Input size: 1000
	int arr2[1000];
	srand(time(NULL));
	int size_2 = sizeof(arr2) / sizeof(arr[0]);

	for (int i = 0; i < size_2; i++) {
		arr2[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}

	clock_t startTime_2 = clock();
	quickSort(arr2, 0, size_2 - 1);
	cout << "time = " << double(clock() - startTime_2) / CLOCKS_PER_SEC << " ";
	cout << "For n = 1000 \n";

	//Input size: 10000
	int arr3[10000];
	int size_3 = sizeof(arr3) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < size_3; i++) {
		arr3[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}

	clock_t startTime_3 = clock();
	quickSort(arr3, 0, size_3 - 1);
	cout << "time = " << double(clock() - startTime_3) / CLOCKS_PER_SEC << " ";
	cout << "For n = 10000 \n";

	//Input size: 1000
	int arr4[100000];
	int size_4 = sizeof(arr4) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < size_4; i++) {
		arr4[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}

	clock_t startTime_4 = clock();
	quickSort(arr4, 0, size_4 - 1);
	cout << "time = " << double(clock() - startTime_4) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100000 \n";

	/*
	//Input size: 1000000
	int arr5[1000000];
	srand(time(NULL));
	int size_5 = sizeof(arr5) / sizeof(arr[0]);

	for (int i = 0; i < size_5; i++) {
		arr5[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}

	clock_t startTime_5 = clock();
	quickSort(arr, 0, size_5 - 1);
	cout << "time = " << double(clock() - startTime_5) / CLOCKS_PER_SEC << endl;
	cout << "For n = 1000";
	*/
}
int main()
{

	AverageCase();
return 0;
}



Task 3 Code:
void WorstCase() {
	cout << "\nQuicksort Worst Case Analysis: \n";
	//Input size: 100
	int arr[100];
	srand(time(NULL));

	int size_1 = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size_1; i++) {
		arr[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr, arr + size_1, greater<int>());
	clock_t startTime_1 = clock();
	quickSort(arr, 0, size_1 - 1);
	cout << "time = " << double(clock() - startTime_1) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100 \n";
	//printArray(arr, n);

	//Input size: 1000
	int arr2[1000];
	srand(time(NULL));
	int size_2 = sizeof(arr2) / sizeof(arr[0]);

	for (int i = 0; i < size_2; i++) {
		arr2[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr2, arr2 + size_2, greater<int>());

	clock_t startTime_2 = clock();
	quickSort(arr2, 0, size_2 - 1);
	cout << "time = " << double(clock() - startTime_2) / CLOCKS_PER_SEC << " ";
	cout << "For n = 1000 \n";

	//Input size: 10000
	int arr3[10000];
	int size_3 = sizeof(arr3) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < size_3; i++) {
		arr3[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr3, arr3 + size_3, greater<int>());
	clock_t startTime_3 = clock();
	quickSort(arr3, 0, size_3 - 1);
	cout << "time = " << double(clock() - startTime_3) / CLOCKS_PER_SEC << " ";
	cout << "For n = 10000 \n";

	//Input size: 1000
	int arr4[100000];
	int size_4 = sizeof(arr4) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < size_4; i++) {
		arr4[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr4, arr4 + size_4, greater<int>());
	clock_t startTime_4 = clock();
	quickSort(arr4, 0, size_4 - 1);
	cout << "time = " << double(clock() - startTime_4) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100000 \n";
}

void BestCase() {
	cout << "\nQuicksort Best Case Analysis: \n";
	//Input size: 100
	int arr[100];
	srand(time(NULL));

	int size_1 = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size_1; i++) {
		arr[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr, arr + size_1);
	clock_t startTime_1 = clock();
	quickSort(arr, 0, size_1 - 1);
	cout << "time = " << double(clock() - startTime_1) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100 \n";
	//printArray(arr, n);

	//Input size: 1000
	int arr2[1000];
	srand(time(NULL));
	int size_2 = sizeof(arr2) / sizeof(arr[0]);

	for (int i = 0; i < size_2; i++) {
		arr2[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr2, arr2 + size_2);

	clock_t startTime_2 = clock();
	quickSort(arr2, 0, size_2 - 1);
	cout << "time = " << double(clock() - startTime_2) / CLOCKS_PER_SEC << " ";
	cout << "For n = 1000 \n";

	//Input size: 10000
	int arr3[10000];
	int size_3 = sizeof(arr3) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < size_3; i++) {
		arr3[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr3, arr3 + size_3);
	clock_t startTime_3 = clock();
	quickSort(arr3, 0, size_3 - 1);
	cout << "time = " << double(clock() - startTime_3) / CLOCKS_PER_SEC << " ";
	cout << "For n = 10000 \n";

	//Input size: 1000
	int arr4[100000];
	int size_4 = sizeof(arr4) / sizeof(arr[0]);

	srand(time(NULL));

	for (int i = 0; i < size_4; i++) {
		arr4[i] = rand() % 100 + 1;
		//cout << array[i] << " ";
	}
	sort(arr4, arr4 + size_4);
	clock_t startTime_4 = clock();
	quickSort(arr4, 0, size_4 - 1);
	cout << "time = " << double(clock() - startTime_4) / CLOCKS_PER_SEC << " ";
	cout << "For n = 100000 \n";

}
int main()
{
	BestCase();
	WorstCase();
	return 0;
}

