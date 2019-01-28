#include<iostream>
using namespace std;

class Vector 
{
    // size表示线性表最大长度,length是当前长度,data用来存储数据
    private:
        int size, length;
        int *data;
    public:
        // 构造函数    
        Vector(int input_size) 
        {
            size = input_size;
            length = 0;
            data = new int[size];
        }

        // 前面加'~' 表示析构函数 delete是回收单个对象内存空间,delete[]是回收多个对象内存空间
        ~Vector() 
        {
            delete[] data;
        }

        // 插入数据
        bool insert(int loc, int value) 
        {
            // 判断loc是否不符合条件
            if (loc < 0 || loc > length) 
            {
                return false;
            }
            // 判断线性表存储的数据是否到最大值了,等于也就不能插入,其实两个判断可以一起写,但这样逻辑清晰
            if (length >= size) 
            {
                return false;
            }
            for (int i = length; i > loc; i--) 
            {
                data[i] = data[i - 1];
            }
            data[loc] = value;
            length++;
            return true;
        }

        bool remove(int loc) 
        {
            if (loc < 0 || loc >= length) 
            {
                return false;
            }
            for (int i = loc; i < length - 1; i++) 
            {
                data[i] = data[i + 1];
            }
            length--;
            return true;
        }

        void print() 
        {
            cout << "线性表:\t";
            for (int i = 0; i < length; i++) 
            {
                cout << data[i] << " ";
            } 
            cout << endl;
        }
};

int main() {
    Vector v(10);
    v.insert(0, 1);
    v.insert(1, 2);
    v.insert(1, 3);
    v.print();
    v.remove(1);
    v.print();
}