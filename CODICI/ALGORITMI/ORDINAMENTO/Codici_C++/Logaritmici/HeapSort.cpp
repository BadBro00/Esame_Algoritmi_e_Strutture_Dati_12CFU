int Left(int i) {
  return 2 * i + 1;
}
int Right(int i) {
  return 2 * i + 2;
}
int Parent(int i) {
  return (i - 1) / 2;
}

void MaxHeapify(int arr[], int n, int i) {
  int largest = i;
  int left = Left(i);
  int right = Right(i);
  if (left < n && arr[left] > arr[largest]) {
    largest = left;
  }
  if (right < n && arr[right] > arr[largest]) {
    largest = right;
  }
  if (largest != i) {
    swap(arr[i], arr[largest]);
    MaxHeapify(arr, n, largest);
  }
}

void BuildMaxHeap(int arr[], int n) {
  for (int i = floor(n/2)-1; i >= 0; i--) {
    MaxHeapify(arr, n, i);
  }
}

void HeapSort(int arr[], int n) {
  BuildMaxHeap(arr, n);
  for (int i = n - 1; i >= 0; i--) {
    swap(arr[0], arr[i]);
    MaxHeapify(arr, i, 0);
}
