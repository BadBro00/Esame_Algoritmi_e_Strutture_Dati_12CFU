Num_Fibo(i)
  for j<-1 to MAX_NUM
    Kn_Fib[j]<-0
  Fibonacci(i)

Fibonacci(i)
  if(Kn_Fib[i]!=0) return Kn_Fib[i]
  if(i=1 OR i=0) return 1
  Kn_Fib[i]<-Fibonacci(i-1)+Fibonacci(i-2)
  return Kn_Fib[i]
