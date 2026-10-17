#include "includes.h"

// 134. Gas Station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot=0,tank=0,start=0;
        for(int i=0;i<gas.size();i++){
            int diff=gas[i]-cost[i];
            tot+=diff;
            tank+=diff;
            if(tank<0){
                start=i+1;
                tank=0;
            }
        }
        return (tot>=0)?start:-1;
    }
};

/*
for circular loop, no need to actually loop the circular literally
go from 0 - n-1 and keep the index updating start index 


*/