Fractional_Knap(V,W,X,TOT)
  for k<-1 to N
    X[k]<-0
  Value<-0.0
  Capacity<-TOT
  k<-1
  while(k<=N AND Capacity>0)
    if(W[k]<=Capacity)
      Value <- Value + V[k]
      Capacity <- Capacity - W[k]
      X[k]<-1.0
    else
      X[k]<-Capacity/W[k]
      Value<-Value+X[k]*V[k]
      Capacity<-0.0
    k<-k+1
