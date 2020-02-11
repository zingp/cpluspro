# map
- key-value;红黑树；自动排序
## 功能
- 自动建立Key － value的对应。key 和 value可以是任意你需要的类型。
- 根据key值快速查找记录，查找的复杂度基本是Log(N)，如果有1000个记录，最多查找10次，1,000,000个记录，最多查找20次。
- 快速插入Key -Value 记录。
- 快速删除记录。
- 根据Key 修改value记录。
- 遍历所有记录。

## 构造函数
- 6个构造函数
- 最常用：map<int, string> mapStudent;
