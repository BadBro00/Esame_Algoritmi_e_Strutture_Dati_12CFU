int Partition(int a[], int p, int r){
  int x=a[p];
  int i=p-1;
  int j=r+1;
  while(1){
    do{
      i++;
    }while(a[i]>=x);
    do{
      j--;
    }while(a[j]<=x);
    if(i<j){
      swap(a[i],a[j]);
    }else{
      return j;
    }
  }
}

void QuickSort(int a[],int p,int r){
  if(p<r){
    int q = Partition(a,p,r);
    QuickSort(a,p,q);
    QuickSort(a,q+1,r);
  }
}
