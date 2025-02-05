# 重力

## Problem Statement
在一个$10^9$行和$W$列的网格中，每一个格子的编号是$(x,y)$。$x$表示从下到上顺序的行号，$y$表示从左到右的列号。
现在有$N$个方块，每个方块的大小是$1 \times 1$。现在提供每个方块所在的初始坐标$(x_i,y_i)$
当每隔一个时间$t$后，所有的方块将发生下面的位移：
- 如果最下面一行充满了方块，则最下面一行的所有方块被删除
- 如果方块在最底层，或者方块下面已经都有其他方块，则不进行任何移动；否则向下移动一个单位
  
现在将给你Q次查询，你需要回答在$T_j$时间后，$A_j$方块是否还存在。

## Constraints
- $1 \leq N \leq 2\times10^6$
- $1 \leq W \leq N$
- $1 \leq X_i \leq W$
- $1 \leq Y_i \leq 10^9$
- $(X_i,Y_i) \neq (X_j,Y_j)$
- $1 \leq Q \leq 2 \times 10^5$
- $1 \leq T_j \leq 10^9$
- $1 \leq A_j \leq N$
- 所有的输入参数为整数

## Input
输入的内容按如下格式

$$
\begin{align*}
N\quad W \\
X_1\quad Y_1 \\
X_2\quad Y_2 \\
\vdots \\
X_n \quad Y_n \\
Q \\
T_1 \quad A_1 \\
T_2 \quad A_2 \\
\vdots \\
T_Q \quad A_Q \\
\end{align*}
$$


## Output
输出包含在圆形范围内的方块数量

## Sample Input 1
```
5 3
1 1
1 2
2 2
3 2
2 3
6
1 1
1 2
2 3
2 5
3 4
3 5
```

## Sample Output 1
```
Yes
Yes
No
Yes
No
Yes
```

## Sample Input 2
```
3 2
1 1
2 1
1 2
4
1 1
1 2
1 3
2 3
```

## Sample Output 2
```
No
No
Yes
Yes
```

## 解析
我们可以将网格中的每一个列单独进行思考。假设第一行要消除，则每一个列的第一个元素应该都在最底层；同样的，第$i$行要消除，需要每一列的第$i$个元素需要都在最底层。那什么时间会到最底层呢？这里分两个情况，1是该行最大$Y_i$的元素需要的时间$T_i$，2是上一行消除的时间加1（即最底层消除时，上一层的所有方块已经排列好）。

