class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(target>=letters[n-1])return letters[0];
        int f=0,l=n-1,mid;
        char le=letters[n/2];
       // if('l'>'g')cout<<"true";
        while(f<=l){
             mid=(f+l)/2;
            if(letters[mid]>target){
                if(letters[mid]<le)le=letters[mid];
                if(le<=target)le=letters[mid];
                l=mid-1;
            }
            else{
                f=mid+1;
            }
        }
        return le;
    }
};
