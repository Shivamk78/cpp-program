int num_cnt(int n){
    int cnt=0;
      while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}