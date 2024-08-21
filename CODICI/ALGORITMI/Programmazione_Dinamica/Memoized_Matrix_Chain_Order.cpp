Memoized-Matrix-Chain(p)
  n<-p.length-1
  //Sia m[1...n,1...n]
  for i<-1 to n
    for j<-1 to n
      m[i,j]<-INF
  return LookUpChain(m,p,1,n)

LookUpChain(m,p,i,j)
  if m[i,j]<INF return m[i,j]
  if i=j m[i,i]<-0
  else
    for k<-i to j-1
      q<-LookUpChain(m,p,i,k)+LookUpChain(m,p,k+1,j)+p_i-1*p_k*p_j
      if q<m[i,j]
        m[i,j]<-q
  return m[i,j
