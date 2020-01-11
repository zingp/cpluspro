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
    // 访问成员
    p ->type = 0;
    p -> changeVol();
    // 使用完需要自己回收内存
    // todo
    delete p;
    p = NULL;


    // [2] 实例化一个数组？
    TV *q = new TV[5];
    for (int i=0; i<5; i++)
    {
        q[i] -> type = i;
        q[i] -> changeVol();
    }

    delete []q;
    q = NULL;

    return 0;
}