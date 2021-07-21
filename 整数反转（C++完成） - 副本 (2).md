## 题目
![在这里插入图片描述](https://img-blog.csdnimg.cn/2021071309133291.png)

## 范例

```cpp
输入：x = 123
输出：321
```

```handlebars
输入：x = -123
输出：-321
```
## 解析
初步想法以为这是一个简单的题目，只需要放到while循环里进行/10和%10操作，然后根据表达式相加可以得到结果。可是这会遇到一个问题，即数字再反转过程中会出现溢出的情况需要加以判断。

```handlebars
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;
            // 考虑边缘情况
            // 正数是 2147483647
            if ((rev > INT_MAX/10) || (rev == INT_MAX/10 && pop > 7))
            {
                return 0;
            }
            // 负数是 -2147483648
            else if ((rev < INT_MIN/10) || rev == INT_MIN/10 && pop < -8)
            {
                return 0;
            }
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
```

