---
title: "union"
description: "A description of the Standard C++ union class-type and keyword, its use and restrictions."
ms.date: "08/18/2020"
f1_keywords: ["union_cpp"]
helpviewer_keywords: ["class type [C++], union as", "union keyword [C++]"]
no-loc: ["union", "struct", "enum", "class", "static"]
---
# `union`

> [!NOTE]
> In C++17 and later, the `std::variant` class is a type-safe alternative for a union.

A **`union`** is a user-defined type in which all members share the same memory location. This definition means that at any given time, a union can contain no more than one object from its list of members. It also means that no matter how many members a union has, it always uses only enough memory to store the largest member.

A union can be useful for conserving memory when you have lots of objects and limited memory. However, a union requires extra care to use correctly. You're responsible for ensuring that you always access the same member you assigned. If any member types have a nontrivial constructor, then you must write code to explicitly construct and destroy that member. Before you use a union, consider whether the problem you're trying to solve could be better expressed by using a base class and derived class types.

## Syntax

> **`union`** *`tag`*<sub>opt</sub> **`{`** *`member-list`* **`};`**

### Parameters

*`tag`*\
The type name given to the union.

*`member-list`*\
Members that the union can contain.

## Declare a union

Begin the declaration of a union by using the **`union`** keyword, and enclose the member list in curly braces:

```cpp
// declaring_a_union.cpp
union RecordType    // Declare a simple union type
{
    char   ch;
    int    i;
    long   l;
    float  f;
    double d;
    int *int_ptr;
};

int main()
{
    RecordType t;
    t.i = 5; // t holds an int
    t.f = 7.25; // t now holds a float
}
```

## Use a union

In the previous example, any code that accesses the union needs to know which member holds the data. The most common solution to this problem is called a *discriminated union*. It encloses the union in a struct, and includes an enum member that indicates the member type currently stored in the union. The following example shows the basic pattern:

```cpp
#include <queue>

using namespace std;

enum class WeatherDataType
{
    Temperature, Wind
};

struct TempData
{
    int StationId;
    time_t time;
    double current;
    double max;
    double min;
};

struct WindData
{
    int StationId;
    time_t time;
    int speed;
    short direction;
};

struct Input
{
    WeatherDataType type;
    union
    {
        TempData temp;
        WindData wind;
    };
};

// Functions that are specific to data types
void Process_Temp(TempData t) {}
void Process_Wind(WindData w) {}

void Initialize(std::queue<Input>& inputs)
{
    Input first;
    first.type = WeatherDataType::Temperature;
    first.temp = { 101, 1418855664, 91.8, 108.5, 67.2 };
    inputs.push(first);

    Input second;
    second.type = WeatherDataType::Wind;
    second.wind = { 204, 1418859354, 14, 27 };
    inputs.push(second);
}

int main(int argc, char* argv[])
{
    // Container for all the data records
    queue<Input> inputs;
    Initialize(inputs);
    while (!inputs.empty())
    {
        Input const i = inputs.front();
        switch (i.type)
        {
        case WeatherDataType::Temperature:
            Process_Temp(i.temp);
            break;
        case WeatherDataType::Wind:
            Process_Wind(i.wind);
            break;
        default:
            break;
        }
        inputs.pop();

    }
    return 0;
}
```

In the previous example, the union in the `Input` struct has no name, so it's called an *anonymous* union. Its members can be accessed directly as if they're members of the struct. For more information about how to use an anonymous union, see the [Anonymous union](#anonymous_unions) section.

The previous example shows a problem that you could also solve by using class types that derive from a common base class. You could branch your code based on the runtime type of each object in the container. Your code might be easier to maintain and understand, but it might also be slower than using a union. Also, with a union, you can store unrelated types. A union lets you dynamically change the type of the stored value without changing the type of the union variable itself. For example, you could create a heterogeneous array of `MyUnionType`, whose elements store different values of different types.

It's easy to misuse the `Input` struct in the example. It's up to the user to use the discriminator correctly to access the member that holds the data. You can protect against misuse by making the union **`private`** and providing special access functions, as shown in the next example.

## Unrestricted union (C++11)

In C++03 and earlier, a union can contain nonstatic data members that have a class type, as long as the type has no user provided constructors, destructors, or assignment operators. In C++11, these restrictions are removed. If you include such a member in your union, the compiler automatically marks any special member functions that aren't user provided as **`deleted`**. If the union is an anonymous union inside a class or struct, then any special member functions of the class or struct that aren't user provided are marked as **`deleted`**. The following example shows how to handle this case. One of the members of the union has a member that requires this special treatment:

```cpp
// for MyVariant
#include <crtdbg.h>
#include <new>
#include <utility>

// for sample objects and output
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct A
{
    A() = default;
    A(int i, const string& str) : num(i), name(str) {}

    int num;
    string name;
    //...
};

struct B
{
    B() = default;
    B(int i, const string& str) : num(i), name(str) {}

    int num;
    string name;
    vector<int> vec;
    // ...
};

enum class Kind { None, A, B, Integer };

#pragma warning (push)
#pragma warning(disable:4624)
class MyVariant
{
public:
    MyVariant()
        : kind_(Kind::None)
    {
    }

    MyVariant(Kind kind)
        : kind_(kind)
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            new (&a_) A();
            break;
        case Kind::B:
            new (&b_) B();
            break;
        case Kind::Integer:
            i_ = 0;
            break;
        default:
            _ASSERT(false);
            break;
        }
    }

    ~MyVariant()
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            a_.~A();
            break;
        case Kind::B:
            b_.~B();
            break;
        case Kind::Integer:
            break;
        default:
            _ASSERT(false);
            break;
        }
        kind_ = Kind::None;
    }

    MyVariant(const MyVariant& other)
        : kind_(other.kind_)
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            new (&a_) A(other.a_);
            break;
        case Kind::B:
            new (&b_) B(other.b_);
            break;
        case Kind::Integer:
            i_ = other.i_;
            break;
        default:
            _ASSERT(false);
            break;
        }
    }

    MyVariant(MyVariant&& other)
        : kind_(other.kind_)
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            new (&a_) A(move(other.a_));
            break;
        case Kind::B:
            new (&b_) B(move(other.b_));
            break;
        case Kind::Integer:
            i_ = other.i_;
            break;
        default:
            _ASSERT(false);
            break;
        }
        other.kind_ = Kind::None;
    }

    MyVariant& operator=(const MyVariant& other)
    {
        if (&other != this)
        {
            switch (other.kind_)
            {
            case Kind::None:
                this->~MyVariant();
                break;
            case Kind::A:
                *this = other.a_;
                break;
            case Kind::B:
                *this = other.b_;
                break;
            case Kind::Integer:
                *this = other.i_;
                break;
            default:
                _ASSERT(false);
                break;
            }
        }
        return *this;
    }

    MyVariant& operator=(MyVariant&& other)
    {
        _ASSERT(this != &other);
        switch (other.kind_)
        {
        case Kind::None:
            this->~MyVariant();
            break;
        case Kind::A:
            *this = move(other.a_);
            break;
        case Kind::B:
            *this = move(other.b_);
            break;
        case Kind::Integer:
            *this = other.i_;
            break;
        default:
            _ASSERT(false);
            break;
        }
        other.kind_ = Kind::None;
        return *this;
    }

    MyVariant(const A& a)
        : kind_(Kind::A), a_(a)
    {
    }

    MyVariant(A&& a)
        : kind_(Kind::A), a_(move(a))
    {
    }

    MyVariant& operator=(const A& a)
    {
        if (kind_ != Kind::A)
        {
            this->~MyVariant();
            new (this) MyVariant(a);
        }
        else
        {
            a_ = a;
        }
        return *this;
    }

    MyVariant& operator=(A&& a)
    {
        if (kind_ != Kind::A)
        {
            this->~MyVariant();
            new (this) MyVariant(move(a));
        }
        else
        {
            a_ = move(a);
        }
        return *this;
    }

    MyVariant(const B& b)
        : kind_(Kind::B), b_(b)
    {
    }

    MyVariant(B&& b)
        : kind_(Kind::B), b_(move(b))
    {
    }

    MyVariant& operator=(const B& b)
    {
        if (kind_ != Kind::B)
        {
            this->~MyVariant();
            new (this) MyVariant(b);
        }
        else
        {
            b_ = b;
        }
        return *this;
    }

    MyVariant& operator=(B&& b)
    {
        if (kind_ != Kind::B)
        {
            this->~MyVariant();
            new (this) MyVariant(move(b));
        }
        else
        {
            b_ = move(b);
        }
        return *this;
    }

    MyVariant(int i)
        : kind_(Kind::Integer), i_(i)
    {
    }

    MyVariant& operator=(int i)
    {
        if (kind_ != Kind::Integer)
        {
            this->~MyVariant();
            new (this) MyVariant(i);
        }
        else
        {
            i_ = i;
        }
        return *this;
    }

    Kind GetKind() const
    {
        return kind_;
    }

    A& GetA()
    {
        _ASSERT(kind_ == Kind::A);
        return a_;
    }

    const A& GetA() const
    {
        _ASSERT(kind_ == Kind::A);
        return a_;
    }

    B& GetB()
    {
        _ASSERT(kind_ == Kind::B);
        return b_;
    }

    const B& GetB() const
    {
        _ASSERT(kind_ == Kind::B);
        return b_;
    }

    int& GetInteger()
    {
        _ASSERT(kind_ == Kind::Integer);
        return i_;
    }

    const int& GetInteger() const
    {
        _ASSERT(kind_ == Kind::Integer);
        return i_;
    }

private:
    Kind kind_;
    union
    {
        A a_;
        B b_;
        int i_;
    };
};
#pragma warning (pop)

int main()
{
    A a(1, "Hello from A");
    B b(2, "Hello from B");

    MyVariant mv_1 = a;

    cout << "mv_1 = a: " << mv_1.GetA().name << endl;
    mv_1 = b;
    cout << "mv_1 = b: " << mv_1.GetB().name << endl;
    mv_1 = A(3, "hello again from A");
    cout << R"aaa(mv_1 = A(3, "hello again from A"): )aaa" << mv_1.GetA().name << endl;
    mv_1 = 42;
    cout << "mv_1 = 42: " << mv_1.GetInteger() << endl;

    b.vec = { 10,20,30,40,50 };

    mv_1 = move(b);
    cout << "After move, mv_1 = b: vec.size = " << mv_1.GetB().vec.size() << endl;

    cout << endl << "Press a letter" << endl;
    char c;
    cin >> c;
}
```

A union can't store a reference. A union also doesn't support inheritance. That means you can't use a union as a base class, or inherit from another class, or have virtual functions.

## Initialize a union

You can declare and initialize a union in the same statement by assigning an expression enclosed in braces. The expression is evaluated and assigned to the first field of the union.

```cpp
#include <iostream>
using namespace std;

union NumericType
{
    short       iValue;
    long        lValue;
    double      dValue;
};

int main()
{
    union NumericType Values = { 10 };   // iValue = 10
    cout << Values.iValue << endl;
    Values.dValue = 3.1416;
    cout << Values.dValue << endl;
}
/* Output:
10
3.141600
*/
```

The `NumericType` union is arranged in memory (conceptually) as shown in the following figure:

:::image type="complex" source="../cpp/media/vc38ul1.png" alt-text="Diagram that shows the overlapping storage of data in the NumericType union.":::
The diagram shows 8 bytes of data. The double type dValue occupies the entire 8 bytes. The type long lValue occupies the first 4 bytes. The short type iValue occupies the first byte.
:::image-end:::

## <a name="anonymous_unions"></a> Anonymous union

An anonymous union is one declared without a *`class-name`* or *`declarator-list`*.

> **`union  {`**  *`member-list`*  **`}`**

Names declared in an anonymous union are used directly, like nonmember variables. It implies that the names declared in an anonymous union must be unique in the surrounding scope.

An anonymous union is subject to these restrictions:

- If declared in file or namespace scope, it must also be declared as **`static`**.
- It can have only **`public`** members; having **`private`** and **`protected`** members in an anonymous union generates errors.
- It can't have member functions.

## See also

[Classes and Structs](../cpp/classes-and-structs-cpp.md)\
[Keywords](../cpp/keywords-cpp.md)\
[`class`](../cpp/class-cpp.md)\
[`struct`](../cpp/struct-cpp.md)
