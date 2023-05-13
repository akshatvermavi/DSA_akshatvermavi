class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
      int x=  arrivalTime + delayedTime;
      if(x<24)
      return x;
      else if(x%24==0)
      return x%24;
      else
      return x%24;
    }
};
