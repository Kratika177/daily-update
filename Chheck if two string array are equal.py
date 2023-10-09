class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        """
        :type word1: List[str]
        :type word2: List[str]
        :rtype: bool
        """
        s=''
        s1=''
        for i in word1 :
            s+=i
        for i in word2 :
            s1+=i
        return s==s1    
