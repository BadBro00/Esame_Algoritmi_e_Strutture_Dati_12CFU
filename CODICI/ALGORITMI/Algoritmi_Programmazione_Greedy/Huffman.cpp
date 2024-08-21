Huffman(C)
  n<-|C|
  Q<-C
  for i<-1 to n-1
    z<-ALLOCATE_NODE()
    x<-Left[z]<-EXTRACT-MIN(Q)
    y<-Right[z]<-EXTRACT-MIN(Q)
    f[z]<-f[x]+f[y]
    INSERT(Q,z)
  return EXTRACT-MIN(Q)
