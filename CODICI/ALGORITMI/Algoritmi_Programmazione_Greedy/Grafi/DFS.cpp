DFS(G)
  foreach u in G.V
    u.c<-WHITE
    u.p<-NIL
  time<-0
  foreach u in G.V
    if(u.c=WHITE)
      Visit(u)

Visit(u)
  time<-time+1
  u.d<-time
  u.c<-GRAY
  foreach v in u.adj
    if v.c=WHITE
      v.p<-u
      Visit(v)
  u.c<-BLACK
  u.f<-time<-time+1
