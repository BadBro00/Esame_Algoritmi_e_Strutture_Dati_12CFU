Bellman_Ford(G,s)
  foreach (u in G.V)
    v.d<-INF
    v.p<-NIL
  s.d<-0
  for i<-1 to |V|-1
    foreach({u,v} in G.E)
      if(v.d>u.d+w(u,v))
        v.d<-u.d+w(u,v)
        v.p<-u
  foreach({u,v} in G.E)
    if(v.d>u.d+w(u,v))
      return TRUE
    else
      return FALSE
