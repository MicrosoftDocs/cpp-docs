---
title: "Constructors (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["constructors [C++]", "objects [C++], creating", "instance constructors"]
ms.assetid: 3e9f7211-313a-4a92-9584-337452e061a9
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Constructors (C++)
To customize how class members are initialized, or to invoke functions when an object of your class is created, define a *constructor*. A constructor has the same name as the class and no return value. You can define as many overloaded constructors as needed to customize initialization in various ways. Typically, constructors have public accessibility so that code outside the class definition or inheritance hierarchy can create objects of the class. But you can also declare a constructor as `protected` or `private`. 

Constructors can optionally take a member init list. This is a more efficient way to initialize class members than assigning values in the constructor body. The following example shows a class `Box` with three overloaded constructors. The last two use member init lists:

```cpp

class Box {
public:
    // Default constructor
    Box() {}

    // Initalize a Box with equal dimensions (i.e. a cube)
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)  
    {}

    int Volume() { return m_width * m_length * m_height; }

private:
    // Will have value of 0 when default constructor is called.
    // If we didn't zero-init here, default constructor would
    // leave them uninitialized with garbage values.
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};

```

When you declare an instance of a class, the compiler chooses which constructor to invoke based on the rules of overload resolution:

```cpp

int main()
{
    Box b; // Calls Box()
    Box b2 {5}; // Calls Box(int)
    Box b3 {5, 8, 12}; // Calls Box(int, int, int)
}

```

## In this topic



- [Default Constructors](#default_constructors)  

- [Copy and Move Constructors](#copy_and_move_constructors)  

- [Explicitly Defaulted and Deleted Constructors](#explicitly_defaulted_and_deleted_constructors)  

- [Explicit Constructors](#explicit_constructors)  

- [Constructors in Derived Classes](#constructors_in_derived_classes)  

- [Virtual Functions in Constructors](#virtual_functions_in_constructors)  

- [Constructors and Composite Classes](#constructors_in_composite_classes)  

- [Delegating Constructors](#delegating_constructors)  

- [Inheriting constructors (C++11)](#inheriting_constructors)  

##  <a name="default_constructors"></a> Default Constructors  
 *Default constructors* have no parameters. You can declare a default constructor with an argument list, provided all arguments have defaults.

 Default constructors are one of the *special member functions*; if no constructors are declared in a class, the compiler provides a default constructor:  

```cpp  
class Box {  
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height){}  
};  

int main(){  

    Box box1{}; // call compiler-generated default ctor  
    Box box2;   // call compiler-generated default ctor  
}  
```  
You can override the behavior in the previous example by defining the default constructor as [deleted](#explicitly_defaulted_and_deleted_constructors):

```cpp

    // Default constructor
    Box() = delete;

```

 When you call an compiler-generated default constructor and try to use parentheses, a warning is issued:  

```cpp  
class myclass{};  
int main(){  
myclass mc();     // warning C4930: prototyped function not called (was a variable definition intended?)  
}  
```  

 This is an example of the Most Vexing Parse problem. Because the example expression can be interpreted either as the declaration of a function or as the invocation of a default constructor, and because C++ parsers favor declarations over other things, the expression is treated as a function declaration. For more information, see [Most Vexing Parse](http://en.wikipedia.org/wiki/Most_vexing_parse).  

 If any non-default constructors are declared, the compiler does not provide a default constructor:  

```cpp  
class Box {  
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height){}  
};  
private:  
    int m_width;  
    int m_length;  
    int m_height;  

};  

int main(){  

    Box box1(1, 2, 3);  
    Box box2{ 2, 3, 4 };  
    Box box4;     // compiler error C2512: no appropriate default constructor available  
}  

```  

 If a class has no default constructor, an array of objects of that class cannot be constructed by using square-bracket syntax alone. For example, given the previous code block, an array of Boxes cannot be declared like this:  

```cpp  
Box boxes[3];    // compiler error C2512: no appropriate default constructor available  

```  

 However, you can use a set of initializer lists to initialize an array of Boxes:  

```cpp  
Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };  
```  


##  <a name="copy_and_move_constructors"></a> Copy and Move Constructors  
 A *copy constructor* initializes an object by copying the member values from an object of the same type. If your class members are all simple types such as scalar values, the compiler-generated copy constructor is sufficient and you do not need to define your own. If your class requires more complex initialization, then you need to implement a custom copy constructor. For example, if a class member is a pointer then you need to define a copy constructor to allocate new memory and copy the values from the other's pointed-to object. The compiler-generated copy constructor will simply make a copy of the pointer, so that the new pointer still points to the other's memory location.

A copy constructor may have one of these signatures:

```cpp

    Box(Box& other); // avoid this if possible. allows modification of other.
    Box(const Box& other);
    Box(volatile Box& other);
    Box(volatile const Box& other);

    // additional parameters OK if they have default values
    Box(Box& other, int i = 42, string label = "Box");
```

When you define a copy constructor, you should also define a copy assignment operator (=). 

You can prevent your object from being copied by defining the copy constructor as deleted:

```cpp
    Box (const Box& other) = delete;
```
Attempting to copy the object will produce error *C2280: attempting to reference a deleted function*.

For more information, see [Copy Constructors and Copy Assignment Operators (C++)](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md). A *move constructor* is also a special member function that moves ownership of an existing object's data to a new variable without copying the original data. For more information, see [Move Constructors and Move Assignment Operators (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md).  

##  <a name="explicitly_defaulted_and_deleted_constructors"></a> Explicitly Defaulted and Deleted Constructors  
 You can explicitly *default* copy constructors, default constructors, move constructors, copy assignment operators, move assignment operators, and destructors. You can explicitly *delete* all of the special member functions. For more information, see [Explicitly Defaulted and Deleted Functions](../cpp/explicitly-defaulted-and-deleted-functions.md).



##  <a name="explicit_constructors"></a> Explicit Constructors  
 If a class has a constructor with a single parameter, or if all parameters except one have a default value, the parameter type can be implicitly converted to the class type. For example, if the `Box` class has a constructor like this:  

```cpp
Box(int size): m_width(size), m_length(size), m_height(size){}  
```

 It is possible to initialize a Box like this:  

```  
Box b = 42;  
```  

 Or pass an int to a function that takes a Box:  

```  
class ShippingOrder  
{  
public:  
    ShippingOrder(Box b, double postage) : m_box(b), m_postage(postage){}  

private:  
    Box m_box;  
    double m_postage;  
}  
//elsewhere...  
    ShippingOrder so(42, 10.8);  

```  

 Such conversions can be useful in some cases, but more often they can lead to subtle but serious errors in your code. As a general rule, you should use the `explicit` keyword on a constructor (and user-defined operators) to prevent this kind of implicit type conversion:  

```  

explicit Box(int size): m_width(size), m_length(size), m_height(size){}  
```  

 When the constructor is explicit, this line causes a compiler error: `ShippingOrder so(42, 10.8);`.  For more information, see [User-Defined Type Conversions](../cpp/user-defined-type-conversions-cpp.md).  

##  <a name="constructors_in_derived_classes"></a> Constructors in Derived Classes  

A constructor performs its work in this order:  

1.  It calls base class and member constructors in the order of declaration.  

2.  If the class is derived from virtual base classes, it initializes the object's virtual base pointers.  

3.  If the class has or inherits virtual functions, it initializes the object's virtual function pointers. Virtual function pointers point to the class's virtual function table to enable correct binding of virtual function calls to code.  

4.  It executes any code in its function body.  

 The following example shows the order in which base class and member constructors are called in the constructor for a derived class. First, the base constructor is called, then the base-class members are initialized in the order in which they appear in the class declaration, and then the derived constructor is called.  

```cpp

#include <iostream>  

using namespace std;

class Contained1 {
public:
    Contained1() { cout << "Contained1 ctor\n"; }
};

class Contained2 {
public:
    Contained2() { cout << "Contained2 ctor\n"; }
};

class Contained3 {
public:
    Contained3() { cout << "Contained3 ctor\n"; }
};

class BaseContainer {
public:
    BaseContainer() { cout << "BaseContainer ctor\n"; }
private:
    Contained1 c1;
    Contained2 c2;
};

class DerivedContainer : public BaseContainer {
public:
    DerivedContainer() : BaseContainer() { cout << "DerivedContainer ctor\n"; }
private:
    Contained3 c3;
};

int main() {
    DerivedContainer dc;
}

```
Here's the output:  

```
Contained1 ctor
Contained2 ctor
BaseContainer ctor
Contained3 ctor
DerivedContainer ctor
```

A derived class constructor always calls a base class constructor, so that it can rely on completely constructed base classes before any extra work is done. The base class constructors are called in order of derivation—for example, if ClassA is derived from ClassB, which is derived from ClassC, the ClassC constructor is called first, then the ClassB constructor, then the ClassA constructor.  

If a base class does not have a default constructor, you must supply the base class constructor parameters in the derived class constructor:  

```cpp  
class Box {  
public:  
    Box(int width, int length, int height){  
       m_width = width;  
       m_length = length;  
       m_height = height;  
    }  

private:  
    int m_width;  
    int m_length;  
    int m_height;  
};  

class StorageBox : public Box {  
public:  
    StorageBox(int width, int length, int height, const string label&) : Box(width, length, height){  
        m_label = label;  
    }  
private:  
    string m_label;  
};  

int main(){  

    const string aLabel = "aLabel";  
    StorageBox sb(1, 2, 3, aLabel);  
}   
```  

If a constructor throws an exception, the order of destruction is the reverse of the order of construction:  

1.  The code in the body of the constructor function is unwound.  

2.  Base class and member objects are destroyed, in the reverse order of declaration.  

3.  If the constructor is non-delegating, all fully-constructed base class objects and members are destroyed. However, because the object itself is not fully constructed, the destructor is not run.  

### Constructors for Classes That Have Multiple Inheritance  
 If a class is derived from multiple base classes, the base class constructors are invoked in the order in which they are listed in the declaration of the derived class:  

```cpp  
#include <iostream>  
using namespace std;

class BaseClass1 {
public:
    BaseClass1() { cout << "BaseClass1 ctor\n"; }
};
class BaseClass2 {
public:
    BaseClass2() { cout << "BaseClass2 ctor\n"; }
};
class BaseClass3 {
public:
    BaseClass3() { cout << "BaseClass3 ctor\n"; }
};
class DerivedClass : public BaseClass1,
                     public BaseClass2,
                     public BaseClass3 
                     {
public:
    DerivedClass() { cout << "DerivedClass ctor\n"; }
};

int main() {
    DerivedClass dc;
}

```

 You should expect the following output:  

```

BaseClass1 ctor
BaseClass2 ctor
BaseClass3 ctor
DerivedClass ctor

```

##  <a name="virtual_functions_in_constructors"></a> Virtual Functions in Constructors  

We recommend that you be careful when you call virtual functions in constructors. Because the base class constructor is always invoked before the derived class constructor, the function that's called in the base constructor is the base class version, not the derived class version. In the following example, constructing a `DerivedClass` causes the `BaseClass` implementation of `print_it()` to execute before the `DerivedClass` constructor causes the `DerivedClass` implementation of `print_it()` to execute:  

```cpp  
#include <iostream>  
using namespace std;  

class BaseClass{  
public:  
    BaseClass(){  
        print_it();  
    }  
    virtual void print_it() {  
        cout << "BaseClass print_it" << endl;  
    }  
};  

class DerivedClass : public BaseClass {  
public:  
    DerivedClass() {  
        print_it();  
    }  
    virtual void print_it(){  
        cout << "Derived Class print_it" << endl;  
    }  
};  

int main() {  

    DerivedClass dc;  
}  
```  

 Here's the output:  

```  
BaseClass print_it  
Derived Class print_it  
```  

##  <a name="delegating_constructors"></a> Delegating Constructors  

 A *delegating constructor* calls a different constructor in the same class to do some of the work of initialization. This is useful when you have multiple constructors that all have to perform similar work. You can write the main logic in one constructor and invoke it from others. In the following trivial example, Box(int) delegates its work to Box(int,int,int):

```cpp  
class Box {
public:
    // Default constructor
    Box() {}

    // Initalize a Box with equal dimensions (i.e. a cube)
    Box(int i) :  Box(i, i, i);  // delegating constructor
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
    //... rest of class as before
};
```  
  

 The object created by the constructors is fully initialized as soon as any constructor is finished. For more information, see [Uniform Initialization and Delegating Constructors](../cpp/uniform-initialization-and-delegating-constructors.md).  

##  <a name="inheriting_constructors"></a> Inheriting constructors (C++11)  
 A derived class can inherit the constructors from a direct base class by using a using declaration as shown in the following example:  

```  
#include <iostream>  
using namespace std;  

class Base  
{  
public:      
    Base() { cout << "Base()" << endl; }  
    Base(const Base& other) { cout << "Base(Base&)" << endl; }  
    explicit Base(int i) : num(i) { cout << "Base(int)" << endl; }  
    explicit Base(char c) : letter(c) { cout << "Base(char)" << endl; }  

private:  
    int num;  
    char letter;  
};  

class Derived : Base  
{  
public:  
    // Inherit all constructors from Base  
    using Base::Base;  

private:  
    // Can't initialize newMember from Base constructors.  
    int newMember{ 0 };  
};  

int main()  
{  
    cout << "Derived d1(5) calls: ";   
    Derived d1(5);  
    cout << "Derived d1('c') calls: ";  
    Derived d2('c');  
    cout << "Derived d3 = d2 calls: " ;  
    Derived d3 = d2;  
    cout << "Derived d4 calls: ";  
    Derived d4;   
}  

/* Output:  
Derived d1(5) calls: Base(int)  
Derived d1('c') calls: Base(char)  
Derived d3 = d2 calls: Base(Base&)  
Derived d4 calls: Base()  

```  

 The using statement brings into scope all constructors from the base class except those that have an identical signature to constructors in the derived class. In general, it is best to use inheriting constructors when the derived class declares no new data members or constructors.  

 A class template can inherit all the constructors from a type argument if that type specifies a base class:  

```  
template< typename T >  
class Derived : T {  
    using T::T;   // declare the constructors from T  
    // ...  
};  

```  

 A deriving class cannot inherit from multiple base classes if those base classes have constructors that have an identical signature.

##  <a name="constructors_in_composite_classes"></a> Constructors and Composite Classes  

 Classes that contain class-type members are known as *composite classes*. When a class-type member of a composite class is created, the constructor is called before the class's own constructor. When a contained class lacks a default constructor, you must use an initialization list in the constructor of the composite class. In the earlier `StorageBox` example, if you change the type of the `m_label` member variable to a new `Label` class, you must call both the base class constructor and initialize the `m_label` variable in the `StorageBox` constructor:  

```cpp  
class Label {  
public:  
    Label(const string& name, const string& address) { m_name = name; m_address = address; }  
    string m_name;  
    string m_address;  
};  

class StorageBox : public Box {  
public:  
    StorageBox(int width, int length, int height, Label label)   
        : Box(width, length, height), m_label(label){}  
private:  
    Label m_label;  
};  

int main(){  
// passing a named Label  
    Label label1{ "some_name", "some_address" };  
    StorageBox sb1(1, 2, 3, label1);  

    // passing a temporary label  
    StorageBox sb2(3, 4, 5, Label{ "another name", "another address" });  

    // passing a temporary label as an initializer list  
    StorageBox sb3(1, 2, 3, {"myname", "myaddress"});  
}  
```