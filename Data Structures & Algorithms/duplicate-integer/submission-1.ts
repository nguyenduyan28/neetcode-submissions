class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums: number[]): boolean {
        const map = new Map<number, boolean> ;
        for (let e of nums) {
            if (map[e]){
                return true;
            }
            map[e] = true;
        }
        return false;
    }
}
