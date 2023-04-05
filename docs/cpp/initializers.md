---
title: "Initializers"
ms.date: "07/29/2019"
description: "How to initialize classes, structs, arrays and fundamental types in C++."
helpviewer_keywords: ["arrays [C++], array-element initializers", "aggregate initializers [C++]"]
---
# Initializers

An initializer specifies the initial value of a variable. You can initialize variables in these contexts:

- In the definition of a variable:

    ```cpp
    int i = 3;
    Point p1{ 1, 2 };
    ```

- As one of the parameters of a function:

    ```cpp
    set_point(Point{ 5, 6 });
    ```

- As the return value of a function:

    ```cpp
    Point get_new_point(int x, int y) { return { x, y }; }
    Point get_new_point(int x, int y) { return Point{ x, y }; }
    ```

Initializers may take these forms:

- An expression (or a comma-separated list of expressions) in parentheses:

    ```cpp
    Point p1(1, 2);
    ```

- An equals sign followed by an expression:

    ```cpp
    string s = "hello";
    ```

- A braced initializer list. The list may be empty or may consist of a set of lists, as in the following example:

    ```cpp
    struct Point{
        int x;
        int y;
    };
    class PointConsumer{
    public:
        void set_point(Point p){};
        void set_points(initializer_list<Point> my_list){};
    };
    int main() {
        PointConsumer pc{};
        pc.set_point({});
        pc.set_point({ 3, 4 });
        pc.set_points({ { 3, 4 }, { 5, 6 } });
    }
    ```

## Kinds of initialization

There are several kinds of initialization, which may occur at different points in program execution. Different kinds of initialization aren't mutually exclusive—for example, list initialization can trigger value initialization and in other circumstances, it can trigger aggregate initialization.

### Zero initialization

Zero initialization is the setting of a variable to a zero value implicitly converted to the type:

- Numeric variables are initialized to 0 (or 0.0, or 0.0000000000, etc.).

- Char variables are initialized to `'\0'`.

- Pointers are initialized to **`nullptr`**.

- Arrays, [POD](../standard-library/is-pod-class.md) classes, structs, and unions have their members initialized to a zero value.

Zero initialization is performed at different times:

- At program startup, for all named variables that have static duration. These variables may later be initialized again.

- During value initialization, for scalar types and POD class types that are initialized by using empty braces.

- For arrays that have only a subset of their members initialized.

Here are some examples of zero initialization:

```cpp
struct my_struct{
    int i;
    char c;
};

int i0;              // zero-initialized to 0
int main() {
    static float f1;  // zero-initialized to 0.000000000
    double d{};     // zero-initialized to 0.00000000000000000
    int* ptr{};     // initialized to nullptr
    char s_array[3]{'a', 'b'};  // the third char is initialized to '\0'
    int int_array[5] = { 8, 9, 10 };  // the fourth and fifth ints are initialized to 0
    my_struct a_struct{};   // i = 0, c = '\0'
}
```

### <a name="default_initialization"></a> Default initialization

Default initialization for classes, structs, and unions is initialization with a default constructor. The default constructor can be called with no initialization expression or with the **`new`** keyword:

```cpp
MyClass mc1;
MyClass* mc3 = new MyClass;
```

If the class, struct, or union doesn't have a default constructor, the compiler emits an error.

Scalar variables are default initialized when they're defined with no initialization expression. They have indeterminate values.

```cpp
int i1;
float f;
char c;
```

Arrays are default initialized when they're defined with no initialization expression. When an array is default-initialized, its members are default initialized and have indeterminate values, as in the following example:

```cpp
int int_arr[3];
```

If the array members don't have a default constructor, the compiler emits an error.

#### Default initialization of constant variables

Constant variables must be declared together with an initializer. If they're scalar types they cause a compiler error, and if they're class types that have a default constructor they cause a warning:

```cpp
class MyClass{};
int main() {
    //const int i2;   // compiler error C2734: const object must be initialized if not extern
    //const char c2;  // same error
    const MyClass mc1; // compiler error C4269: 'const automatic data initialized with compiler generated default constructor produces unreliable results
}
```

#### Default initialization of static variables

Static variables that are declared with no initializer are initialized to 0 (implicitly converted to the type).

```cpp
class MyClass {
private:
    int m_int;
    char m_char;
};

int main() {
    static int int1;       // 0
    static char char1;     // '\0'
    static bool bool1;   // false
    static MyClass mc1;     // {0, '\0'}
}
```

For more information about initialization of global static objects, see [main function and command-line arguments](main-function-command-line-args.md).

### Value initialization

Value initialization occurs in the following cases:

- a named value is initialized using empty brace initialization

- an anonymous temporary object is initialized using empty parentheses or braces

- an object is initialized with the **`new`** keyword plus empty parentheses or braces

Value initialization does the following:

- for classes with at least one public constructor, the default constructor is called

- for nonunion classes with no declared constructors, the object is zero-initialized and the default constructor is called

- for arrays, every element is value-initialized

- in all other cases, the variable is zero initialized

```cpp
class BaseClass {
private:
    int m_int;
};

int main() {
    BaseClass bc{};     // class is initialized
    BaseClass*  bc2 = new BaseClass();  // class is initialized, m_int value is 0
    int int_arr[3]{};  // value of all members is 0
    int a{};     // value of a is 0
    double b{};  // value of b is 0.00000000000000000
}
```

### Copy initialization

Copy initialization is the initialization of one object using a different object. It occurs in the following cases:

- a variable is initialized using an equals sign

- an argument is passed to a function

- an object is returned from a function

- an exception is thrown or caught

- a non-static data member is initialized using an equals sign

- class, struct, and union members are initialized by copy initialization during aggregate initialization. See [Aggregate initialization](#agginit) for examples.

The following code shows several examples of copy initialization:

```cpp
#include <iostream>
using namespace std;

class MyClass{
public:
    MyClass(int myInt) {}
    void set_int(int myInt) { m_int = myInt; }
    int get_int() const { return m_int; }
private:
    int m_int = 7; // copy initialization of m_int

};
class MyException : public exception{};
int main() {
    int i = 5;              // copy initialization of i
    MyClass mc1{ i };
    MyClass mc2 = mc1;      // copy initialization of mc2 from mc1
    MyClass mc1.set_int(i);    // copy initialization of parameter from i
    int i2 = mc2.get_int(); // copy initialization of i2 from return value of get_int()

    try{
        throw MyException();
    }
    catch (MyException ex){ // copy initialization of ex
        cout << ex.what();
    }
}
```

Copy initialization can't invoke explicit constructors.

```cpp
vector<int> v = 10; // the constructor is explicit; compiler error C2440: can't convert from 'int' to 'std::vector<int,std::allocator<_Ty>>'
regex r = "a.*b"; // the constructor is explicit; same error
shared_ptr<int> sp = new int(1729); // the constructor is explicit; same error
```

In some cases, if the copy constructor of the class is deleted or inaccessible, copy initialization causes a compiler error.

### Direct initialization

Direct initialization is initialization using (non-empty) braces or parentheses. Unlike copy initialization, it can invoke explicit constructors. It occurs in the following cases:

- a variable is initialized with non-empty braces or parentheses

- a variable is initialized with the **`new`** keyword plus non-empty braces or parentheses

- a variable is initialized with **`static_cast`**

- in a constructor, base classes and non-static members are initialized with an initializer list

- in the copy of a captured variable inside a lambda expression

The following code shows some examples of direct initialization:

```cpp
class BaseClass{
public:
    BaseClass(int n) :m_int(n){} // m_int is direct initialized
private:
    int m_int;
};

class DerivedClass : public BaseClass{
public:
    // BaseClass and m_char are direct initialized
    DerivedClass(int n, char c) : BaseClass(n), m_char(c) {}
private:
    char m_char;
};
int main(){
    BaseClass bc1(5);
    DerivedClass dc1{ 1, 'c' };
    BaseClass* bc2 = new BaseClass(7);
    BaseClass bc3 = static_cast<BaseClass>(dc1);

    int a = 1;
    function<int()> func = [a](){  return a + 1; }; // a is direct initialized
    int n = func();
}
```

### List initialization

List initialization occurs when a variable is initialized using a braced initializer list. Braced initializer lists can be used in the following cases:

- a variable is initialized

- a class is initialized with the **`new`** keyword

- an object is returned from a function

- an argument passed to a function

- one of the arguments in a direct initialization

- in a non-static data member initializer

- in a constructor initializer list

The following code shows some examples of list initialization:

```cpp
class MyClass {
public:
    MyClass(int myInt, char myChar) {}
private:
    int m_int[]{ 3 };
    char m_char;
};
class MyClassConsumer{
public:
    void set_class(MyClass c) {}
    MyClass get_class() { return MyClass{ 0, '\0' }; }
};
struct MyStruct{
    int my_int;
    char my_char;
    MyClass my_class;
};
int main() {
    MyClass mc1{ 1, 'a' };
    MyClass* mc2 = new MyClass{ 2, 'b' };
    MyClass mc3 = { 3, 'c' };

    MyClassConsumer mcc;
    mcc.set_class(MyClass{ 3, 'c' });
    mcc.set_class({ 4, 'd' });

    MyStruct ms1{ 1, 'a', { 2, 'b' } };
}
```

### <a name="agginit"></a> Aggregate initialization

Aggregate initialization is a form of list initialization for arrays or class types (often structs or unions) that have:

- no private or protected members

- no user-provided constructors, except for explicitly defaulted or deleted constructors

- no base classes

- no virtual member functions

> [!NOTE]
> <!--conformance note-->In Visual Studio 2015 and earlier, an aggregate is not allowed to have  brace-or-equal initializers for non-static members. This restriction was removed in the C++14 standard and implemented in Visual Studio 2017.

Aggregate initializers consist of a braced initialization list, with or without an equals sign, as in the following example:

```cpp
#include <iostream>
using namespace std;

struct MyAggregate{
    int myInt;
    char myChar;
};

struct MyAggregate2{
    int myInt;
    char myChar = 'Z'; // member-initializer OK in C++14
};

int main() {
    MyAggregate agg1{ 1, 'c' };
    MyAggregate2 agg2{2};
    cout << "agg1: " << agg1.myChar << ": " << agg1.myInt << endl;
    cout << "agg2: " << agg2.myChar << ": " << agg2.myInt << endl;

    int myArr1[]{ 1, 2, 3, 4 };
    int myArr2[3] = { 5, 6, 7 };
    int myArr3[5] = { 8, 9, 10 };

    cout << "myArr1: ";
    for (int i : myArr1){
        cout << i << " ";
    }
    cout << endl;

    cout << "myArr3: ";
    for (auto const &i : myArr3) {
        cout << i << " ";
    }
    cout << endl;
}
```

You should see the following output:

```Output
agg1: c: 1
agg2: Z: 2
myArr1: 1 2 3 4
myArr3: 8 9 10 0 0
```

> [!IMPORTANT]
> Array members that are declared but not explicitly initialized during aggregate initialization are zero-initialized, as in `myArr3` above.

#### Initializing unions and structs

If a union doesn't have a constructor, you can initialize it with a single value (or with another instance of a union). The value is used to initialize the first non-static field. This is different from struct initialization, in which the first value in the initializer is used to initialize the first field, the second to initialize the second field, and so on. Compare the initialization of unions and structs in the following example:

```cpp
struct MyStruct {
    int myInt;
    char myChar;
};
union MyUnion {
    int my_int;
    char my_char;
    bool my_bool;
    MyStruct my_struct;
};

int main() {
    MyUnion mu1{ 'a' };  // my_int = 97, my_char = 'a', my_bool = true, {myInt = 97, myChar = '\0'}
    MyUnion mu2{ 1 };   // my_int = 1, my_char = 'x1', my_bool = true, {myInt = 1, myChar = '\0'}
    MyUnion mu3{};      // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}
    MyUnion mu4 = mu3;  // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}
    //MyUnion mu5{ 1, 'a', true };  // compiler error: C2078: too many initializers
    //MyUnion mu6 = 'a';            // compiler error: C2440: cannot convert from 'char' to 'MyUnion'
    //MyUnion mu7 = 1;              // compiler error: C2440: cannot convert from 'int' to 'MyUnion'

    MyStruct ms1{ 'a' };            // myInt = 97, myChar = '\0'
    MyStruct ms2{ 1 };              // myInt = 1, myChar = '\0'
    MyStruct ms3{};                 // myInt = 0, myChar = '\0'
    MyStruct ms4{1, 'a'};           // myInt = 1, myChar = 'a'
    MyStruct ms5 = { 2, 'b' };      // myInt = 2, myChar = 'b'
}
```

#### Initializing aggregates that contain aggregates

Aggregate types can contain other aggregate types, for example arrays of arrays, arrays of structs, and so on. These types are initialized by using nested sets of braces, for example:

```cpp
struct MyStruct {
    int myInt;
    char myChar;
};
int main() {
    int intArr1[2][2]{{ 1, 2 }, { 3, 4 }};
    int intArr3[2][2] = {1, 2, 3, 4};
    MyStruct structArr[]{ { 1, 'a' }, { 2, 'b' }, {3, 'c'} };
}
```

### Reference initialization

Variables of reference type must be initialized with an object of the type from which the reference type is derived, or with an object of a type that can be converted to the type from which the reference type is derived. For example:

```cpp
// initializing_references.cpp
int iVar;
long lVar;
int main()
{
    long& LongRef1 = lVar;        // No conversion required.
    long& LongRef2 = iVar;        // Error C2440
    const long& LongRef3 = iVar;  // OK
    LongRef1 = 23L;               // Change lVar through a reference.
    LongRef2 = 11L;               // Change iVar through a reference.
    LongRef3 = 11L;               // Error C3892
}
```

The only way to initialize a reference with a temporary object is to initialize a constant temporary object. Once initialized, a reference-type variable always points to the same object; it can't be modified to point to another object.

Although the syntax can be the same, initialization of reference-type variables and assignment to reference-type variables are semantically different. In the preceding example, the assignments that change `iVar` and `lVar` look similar to the initializations, but have different effects. The initialization specifies the object to which the reference-type variable points; the assignment assigns to the referred-to object through the reference.

Because both passing an argument of reference type to a function and returning a value of reference type from a function are initializations, the formal arguments to a function are initialized correctly, as are the references returned.

Reference-type variables can be declared without initializers only in the following:

- Function declarations (prototypes). For example:

    ```cpp
    int func( int& );
    ```

- Function-return type declarations. For example:

    ```cpp
    int& func( int& );
    ```

- Declaration of a reference-type class member. For example:

    ```cpp
    class c {public:   int& i;};
    ```

- Declaration of a variable explicitly specified as **`extern`**. For example:

    ```cpp
    extern int& iVal;
    ```

When initializing a reference-type variable, the compiler uses the decision graph shown in the following figure to select between creating a reference to an object or creating a temporary object to which the reference points:

:::image type="complex" source="../cpp/media/vc38s71.gif" alt-text="Decision graph for initialization of reference types.":::
The decision graph begins with: is the initializer an lvalue of the same type or a type derived from the type of reference? If yes, the reference refers to the object specified in the initializer. If no, the next decision is whether the reference-type variable is a const T reference being initialized and can the initializer be implicitly converted to a T? If yes, the temporary is created and the reference variable becomes a name for that temporary. If no, it's an error.
:::image-end:::
Decision graph for initialization of reference types

References to **`volatile`** types (declared as **`volatile`** *typename*<strong>&</strong> *identifier*) can be initialized with **`volatile`** objects of the same type or with objects that haven't been declared as **`volatile`**. They can't, however, be initialized with **`const`** objects of that type. Similarly, references to **`const`** types (declared as **`const`** *typename*<strong>&</strong> *identifier*) can be initialized with **`const`** objects of the same type (or anything that has a conversion to that type or with objects that haven't been declared as **`const`**). They can't, however, be initialized with **`volatile`** objects of that type.

References that aren't qualified with either the **`const`** or **`volatile`** keyword can be initialized only with objects declared as neither **`const`** nor **`volatile`**.

### Initialization of external variables

Declarations of automatic, static, and external variables can contain initializers. However, declarations of external variables can contain initializers only if the variables aren't declared as **`extern`**.
