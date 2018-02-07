class Solution {
public:
    bool isPalindrome(int x) {
        int n = 0 ,s;
       if(x<0) return false;
        s = x;
      
        while(s > 0){
          s/=10;
          n++;
          
        } 
         
        for(int m = 1;m <= n/2;m++){
          
            if( !((x%(int)pow(10,m)/(int)pow(10,m-1)) == (x%(int)pow(10,n+1-m)/(int)pow(10,n-m)))) return false;//pow 返回的是double
        }
        return true;
    }
};
