void BubbleSort(int a[],int dim){
  for(int i=0;i<dim-1;i++){
    for(int j=0;j<dim-i-1;j++){
      if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
      }
    }
  }
}
