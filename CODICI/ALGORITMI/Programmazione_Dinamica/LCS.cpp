LCS(X,m,Y,n)
  for(i<-1 to m)
    c[i,0]<-0
  for(j<-1 to n)
    c[0,j]<-0
  for(i<-2 to m)
    for(j<-2 to n)
      if(X[i]=Y[j])
        c[i][j]=c[i-1][j-1]+1
      else
        c[i][j]=max(c[i-1][j],c[i][j-1])
  return c
