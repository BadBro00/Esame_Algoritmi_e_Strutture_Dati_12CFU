Matrix-Chain-Order(p)
  n<-p.length-1
  //Siano m[1,...,n][1,...,n] e s[1,...,n][2,...,n]
  for i<-1 to n
    m[i,i]<-0
  for l<-2 to n
    for i<-1 to n-l+1
      j<-i+l-1
      m[i,j]<-INF
      for i<-1 to j-1
        q<-m[i,k]+m[k+1,j]+p_i-1*p_k*p_j
        if q<m[i,j]
          m[i,j]<-q
          s[i,j]<-k
