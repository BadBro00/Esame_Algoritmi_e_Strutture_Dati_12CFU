KRUSKAL(G)
  A<-empty set
  foreach(v in G.V)
    Make-Set(v)
  Sort(E) //Ordina gli archi in ordine di peso non decrescente
  foreach(u,v in G.E)
    if(Find-Set(u)!=Find-Set(v))
      A = A U u,v
      Union(u,v)
  return A
