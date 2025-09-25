class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0:
            return 0

        maxans = -1
        # outer loop for traversing the string
        for i in range(len(s)):
            seen = {}
            # nested loop for getting different string starting with s[i]
            for j in range(i, len(s)):
                if s[j] in seen:  # if character already seen, break
                    maxans = max(maxans, j - i)
                    break
                seen[s[j]] = 1
            else:
                # if loop finishes without break (all unique till end)
                maxans = max(maxans, len(s) - i)

        return maxans
