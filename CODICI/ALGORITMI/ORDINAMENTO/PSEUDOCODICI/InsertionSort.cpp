void insertionSort(int arr[])
  for (i<-2 to n)
    key<-arr[i]
    j<-i - 1
    while (j>=1 AND arr[j] > key)
      arr[j+1]<-arr[j]
      j<-j-1
    arr[j+1]<-key
