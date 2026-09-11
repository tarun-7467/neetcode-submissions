class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:        
        count_map = {}
        result = []
        
        for i in nums:
            count_map[i] = count_map.get(i, 0) + 1
        
        count_map = dict(sorted(count_map.items(), key=lambda item: item[1], reverse=True))
        
        for key, value in count_map.items():
            if k > 0:
                result.append(key)
                k = k - 1
        
        return result