PRIM(G,r)
  Q<-G.V
  foreach(u in G.V-r)
    u.key<-INF
    u.p<-NIL
  r.key=0
  while(Q not empty)
    u<-EXTRACT-MIN(Q)
    foreach(v in u.adj)
      if(v in Q AND w(u,v)<key)
        v.p<-u
        u.key<-w(u,v)
