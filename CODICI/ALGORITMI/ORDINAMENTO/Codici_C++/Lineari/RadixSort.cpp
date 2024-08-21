//CountingSort basato su cifre
void countingSort(int arr[], int n, int exp){
  vector<int> output(n); // Array di output
  vector<int> count(10, 0); // Array di conteggio, inizializzato a 0
  // Memorizza il conteggio delle occorrenze in count[]
  for (int i = 0; i < n; i++) {
    count[(arr[i] / exp) % 10]++;
  }
  // Cambia count[i] in modo che count[i] contenga ora la posizione dell’elemento i
  for (int i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }
  // Costruisci l’array di output
  for (int i = n - 1; i >= 0; i--) {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }
  // Copia l’array di output in arr[], cos`ı che arr[] contenga ora i numeri ordinat
  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}

void RadixSort(int a[],int n){
  //Prendo il max tramite la function max_element() di algorithm
  int max = *max_element(a,a+n);
  //Algoritmo stabile su cifra d
  for(int exp=1;max/exp>0;exp*=10){
    CountingSort(a,n,exp);
  }
}
