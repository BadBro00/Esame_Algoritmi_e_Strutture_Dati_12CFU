01_Knapsack(int W,weights,values,N){
  dp[N][W]<-new table
  for (i<-1 to N)
    for (w<-1 to W)
      dp[i][w]<-0;
  for (i<-1 to n)
    for (w<-1 to W)
      if (weights[i-1] <= w)
        dp[i][w]<-max(dp[i-1][w], dp[i-1][w - weights[i-1]] + values[i-1])
      else
        dp[i][w]<-dp[i-1][w];
  return dp[n][W];
