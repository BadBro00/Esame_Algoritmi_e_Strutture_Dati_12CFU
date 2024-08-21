Recursive-Matrix-Chain(p,i,j)
  if i=j return 0
  m[i,j]<-INF
  for k<-i to j-1
    q<-Recursive-Matrix-Chain(p,i,k)+Recursive-Matrix-Chain(p,k+1,j)+p_i-1*p_k*p_j
  if q<m[i,j]
    m[i,j]<-q
  return m[i,j]
