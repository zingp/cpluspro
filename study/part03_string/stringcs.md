# 字符串
## 两种方式
- C语言风格
- 基于string类库

## 1 C语言风格
- 实际上是一个char数组，'\0'标志字符串结束。
    - 例：char name[10] = {'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'L', '\0'};
    - 单引号，很繁琐；
- 字符串常量： char name[4] = "book";
- 字符串常量的拼接：空格、制表符、换行符分割的字符串常量会自动拼接成一个。

### 长度计算
- cstring::strlen() 计算存储在数组中的字符串长度，不包含空字符。
- sizeof() 计算字符串数组长度，包含空字符。

### 字符串输入
- cin >> name; 使用空白标志输入字符串结束。
- cin.getline(name, 20); 变量，字符长度。读取一行，会丢掉换行符。
- cin.get(name, 20);参数同getline();读取一行，保留换行符。
- 空行问题？cin.clear()
- 混合字符串输入：cin.get();单独获取换行符。

## 2 C++ string类
- 名称空间std;

### 声明
- string str1;
- string str2 = "hahahha";
- C++ 11 中允许列表初始化： string str3 {"my name is L"};

### 赋值、拼接
- 不能将字符数组赋值给另一个字符数组，但是可以将一个string对象赋值给另一个string对象；
- 拼接支持 + 操作： str3 = str1 + str2;

### 读取
- getline(cin, str); 这是一个方法；

## 常用方法
- .empty()
