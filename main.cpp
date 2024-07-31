//better solution

class Solution {
  public:
    
    int print2largest(vector<int> &arr) {
        
        int largest = INT_MIN;
        int second = INT_MIN;
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>second && arr[i]!=largest){
                second = arr[i];
            }
        }
        
        return second;
    }
};


//optimal solution

class Solution {
  public:
    
    int print2largest(vector<int> &arr) {
        
        int first = INT_MIN;
        int second = INT_MIN;
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>first){
                second = first;
                first = arr[i];
            }
            else if(arr[i]>second && arr[i]!=first){
                second = arr[i];
            }
        }
        
        return second;
    }
};
