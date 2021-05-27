do{
    ll sum = 0;
    bool ok = true;
    rep(i,n){
      sum += a.at(paturn.at(i)-1).at(i);
      if(i<n-1&&kenaku.at(paturn.at(i)).at(paturn.at(i)+1)){
        ok = false;
      }
    }
    if(ok){
      ans = min(ans,sum);
    }
  }while(next_permutation(paturn.begin(),paturn.end()));