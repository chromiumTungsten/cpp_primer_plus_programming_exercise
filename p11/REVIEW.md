## Q1
```C++
Stonewt operator*(const double _input) const;

Stonewt Stonewt::operator*(const double _input){
    Stonewt newStone;
    newStone.stone = stone*_input + int(_input*wt/14);
    newStone.wt = _input*wt - int(_input*wt/14)
}
```
## Q2

定义时不用加限定符, 重载二元运算符时，必须输入两个参数;一元运算符必须传入一个参数

## Q3

类成员是公有时，均可访问

### Q4


```C++
friend Stonewt operator*(double _input, Stonewt _stone);

Stonewt operator*(double _input, Stonewt _stone){
    return _stone*_input;
}

```

### Q5

关键字不能重载

● sizeof：sizeof运算符。
● .：成员运算符。
● . *：成员指针运算符。
● ::：作用域解析运算符。
● ?:：条件运算符。
● typeid：一个RTTI运算符。
● const_cast：强制类型转换运算符。
● dynamic_cast：强制类型转换运算符。
● reinterpret_cast：强制类型转换运算符。
● static_cast：强制类型转换运算符。


### Q6
只能作为成员函数进行重载

### Q7

```C++
operator double();

operator double(){
    return x^2 + y^2;
}