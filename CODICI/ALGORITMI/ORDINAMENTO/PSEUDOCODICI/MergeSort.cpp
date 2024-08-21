merge(arr[],left,mid,right)
  n1<-mid-left+1
  n2<-right-mid
  L<-new array[n1]
  R <-new array[n2]
  i<-0,j<-0
  for(i<-1 to n1)
    L[i]=A[left+i-1]
  for(j<-1 to n2)
    R[j]=A[mid+j]
  L[n1]<- +INF
  R[n2]<- +INF
  i<-1
  j<-1
  for(k<-left to right)
    if L[i] <= R[j]
      A[k]<-L[i]
      i++
    else
      A[k]<-R[j]
      j++

void mergeSort(int arr[], int temp[], int left, int right)
  if (left < right)
    mid<-[(left+right)/2]
    Merge-Sort(A,left,mid)
    Merge-Sort(A,mid+1,right)
    Merge(A,left,mid,right)
