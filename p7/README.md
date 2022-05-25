<!--
 * @Date: 2021-12-23 15:35:12
 * @LastEditors: Chromium Tungsten
 * @LastEditTime: 2021-12-23 17:04:21
 * @Description: None
-->

# 复习题

## Question

### Q1

声明函数原型，定义，调用

### Q2

a. `void ignore(void );`
b. `float tofu(int );`
c. `double mpg(double, double);`
d. `long summation(long[], int );`
e. `double doctor(const char[]);`
f. `void ofcourse(boss);`
g. `char* plot(map *)`

### Q3

```cpp
void setAll(int arry[],int size, int value ){
  for(int i = 0; i< size; ++i){
      size[i] = value;
  }
}
```

### Q4

```cpp
void setAll(int *frist, int *laste, int value){
    while(frist == laste){
        *frist = value;
        frist++;
    }
}
```

### Q5

```cpp
double getMax(const double *_arry, int _size){
    double max = _arry[0];
    for(int i = 1; i< _size; ++i){
        if(arry[i]> max)
        {
            max = _arry[i];
        }
    }
        return max;
}
```

### Q6

对于基本类型，并非直接调用，而是通过复制调用，不会修改基本类型的值；

### Q7

1. char 数组，以空字符（null character）结尾。
2. char 指针， 以空字符（null character）结尾。
3. 使用给双引号的常量字符串。（？？）

### Q8

```cpp
int replace(char *str, char c1, char c2, int count){
    int count = 0;
    while( str != '\0'){
        if (*str == c1){
            *str = c2;
            ++count;
        }
    return count;
    }
}
```

### Q9

'p'

'c'

### Q10

`glitz` 和 `glitz*`

按值传递可以安全地使用结构的值，但浪费时间和内存地址；传递地址可以快速，内存使用少，但并不安全。

### Q11

`int judge(const char *)`

### Q12

1.

```cpp
void show(const application *_app){
    std::cout<<"name:"<< std::endl<< *_app->name <<std::endl<< "credit rating"<<std::endl;
    for(int i : *_app->credit_rating){
        std::cout<< i << std::endl;
    }
}
```

b.

```cpp
void show(application _app){
    std::cout<<"name:"<< std::endl<< _app->name <<std::endl<< "credit rating"<<std::endl;
    for(int i : _app->credit_rating){
        std::cout<< i << std::endl;
    }
}

```

### Q13

```cpp
typedef void (*p_1)(application *_a);
typedef char * (*p_2)(const application*, const application*);
p_1 p1= f1;
p_2 p2 = f2;
p_1 ap[5];
p_2 *pa = new p_2[10];
```
