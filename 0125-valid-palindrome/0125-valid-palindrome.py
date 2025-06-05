class Solution(object):
    def isPalindrome(self, s):
        ans = s.lower()
        ans = re.sub(r'[^a-zA-Z0-9\s]', '', ans)
        ans = ans.replace(" ", "")
        left = 0
        right = len(ans) -1

        while left < right:
            if ans[left] != ans[right]:
                return False
            left += 1
            right -= 1
        return True
    
        """
        :type s: str
        :rtype: bool
        """
        