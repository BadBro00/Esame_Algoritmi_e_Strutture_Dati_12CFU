Build_Max_Heap(int A[])
  A.heapsize<-A.length
  for(i<-A.length/2 downto 1)
    Max_Heapify(A,i)

Max_Heapify(int A[],int i)
  l<-Left(i)
  r<-Right(i)
  if(A[i]< A[l] && l<=A.heapsize)
    max<-l
  else
    max<-i
  if(A[i]<A[r] && r<=A.heapsize)
    max<-r
  if(max!=i)
    swap(A[max],A[i])
    Max_Heapify(A,i)

HeapSort(int A[], int size)
  Build_Max_Heap(A)
  for(j=A.size downto 1)
    swap(A[1],A[j])
    A.heapsize<-A.heapsize-1
    Max_Heapify(A,1)
