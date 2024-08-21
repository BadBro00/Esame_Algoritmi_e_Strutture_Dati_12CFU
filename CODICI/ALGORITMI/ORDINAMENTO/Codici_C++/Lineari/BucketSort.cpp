void BucketSort(float a[], int n){
  vector<float> buckets[n];
  for(int i=0;i<n;i++){
    int bucket_idx = n*a[i];
    buckets[bucket_idx].push_back(a[i]);
  }
  for(int i=0;i<n;i++){
    sort(buckets[i].begin(),buckets[i].end());
  }
  int idx = 0;
  for(int i=0;i<n;i++){
    for(size_t j=0;j<buckets[i].size();j++){
      a[idx++]=buckets[i][j];
    }
  }
}
