---
title: "Uniform Initialization and Delegating Constructors | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: aa4daa64-eaec-4a3c-ade4-d9325e31e9d4
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Uniform Initialization and Delegating Constructors
In modern C++, you can use *brace initialization* for any type, without the equals sign. Also, you can use delegating constructors to simplify your code when you have multiple constructors that perform similar work.  
  
## Brace Initialization  
 You can use brace initialization for any class, struct, or union. If a type has a default constructor, either implicitly or explicitly declared, you can use default brace initialization (with empty braces). For example, the following class may be initialized by using both default and non-default brace initialization:  
  
```cpp  
#include <string>  
using namespace std;  
  
class class_a {  
public:  
    class_a() {}  
    class_a(string str) : m_string{ str } {}  
    class_a(string str, double dbl) : m_string{ str }, m_double{ dbl } {}  
double m_double;  
string m_string;  
};  
  
int main()  
{  
    class_a c1{};  
    class_a c1_1;  
  
    class_a c2{ "ww" };  
    class_a c2_1("xx");  
  
    // order of parameters is the same as the constructor  
    class_a c3{ "yy", 4.4 };  
    class_a c3_1("zz", 5.5);  
}  
  
```  
  
 If a class has non-default constructors, the order in which class members appear in the brace initializer is the order in which the corresponding parameters appear in the constructor, not the order in which the members are declared (as with `class_a` in the previous example). Otherwise, if the type has no declared constructor, the order in which the members appear in the brace initializer is the same as the order in which they are declared; in this case, you can initialize as many of the public members as you wish, but you cannot skip any member. The following example shows the order that's used in brace initialization when there is no declared constructor:  
  
```cpp  
class class_d {  
public:  
    float m_float;  
    string m_string;  
    wchar_t m_char;  
};  
  
int main()  
{  
    class_d d1{};  
    class_d d1{ 4.5 };  
    class_d d2{ 4.5, "string" };  
    class_d d3{ 4.5, "string", 'c' };  
  
    class_d d4{ "string", 'c' }; // compiler error  
    class_d d5("string", 'c', 2.0 }; // compiler error  
}   
```  
  
 If the default constructor is explicitly declared but marked as deleted, default brace initialization cannot be used:  
  
```cpp  
class class_f {  
public:  
    class_f() = delete;  
    class_f(string x): m_string { x } {}  
    string m_string;  
};  
int main()  
{  
    class_f cf{ "hello" };  
    class_f cf1{}; // compiler error C2280: attempting to reference a deleted function  
}  
```  
  
 You can use brace initialization anywhere you would typically do initialization—for example, as a function parameter or a return value, or with the `new` keyword:  
  
```cpp  
class_d* cf = new class_d{4.5};  
kr->add_d({ 4.5 });  
return { 4.5 };  
  
```  
  
## initializer_list Constructors  
 The [initializer_list Class](../standard-library/initializer-list-class.md) represents a list of objects of a specified type that can be used in a constructor, and in other contexts. You can construct an initializer_list by using brace initialization:  
  
```cpp  
initializer_list<int> int_list{5, 6, 7};  
```  
  
> [!IMPORTANT]
>  To use this class, you must include the [<initializer_list>](../standard-library/initializer-list.md) header.  
  
 An `initializer_list` can be copied. In this case, the members of the new list are references to the members of the original list:  
  
```cpp  
initializer_list<int> ilist1{ 5, 6, 7 };  
initializer_list<int> ilist2( ilist1 );  
if (ilist1.begin() == ilist2.begin())  
    cout << "yes" << endl; // expect "yes"  
  
```  
  
 The standard library container classes, and also `string`, `wstring`, and `regex`, have `initializer_list` constructors. The following examples show how to do brace initialization with these constructors:  
  
```cpp  
vector<int> v1{ 9, 10, 11 };   
map<int, string> m1{ {1, "a"}, {2, "b"} };  
string s{ 'a', 'b', 'c' };   
regex rgx{'x', 'y', 'z'};   
```  
  
## Delegating Constructors  
 Many classes have multiple constructors that do similar things—for example, validate parameters:  
  
```cpp  
class class_c {  
public:  
    int max;  
    int min;  
    int middle;  
  
    class_c() {}  
    class_c(int my_max) {   
        max = my_max > 0 ? my_max : 10;   
    }  
    class_c(int my_max, int my_min) {   
        max = my_max > 0 ? my_max : 10;  
        min = my_min > 0 && my_min < max ? my_min : 1;  
    }  
    class_c(int my_max, int my_min, int my_middle) {  
        max = my_max > 0 ? my_max : 10;  
        min = my_min > 0 && my_min < max ? my_min : 1;  
        middle = my_middle < max && my_middle > min ? my_middle : 5;  
    }  
};  
```  
  
 You could reduce the repetitive code by adding a function that does all of the validation, but the code for `class_c` would be easier to understand and maintain if one constructor could delegate some of the work to another one. To add delegating constructors, use the `constructor (. . .) : constructor (. . .)` syntax:  
  
```cpp  
class class_c {  
public:  
    int max;  
    int min;  
    int middle;  
  
    class_c(int my_max) {   
        max = my_max > 0 ? my_max : 10;   
    }  
    class_c(int my_max, int my_min) : class_c(my_max) {   
        min = my_min > 0 && my_min < max ? my_min : 1;  
    }  
    class_c(int my_max, int my_min, int my_middle) : class_c (my_max, my_min){  
        middle = my_middle < max && my_middle > min ? my_middle : 5;  
}  
};  
int main() {  
  
    class_c c1{ 1, 3, 2 };  
}  
  
```  
  
 As you step through the previous example, notice that the constructor `class_c(int, int, int)` first calls the constructor `class_c(int, int)`, which in turn calls `class_c(int)`. Each of the constructors performs only the work that is not performed by the other constructors.  
  
 The first constructor that's called initializes the object so that all of its members are initialized at that point. You can’t do member initialization in a constructor that delegates to another constructor, as shown here:  
  
```cpp  
class class_a {  
public:  
    class_a() {}  
    // member initialization here, no delegate  
    class_a(string str) : m_string{ str } {}  
  
    //can’t do member initialization here  
    // error C3511: a call to a delegating constructor shall be the only member-initializer  
    class_a(string str, double dbl) : class_a(str) , m_double{ dbl } {}  
  
    // only member assignment  
    class_a(string str, double dbl) : class_a(str) { m_double = dbl; }  
    double m_double{ 1.0 };  
    string m_string;  
};  
  
```  
  
 The next example shows the use of non-static data-member initializers. Notice that if a constructor also initializes a given data member, the member initializer is overridden:  
  
```cpp  
class class_a {  
public:  
    class_a() {}  
    class_a(string str) : m_string{ str } {}  
    class_a(string str, double dbl) : class_a(str) { m_double = dbl; }  
    double m_double{ 1.0 };  
    string m_string{ m_double < 10.0 ? "alpha" : "beta" };  
};  
  
int main() {  
    class_a a{ "hello", 2.0 };  //expect a.m_double == 2.0, a.m_string == "hello"  
    int y = 4;  
}  
```  
  
 The constructor delegation syntax doesn't prevent the accidental creation of constructor recursion—Constructor1 calls Constructor2 which calls Constructor1—and no errors are thrown until there is a stack overflow. It's your responsibility to avoid cycles.  
  
```cpp  
class class_f{  
public:  
    int max;  
    int min;  
  
    // don't do this  
    class_f() : class_f(6, 3){ }  
    class_f(int my_max, int my_min) : class_f() { }  
};  
```