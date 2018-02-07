# 9.-Palindrome-Number
判断一个整数是不是回文数
出现两个overflow 问题
1.x==-2147483648 INT_MIN 取反无效（2147483648 unsigned int 类型而不是 int）
VS -2147483648为无符号类型 一元运算符运用于无符号类型结果仍是无符号类型
2.x==-2147447412 在leetCode下取反无效 在Vs可以
