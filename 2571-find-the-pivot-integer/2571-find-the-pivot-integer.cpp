class Solution {
public:
    int pivotInteger(int n) {
        int front = 1;
        int back = n;
        long left_sum = 1;
        long right_sum = n;
        while(front < back){
            if(left_sum < right_sum){
                front++;
                left_sum += front;
            }
            else if(left_sum > right_sum){
                back--;
                right_sum += back;
            }
            else{
                front++;
                left_sum += front;
            }
        }
        if(front == back && left_sum == right_sum)
            return front;
        else
            return -1;
    }
};
