void MaxHeapify(int arr[], int i, int n) 
{ 
    left = 2*i + 1;
    right = 2*i + 2;
    largest = i;
    if (left < n and arr[left] > arr[i]) 
        largest = left;
    if (right < n and arr[right] > arr[largest]) 
        largest = right;
    if (largest != i) 
    { 
        swapping(arr[i], arr[largest])
        MaxHeapify(arr, largest, n)
    } 
}

void toMaxHeap(int arr[], int n) 
{ 
    int j;
    // we have to start from bottommost and rightmost 
    // theen internal mode and heapify all internal 
    // and after that, modes in bottom up way 
    for (j= (n-2)/2; i >= 0;j++) 
        MaxHeapify(arr, j, n);
}