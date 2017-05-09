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
For improvements in Update Version 15.3, see [Bug fixes in Visual Studio Update Version 15.3](#update_153).
## New language features  
With support for generalized constexpr and NSDMI for aggregates, the compiler is now complete for features added in the C++14 Standard. Note that the compiler still lacks a few features from the C++11 and C++98 Standards. See [Visual C++ Language Conformance](visual-cpp-language-conformance.md) for a table that shows the current state of the compiler.

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
struct MyStore {
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
For strings built and managed using CStringW, the provided `operator LPCWSTR()` should be used to cast a CStringW object to the C pointer expected by the format string.

```cpp  
CStringW str1;
CStringW str2;
str1.Format(L"%s", static_cast<LPCWSTR>(str2));
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
### Classes declared in anonymous namespaces
According to the C++ standard, a class declared inside an anonymous namespace has internal linkage, and therefore cannot be exported. In Visual Studio 2015 and earlier, this rule was not enforced. In Visual Studio 2017 the rule is partially enforced. The following example raises this error in Visual Studio 2017: "error C2201: 'const `anonymous namespace'::S1::`vftable'': must have external linkage in order to be exported/imported."

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} }; //C2201
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

## <a name="update_153"></a> Visual Studio 2017 Update Version 15.3
### Calls to deleted member templates
In previous versions of Visual Studio, the compiler in some cases would fail to emit an error for ill-formed calls to a deleted member template which would’ve potentially caused crashes at runtime. The following code now produces C2280, "'int S<int>::f<int>(void)': attempting to reference a deleted function":
```cpp
template<typename T> 
struct S { 
template<typename U> static int f() = delete; 
}; 
 
void g() 
{ 
decltype(S<int>::f<int>()) i; // this should fail 
}
```
To fix the error, declare i as `int`.

### Pre-condition checks for type traits
Visual Studio 2017 Update Version 15.3 improves pre-condition checks for type-traits to more strictly follow the standard. One such check is for assignable. The following code produces C2139 in Update Version 15.3:

```cpp
struct S; 
enum E; 
 
static_assert(!__is_assignable(S, S), "fail"); // this is allowed in VS2017 RTM, but should fail 
static_assert(__is_convertible_to(E, E), "fail"); // this is allowed in VS2017 RTM, but should fail
```

### New compiler warning and runtime checks on native-to-managed marshaling
Calling from managed functions to native functions requires marshalling. The CLR performs the marshaling but it doesn't understand C++ semantics. If you pass a native object by value, CLR will either call the object's copy-constructor or use BitBlt, which may cause undefined behavior at runtime. 
 
Now the compiler will emit a warning if it can know at compile time that a native object with deleted copy ctor is passed between native and managed boundary by value. For those cases in which the compiler doesn't know at compile time, it will inject a runtime check so that the program will call std::terminate immediately when an ill-formed marshalling occurs. In Update Version 15.3, the following code produces C4606 "
'A': passing argument by value across native and managed boundary requires valid copy constructor. Otherwise the runtime behavior is undefined".
```cpp
class A 
{ 
public: 
A() : p_(new int) {} 
~A() { delete p_; } 
 
A(A const &) = delete; 
A(A &&rhs) { 
p_ = rhs.p_; 
} 
 
private: 
int *p_; 
}; 
 
#pragma unmanaged 
 
void f(A a) 
{ 
} 
 
#pragma managed 
 
int main() 
{ 
    f(A()); // This call from managed to native requires marshalling. The CLR doesn't understand C++ and uses BitBlt, which will result in a double-free later. 
}
```
To fix the error, remove the `#pragma managed` directive to mark the caller as native and avoid marshalling. 

### Experimental API warning for WinRT
WinRT APIs that are released for experimentation and feedback will be decorated with `Windows.Foundation.Metadata.ExperimentalAttribute`. In Update Version 15.3, the compiler will produce warning C4698 when it encounters  the attribute. A few APIs in previous versions of the Windows SDK have already been decorated with the attribute, and calls to these APIs will start triggering this compiler warning. Newer Windows SDKs will have the attribute removed from all shipped types, but if you are using an older SDK, you'll need to suppress these warnings for all calls to shipped types.
The following code produces warning C4698: "'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' is for evaluation purposes only and is subject to change or removal in future updates":
```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync()
```

To disable the warning, add a #pragma:

```cpp
#pragma warning(push) 
#pragma warning(disable:4698) 
 
Windows::Storage::IApplicationDataStatics2::GetForUserAsync() 
 
#pragma warning(pop)
```
### Out-of-line definition of a template member function 
Update Version 15.3 produces an error when it encounters an out-of-line definition of a template member function that was not declared in the class. The following code now produces error C2039: 'f': is not a member of 'S':

```cpp
struct S {}; 
 
template <typename T> 
void S::f(T t) {}
```

To fix the error, add a declaration to the class:

```cpp
struct S { 
    template <typename T> 
    void f(T t); 
}; 
template <typename T> 
void S::f(T t) {}
```

### Attempting to take the address of "this" pointer
In C++ 'this' is an prvalue of type pointer to X. You cannot take the address of 'this' or bind it to an lvalue reference. In previous versions of Visual Studio, the compiler would allow you to circumvent this restriction by performing a cast. In Update Version 15.3, the compiler produces error C2664.

### Conversion to an inaccessible base class
Update Version 15.3 produces an error when you attempt to convert a type to a base class which is inaccessible. The compiler now raises  
"error C2243: 'type cast': conversion from 'D *' to 'B *' exists, but is inaccessible". The following code is ill-formed and can potentially cause a crash at runtime. The compiler now produces C2243 when it encounters code like this:

```cpp
#include <memory> 
 
class B { }; 
class D : B { }; // should be public B { }; 
 
void f() 
{ 
   std::unique_ptr<B>(new D()); 
}
```
### Default arguments are not allowed on out of line definitions of member functions
Default arguments are not allowed on out-of-line definitions of member functions in template classes.  The compiler will issue a warning under /permissive, and a hard error under /permissive-
In previous versions of Visual Studio, the following ill-formed code could potentially cause a runtime crash. Update Version 15.3 produces warning C5034: 'A<T>::f': an out-of-line definition of a member of a class template cannot have default arguments:
```cpp
 
template <typename T> 
struct A { 
    T f(T t, bool b = false); 
}; 
 
template <typename T> 
T A<T>::f(T t, bool b = false) 
{ 
... 
}
```
To fix the error, remove the "= false" default argument. 

### Use of offsetof with compound member designator
In Update Version 15.3, using offsetof(T, m) where m is a "compound member designator" will result in a warning when you compile with the /Wall option. The following code is ill-formed and could potentially cause crash at runtime. Update Version 15.3 produces "warning C4841: non-standard extension used: compound member designator in offseto":

```cpp
  
struct A { 
int arr[10]; 
}; 
 
// warning C4841: non-standard extension used: compound member designator in offsetof 
constexpr auto off = offsetof(A, arr[2]);
```
To fix the code, either disable the warning with a pragma or change the code to not use offsetof: 

```cpp
#pragma warning(push) 
#pragma warning(disable: 4841) 
constexpr auto off = offsetof(A, arr[2]); 
#pragma warning(pop) 
```

### Using offsetof with static data member or member function
In Update Version 15.3, using offsetof(T, m) where m refers to a static data member or a member function will result in an error. The following code produces "error C4597: undefined behavior: offsetof applied to member function 'foo'" and "error C4597: undefined behavior: offsetof applied to static data member 'bar'":
```cpp
 
#include <cstddef> 
 
struct A { 
int foo() { return 10; } 
static constexpr int bar = 0; 
}; 
 
constexpr auto off = offsetof(A, foo); 
Constexpr auto off2 = offsetof(A, bar);
```
 
This code is ill-formed and could potentially cause crash at runtime. To fix the error, change the code to no longer invoke undefined behavior. This is non-portable code that is disallowed by the C++ standard.

### New warning on declspec attributes
In Update Version 15.3, the compiler no longer ignores attributes if __declspec(…) is applied before extern "C" linkage specification. Previously, the compiler would ignore the attritbute, which could have runtime implications. When the `/Wall /WX` option is set, the following code produces "warning C4768: __declspec attributes before linkage specification are ignored":

```cpp
 
__declspec(noinline) extern "C" HRESULT __stdcall
```

To fix the warning, put extern "C" first:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

### decltype and calls to deleted destructors
In previous versions of Visual Studio, the compiler did not detect when a call to a deleted destructor occurred in the context of the expression associated with 'decltype'. In Update Version 15.3, the following code produces  "error C2280: 'A<T>::~A(void)': attempting to reference a deleted function":

```cpp
template<typename T> 
struct A 
{ 
   ~A() = delete; 
}; 
 
template<typename T> 
auto f() -> A<T>; 
 
template<typename T> 
auto g(T) -> decltype((f<T>())); 
 
void h() 
{ 
   g(42); 
}
```
### Unitialized const variables
Visual Studio 2017 RTW release had a regression in which the C++ compiler would not issue a diagnostic if a 'const' variable was not initialized. This regression has been fixed in Visual Studio 2017 Update 1. The following code now produces "warning C4132: 'Value': const object should be initialized":

```cpp
const int Value;
```
To fix the error, assign a value to `Value`.

### Empty declarations
Visual Studio 2017 Update Version 15.3 now warns on empty declarions for all types, not just built-in types. The following code now produces a level 2 C4091 warning for all four declarations:

```cpp
struct A {};
template <typename> struct B {};
enum C { c1, c2, c3 };
 
int;    // warning C4091 : '' : ignored on left of 'int' when no variable is declared
A;      // warning C4091 : '' : ignored on left of 'main::A' when no variable is declared
B<int>; // warning C4091 : '' : ignored on left of 'B<int>' when no variable is declared
C;      // warning C4091 : '' : ignored on left of 'C' when no variable is declared
```

To remove the warnings, simply comment-out or remove the empty declarations.  In cases where the un-named object is intended to have a side effect (such as RAII) it should be given a name.
 
The warning is excluded under /Wv:18 and is on by default under warning level W2.


## See Also  
[Visual C++ Language Conformance](visual-cpp-language-conformance.md)  
