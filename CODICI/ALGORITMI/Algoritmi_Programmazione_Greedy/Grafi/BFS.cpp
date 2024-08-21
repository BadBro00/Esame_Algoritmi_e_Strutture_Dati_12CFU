BFS(G,s)
  foreach (u in G.V)
    u.c<-WHITE
    u.d<-0
    u.p<-NIL
  s.d<-0
  Q<-empty queue
  ENQUEUE(Q,s)
  while(Q not empty)
    u<-EXTRACT-MIN(Q)
    foreach(v in u.adj)
      if(v.c=WHITE)
        v.c<-GRAY
        v.d<-u.d+1
        v.p<-u
        ENQUEUE(Q,v)
    u.c<-BLACK
