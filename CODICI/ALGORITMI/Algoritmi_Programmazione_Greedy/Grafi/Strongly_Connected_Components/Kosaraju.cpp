//L'algoritmo di Kosaraju permette di trovare le componenti fortemente connesse usando la DFS
SCC(G)
  //DFS Iniziale
  for each vertex u in G:
    color[u] = WHITE
  time = 0
  stack = [] //Stack per le SCC
  for each vertex u in G:
    if color[u] == WHITE:
      DFS_FirstPass(G, u, stack)
  GT = Transpose(G)
  for each vertex u in GT:
    color[u] = WHITE
  while stack is not empty:
    u = stack.pop()
    if color[u] == WHITE:
      current_component = []
      DFS_SecondPass(GT, u, current_component)
  //return current_component

DFS_FirstPass(G, u, stack):
  //DFS classica
  color[u] = GRAY
  for each vertex v in Adj[u]:
    if color[v] == WHITE:
      DFS_FirstPass(G, v, stack)
  color[u] = BLACK
  stack.push(u)

DFS_SecondPass(GT, u, current_component):
  //DFS sul trasposto
  color[u] = GRAY
  current_component.append(u)
  for each vertex v in Adj[GT, u]:
    if color[v] == WHITE:
      DFS_SecondPass(GT, v, current_component)
  color[u] = BLACK

//Semplice function per la trasposizione
Transpose(G):
  GT = new Graph()
  for each vertex u in G:
    for each vertex v in Adj[u]:
      GT.add_edge(v, u)
  return GT
