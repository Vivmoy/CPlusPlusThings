/**
 * @file derived_full.cpp
 * @brief 完整示例！抽象类由派生类继承实现！
 * @author 光城
 * @version v1
 * @date 2019-07-20
 */

#include<iostream> 
using namespace std; 

class Base 
{ 
    int x; 
    public: 
    Base(int i) { x = i; }
    virtual void fun() = 0; 
    int getX() { return x; } 
}; 

class Derived: public Base 
{ 
    int y; 
    public: 
    Derived(int i,int j) : Base(i) { y = j; }
    void fun() { cout << "fun() called" << endl; }  // 实现了fun()函数
    void get() { cout << y << endl; } 
}; 

int main(void) 
{ 
    Derived d(1,2); 
    d.fun(); 
    d.getX();
    d.get();
    return 0; 
} 
