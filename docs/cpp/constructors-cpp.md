---
title: "Constructors (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "constructors [C++]"
  - "objects [C++], creating"
  - "instance constructors"
ms.assetid: 3e9f7211-313a-4a92-9584-337452e061a9
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Constructors (C++)
A constructor is a kind of member function that initializes an instance of its class. A constructor has the same name as the class and no return value. A constructor can have any number of parameters and a class may have any number of overloaded constructors. Constructors may have any accessibility, public, protected or private. If you don't define any constructors, the compiler will generate a default constructor that takes no parameters; you can override this behavior by declaring a default constructor as deleted.  
  
## In this topic  
  
-   [Order of Construction](#order_of_construction)  
  
-   [Member Lists](#member_lists)  
  
-   [Explicit Constructors](#explicit_constructors)  
  
-   [Default Constructors](#default_constructors)  
  
-   [Copy and Move Constructors](#copy_and_move_constructors)  
  
-   [Explicitly Defaulted and Deleted Constructors](#explicitly_defaulted_and_deleted_constructors)  
  
-   [Constructors in Derived Classes](#constructors_in_derived_classes)  
  
-   [Virtual Functions in Constructors](#virtual_functions_in_constructors)  
  
-   [Constructors and Composite Classes](#constructors_in_composite_classes)  
  
-   [Delegating Constructors](#delegating_constructors)  
  
-   [Inheriting constructors (C++11)](#inheriting_constructors)  
  
-   [Rules for Declaring Constructors](#rules_for_declaring_constructors)  
  
-   Default and Copy Constructors  
  
-   [Explicitly invoking constructors](#explicitly_invoking_constructors)  
  
##  <a name="order_of_construction"></a> Order of Construction  
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
    Contained1() {  
        cout << "Contained1 constructor." << endl;  
    }  
};  
  
class Contained2 {  
public:  
    Contained2() {  
        cout << "Contained2 constructor." << endl;  
    }  
};  
  
class Contained3 {  
public:  
    Contained3() {  
        cout << "Contained3 constructor." << endl;  
    }  
};  
  
class BaseContainer {  
public:  
    BaseContainer() {  
        cout << "BaseContainer constructor." << endl;  
    }  
private:  
    Contained1 c1;  
    Contained2 c2;  
};  
  
class DerivedContainer : public BaseContainer {  
public:  
    DerivedContainer() : BaseContainer() {  
        cout << "DerivedContainer constructor." << endl;  
    }  
private:  
    Contained3 c3;  
};  
  
int main() {  
    DerivedContainer dc;  
    int x = 3;  
}  
  
```  
  
 Here's the output:  
  
```  
Contained1 constructor.  
Contained2 constructor.  
BaseContainer constructor.  
Contained3 constructor.  
DerivedContainer constructor.  
```  
  
 If a constructor throws an exception, the order of destruction is the reverse of the order of construction:  
  
1.  The code in the body of the constructor function is unwound.  
  
2.  Base class and member objects are destroyed, in the reverse order of declaration.  
  
3.  If the constructor is non-delegating, all fully-constructed base class objects and members are destroyed. However, because the object itself is not fully constructed, the destructor is not run.  
  
##  <a name="member_lists"></a> Member Lists  
 Initialize class members from constructor arguments by using a member initializer list. This method uses *direct initialization*, which is more efficient than using assignment operators inside the constructor body.  
  
```cpp  
class Box {  
public:  
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height) // member init list  
    {}  
    int Volume() {return m_width * m_length * m_height; }  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
  
};  
  
```  
  
 Create a Box object:  
  
```  
Box b(42, 21, 12);  
cout << "The volume is " << b.Volume();  
```  
  
##  <a name="explicit_constructors"></a> Explicit Constructors  
 If a class has a constructor with a single parameter, or if all parameters except one have a default value, the parameter type can be implicitly converted to the class type. For example, if the `Box` class has a constructor like this:  
  
```  
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
  
##  <a name="default_constructors"></a> Default Constructors  
 *Default constructors* have no parameters; they follow slightly different rules:  
  
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
  
 When you call a default constructor and try to use parentheses, a warning is issued:  
  
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
 A *copy constructor* is a special member function that takes as input a reference to an object of the same type, and makes a copy of it. For more information, see [Copy Constructors and Copy Assignment Operators (C++)](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md). A move is also a special member function constructor moves ownership of an existing object to a new variable without copying the original data. For more information, see  [Move Constructors and Move Assignment Operators (C++)](http://msdn.microsoft.com/en-us/1442de5f-37a5-42a1-83a6-ec9cfe0414db) and  [Move Constructors and Move Assignment Operators (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md).  
  
##  <a name="explicitly_defaulted_and_deleted_constructors"></a> Explicitly Defaulted and Deleted Constructors  
 You can explicitly default copy constructors, default constructors, move constructors, copy assignment operators, move assignment operators, and destructors. You can explicitly delete all of the special member functions. For more information, see [Explicitly Defaulted and Deleted Functions](../cpp/explicitly-defaulted-and-deleted-functions.md).  
  
##  <a name="constructors_in_derived_classes"></a> Constructors in Derived Classes  
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
  
### Constructors for Classes That Have Multiple Inheritance  
 If a class is derived from multiple base classes, the base class constructors are invoked in the order in which they are listed in the declaration of the derived class:  
  
```cpp  
#include <iostream>  
using namespace std;  
  
class BaseClass1 {  
public:  
    BaseClass1() {  
        cout << "BaseClass1 constructor." << endl;  
    }  
};  
class BaseClass2 {  
public:  
    BaseClass2() {  
        cout << "BaseClass2 constructor." << endl;  
    }  
};  
class BaseClass3{  
public:  
    BaseClass3() {  
        cout << "BaseClass3 constructor." << endl;  
    }  
};  
class DerivedClass : public BaseClass1, public BaseClass2, public BaseClass3  {  
public:  
    DerivedClass() {  
        cout << "DerivedClass constructor." << endl;  
    }  
};  
  
int main() {  
    DerivedClass dc;  
}  
  
```  
  
 You should expect the following output:  
  
```  
BaseClass1 constructor.  
BaseClass2 constructor.  
BaseClass3 constructor.  
DerivedClass constructor.  
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
  
##  <a name="delegating_constructors"></a> Delegating Constructors  
 A *delegating constructor* calls a different constructor in the same class to do some of the work of initialization. In the following example, the derived class has three constructors—the second constructor delegates to the first, and the third constructor delegates to the second:  
  
```cpp  
#include <iostream>  
using namespace std;  
  
class ConstructorDestructor {  
public:  
    ConstructorDestructor() {  
        cout << "ConstructorDestructor default constructor." << endl;  
    }  
    ConstructorDestructor(int int1) {  
        cout << "ConstructorDestructor constructor with 1 int." << endl;  
    }  
    ConstructorDestructor(int int1, int int2) : ConstructorDestructor(int1) {  
        cout << "ConstructorDestructor constructor with 2 ints." << endl;  
  
        throw exception();  
    }  
    ConstructorDestructor(int int1, int int2, int int3) : ConstructorDestructor(int1, int2) {  
        cout << "ConstructorDestructor constructor with 3 ints." << endl;  
    }  
    ~ConstructorDestructor() {  
        cout << "ConstructorDestructor destructor." << endl;  
    }  
};  
  
int main() {  
    ConstructorDestructor dc(1, 2, 3);  
}  
  
```  
  
 Here's the output:  
  
```  
ConstructorDestructor constructor with 1 int.  
ConstructorDestructor constructor with 2 ints.  
ConstructorDestructor constructor with 3 ints.  
```  
  
 The object created by the constructors is fully initialized as soon as any constructor is finished. `DerivedContainer(int int1)` succeeds, but `DerivedContainer(int int1, int int2)` fails and the destructor is called.  
  
```cpp  
class ConstructorDestructor {  
public:  
    ConstructorDestructor() {  
        cout << "ConstructorDestructor default constructor." << endl;  
    }  
    ConstructorDestructor(int int1) {  
        cout << "ConstructorDestructor constructor with 1 int." << endl;  
    }  
    ConstructorDestructor(int int1, int int2) : ConstructorDestructor(int1) {  
        cout << "ConstructorDestructor constructor with 2 ints." << endl;  
        throw exception();  
    }  
    ConstructorDestructor(int int1, int int2, int int3) : ConstructorDestructor(int1, int2) {  
        cout << "ConstructorDestructor constructor with 3 ints." << endl;  
    }  
  
    ~ConstructorDestructor() {  
        cout << "ConstructorDestructor destructor." << endl;  
    }  
};  
  
int main() {  
  
    try {  
        ConstructorDestructor cd{ 1, 2, 3 };  
    }  
    catch (const exception& ex){  
    }  
}  
  
```  
  
 Output:  
  
```  
ConstructorDestructor constructor with 1 int.  
ConstructorDestructor constructor with 2 ints.  
ConstructorDestructor destructor.  
```  
  
 For more information, see [Uniform Initialization and Delegating Constructors](../cpp/uniform-initialization-and-delegating-constructors.md).  
  
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
  
int main(int argc, char argv[])  
{  
    cout << "Derived d1(5) calls: ";   
    Derived d1(5);  
    cout << "Derived d1('c') calls: ";  
    Derived d2('c');  
    cout << "Derived d3 = d2 calls: " ;  
    Derived d3 = d2;  
    cout << "Derived d4 calls: ";  
    Derived d4;   
  
    // Keep console open in debug mode:  
    cout << endl << "Press Enter to exit.";  
    char in[1];  
    cin.getline(in, 1);  
    return 0;  
}  
  
/* Output:  
Derived d1(5) calls: Base(int)  
Derived d1('c') calls: Base(char)  
Derived d3 = d2 calls: Base(Base&)  
Derived d4 calls: Base()  
  
Press Enter to exit.  
  
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
  
##  <a name="rules_for_declaring_constructors"></a> Rules for Declaring Constructors  
 A constructor has the same name as its class. Any number of constructors can be declared, subject to the rules of overloaded functions.  
  
 The `argument-declaration-list` may be empty.  
  
 C++ defines two special kinds of constructors, default and copy constructors, described in the following table.  
  
### Default and Copy Constructors  
  
|Kind of Construction|Arguments|Purpose|  
|--------------------------|---------------|-------------|  
|Default constructor|Can be called with no arguments|Construct a default object of the class type|  
|Copy constructor|Can accept a single argument of reference to same class type|Copy objects of the class type|  
  
 Default constructors can be called with no arguments. However, you can declare a default constructor with an argument list, provided all arguments have defaults. Similarly, copy constructors must accept a single argument of reference to the same class type. More arguments can be supplied, provided all subsequent arguments have defaults.  
  
 If you do not supply any constructors, the compiler attempts to generate a default constructor. If you do not supply a copy constructor, the compiler attempts to generate one. These compiler-generated constructors are considered public member functions. An error is generated if you specify a copy constructor with a first argument that is an object and not a reference.  
  
 A compiler-generated default constructor sets up the object (initializes vftables and vbtables, as described previously), and it calls the default constructors for base classes and members, but it takes no other action. Base class and member constructors are called only if they exist, are accessible, and are unambiguous.  
  
 A compiler-generated copy constructor sets up a new object and performs a memberwise copy of the contents of the object to be copied. If base class or member constructors exist, they are called; otherwise, bitwise copying is performed.  
  
 If all base and member classes of a class `type` have copy constructors that accept a **const** argument, the compiler-generated copy constructor accepts a single argument of type **const** `type`**&**. Otherwise, the compiler-generated copy constructor accepts a single argument of type `type`**&**.  
  
 You can use a constructor to initialize a **const** or `volatile` object, but the constructor itself cannot be declared as **const** or `volatile`. The only legal storage class for a constructor is **inline**; use of any other storage-class modifier, including the `__declspec` keyword, with a constructor causes a compiler error.  
  
 The stdcall calling convention is used on static member functions and global functions declared with the **__stdcall** keyword, and that do not use a variable argument list. When you use the **__stdcall** keyword on a non-static member function, such as a constructor, the compiler will use the thiscall calling convention."  
  
 Constructors of base classes are not inherited by derived classes. When an object of derived class type is created, it is constructed starting with the base class components; then it moves to the derived class components. The compiler uses each base class's constructor as that part of the complete object is initialized (except in cases of virtual derivation.  
  
##  <a name="explicitly_invoking_constructors"></a> Explicitly invoking constructors  
 Constructors can be explicitly called in a program to create objects of a given type. For example, to create two `Point` objects that describe the ends of a line, the following code can be written:  
  
```  
DrawLine( Point( 13, 22 ), Point( 87, 91 ) );  
```  
  
 Two objects of type `Point` are created, passed to the function `DrawLine`, and destroyed at the end of the expression (the function call).  
  
 Another context in which a constructor is explicitly called is in an initialization:  
  
```  
Point pt = Point( 7, 11 );  
```  
  
 An object of type `Point` is created and initialized using the constructor that accepts two arguments of type `int`.  
  
 Objects that are created by calling constructors explicitly, as in the preceding two examples, are unnamed and have a lifetime of the expression in which they are created. This is discussed in greater detail in [Temporary Objects](../cpp/temporary-objects.md).  
  
 It is usually safe to call any member function from within a constructor because the object has been completely set up (virtual tables have been initialized and so on) prior to the execution of the first line of user code. However, it is potentially unsafe for a member function to call a virtual member function for an abstract base class during construction or destruction.  
  
 Constructors can call virtual functions. When virtual functions are called, the function invoked is the function defined for the constructor's own class (or inherited from its bases). The following example shows what happens when a virtual function is called from within a constructor:  
  
```  
// specl_calling_virtual_functions.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class Base  
{  
public:  
    Base();             // Default constructor.  
    virtual void f();   // Virtual member function.  
};  
  
Base::Base()  
{  
    cout << "Constructing Base sub-object\n";  
    f();                // Call virtual member function  
}                       //  from inside constructor.  
  
void Base::f()  
{  
    cout << "Called Base::f()\n";  
}  
  
class Derived : public Base  
{  
public:  
    Derived();          // Default constructor.  
    void f();           // Implementation of virtual  
};                      //  function f for this class.  
  
Derived::Derived()  
{  
    cout << "Constructing Derived object\n";  
}  
  
void Derived::f()  
{  
    cout << "Called Derived::f()\n";  
}  
  
int main()  
{  
    Derived d;  
}  
```  
  
 When the preceding program is run, the declaration `Derived d` causes the following sequence of events:  
  
1.  The constructor for class `Derived` (`Derived::Derived`) is called.  
  
2.  Prior to entering the body of the `Derived` class's constructor, the constructor for class `Base` (`Base::Base`) is called.  
  
 `Base::Base` calls the function `f`, which is a virtual function. Ordinarily, `Derived::f` would be called because the object `d` is of type `Derived`. Because the `Base::Base` function is a constructor, the object is not yet of the `Derived` type, and `Base::f` is called.  
  
