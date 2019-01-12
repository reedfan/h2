#include <iostream>
using namespace std;
int func1 ();
int func2 ();
int func3 ();
int func4 ();
int func5 ();
int func6 ();




int main() {
    func1();
    func2 ();
    func3 ();
    func4 ();
    func5 ();
    func6 ();
}


//运算符
int func1 ()
{
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    cout << "Line 1 - c 的值是 " << c << endl ;
    c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl ;
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl ;
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl ;
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl ;

    int d = 10;   //  测试自增、自减
    c = d++;
    cout << "Line 6 - c 的值是 " << c << endl ;

    d = 10;    // 重新赋值
    c = d--;
    cout << "Line 7 - c 的值是 " << c << endl ;
    return 0;
}



//关系运算符
int func2 ()
{
    int a = 21;
    int b = 10;
    int c ;

    if( a == b )
    {
        cout << "Line 1 - a 等于 b" << endl ;
    }
    else
    {
        cout << "Line 1 - a 不等于 b" << endl ;
    }
    if ( a < b )
    {
        cout << "Line 2 - a 小于 b" << endl ;
    }
    else
    {
        cout << "Line 2 - a 不小于 b" << endl ;
    }
    if ( a > b )
    {
        cout << "Line 3 - a 大于 b" << endl ;
    }
    else
    {
        cout << "Line 3 - a 不大于 b" << endl ;
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if ( a <= b )
    {
        cout << "Line 4 - a 小于或等于 b" << endl ;
    }
    if ( b >= a )
    {
        cout << "Line 5 - b 大于或等于 a" << endl ;
    }
    return 0;

}



//逻辑运算符
int func3 ()
{
    int a = 5;
    int b = 20;
    int c ;

    if ( a && b )
    {
        cout << "Line 1 - 条件为真"<< endl ;
    }
    if ( a || b )
    {
        cout << "Line 2 - 条件为真"<< endl ;
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        cout << "Line 3 - 条件为真"<< endl ;
    }
    else
    {
        cout << "Line 4 - 条件不为真"<< endl ;
    }
    if ( !(a && b) )
    {
        cout << "Line 5 - 条件为真"<< endl ;
    }
    return 0;

}


// 位运算符
int func4(){
    unsigned int a = 60;      // 60 = 0011 1100
    unsigned int b = 13;      // 13 = 0000 1101
    int c = 0;

    c = a & b;             // 12 = 0000 1100
    cout << "Line 1 - c 的值是 " << c << endl ;

    c = a | b;             // 61 = 0011 1101
    cout << "Line 2 - c 的值是 " << c << endl ;

    c = a ^ b;             // 49 = 0011 0001
    cout << "Line 3 - c 的值是 " << c << endl ;

    c = ~a;                // -61 = 1100 0011
    cout << "Line 4 - c 的值是 " << c << endl ;

    c = a << 2;            // 240 = 1111 0000
    cout << "Line 5 - c 的值是 " << c << endl ;

    c = a >> 2;            // 15 = 0000 1111
    cout << "Line 6 - c 的值是 " << c << endl ;

    return 0;



}

//赋值运算符
int func5(){
    int a = 21;
    int c ;

    c =  a;
    cout << "Line 1 - =  运算符实例，c 的值 = : " <<c<< endl ;

    c +=  a;
    cout << "Line 2 - += 运算符实例，c 的值 = : " <<c<< endl ;

    c -=  a;
    cout << "Line 3 - -= 运算符实例，c 的值 = : " <<c<< endl ;

    c *=  a;
    cout << "Line 4 - *= 运算符实例，c 的值 = : " <<c<< endl ;

    c /=  a;
    cout << "Line 5 - /= 运算符实例，c 的值 = : " <<c<< endl ;

    c  = 200;
    c %=  a;
    cout << "Line 6 - %= 运算符实例，c 的值 = : " <<c<< endl ;

    c <<=  2;
    cout << "Line 7 - <<= 运算符实例，c 的值 = : " <<c<< endl ;

    c >>=  2;
    cout << "Line 8 - >>= 运算符实例，c 的值 = : " <<c<< endl ;

    c &=  2;
    cout << "Line 9 - &= 运算符实例，c 的值 = : " <<c<< endl ;

    c ^=  2;
    cout << "Line 10 - ^= 运算符实例，c 的值 = : " <<c<< endl ;

    c |=  2;
    cout << "Line 11 - |= 运算符实例，c 的值 = : " <<c<< endl ;

    return 0;



}

//运算符的优先级      待补充
int func6(){
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    cout << "(a + b) * c / d 的值是 " << e << endl ;

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    cout << "((a + b) * c) / d 的值是 " << e << endl ;

    e = (a + b) * (c / d);   // (30) * (15/5)
    cout << "(a + b) * (c / d) 的值是 " << e << endl ;

    e = a + (b * c) / d;     //  20 + (150/5)
    cout << "a + (b * c) / d 的值是 " << e << endl ;

    return 0;
}







