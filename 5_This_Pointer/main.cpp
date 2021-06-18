//
//  main.cpp
//  5_This_Pointer
//
//  Created by 세광 on 2021/06/18.
//

#include <iostream>

using namespace std;

class MyClass {
public:
    void PrintThis() {
        // 함수의 경우 실제 MyClass로 이루어진 어떤 객체에 포함되어 있는 것이 아니라 다른 공간에 있지만, this 포인터를 매개변수로 받음으로써 PrintThis 함수가 어느 객체 소속인지 알아낼 수 있음
        cout << "My address is: " << this << endl;
    }
    
    void PrintThis(MyClass *ptr) { // this를 사용하는 것과 동일한 표현
        cout << "My address is: " << ptr << endl;
    }
};
// 모든 class나 struct 안에 있는 멤버 함수의 경우 this 포인터를 보이지 않는 매개변수의 형태로 받아 놓음

int main() {
    MyClass a, b;
    cout << "Address of a is: " << &a << endl;
    cout << "Address of b is: " << &b << endl;
    a.PrintThis();
    b.PrintThis();
    a.PrintThis(&a);
    b.PrintThis(&b);
}
