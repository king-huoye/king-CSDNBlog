## 之前上一次的题目我便推出过判断是否为2的幂的这一道题目，这次来了个是否为4的幂原理还是一样的。
[想要看判断是否为2的幂的题目的同学请点击这里哦](https://blog.csdn.net/kingJamesbond/article/details/108290498?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522159901500119724835802878%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=159901500119724835802878&biz_id=0&spm=1018.2118.3001.4187)

## 话不多说原理因为是一样的直接上代码！

```python
class Solution:
    def isPowerOfFour(self, num: int) -> bool:
        k=1
        if num==1:#面向测试编程，当缺少了这一句的时候，1这个结果运行不对，因此需要补充
            return True
        while k<num:
            k=k*4
            if k==num:
                return True
```

### 还想看我的其他的算法题目可以点击下面的链接：
[判断是否为回文数](https://blog.csdn.net/kingJamesbond/article/details/107856760)
[删除列表中重复的元素](https://blog.csdn.net/kingJamesbond/article/details/107905649)

## 谢谢观看，希望你们关注我哦

