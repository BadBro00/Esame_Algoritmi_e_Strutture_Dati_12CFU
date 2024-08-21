Dijkstra(G,s)
  foreach (u in G.V)
    v.d<-INF
    v.p<-NIL
  s.d<-0
  Q<-empty queue
  ENQUEUE(Q,s)
  while(Q not empty)
    u<-EXTRACT-MIN(Q)
    foreach(v in u.adj)
      if(v.d>u.d+w(u,v))
        v.d<-u.d+w(u,v)
        v.p<-u
