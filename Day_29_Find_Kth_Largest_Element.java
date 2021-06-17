//O(T) = O(N) ; O(N*log(N))
//O(S) = O(N); O(2); O(1)

class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue <Integer> minHeap = new PriorityQueue <Integer>();
        for (int i: nums){
            minHeap.add(i);
            if (minHeap.size()>k){
                minHeap.remove();       //removing the snallest element on reaching capacity
            }
        }
        return minHeap.remove();
    }
}