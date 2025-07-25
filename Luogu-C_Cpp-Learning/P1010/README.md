# P1010 [NOIP 1998 普及组] 幂次方

## 题目描述

任何一个正整数都可以用 $2$ 的幂次方表示。例如 $137=2^7+2^3+2^0 $。

同时约定次方用括号来表示，即 $a^b$ 可表示为 $a(b)$。

由此可知，$137$ 可表示为 $2(7)+2(3)+2(0)$。

进一步：

$7= 2^2+2+2^0$  ( $2^1$ 用 $2$ 表示)，并且 $3=2+2^0$。

所以最后 $137$ 可表示为 $2(2(2)+2+2(0))+2(2+2(0))+2(0)$。

又如 $1315=2^{10} +2^8 +2^5 +2+1$。

所以 $1315$ 最后可表示为 $2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)$。

## 输入格式

一行一个正整数 $n$。

## 输出格式

符合约定的 $n$ 的 $0, 2$ 表示（在表示中不能有空格）。

## 输入输出样例 #1

### 输入 #1

```
1315
```

### 输出 #1

```
2(2(2+2(0))+2)+2(2(2+2(0)))+2(2(2)+2(0))+2+2(0)
```

## 说明/提示

**【数据范围】**

对于 $100\%$ 的数据，$1 \le n \le 2 \times {10}^4$。

NOIP1998 普及组 第三题