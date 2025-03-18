# {名称} - {类型}
{对此题的综合表述}

## Problem Statement
{题目内容}

## Constraints
{题中所有变量的阈值}

## Input
输入通过标准输入给出，格式如下：

```math
\begin{align}
N\\
C_{1,1}\ C_{1,2}\ \cdots C_{1,N} \\
C_{2,1}\ C_{2,2}\ \cdots C_{2,N} \\
\vdots \\
C_{N,1}\ C_{N,2}\ \cdots C_{N,N}
\end{align}
```

## Output
设 $A_{i,j}$ 为对整数对 $(i,j)$ 的答案。请按照以下格式输出：

```math
\begin{align}
A_{1,1}\ A_{1,2}\ \cdots A_{1,N} \\
A_{2,1}\ A_{2,2}\ \cdots A_{2,N} \\
\vdots \\
A_{N,1}\ A_{N,2}\ \cdots A_{N,N}
\end{align}
```

## Sample Input 1
```
4
ab--
--b-
---a
c---
```

## Sample Outout 1
```
0 1 2 4
-1 0 1 -1
3 -1 0 1
1 -1 -1 0
```



## Sample Input 2
```
5
us---
-st--
--s--
u--s-
---ts
```

## Sample Output 2
```
0 1 3 -1 -1
-1 0 1 -1 -1
-1 -1 0 -1 -1
1 3 -1 0 -1
-1 -1 5 1 0
```

## 解析
{对此题的具体解析}

