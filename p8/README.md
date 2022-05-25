<!--
 * @Date: 2021-12-30 15:22:13
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-30 16:12:24
 * @Description: None
-->

# REVIEW

## Question

### q1

调用频繁，并且函数体较为简单

### q2

a. `void song(const char * name, int times =1)`
b. 无需改动
c. 可以

### q3

```cpp
void iquto(int _show){
    using namespace std;
    cout<< "\""<< _show<<"\"";
}
void iquto(double _show){
    using namespace std;
    cout<< "\""<< _show<<"\"";
}
void iquto(string _show){
    using namespace std;
    cout<< "\""<< _show<<"\"";
}
```

### q4

```cpp
void showInfo(box & _box)
{
    using namespace std;
    cout<<"maker:  "<< _box.maker<<endl
    <<"length"<< _box.length<<endl
    <<"width"<< _box.width<<endl
    <<"height"<< _box.height<<endl
    <<"volume"<< _box.volume<<endl;
}

box & calVolume(box & _box){
    _box.volume = _box.height*_box.width*_box.height;
    return _box;
}
```

### q5

在形参中将`*pa`替换为`&pa`， 在使用时直接使用`pa`

### q6

a. yes
b. yes
c. yes
d. no
`char* repaeat( char *, int n)`
and
`char* repeat(char *)`

### q7

```cpp
template<class T>
T getMax(T _num1, T _num2)
{
    return _num1 >  _num2 ? _num1 : _num2;
}
```

### q8

```cpp
template<>
box getMax<box>(box _b1, box _b2)
{
    return _b1.volume > _b2.volume ? _b1 : _b2;
}

```

### q9

float
float
??
int
double
