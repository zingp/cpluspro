class TV
{
public:
    char name[20];
    int type;

    void changeVol();
    void power();
};

// 从栈中实例化

int main(void)
{
    TV tv[20];  //实例化一个数组
    TV tv;      //实例化一个对象

    tv.type = 0;
    tv.changeVol()  // 通过点访问对象内的成员
    // 使用完不需要自己回收内存，系统会自己回收
    return 0;
}