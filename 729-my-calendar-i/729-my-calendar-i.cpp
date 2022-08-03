// class MyCalendar {
//     //its good practice to declare variable in private and can be accesed by method
//     private:map<int,int>m;
// public:
//     MyCalendar() {
        
//     }
    
//     bool book(int start, int end) {
//         //here basically we are assigning values 1 and -1 to start and end of number[10,20] and sum to zero so tha
//         m[start]++;
//         m[end]--;
//         int sum=0;
//         for(auto it=m.begin();it!=m.end();it++){
            
//             sum+=it->second;
//             {
//                 if(sum>1)
//                 {
//                     m[start]--;
//                     return false;
//                 }
//             }
//         }
//         return true;
        
        
        
//     }
// };

// /**
//  * Your MyCalendar object will be instantiated and called as such:
//  * MyCalendar* obj = new MyCalendar();
//  * bool param_1 = obj->book(start,end);
//  */


class MyCalendar {
public:
    
    vector<pair<int, int>> booking;
	
    MyCalendar() {
        
    }
    bool book(int start, int end) {
        for (pair<int, int> temp : booking)
        {
            if (max(temp.first, start) < min(end, temp.second))
            {
                return false;
            } 
        }
        booking.push_back({start, end});
        return true;
    }
};
