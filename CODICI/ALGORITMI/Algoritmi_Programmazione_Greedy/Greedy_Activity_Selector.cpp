GreedyActivitySelector(s,f)
  //Attivita’ Ordinate per s_i
  n<-s.length
  A<-a_1
  k<-1
  for m<-2 to n
    if(s[m]>=f(k])
      A<- A U a[m]
      k<-m
  return A
