int getTotalX(vector<int> a, vector<int> b) {
    int start = a.back(), end = b.back();
    int count = 0;
    
    for(int x = start; x <= end; x++){
        
        bool a_pass = true, b_pass = true;
        
        for(const auto &ai : a){
            if(x % ai != 0){
                
                a_pass = false;
                break;
            }
        }
        if(!a_pass)
             continue;
        
        for(const auto &bi : b){
            if(bi % x != 0){
                
                b_pass = false;
                break;
            }
        }
        if(a_pass && b_pass) 
            count++;
        
    }
    return count;
}
