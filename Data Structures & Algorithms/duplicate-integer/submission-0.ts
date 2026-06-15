class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums: number[]): boolean {
        const map : Record <number, boolean> = {};
        for (let e of nums) {
            if (map[e]){
                return true;
            }
            map[e] = true;
        }
        return false;
    }
}
