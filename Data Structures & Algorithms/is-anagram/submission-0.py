class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        map_1 = {}
        map_2 = {}
        for i in s:
            map_1[i] = map_1.get(i, 0) + 1
        for j in t:
            map_2[j] = map_2.get(j, 0) + 1
        if map_1 == map_2:
            return True
        return False            