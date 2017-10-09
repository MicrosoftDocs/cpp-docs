---
title: "C++ compiler conformance improvements | Microsoft Docs"
ms.custom: ""
ms.date: "08/13/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
    - "vs-ide-general"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
   
# C++ conformance improvements in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)]


With support for generalized constexpr and NSDMI for aggregates, the compiler is now complete for features added in the C++14 Standard. Note that the compiler still lacks a few features from the C++11 and C++98 Standards. See [Visual C++ Language Conformance](visual-cpp-language-conformance.md) for a table that shows the current state of the compiler.

## C++11
**Expression SFINAE support in more libraries** 
The Visual C++ compiler continues to improve its support for expression SFINAE, which is required for template argument deduction and substitution where decltype and constexpr expressions may appear as template parameters. For more information, see [Expression SFINAE improvements in Visual Studio 2017 RC](https://blogs.msdn.microsoft.com/vcblog/2016/06/07/expression-sfinae-improvements-in-vs-2015-update-3). 


## C++ 14
**NSDMI for Aggregates**
An aggregate is an array or a class with no user-provided constructor, no private or protected non-static data members, no base classes, and no virtual functions. Beginning in C++14 aggregates may contain member initializers. For more information, see [Member initializers and aggregates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3605.html).

**Extended constexpr**
Expressions declared as constexpr are now allowed to contain certain kinds of declarations, if and switch statements, loop statements, and mutation of objects whose lifetime began within the constexpr expression evaluation. Also, there is no longer a requirement that a constexpr non-static member function be implicitly const. For more information, see [Relaxing constraints on constexpr functions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html). 

## C++17
**Terse static_assert**  (available with /std:c++latest)
In C++17 the message parameter for static_assert is optional. For more information, see [Extending static_assert, v2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf). 

**[[fallthrough]] attribute**  (available with /std:c++latest)
The [[fallthrough]] attribute can be used in the context of switch statements as a hint to the compiler that the fall-through behavior is intended. This prevents the compiler from issuing warnings in such cases. For more information, see [Wording for [[fallthrough]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r0.pdf). 

**Generalized range-based for loops** (no compiler switch required)
Range-based for loops no longer require that begin() and end() return objects of the same type. This enables end() to return a sentinel object such as used by ranges as defined in the Ranges-V3 proposal. For more information, see [Generalizing the Range-Based For Loop](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) and the [range-v3 library on GitHub](https://github.com/ericniebler/range-v3). 

## Improvements in Visual Studio 2017 version 15.3

**constexpr lambdas** Lambda expressions may now be used in constant expressions. For more information, see [Constexpr Lambda](http://open-std.org/JTC1/SC22/WG21/docs/papers/2015/n4487.pdf).

**if constexpr in function templates** A function template may contain `if constexpr` statements to enable compile-time branching. For more information, see [if constexpr](http://open-std.org/JTC1/SC22/WG21/docs/papers/2016/p0128r1.html).

**Selection statements with initializers** An `if` statement may include an initializer that introduces a variable at block scope within the statement itself. For more information, see [Selection statements with initializer](http://www.open-std.org/JTC1/SC22/WG21/docs/papers/2016/p0305r1.html).

**[[maybe_unused]] and [[nodiscard]] attributes** New attributes to silence warnings when an entity is not used, or to create a warning if the return value of a function call is discarded. For more information, see [Wording for maybe_unused attribute](http://open-std.org/JTC1/SC22/WG21/docs/papers/2016/p0212r0.pdf) and [Proposal of unused,nodiscard and fallthrough attributes](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0068r0.pdf).

**Using attribute namespaces without repetition** New syntax to enable only a single namespace identifier in an attribute list. For more information, see [Attributes in C++](cpp/attributes2.md).

**Structured bindings** It is now possible in a single declaration to store a value with individual names for its components, when the value is an array, a std::tuple or std::pair, or has all public non-static data members. For more information, see [Structured Bindings](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0144r0.pdf).

**Construction rules for enum class values** There is now an implicit/non-narrowing conversion from a scoped enumeration's underlying type to the enumeration itself, when its definition introduces no enumerator and the source uses a list-initialization syntax. 
For more information, see [Construction Rules for enum class Values ](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf).

**Capturing *this by value** The "\*this" object in a lambda expression may now be captured by value. This enables scenarios in which the lambda will be invoked in parallel and asynchronous operations, especially on newer machine architectures. For more information, see [Lambda Capture of \*this by Value as [=,\*this]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html).

**Removing operator++ for bool** operator++ is no longer supported on `bool` types. For more information, see [Remove Deprecated operator++(bool)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html).

**Removing deprecated "register" keyword** The `register` keyword, previously deprecated (and ignored by the Visual C++ compiler), is now removed from the language. For more information, see [Remove Deprecated Use of the register Keyword](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html).

For the complete list of conformance improvements up through Visual Studio 2015, Update 3, see [Visual C++ What's New 2003 through 2015](https://msdn.microsoft.com/en-us/library/mt723604.aspx).

## Improvements in Visual Studio 2017 version 15.5

**std::tr1 deprecated** The non-standard std::tr1 namespace is now marked as deprecated (in both C++14 and C++17 modes). For more information, see [std::tr1 namespace is deprecated](#tr1).

**Annex D features deprecated** When the std:C++17 mode compiler switch is set, almost all Standard Library features in Annex D are marked as deprecated. For more information, see [Standard Library features in Annex D are marked as deprecated](#annex_d).

**New compiler switch for extern constexpr** In earlier versions of Visual Studio, the compiler always gave a `constexpr` variable internal linkage even when the variable was marked `extern`. In Visual Studio version 15.5, a new compiler switch, [/Zc:externConstexpr](build/reference/zc-externconstexpr.md), enables correct standards-conforming behavior. For more information, see [extern constexpr linkage](#extern_linkage).

## Bug fixes in Visual Studio version 15.0
### Copy-list-initialization
Visual Studio 2017 correctly raises compiler errors related to object creation using initializer lists that were not caught in Visual Studio 2015 and could lead to crashes or undefined runtime behavior. As per N4594 13.3.1.7p1, in copy-list-initialization, the compiler is required to consider an explicit constructor for overload resolution, but must raise an error if that overload is actually chosen. 

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
Visual Studio 2017 correctly raises an error when the left-hand operand of a conditionally evaluating operation is not valid in a constexpr context. The following code compiles in Visual Studio 2015 but not in Visual Studio 2017 (C3615 constexpr function 'f' cannot result in a constant expression):

```cpp  
template<int N>
struct array 
{
       int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
       return arr.size() == 10 || arr.size() == 11; // C3615	
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
According to the C++ standard, a class declared inside an anonymous namespace has internal linkage, and therefore cannot be exported. In Visual Studio 2015 and earlier, this rule was not enforced. In Visual Studio 2017 the rule is partially enforced. The following example raises this error in Visual Studio 2017: "error C2201: const anonymous namespace::S1::vftable: must have external linkage in order to be exported/imported."

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} }; //C2201
```

### Default initializers for value class members (C++/CLI)
In Visual Studio 2015 and earlier, the compiler permitted (but ignored) a default member initializer for a member of a value class. Default initialization of a value class always zero-initializes the members; a default constructor is not permitted. In Visual Studio 2017, default member initializers raise a compiler error, as shown in this example:

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

## <a name="update_153"></a> Bug fixes in Visual Studio 2017 version 15.3
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
Visual Studio 2017 version 15.3 improves pre-condition checks for type-traits to more strictly follow the standard. One such check is for assignable. The following code produces C2139 in Update Version 15.3:

```cpp
struct S; 
enum E; 
 
static_assert(!__is_assignable(S, S), "fail"); // C2139 in 15.3
static_assert(__is_convertible_to(E, E), "fail"); // C2139 in 15.3
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
WinRT APIs that are released for experimentation and feedback will be decorated with `Windows.Foundation.Metadata.ExperimentalAttribute`. In Visual Studio 2017 version 15.3, the compiler will produce warning C4698 when it encounters the attribute. A few APIs in previous versions of the Windows SDK have already been decorated with the attribute, and calls to these APIs will start triggering this compiler warning. Newer Windows SDKs will have the attribute removed from all shipped types, but if you are using an older SDK, you'll need to suppress these warnings for all calls to shipped types.
The following code produces warning C4698: "'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' is for evaluation purposes only and is subject to change or removal in future updates":
```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync() //C4698
```

To disable the warning, add a #pragma:

```cpp
#pragma warning(push) 
#pragma warning(disable:4698) 
 
Windows::Storage::IApplicationDataStatics2::GetForUserAsync() 
 
#pragma warning(pop)
```
### Out-of-line definition of a template member function 
Visual Studio 2017 version 15.3 produces an error when it encounters an out-of-line definition of a template member function that was not declared in the class. The following code now produces error C2039: 'f': is not a member of 'S':

```cpp
struct S {}; 
 
template <typename T> 
void S::f(T t) {} //C2039: 'f': is not a member of 'S'
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
In C++ 'this' is an prvalue of type pointer to X. You cannot take the address of 'this' or bind it to an lvalue reference. In previous versions of Visual Studio, the compiler would allow you to circumvent this restriction by performing a cast. In Visual Studio 2017 version 15.3, the compiler produces error C2664.

### Conversion to an inaccessible base class
Visual Studio 2017 version 15.3 produces an error when you attempt to convert a type to a base class which is inaccessible. The compiler now raises "error C2243: 'type cast': conversion from 'D *' to 'B *' exists, but is inaccessible". The following code is ill-formed and can potentially cause a crash at runtime. The compiler now produces C2243 when it encounters code like this:

```cpp
#include <memory> 
 
class B { }; 
class D : B { }; // C2243. should be public B { }; 
 
void f() 
{ 
   std::unique_ptr<B>(new D()); 
}
```
### Default arguments are not allowed on out of line definitions of member functions
Default arguments are not allowed on out-of-line definitions of member functions in template classes The compiler will issue a warning under /permissive, and a hard error under /permissive-. 

In previous versions of Visual Studio, the following ill-formed code could potentially cause a runtime crash. Visual Studio 2017 version 15.3 produces warning C5034: 'A<T>::f': an out-of-line definition of a member of a class template cannot have default arguments:
```cpp
 
template <typename T> 
struct A { 
    T f(T t, bool b = false); 
}; 
 
template <typename T> 
T A<T>::f(T t, bool b = false) // C5034
{ 
... 
}
```
To fix the error, remove the "= false" default argument. 

### Use of offsetof with compound member designator
In Visual Studio 2017 version 15.3, using offsetof(T, m) where m is a "compound member designator" will result in a warning when you compile with the /Wall option. The following code is ill-formed and could potentially cause a crash at runtime. Visual Studio 2017 version 15.3 produces "warning C4841: non-standard extension used: compound member designator in offseto":

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
In Visual Studio 2017 version 15.3, using offsetof(T, m) where m refers to a static data member or a member function will result in an error. The following code produces "error C4597: undefined behavior: offsetof applied to member function 'foo'" and "error C4597: undefined behavior: offsetof applied to static data member 'bar'":
```cpp
 
#include <cstddef> 
 
struct A { 
int foo() { return 10; } 
static constexpr int bar = 0; 
}; 
 
constexpr auto off = offsetof(A, foo); 
Constexpr auto off2 = offsetof(A, bar);
```
 
This code is ill-formed and could potentially cause a crash at runtime. To fix the error, change the code to no longer invoke undefined behavior. This is non-portable code that is disallowed by the C++ standard.

### New warning on declspec attributes
In Visual Studio 2017 version 15.3, the compiler no longer ignores attributes if __declspec(…) is applied before extern "C" linkage specification. Previously, the compiler would ignore the attritbute, which could have runtime implications. When the `/Wall /WX` option is set, the following code produces "warning C4768: __declspec attributes before linkage specification are ignored":

```cpp
 
__declspec(noinline) extern "C" HRESULT __stdcall //C4768
```

To fix the warning, put extern "C" first:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```
This warning is off-by-default and only impacts code compiled with  `/Wall /WX`.

### decltype and calls to deleted destructors
In previous versions of Visual Studio, the compiler did not detect when a call to a deleted destructor occurred in the context of the expression associated with 'decltype'. In Visual Studio 2017 version 15.3, the following code produces  "error C2280: 'A<T>::~A(void)': attempting to reference a deleted function":

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
### Uninitialized const variables
Visual Studio 2017 RTW release had a regression in which the C++ compiler would not issue a diagnostic if a 'const' variable was not initialized. This regression has been fixed in Visual Studio 2017 version 15.3. The following code now produces "warning C4132: 'Value': const object should be initialized":

```cpp
const int Value; //C4132
```
To fix the error, assign a value to `Value`.

### Empty declarations
Visual Studio 2017 version 15.3 now warns on empty declarations for all types, not just built-in types. The following code now produces a level 2 C4091 warning for all four declarations:

```cpp
struct A {};
template <typename> struct B {};
enum C { c1, c2, c3 };
 
int;    // warning C4091 : '' : ignored on left of 'int' when no variable is declared
A;      // warning C4091 : '' : ignored on left of 'main::A' when no variable is declared
B<int>; // warning C4091 : '' : ignored on left of 'B<int>' when no variable is declared
C;      // warning C4091 : '' : ignored on left of 'C' when no variable is declared
```

To remove the warnings, simply comment-out or remove the empty declarations. In cases where the un-named object is intended to have a side effect (such as RAII) it should be given a name.
 
The warning is excluded under /Wv:18 and is on by default under warning level W2.


### std::is_convertible for array types
Previous versions of the compiler gave incorrect results for [std::is_convertible](standard-library/is-convertible-class.md) for array types. This required library writers to special-case the Visual C++ compiler when using the `std::is_convertible<…>` type trait. In the following example, the static asserts pass in earlier versions of Visual Studio but fail in Visual Studio 2017 version 15.3:

```cpp
#include <type_traits>
 
using Array = char[1];
 
static_assert(std::is_convertible<Array, Array>::value);
static_assert(std::is_convertible<const Array, const Array>::value, "");
static_assert(std::is_convertible<Array&, Array>::value, "");
static_assert(std::is_convertible<Array, Array&>::value, "");
```

**std::is_convertible<From, To>** is calculated by checking to see if an imaginary function definition is well formed:
```cpp 
   To test() { return std::declval<From>(); }
``` 

### Private destructors and std::is_constructible
Previous versions of the compiler ignored whether a destructor was private when deciding the result of [std::is_constructible](standard-library/is-constructible-class.md). It now considers them. In the following example, the static asserts pass in earlier versions of Visual Studio but fail in Visual Studio 2017 version 15.3:

```cpp
#include <type_traits>
 
class PrivateDtor {
   PrivateDtor(int) { }
private:
   ~PrivateDtor() { }
};
 
// This assertion used to succeed. It now correctly fails.
static_assert(std::is_constructible<PrivateDtor, int>::value);
```  

Private destructors cause a type to be non-constructible. **std::is_constructible<T, Args…>** is calculated as if the following declaration were written:
```cpp 
   T obj(std::declval<Args>()…)
``` 
This call implies a destructor call.

### C2668: Ambiguous overload resolution
Previous versions of the compiler sometimes failed to detect ambiguity when it found multiple candidates via both using declarations and argument dependent lookup. This can lead to wrong overload being chosen and unexpected runtime behavior. In the following example, Visual Studio 2017 version 15.3 correctly raises C2668 'f': ambiguous call to overloaded function:

```cpp
namespace N {
   template<class T>
   void f(T&, T&);
 
   template<class T>
   void f();
}
 
template<class T>
void f(T&, T&);
 
struct S {};
void f()
{
   using N::f; 
 
   S s1, s2;
   f(s1, s2); // C2668
}
```
To fix the code, remove the using N::f statement if you intended to call ::f().

### C2660: local function declarations and argument dependent lookup
Local function declarations hide the function declaration in the enclosing scope and disable argument dependent lookup.
However, previous versions of the Visual C++ compiler performed argument dependent lookup in this case, potentially leading to the wrong overload being chosen and unexpected runtime behavior. Typically, the error is due to an incorrect signature of the local function declaration. In the following example, Visual Studio 2017 version 15.3 correctly raises C2660 'f': function does not take 2 arguments:

```cpp
struct S {}; 
void f(S, int);
 
void g()
{
   void f(S); // C2660 'f': function does not take 2 arguments:
   // or void f(S, int);
   S s;
   f(s, 0);
}
```

To fix the problem, either change the **f(S)** signature or remove it.

### C5038: order of initialization in initializer lists
Class members are initialized in the order they are declared, not the order they appear in initializer lists. Previous versions of the compiler did not warn when the order of the initializer list differed from the order of declaration. This could lead to undefined runtime behavior if the intialization of one member depended on another member in the list already being initialized. In the following example, Visual Studio 2017 version 15.3 (with /Wall) raises warning C5038: data member 'A::y' will be initialized after data member 'A::x':

```cpp
struct A
{
    A(int a) : y(a), x(y) {} // Initialized in reverse, y reused
    int x;
    int y;
};

```
To fix the problem arrange the intializer list to have the same order as the declarations. A similar warning is raised when one or both initializers refer to base class members.

Note that the warning is off-by-default and only affects code compiled with /Wall.

## <a name="update_155"></a> Bug fixes in Visual Studio 2017 version 15.5
### Partial Ordering Change

The compiler now correctly rejects the following code and gives the correct error message:

```cpp

template<typename... T>
int f(T* ...)
{
	return 1;
}

template<typename T>
int f(const T&)
{
	return 2;
}

int main()
{
	int i = 0;
	f(&i);    // C2668
}
```
```output
t161.cpp
t161.cpp(16): error C2668: 'f': ambiguous call to overloaded function
t161.cpp(8): note: could be 'int f<int*>(const T &)'
        with
        [
            T=int*
        ]
t161.cpp(2): note: or       'int f<int>(int*)'
t161.cpp(16): note: while trying to match the argument list '(int*)'
``` 
The problem in the example above is that there are two differences in the types (const vs. non-const and pack vs. non-pack). To eliminate the compiler error, remove one of the differences. This enables the compiler to unambiguously order the functions.

```cpp
template<typename... T>
int f(T* ...)
{
	return 1;
}

template<typename T>
int f(T&)
{
	return 2;
}

int main()
{
	int i = 0;
	f(&i);
}
```


### Exception handlers
Handlers of reference to array or function type are never a match for any exception object. The compiler now correctly honors this rule. It also no longer matches a handler of 'char*' or 'wchar_t*' to a string literal when **/Zc:strictStrings** is used.

```cpp
int main()
{
	try {
		throw "";
	}
	catch (int (&)[1]) {} // C4843 (This should always be dead code.)
	catch (void (&)()) {} // C4843 (This should always be dead code.)
	catch (char*) {} // This should not be a match under /Zc:strictStrings
}
```

```output
warning C4843: 'int (&)[1]': An exception handler of reference to array or function type is unreachable, use 'int*' instead
warning C4843: 'void (__cdecl &)(void)': An exception handler of reference to array or function type is unreachable, use 'void (__cdecl*)(void)' instead
```
The following code avoids the error:

```cpp
int main()
{
	try {
		throw "";
	}
	catch (int (*)[1]) {}
	catch (void (*)()) {}
	catch (const char*) {}
}
```

### <a name="tr1"></a>std::tr1 namespace is deprecated
The non-Standard std::tr1 namespace is now marked as deprecated in both C++14 and C++17 modes. In Visual Studio version 15.5, the following code raises C4996:

```cpp
#include <functional>
#include <iostream>
using namespace std;

int main() {
    std::tr1::function<int (int, int)> f = std::plus<int>(); //C4996
    cout << f(3, 5) << std::endl;
    f = std::multiplies<int>();
    cout << f(3, 5) << std::endl;
}
```

```output
warning C4996: 'std::tr1': warning STL4002: The non-Standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to acknowledge that you have received this warning.
```

To fix the error, remove the reference to the tr1 namespace:

```cpp
#include <functional>
#include <iostream>
using namespace std;

int main() {
    std::function<int (int, int)> f = std::plus<int>();
    cout << f(3, 5) << std::endl;
    f = std::multiplies<int>();
    cout << f(3, 5) << std::endl;
}
```


### <a name="annex_d"></a>Standard Library features in Annex D are marked as deprecated.
When the std:C++17 mode compiler switch is set, almost all Standard Library features in Annex D are marked as deprecated.

In Visual Studio version 15.5, the following code raises C4996:

```cpp
#include <iterator>

class MyIter : public std::iterator<std::random_access_iterator_tag, int> {
public:
    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

```output
warning C4996: 'std::iterator<std::random_access_iterator_tag,int,ptrdiff_t,_Ty*,_Ty &>::pointer': warning STL4015: The std::iterator class template (used as a base class to provide typedefs) is deprecated in C++17. (The <iterator> header is NOT deprecated.) The C++ Standard has never required user-defined iterators to derive from std::iterator. To fix this warning, stop deriving from std::iterator and start providing publicly accessible typedefs named iterator_category, value_type, difference_type, pointer, and reference. Note that value_type is required to be non-const, even for constant iterators. You can define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING or _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS to acknowledge that you have received this warning.
```

To fix the error, follow the instructions in the warning text, as demonstrated in the following code:

```cpp
#include <iterator>

class MyIter {
public:
    typedef std::random_access_iterator_tag iterator_category;
    typedef int value_type;
    typedef ptrdiff_t difference_type;
    typedef int* pointer;
    typedef int& reference;

    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

### Unreferenced local variables
In Visual Studio 15.5, warning C4189 is emitted in more cases, as shown in the following code:

```cpp
void f() {
	char s[2] = {0}; // C4189. Either use the variable or remove it.
}

```

```output
warning C4189: 's': local variable is initialized but not referenced
```

The fix the error, remove the unused variable.

### Single line comments 
In Visual Studio version 15.5, warnings C4001 and C4179 are no longer emitted by the C compiler. Previously, they were only emitted under the **/Za** compiler switch.  The warnings are no longer needed because single line comments have been part of the C standard for several years. 

```cpp
/* C only */
#pragma warning(disable:C4001) //C4619
#pragma warning(disable:C4179)
// single line comment
//* single line comment */
```

```output
warning C4619: #pragma warning: there is no warning number '4001'   
```

If the code does not need to be backwards compatible, you can avoid the warning by removing the C4001/C4179 suppression. If the code does need to be backward compatible, then suppress C4619 only.

```cpp
/* C only */

#pragma warning(disable:C4619)
#pragma warning(disable:C4001)
#pragma warning(disable:C4179)

// single line comment
/* single line comment */
```


### __declspec attributes with extern "C" linkage 

In earlier versions of Visual Studio, the compiler ignored `__declspec(…)` attributes when `__declspec(…)` was applied before the `extern "C"` linkage specification. This behavior caused code to be generated that user didn't intend, with possible runtime implications. The warning was added in Visual Studio version 15.3, but was off by default. In Visual Studio version 15.5, the warning on by default.

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall //C4768
```

```output
warning C4768: __declspec attributes before linkage specification are ignored
```

To fix the error, place the linkage specification before the __declspec attribute:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

### <a name="extern_linkage"></a>Extern constexpr linkage 

In earlier versions of Visual Studio, the compiler always gave a `constexpr` variable internal linkage even when the variable was marked `extern`. In Visual Studio version 15.5, a new compiler switch (/Zc:externConstexpr) enables correct standards-conforming behavior. Eventually this will become the default.

```cpp
extern constexpr int x = 10; 
```

```output
error LNK2005: "int const x" already defined
```

If a header file contains a variable declared `extern constexpr`, it needs to be marked `__declspec(selectany)` in order to correctly have its duplicate declarations combined:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

### typeid can't be used on incomplete class type.
In earlier versions of Visual Studio, the compiler incorrectly allowed the following code, resulting in potentially incorrect type information. In Visual Studio version 15.5, the compiler correctly raises an error:

```cpp
#include <typeinfo>

struct S {};

void f() { typeid(S); } //C2027 in 15.5
```

```output
error C2027: use of undefined type 'S'
```


### std::is_convertible target type

`std::is_convertible` requires the target type to be a valid return type. In earlier versions of Visual Studio, the compiler incorrectly allowed abstract types, which might lead to incorrect overload resolution and unintended runtime behavior.  The following code now correctly raises C2338:

```cpp
#include <type_traits>
 
struct B { virtual ~B() = 0; };
struct D : public B { virtual ~D(); };
 
static_assert(std::is_convertible<D, B>::value, "fail"); // C2338 in 15.5

```
To avoid the error, when using `is_convertible` you should compare pointer types because a non-pointer-type comparison might fail if one type is abstract:

```cpp
#include <type_traits>
 
struct B { virtual ~B() = 0; };
struct D : public B { virtual ~D(); };
 
static_assert(std::is_convertible<D *, B *>::value, "fail");

```


## See Also  
[Visual C++ Language Conformance](visual-cpp-language-conformance.md)  
