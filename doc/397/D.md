# 立方体 - 算法型（二分法）

## Problem Statement
给定一个正整数 $N$ ，判断是否存在一对正整数 $(x, y)$ ，使得 $x^3 - y^3 = N$ 。如果存在这样的一对，请输出其中一对 $(x, y)$ 。

## Constraints
- $1 \leq N \leq 10^{18}$
- 所有数值都是整数

## Input
输入通过标准输入给出，格式如下：
```
N
```

## Output
如果没有满足 $x^3 - y^3 = N$ 的正整数对 $(x, y)$ ，则输出 `-1`。如果存在这样的正整数对，则按顺序输出 $x$ 和 $y$ ，中间用空格分隔。如果有多个解，输出任意一个解都被视为正确。

## Sample Input 1
```
397
```

## Sample Outout 1
```
12 11
```

## Sample Input 2
```
1
```

## Sample Outout 2
```
1 0
```

## Sample Input 3
```
39977273855577088
```


## Sample Outout 3
```
342756 66212
```

## 解析
$$
设 d = x - y \\
\because x^3 - y^3 = N \\
\therefore (x - y)(x^2 + xy + y^2) = N \\
d(x^2 + xy + y^2) = N \\
\because x,y都是正整数 \\
\therefore x^2 + xy + y^2 >= x^2 - 2xy + y^2 = (x - y)^2 = b^2 \\
\therefore N >= b^3
$$

所以，我们只需要在 $\sqrt[3]{N}$ 内暴力求解所有的 $d$ , 即可算出答案。

即计算 $(x+d)^3 - x^3 = N$ 。

$$
\because (x+d)^3 - x^3 = N \\
\therefore 3dx^2 + 3d^2x + d^3 = N \\
\because d(x^2 + xy + y^2) = N \\
\therefore d|N 且 3x^2 + 3dx + d^2 = N/d \\
设 N/d = m, 则求解 3x^2 + 3dx + d^2 - m = 0
$$

此处即可使用二分法，对 $x$ 进行求解，如果解出 $x$ ，则输出 $x + d, x$ 为答案