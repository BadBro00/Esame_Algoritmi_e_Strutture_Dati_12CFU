void QuickSort(int a[], int p, int r)
  if(p<r)
    q<-Partition(a,p,r)
    QuickSort(a,p,q)
    QuickSort(a,q+1,r)

int Partition(int a[],int p, int r)
  x<-a[p]
  i<-p-1
  j<-r+1
  while(true)
    repeat
      i<-i+1
    until(a[i]<=x)
    repeat
      j<-j-1
    until(a[j]>=x)
    if(i<j)
      swap(a[i],a[j])
    else return j
