class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        currMax = -1  # last element always becomes -1
        for i in range(len(arr) - 1, -1, -1):  # start at last index, go to 0
            newMax = max(currMax, arr[i])  # what's the new max after replacing?
            arr[i] = currMax               # replace current element
            currMax = newMax               # update max

        return arr;