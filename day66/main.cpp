class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

    sort(prices.begin() , prices.end()) ; 
    
    int  fm = prices[0] ;
    int sm = prices[1] ;
    

    if( money - (fm+sm)  >= 0 ){
        return money - (fm+sm);
    
    }
    return money ; 

    }

};
