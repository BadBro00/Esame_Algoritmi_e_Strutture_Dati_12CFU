void Merge(int a[],int l,int m,int r){
  n1=m-l+1;
  n2=r-m;
  int *L = new int[n1+1];
  int *R = new int[n2+1];
  int i,j;
  for(i=0;i<n1;i++){
    L[i]=a[l+i-1];
  }
  for(j=0;j<n2;j++){
    R[j]=a[m+j];
  }
  L[n1]=INT_MAX;
  R[n2]=INT_MAX;
  i=1;j=1;
  for(int k=l;k<r;k++){
    if(L[i]<=R[j]){
      a[k]=L[i++];
    }else{
      a[k]=R[j++];
    }
  }
}

void MergeSort(int a[],int l,int r){
  if(l<r){
    int m = (l+r)/2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    Merge(a,l,m,r);
  }
}
