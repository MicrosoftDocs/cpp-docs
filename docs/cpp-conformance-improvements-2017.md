---
title: "C++ compiler conformance improvements | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: "BrianPeek"
ms.author: "brpeek"
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
  
# C++ conformance improvements in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)]

## New language features  
With support for generalized constexpr and NSDMI for aggregates, the compiler is now complete for features added in the C++14 Standard. Note that the compiler still lacks a few features from the C++11 and C++98 Standards.

### C++11:
**Expression SFINAE support in more libraries** 
The Visual C++ compiler continues to improve its support for expression SFINAE, which is required for template argument deduction and substitution where decltype and constexpr expressions may appear as template parameters. For more information, see [Expression SFINAE improvements in Visual Studio 2017 RC](https://blogs.msdn.microsoft.com/vcblog/2016/06/07/expression-sfinae-improvements-in-vs-2015-update-3). 


### C++ 14:
**NSDMI for Aggregates**
An aggregate is an array or a class with no user-provided constructor, no private or protected non-static data members, no base classes, and no virtual functions. Beginning in C++14 aggregates may contain member initializers. For more information, see [Member initializers and aggregates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3605.html).

**Extended constexpr**
Expressions declared as constexpr are now allowed to contain certain kinds of declarations, if and switch statements, loop statements, and mutation of objects whose lifetime began within the constexpr expression evaluation. Also, there is no longer a requirement that a constexpr non-static member function be implicitly const. For more information, see [Relaxing constraints on constexpr functions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html). 

### C++17:
**Terse static_assert**  (available with /std:c++latest)
In C++17 the message parameter for static_assert is optional. For more information, see [Extending static_assert, v2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf). 

**[[fallthrough]] attribute**  (available with /std:c++latest)
The [[fallthrough]] attribute can be used in the context of switch statements as a hint to the compiler that the fall-through behavior is intended. This prevents the compiler from issuing warnings in such cases. For more information, see [Wording for [[fallthrough]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r0.pdf). 

**Generalized range-based for loops** (no compiler switch required)
Range-based for loops no longer require that begin() and end() return objects of the same type. This enables end() to return a sentinel object such as used by ranges as defined in the Ranges-V3 proposal. For more information, see [Generalizing the Range-Based For Loop](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) and the [range-v3 library on GitHub](https://github.com/ericniebler/range-v3). 


For the complete list of conformance improvements up through Visual Studio 2015, Update 3, see [Visual C++ What's New 2003 through 2015](https://msdn.microsoft.com/en-us/library/mt723604.aspx).

## Bug fixes
### Copy-list-initialization
Visual Studio 2017 correctly raises compiler errors related to object creation using initializer lists that were not caught in Visual Studio 2015 and could lead to crashes or undefined runtime behavior.  As per N4594 13.3.1.7p1, in copy-list-initialization, the compiler is required to consider an explicit constructor for overload resolution, but must raise an error if that overload is actually chosen. 

The following two examples compile in Visual Studio 2015 but not in Visual Studio 2017.
```cpp
struct A
{
    explicit A(int) {} 
    A(double) {}
};

int main()
{
    A a1 = { 1 }; // error C3445: copy-list-initialization of 'A' cannot use an explicit constructor
    const A& a2 = { 1 }; // error C2440: 'initializing': cannot convert from 'int' to 'const A &'

}
```
To correct the error, use direct initialization:
```cpp
A a1{ 1 };
const A& a2{ 1 };
```

In Visual Studio 2015, the compiler erroneously treated copy-list-initialization in the same way as regular copy-initialization; it considered only converting constructors for overload resolution. In the following example, Visual Studio 2015 chooses MyInt(23) but Visual Studio 2017 correctly raises the error. 

```cpp
// From http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_closed.html#1228
struct MyList {
       explicit MyStore(int initialCapacity);
};

struct MyInt {
       MyInt(int i);
};

struct Printer {
       void operator()(MyStore const& s);
       void operator()(MyInt const& i);
};

void f() {
       Printer p;
       p({ 23 }); // C3066: there are multiple ways that an object of this type can be called with these arguments
}
```

This example is similar to the previous one but raises a different error. It succeeds in Visual Studio 2015 and fails in Visual Studio 2017 with C2668. 

```cpp
struct A {
    explicit A(int) {}
};

struct B {
    B(int) {}
};

void f(const A&) {}
void f(const B&) {}

int main()
{
    f({ 1 }); // error C2668: 'f': ambiguous call to overloaded function
}
```

### Deprecated typedefs
Visual Studio 2017 now issues the correct warning for deprecated typedefs that are declared in a class or struct. The following example compiles without warnings in Visual Studio 2015 but produces C4996 in Visual Studio 2017.

```cpp
struct A 
{
    // also for __declspec(deprecated) 
    [[deprecated]] typedef int inttype;
};

int main()
{
    A::inttype a = 0; // C4996 'A::inttype': was declared deprecated
}
```

### constexpr
Visual Studio 2017 correctly raises an error when the left-hand operand of a conditionally evaluating operation is not valid in a constexpr context. The following code compiles in Visual Studio 2015 but not in Visual Studio 2017:

```cpp  
template<int N>
struct array 
{
       int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
       return arr.size() == 10 || arr.size() == 11; // error starting in Visual Studio 2017
}
```
To correct the error, either declare the array::size() function as constexpr or remove the constexpr qualifier from f. 

### Class types passed to variadic functions
In Visual Studio 2017, classes or structs that are passed to a variadic function such as printf must be trivially copyable. When passing such objects, the compiler simply makes a bitwise copy and does not call the constructor or destructor. 

```cpp
#include <atomic>
#include <memory>
#include <stdio.h>

int main()
{
    std::atomic<int> i(0);
    printf("%i\n", i); // error C4839: non-standard use of class 'std::atomic<int>'
                        // as an argument to a variadic function
                        // note: the constructor and destructor will not be called; 
                        // a bitwise copy of the class will be passed as the argument
                        // error C2280: 'std::atomic<int>::atomic(const std::atomic<int> &)':
                        // attempting to reference a deleted function

    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);
    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                      // as an argument to a variadic function
}
```
To correct the error, you can call a member function that returns a trivially copyable type, 

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```
or else perform a static cast to convert the object before passing it:
```cpp
    struct S {/* as before */} s(0);
    printf("%i\n", static_cast<int>(s))
```
For strings built and managed using CStringW, the provided ‘operator LPCWSTR()’ should be used to cast a CStringW object to the C pointer expected by the format string.

```cpp
CStringW str1;
CStringW str2;
str1.Format(… , static_cast<LPCWSTR>(str2));
```

### cv-qualifiers in class construction
In Visual Studio 2015, the compiler sometimes incorrectly ignores the cv-qualifier when generating a class object via a constructor call. This can potentially cause a crash or unexpected runtime behavior. The following example compiles in Visual Studio 2015 but raises a compiler error in Visual Studio 2017:

```cpp
struct S 
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```
To correct the error, declare operator int() as const. 

### Access checking on qualified names in templates
Previous versions of the compiler did not perform access checking on qualified names in some template contexts. This can interfere with expected SFINAE behavior where the substitution is expected to fail due to the inaccessibility of a name. This could have potentially caused a crash or unexpected behavior at runtime due to the compiler incorrectly calling the wrong overload of the operator. In Visual Studio 2017, a compiler error is raised. The specific error might vary but typically it is "C2672 no matching overloaded function found". The following code compiles in Visual Studio 2015 but raises an error in Visual Studio 2017:

```cpp
#include <type_traits>

template <class T> class S {
       typedef typename T type;
};

template <class T, std::enable_if<std::is_integral<typename S<T>::type>::value, T> * = 0>
bool f(T x);

int main()
{
       f(10); // C2672: No matching overloaded function found. 
}
```

### Missing template argument lists
In Visual Studio 2015 and earlier, the compiler did not diagnose missing template argument lists when the template appeared in a template parameter list (for example as part of a default template argument or a non-type template parameter). This can result in unpredictable behavior, including compiler crashes or unexpected runtime behavior. The following code compiles in Visual Studio 2015 but produces an error in Visual Studio 2017.

```cpp
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias 
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;  
```

### Expression-SFINAE
To support expression-SFINAE, the compiler now parses decltype arguments when the templates are declared rather than instantiated. Consequently, if a non-dependent specialization is found in the decltype argument, it will not be deferred to instantiation-time and will be processed immediately and any resulting errors will be diagnosed at that time.  

The following example shows such a compiler error that is raised at the point of declaration:

```cpp
#include <utility>
template <class T, class ReturnT, class... ArgsT> class IsCallable
{
public:
       struct BadType {};
       template <class U>
       static decltype(std::declval<T>()(std::declval<ArgsT>()...)) Test(int); //C2064. Should be declval<U>
       template <class U>
       static BadType Test(...);
       static constexpr bool value = std::is_convertible<decltype(Test<T>(0)), ReturnT>::value;
};

constexpr bool test1 = IsCallable<int(), int>::value;
static_assert(test1, "PASS1");
constexpr bool test2 = !IsCallable<int*, int>::value;
static_assert(test2, "PASS2");
```

### Default initializers for value class members (C++/CLI)
In Visual Studio 2015 and earlier, the compiler permitted (but ignored) a default member initializer for a member of a value class.  Default initialization of a value class always zero-initializes the members; a default constructor is not permitted.  In Visual Studio 2017, default member initializers raise a compiler error, as shown in this example:

```cpp
value struct V
{
       int i = 0; // error C3446: 'V::i': a default member initializer  
                  // is not allowed for a member of a value class
};
```

### Default Indexers (C++/CLI)
In Visual Studio 2015 and earlier, the compiler in some cases misidentified a default property as a default indexer. It was possible to work around the issue by using the identifier "default" to access the property. The workaround itself became problematic after default was introduced as a keyword in C++11. Therefore, in Visual Studio 2017 the bugs that required the workaround were fixed, and the compiler now raises an error when "default" is used to access the default property for a class.

```cpp
//class1.cs

using System.Reflection;
using System.Runtime.InteropServices;

namespace ClassLibrary1
{
    [DefaultMember("Value")]
    public class Class1
    {
        public int Value
        {
            // using attribute on the return type triggers the compiler bug
            [return: MarshalAs(UnmanagedType.I4)]
            get;
        }
    }
    [DefaultMember("Value")]
    public class Class2
    {
        public int Value
        {
            get;
        }
    }
}

 
// code.cpp
#using "class1.dll"

void f(ClassLibrary1::Class1 ^r1, ClassLibrary1::Class2 ^r2)
{
       r1->Value; // error
       r1->default;
       r2->Value;
       r2->default; // error
}
```

In Visual Studio 2017, you can access both Value properties by their name:

```cpp
#using "class1.dll"

void f(ClassLibrary1::Class1 ^r1, ClassLibrary1::Class2 ^r2)
{
       r1->Value;
       r2->Value;
}
```


