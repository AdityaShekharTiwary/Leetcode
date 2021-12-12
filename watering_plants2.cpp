class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int l = 0, r = n - 1;
        int refill_alice = 0, refill_bob = 0, capA = capacityA, capB = capacityB;
        while (l <= r) {
            if (l == r) {
                if (plants[l] > max(capA, capB)) refill_alice++;
            }
            else {
                if (plants[l] <= capA) {
                    capA -= plants[l];
                }
                else {
                    refill_alice++;
                    capA = capacityA;
                    capA -= plants[l];
                }
                if (plants[r] <= capB) {
                    capB -= plants[r];
                }
                else {
                    refill_bob++;
                    capB = capacityB;
                    capB -= plants[r];
                }
            }
            l++;
            r--;
        }
        return refill_alice + refill_bob;
    }
};