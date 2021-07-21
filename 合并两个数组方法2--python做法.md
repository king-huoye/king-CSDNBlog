![在这里插入图片描述](https://img-blog.csdnimg.cn/20200818133108766.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2tpbmdKYW1lc2JvbmQ=,size_16,color_FFFFFF,t_70#pic_center)
## 思路：
将多余位置的数字删除，然后只需将nums2的数据从末端插入，然后进行排序即可
```python
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        del nums1[m:]
        for i in range(n):
            nums1.append(nums2[i])
        nums1.sort()
```

