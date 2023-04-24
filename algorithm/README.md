# 一些基础算法

****

### 快速幂

参考代码[quickMi](./src/quickMi.cpp)

###### 递归法

![image-20230420154724455](./images/image-20230420154724455.png)



###### 蒙哥马利法

######  ![image-20230420155154829](./images/image-20230420155154829.png)

![image-20230420155219942](./images/image-20230420155219942.png)

![image-20230420155308261](./images/image-20230420155308261.png)

### 排序

###### Selection sort

==定义==：每次找出第i小的元素，然后将这个元素与数组第i个位置元素互换。

![selection sort animate example](https://oi-wiki.org/basic/images/selection-sort-1-animate-example.svg)

==稳定性==：不稳定

==时间复杂度==：最优，平均，最坏均为O（n2）。

代码参考[sort.cpp](./src/sort.cpp)



###### bubble sort

==定义==：在算法执行过程中较小的元素像是气泡一样浮到数列的顶端所以叫作冒泡排序。每次检查相邻的两个元素，如果两元素满足排序条件就交换。

![演示](./images/v2-de77d5632626c95812dc6fb1fa0f2aba_b.gif)

==稳定性==： 稳定

==时间复杂度==：

- 最优情况：O(n)
- 最坏情况：O(n2)
- 平均时间复杂度：O(n2)

代码参考[sort.cpp](./src/sort.cpp)

