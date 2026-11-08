class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s: string, t: string): boolean {
        let map = new Map<string, number>();
        for (let i = 0; i < s.length; i++){
            if (!map[s[i]]) {
                map[s[i]] = 0;
            }
            if (!map[t[i]]) {
                map[t[i]] = 0;
            }
            map[s[i]]++;
            map[t[i]]--;
        }
        for (let e in map) {
            if (map[e] !== 0) {
                return false;
            }
        }
        return true;
    }
}
