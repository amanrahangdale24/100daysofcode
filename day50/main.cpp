class Solution {
public:
    string largestGoodInteger(string num) {
    int c = num.size() - 2 ; 
    int compare = 0 ; 
    for(int i =0;i<c ; i++){
        if(num[i]==num[i+1] && num[i]==num[i+2]){
            char dummy = num[i] ; 
            int maybe = int(dummy) ; 
            if(compare <= maybe){
                compare = maybe ; 
            } 
        }
    }

    string final = "" ; 
    if(compare!=0){
        for(int i =0 ; i<3 ; i++){
            final+=compare ; 
        }
    }

    return final ; 
    }
};
