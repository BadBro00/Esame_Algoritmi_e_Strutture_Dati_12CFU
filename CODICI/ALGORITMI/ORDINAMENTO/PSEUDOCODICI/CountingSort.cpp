void CountingSort(A,dim)
  min<-A[1]
  max<-A[1]
  for(i=2 to dim)
    if(A[i]<min)
      min<-A[i]
    else if(A[i]>max)
      max<-A[i]
  dimC<-max-min+1;
  C<-new array[dimC]
  for(i<-1 to dimC)
    C[i]<-0;
  for(i<-1 to dim)
    C[A[i]]<-C[A[i]]+1;
  k<-1
  for(i<-1 to dimC)
    while(C[i]>0)
      A[k]<-C[i]
      k<-k+1
      i<-i-1
