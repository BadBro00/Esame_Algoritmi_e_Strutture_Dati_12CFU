SJF(S)
  //Coda di priorita'
  Q<-0
  foreach(s_i in S)
  INSERT(Q,si)
  totalTime<-0
  while(Q NOT EMPTY)
    //Estraggo l’attivit`a con tempo minore
    ti<-EXTRACT-MIN(Q)
    totalTime<-totalTime+ti
  return totalTime
