题目难度：困难
## 题目描述：
给定两个大小为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。
请你找出这两个正序数组的中位数，并且要求算法的时间复杂度为 O(log(m + n))。
你可以假设 nums1 和 nums2 不会同时为空。
### 实例

```python
nums1 = [1, 3]
nums2 = [2]

则中位数是 2.0
```

```python
nums1 = [1, 2]
nums2 = [3, 4]

则中位数是 (2 + 3)/2 = 2.5
```
思路分析：
将其中一个数组的元素插入到另一个数组，然后进行排序得到正序数组，接着根据中位数的要求，我们只需进行一个if语句判断就可以了。若长度是奇数中位数就是中间的那个数字，如果是偶数中位数则为物理顺序l的二分之一处以及前一个的和除以2.
关键代码
```python
class Solution:
    def findMedianSortedArrays(self, nums1,nums2):
        for i in range(len(nums2)):
            nums1.append(nums2[i])
        nums1.sort()
        t=len(nums1)
        if t%2==0:
            return (nums1[int(t/2)]+nums1[int(t/2)-1])/2
        else:
            return nums1[int(t/2)]
```

效率：
![在这里插入图片描述](https://img-blog.csdnimg.cn/20200820150324212.png#pic_center)

