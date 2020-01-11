class TV
{
public:
    char name[20];
    int type;

    void changeVol();
    void power();
};

// 从堆中实例化
int main(void)
{
    TV *p = new TV();      //申请一个对象
    TV *q = new TV[20];    //申请一个数组
    // 使用完需要自己回收内存
    // todo
    delete p;
    delete []q;
    
    return 0;
}