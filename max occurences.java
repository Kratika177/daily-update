 HashMap<Character, Integer> mp = new HashMap<>();
         
        // to store length of string
        int n = str.length();
         
        // to store answer 
        char ans = 0;
         
        // to check count of answer character is less or greater
        // than another elements count
        int cnt = 0;
         
        // traverse the string 
        for(int i = 0; i < n; i++) {
             
            // push element into map and increase its frequency 
            char c = str.charAt(i);
            mp.put(c, mp.getOrDefault(c, 0) + 1);
             
            // update answer and count
            if(cnt < mp.get(c)) {
                ans = c;
                cnt = mp.get(c);
            }
        }
         
        return ans;
