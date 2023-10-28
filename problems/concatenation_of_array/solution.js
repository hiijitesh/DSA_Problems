/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    let ans = nums.concat();
    ans.push(...nums);
    return ans;

};