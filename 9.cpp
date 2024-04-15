class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        list<int> mylist;
        for(;x != 0;x /= 10){
            mylist.push_front(x % 10);
        }
        while(!mylist.empty()){
            if(mylist.front() == mylist.back()){
                mylist.pop_front();
                if(!mylist.empty()){
                    mylist.pop_back();
                }
                else{
                    return true;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }

};
