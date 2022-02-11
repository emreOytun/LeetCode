// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int index=n;               // Binary Search Algorithm 
        unsigned int left=0, right=n-1, mid;    // !! Unsigned int must be used
        while(left <= right){
            mid = (left+right)/2;
            if(isBadVersion(mid)){
                index = mid;
                right = mid-1;
            } 
            else left = mid+1;    
        }
        return index;
    }
};
