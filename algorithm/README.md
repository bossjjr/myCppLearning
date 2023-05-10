# 一些基础算法

[toc]

## 快速幂

参考代码[quickMi](./src/quickMi.cpp)

### 递归法

![image-20230420154724455](./images/image-20230420154724455.png)

### 蒙哥马利法

######  ![image-20230420155154829](./images/image-20230420155154829.png)

![image-20230420155219942](./images/image-20230420155219942.png)

![image-20230420155308261](./images/image-20230420155308261.png)

## 排序

### Selection sort

**定义**：每次找出第i小的元素，然后将这个元素与数组第i个位置元素互换。

![selection sort animate example](https://oi-wiki.org/basic/images/selection-sort-1-animate-example.svg)

**稳定性**：不稳定

**时间复杂度**：最优，平均，最坏均为O（n2）。

代码参考[sort.cpp](./src/sort.cpp)



### bubble sort

**定义**：在算法执行过程中较小的元素像是气泡一样浮到数列的顶端所以叫作冒泡排序。每次检查相邻的两个元素，如果两元素满足排序条件就交换。

![演示](./images/v2-de77d5632626c95812dc6fb1fa0f2aba_b.gif)

**稳定性**： 稳定

**时间复杂度**：

- 最优情况：O(n)
- 最坏情况：O(n2)
- 平均时间复杂度：O(n2)

代码参考[sort.cpp](./src/sort.cpp)



### Insertion sort

**定义**：插入排序工作原理是将待排列元素划分为**已排序**和**未排序**两部分，，每次从未排序的元素中选择一个插入到已排序的元素中的正确位置。

![插入排序演示](https://pic3.zhimg.com/v2-91b76e8e4dab9b0cad9a017d7dd431e2_b.webp)

**稳定性**：稳定

**时间复杂度**：最优为O(n),最坏和平均都为O(n2)

代码参考[sort.cpp](./src/sort.cpp)

#### 改进

往前查找时可以采用二分查找，二分插入排序性能更快，时间复杂度降到了O(nlogn)。代码参考[sort.cpp](./src/sort.cpp)



