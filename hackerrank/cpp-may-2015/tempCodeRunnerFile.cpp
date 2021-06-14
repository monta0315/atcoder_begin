regex re(R"((\d{3})-(\d{2})-(\d{2})-(\d{8})-[A-Z])");
  rep(i,n){
    string b="";
    rep(j,20){
      b+=s.at(i).at(j);
    }
    if(regex_match(b,re)){
      store.push_back(b);
    }
  }
  e(store);
  if(store.size()!=0){
    rep(i,store.size()){
      out(store.at(i));
    }
  }else{
    out("JUNK");
  }