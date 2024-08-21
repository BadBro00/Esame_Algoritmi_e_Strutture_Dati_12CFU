void CountingSort(int a[],int dim){
  //Trovo il max tramite la function max_element() di algorithm
  int max = *max_element(a,a+dim);
  vector<int> cnt(max+1,0);
  for(int i=0;i<dim;i++){
    cnt[a[i]]++;
  }
  int idx=0;
  for(int i=0;i<=max;i++){
    while(cnt[i]>0){
      a[idx++]=i;
      int[i]--;
    }
  }
}
