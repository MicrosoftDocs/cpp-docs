---
title: "C++ conformance improvements in Visual Studio 2017"
description: "Microsoft C/C++ in Visual Studio 2017 is progressing toward full conformance with the C++20 language standard."
ms.date: 04/18/2021
ms.technology: "cpp-language"
---
# C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2017

Microsoft C/C++ in Visual Studio (MSVC) makes conformance improvements and bug fixes in every release. This article lists the improvements by major release, then by version. To jump directly to the changes for a specific version, use list below **In this article**.

This document lists the changes in Visual Studio 2017. For a guide to the changes in Visual Studio 2022, see [C++ conformance improvements in Visual Studio 2022](cpp-conformance-improvements.md). For a guide to the changes in Visual Studio 2019, see [C++ conformance improvements in Visual Studio 2019](cpp-conformance-improvements-2019.md). For a complete list of previous conformance improvements, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="improvements_150"></a> Conformance improvements in Visual Studio 2017 RTW (version 15.0)

With support for generalized **`constexpr`** and non-static data member initialization (NSDMI) for aggregates, the MSVC compiler in Visual Studio 2017 is now complete for features added in the C++14 standard. However, the compiler still lacks a few features from the C++11 and C++98 standards. See [Microsoft C/C++ language conformance](./visual-cpp-language-conformance.md) for the current state of the compiler.

### C++11: Expression SFINAE support in more libraries

The compiler continues to improve its support for expression SFINAE. It's required for template argument deduction and substitution where **`decltype`** and **`constexpr`** expressions may appear as template parameters. For more information, see [Expression SFINAE improvements in Visual Studio 2017 RC](https://devblogs.microsoft.com/cppblog/expression-sfinae-improvements-in-vs-2015-update-3/).

### C++14: NSDMI for aggregates

An *aggregate* is an array or a class that has: no user-provided constructor, no non-static data members that are private or protected, no base classes, and no virtual functions. Beginning in C++14, aggregates may contain member initializers. For more information, see [Member initializers and aggregates](https://wg21.link/n3605).

### C++14: Extended `constexpr`

Expressions declared as **`constexpr`** are now allowed to contain certain kinds of declarations, if and switch statements, loop statements, and mutation of objects whose lifetime began within the **`constexpr`** expression evaluation. There's no longer a requirement that a **`constexpr`** non-static member function must be implicitly **`const`**. For more information, see [Relaxing constraints on `constexpr` functions](https://wg21.link/n3652).

### C++17: Terse `static_assert`

the message parameter for **`static_assert`** is optional. For more information, see [N3928: Extending static_assert, v2](https://wg21.link/n3928).

### C++17: `[[fallthrough]]` attribute

In **`/std:c++17`** mode and later, the `[[fallthrough]]` attribute can be used in the context of switch statements as a hint to the compiler that the fall-through behavior is intended. This attribute prevents the compiler from issuing warnings in such cases. For more information, see [`P0188R0 - Wording for [[fallthrough]] attribute`](https://wg21.link/p0188r0).

### Generalized range-based `for` loops

Range-based `for` loops no longer require that `begin()` and `end()` return objects of the same type. This change enables `end()` to return a sentinel as used by ranges in [`range-v3`](https://github.com/ericniebler/range-v3) and the completed-but-not-quite-published Ranges Technical Specification. For more information, see [`P0184R0 - Generalizing the Range-Based for Loop`](https://wg21.link/p0184r0).

### Copy-list-initialization

Visual Studio 2017 correctly raises compiler errors related to object creation using initializer lists. These errors weren't caught in Visual Studio 2015, and could lead to crashes or undefined runtime behavior. As per [`N4594 13.3.1.7p1`](https://wg21.link/n4594), in *`copy-list-initialization`*, the compiler is required to consider an explicit constructor for overload resolution. However, it must raise an error if that particular overload gets chosen.

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

In Visual Studio 2015, the compiler erroneously treated copy-list-initialization in the same way as regular copy-initialization: it considered only converting constructors for overload resolution. In the following example, Visual Studio 2015 chooses `MyInt(23)`. Visual Studio 2017 correctly raises the error.

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
    p({ 23 }); // C3066: there are multiple ways that an object
        // of this type can be called with these arguments
}
```

This example is similar to the previous one but raises a different error. It succeeds in Visual Studio 2015 and fails in Visual Studio 2017 with [C2668](../error-messages/compiler-errors-2/compiler-error-c2668.md).

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

Visual Studio 2017 now issues the correct warning for deprecated typedefs declared in a class or struct. The following example compiles without warnings in Visual Studio 2015. It produces [C4996](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md) in Visual Studio 2017.

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

### `constexpr`

Visual Studio 2017 correctly raises an error when the left-hand operand of a conditionally evaluating operation isn't valid in a `constexpr` context. The following code compiles in Visual Studio 2015, but not in Visual Studio 2017, where it raises [C3615](../error-messages/compiler-errors-2/compiler-error-c3615.md):

```cpp
template<int N>
struct array
{
    int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
    return arr.size() == 10 || arr.size() == 11; // C3615 constexpr function 'f' cannot result in a constant expression
}
```

To correct the error, either declare the `array::size()` function as **`constexpr`** or remove the **`constexpr`** qualifier from `f`.

### Class types passed to variadic functions

In Visual Studio 2017, classes or structs that are passed to a variadic function such as `printf` must be trivially copyable. When such objects are passed, the compiler simply makes a bitwise copy and doesn't call the constructor or destructor.

```cpp
#include <atomic>
#include <memory>
#include <stdio.h>

int main()
{
    std::atomic<int> i(0);
    printf("%i\n", i); // error C4839: non-standard use of class 'std::atomic<int>'
                        // as an argument to a variadic function.
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

or else use a static cast to convert the object before passing it:

```cpp
    struct S {/* as before */} s(0);
    printf("%i\n", static_cast<int>(s))
```

For strings built and managed using `CString`, the provided `operator LPCTSTR()` should be used to cast a `CString` object to the C pointer expected by the format string.

```cpp
CString str1;
CString str2 = _T("hello!");
str1.Format(_T("%s"), static_cast<LPCTSTR>(str2));
```

### Cv-qualifiers in class construction

In Visual Studio 2015, the compiler sometimes incorrectly ignores the cv-qualifier when generating a class object via a constructor call. This issue can potentially cause a crash or unexpected runtime behavior. The following example compiles in Visual Studio 2015 but raises a compiler error in Visual Studio 2017:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

To correct the error, declare `operator int()` as **`const`**.

### Access checking on qualified names in templates

Previous versions of the compiler didn't check access to qualified names in some template contexts. This issue can interfere with expected SFINAE behavior, where the substitution is expected to fail because of the inaccessibility of a name. It could have potentially caused a crash or unexpected behavior at runtime, because the compiler incorrectly called the wrong overload of the operator. In Visual Studio 2017, a compiler error is raised. The specific error might vary, but a typical error is [C2672](../error-messages/compiler-errors-2/compiler-error-c2672.md), "no matching overloaded function found." The following code compiles in Visual Studio 2015 but raises an error in Visual Studio 2017:

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

In Visual Studio 2015 and earlier, the compiler didn't diagnose all missing template argument lists. It wouldn't note when the missing template appeared in a template parameter list: for example, when part of a default template argument or a non-type template parameter was missing. This issue can result in unpredictable behavior, including compiler crashes or unexpected runtime behavior. The following code compiles in Visual Studio 2015, but produces an error in Visual Studio 2017.

```cpp
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;
```

### Expression-SFINAE

To support expression-SFINAE, the compiler now parses **`decltype`** arguments when the templates are declared rather than instantiated. So, if a non-dependent specialization is found in the **`decltype`** argument, it's not deferred until instantiation-time. It's processed immediately, and any resulting errors are diagnosed at that time.

The following example shows such a compiler error that is raised at the point of declaration:

```cpp
#include <utility>
template <class T, class ReturnT, class... ArgsT>
class IsCallable
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

According to the C++ standard, a class declared inside an anonymous namespace has internal linkage, and that means it can't be exported. In Visual Studio 2015 and earlier, this rule wasn't enforced. In Visual Studio 2017, the rule is partially enforced. In Visual Studio 2017 the following example raises error [C2201](../error-messages/compiler-errors-1/compiler-error-c2201.md):

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} };
  // C2201 const anonymous namespace::S1::vftable: must have external linkage
  // in order to be exported/imported.
```

### Default initializers for value class members (C++/CLI)

In Visual Studio 2015 and earlier, the compiler permitted (but ignored) a default member initializer for a member of a value class. Default initialization of a value class always zero-initializes the members. A default constructor isn't permitted. In Visual Studio 2017, default member initializers raise a compiler error, as shown in this example:

```cpp
value struct V
{
    int i = 0; // error C3446: 'V::i': a default member initializer
               // isn't allowed for a member of a value class
};
```

### Default indexers (C++/CLI)

In Visual Studio 2015 and earlier, the compiler in some cases misidentified a default property as a default indexer. It was possible to work around the issue by using the identifier **`default`** to access the property. The workaround itself became problematic after **`default`** was introduced as a keyword in C++11. In Visual Studio 2017, the bugs that required the workaround were fixed. The compiler now raises an error when **`default`** is used to access the default property for a class.

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

## <a name="improvements_153"></a> Conformance improvements in 15.3

### `constexpr` lambdas

Lambda expressions may now be used in constant expressions. For more information, see [`constexpr` lambda expressions in C++](../cpp/lambda-expressions-constexpr.md).

### `if constexpr` in function templates

A function template may contain **`if constexpr`** statements to enable compile-time branching. For more information, see [`if constexpr` statements](../cpp/if-else-statement-cpp.md#if_constexpr).

### Selection statements with initializers

An **`if`** statement may include an initializer that introduces a variable at block scope within the statement itself. For more information, see [`if` statements with initializer](../cpp/if-else-statement-cpp.md#if_with_init).

### `[[maybe_unused]]` and `[[nodiscard]]` attributes

New attribute `[[maybe_unused]]` silences warnings when an entity isn't used. The `[[nodiscard]]` attribute creates a warning if the return value of a function call is discarded. For more information, see [Attributes in C++](../cpp/attributes.md).

### Using attribute namespaces without repetition

New syntax to enable only a single namespace identifier in an attribute list. For more information, see [Attributes in C++](../cpp/attributes.md).

### Structured bindings

It's now possible in a single declaration to store a value with individual names for its components, when the value is an array, a `std::tuple` or `std::pair`, or has all public non-static data members. For more information, see [`P0144R0 - Structured Bindings`](https://wg21.link/p0144r0) and [Returning multiple values from a function](../cpp/functions-cpp.md#multi_val).

### Construction rules for `enum class` values

There's now an implicit conversion for scoped enumerations that's non-narrowing. It converts from a scoped enumeration's underlying type to the enumeration itself. The conversion is available when its definition doesn't introduce an enumerator, and when the source uses a list-initialization syntax. For more information, see [`P0138R2 - Construction Rules for enum class Values`](https://wg21.link/p0138r2) and [Enumerations](../cpp/enumerations-cpp.md#no_enumerators).

### Capturing `*this` by value

The **`*this`** object in a lambda expression may now be captured by value. This change enables scenarios in which the lambda is invoked in parallel and asynchronous operations, especially on newer machine architectures. For more information, see [`P0018R3 - Lambda Capture of *this by Value as [=,*this]`](https://wg21.link/p0018r3).

### Removing `operator++` for `bool`

`operator++` is no longer supported on **`bool`** types. For more information, see [`P0002R1 - Remove Deprecated operator++(bool)`](https://wg21.link/p0002r1).

### Removing deprecated `register` keyword

The **`register`** keyword, previously deprecated (and ignored by the compiler), is now removed from the language. For more information, see [`P0001R1 - Remove Deprecated Use of the register Keyword`](https://wg21.link/p0001r1).

### Calls to deleted member templates

In previous versions of Visual Studio, the compiler in some cases would fail to emit an error for ill-formed calls to a deleted member template. These calls would potentially cause crashes at runtime. The following code now produces [C2280](../error-messages/compiler-errors-1/compiler-error-c2280.md):

```cpp
template<typename T>
struct S {
   template<typename U> static int f() = delete;
};

void g()
{
   decltype(S<int>::f<int>()) i; // this should fail with
// C2280: 'int S<int>::f<int>(void)': attempting to reference a deleted function
}
```

To fix the error, declare `i` as **`int`**.

### Pre-condition checks for type traits

Visual Studio 2017 version 15.3 improves pre-condition checks for type-traits to more strictly follow the standard. One such check is for assignable. The following code produces [C2139](../error-messages/compiler-errors-1/compiler-error-c2139.md) in Visual Studio 2017 version 15.3:

```cpp
struct S;
enum E;

static_assert(!__is_assignable(S, S), "fail"); // C2139 in 15.3
static_assert(__is_convertible_to(E, E), "fail"); // C2139 in 15.3
```

### New compiler warning and runtime checks on native-to-managed marshaling

Calling from managed functions to native functions requires marshaling. The CLR does the marshaling, but it doesn't understand C++ semantics. If you pass a native object by value, CLR either calls the object's copy-constructor or uses `BitBlt`, which may cause undefined behavior at runtime.

Now the compiler emits a warning if it finds this error at compile time: a native object with deleted copy ctor gets passed between a native and managed boundary by value. For those cases in which the compiler doesn't know at compile time, it injects a runtime check so that the program calls `std::terminate` immediately when an ill-formed marshaling occurs. In Visual Studio 2017 version 15.3, the following code produces warning [C4606](../error-messages/compiler-warnings/compiler-warning-level-1-c4606.md):

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
    // This call from managed to native requires marshaling. The CLR doesn't
    // understand C++ and uses BitBlt, which results in a double-free later.
    f(A()); // C4606 'A': passing argument by value across native and managed
    // boundary requires valid copy constructor. Otherwise, the runtime
    // behavior is undefined.`
}
```

To fix the error, remove the `#pragma managed` directive to mark the caller as native and avoid marshaling.

### Experimental API warning for WinRT

WinRT APIs that are released for experimentation and feedback are decorated with `Windows.Foundation.Metadata.ExperimentalAttribute`. In Visual Studio 2017 version 15.3, the compiler produces warning [C4698](../error-messages/compiler-warnings/c4698.md) for this attribute. A few APIs in previous versions of the Windows SDK have already been decorated with the attribute, and calls to these APIs now trigger this compiler warning. Newer Windows SDKs have the attribute removed from all shipped types. If you're using an older SDK, you'll need to suppress these warnings for all calls to shipped types.

The following code produces warning C4698:

```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync(); // C4698
// 'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' is for
// evaluation purposes only and is subject to change or removal in future updates
```

To disable the warning, add a #pragma:

```cpp
#pragma warning(push)
#pragma warning(disable:4698)

Windows::Storage::IApplicationDataStatics2::GetForUserAsync();

#pragma warning(pop)
```

### Out-of-line definition of a template member function

Visual Studio 2017 version 15.3 produces an error for an out-of-line definition of a template member function that wasn't declared in the class. The following code now produces error [C2039](../error-messages/compiler-errors-1/compiler-error-c2039.md):

```cpp
struct S {};

template <typename T>
void S::f(T t) {} // C2039: 'f': is not a member of 'S'
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

### Attempting to take the address of `this` pointer

In C++, **`this`** is a prvalue of type pointer to X. You can't take the address of **`this`** or bind it to an lvalue reference. In previous versions of Visual Studio, the compiler would allow you to circumvent this restriction by use of a cast. In Visual Studio 2017 version 15.3, the compiler produces error [C2664](../error-messages/compiler-errors-2/compiler-error-c2664.md).

### Conversion to an inaccessible base class

Visual Studio 2017 version 15.3 produces an error when you attempt to convert a type to a base class that is inaccessible. The following code is ill-formed and can potentially cause a crash at runtime. The compiler now produces [C2243](../error-messages/compiler-errors-1/compiler-error-c2243.md) when it sees code like this:

```cpp
#include <memory>

class B { };
class D : B { }; // C2243: 'type cast': conversion from 'D *' to 'B *' exists, but is inaccessible

void f()
{
   std::unique_ptr<B>(new D());
}
```

### Default arguments aren't allowed on out of line definitions of member functions

Default arguments aren't allowed on out-of-line definitions of member functions in template classes. The compiler will issue a warning under **`/permissive`**, and a hard error under [`/permissive-`](../build/reference/permissive-standards-conformance.md).

In previous versions of Visual Studio, the following ill-formed code could potentially cause a runtime crash. Visual Studio 2017 version 15.3 produces warning [C5037](../error-messages/compiler-warnings/c5037.md):

```cpp
template <typename T>
struct A {
    T f(T t, bool b = false);
};

template <typename T>
T A<T>::f(T t, bool b = false) // C5037: 'A<T>::f': an out-of-line definition of a member of a class template cannot have default arguments
{
    // ...
}
```

To fix the error, remove the `= false` default argument.

### Use of `offsetof` with compound member designator

In Visual Studio 2017 version 15.3, using `offsetof(T, m)` where *m* is a "compound member designator" results in a warning when you compile with the **`/Wall`** option. The following code is ill-formed and could potentially cause a crash at runtime. Visual Studio 2017 version 15.3 produces warning [C4841](../error-messages/compiler-warnings/c4841.md):

```cpp
struct A {
   int arr[10];
};

// warning C4841: non-standard extension used: compound member designator used in offsetof
constexpr auto off = offsetof(A, arr[2]);
```

To fix the code, either disable the warning with a pragma or change the code to not use `offsetof`:

```cpp
#pragma warning(push)
#pragma warning(disable: 4841)
constexpr auto off = offsetof(A, arr[2]);
#pragma warning(pop)
```

### Using `offsetof` with static data member or member function

In Visual Studio 2017 version 15.3, using `offsetof(T, m)` where *m* refers to a static data member or a member function results in an error. The following code produces error [C4597](../error-messages/compiler-warnings/c4597.md):

```cpp
#include <cstddef>

struct A {
   int ten() { return 10; }
   static constexpr int two = 2;
};

constexpr auto off = offsetof(A, ten);  // C4597: undefined behavior: offsetof applied to member function 'A::ten'
constexpr auto off2 = offsetof(A, two); // C4597: undefined behavior: offsetof applied to static data member 'A::two'
```

This code is ill-formed and could potentially cause a crash at runtime. To fix the error, change the code to no longer invoke undefined behavior. It's non-portable code that's disallowed by the C++ standard.

### <a name="declspec"></a> New warning on `__declspec` attributes

In Visual Studio 2017 version 15.3, the compiler no longer ignores attributes if `__declspec(...)` is applied before `extern "C"` linkage specification. Previously, the compiler would ignore the attribute, which could have runtime implications. When the **`/Wall`** and **`/WX`** options are set, the following code produces warning [C4768](../error-messages/compiler-warnings/c4768.md):

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall // C4768: __declspec attributes before linkage specification are ignored
```

To fix the warning, put `extern "C"` first:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

This warning is off by default in Visual Studio 2017 version 15.3, and only impacts code compiled with  **`/Wall`** **`/WX`**. Starting in Visual Studio 2017 version 15.5, it's enabled by default as a level 3 warning.

### `decltype` and calls to deleted destructors

In previous versions of Visual Studio, the compiler didn't detect when a call to a deleted destructor occurred in the context of the expression associated with **`decltype`**. In Visual Studio 2017 version 15.3, the following code produces error [C2280](../error-messages/compiler-errors-1/compiler-error-c2280.md):

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
   g(42); // C2280: 'A<T>::~A(void)': attempting to reference a deleted function
}
```

### Uninitialized const variables

Visual Studio 2017 RTW release had a regression: the C++ compiler wouldn't issue a diagnostic for an uninitialized **`const`** variable. This regression has been fixed in Visual Studio 2017 version 15.3. The following code now produces warning [C4132](../error-messages/compiler-warnings/compiler-warning-level-4-c4132.md):

```cpp
const int Value; // C4132: 'Value': const object should be initialized
```

To fix the error, assign a value to `Value`.

### Empty declarations

Visual Studio 2017 version 15.3 now warns on empty declarations for all types, not just built-in types. The following code now produces a level 2 [C4091](../error-messages/compiler-warnings/compiler-warning-level-1-c4091.md) warning for all four declarations:

```cpp
struct A {};
template <typename> struct B {};
enum C { c1, c2, c3 };

int;    // warning C4091 : '' : ignored on left of 'int' when no variable is declared
A;      // warning C4091 : '' : ignored on left of 'main::A' when no variable is declared
B<int>; // warning C4091 : '' : ignored on left of 'B<int>' when no variable is declared
C;      // warning C4091 : '' : ignored on left of 'C' when no variable is declared
```

To remove the warnings, comment-out or remove the empty declarations. In cases where the unnamed object is intended to have a side effect (such as RAII), it should be given a name.

The warning is excluded under **`/Wv:18`** and is on by default under warning level W2.

### `std::is_convertible` for array types

Previous versions of the compiler gave incorrect results for [`std::is_convertible`](../standard-library/is-convertible-class.md) for array types. This required library writers to special-case the Microsoft C++ compiler when using the `std::is_convertible<...>` type trait. In the following example, the static asserts pass in earlier versions of Visual Studio but fail in Visual Studio 2017 version 15.3:

```cpp
#include <type_traits>

using Array = char[1];

static_assert(std::is_convertible<Array, Array>::value);
static_assert(std::is_convertible<const Array, const Array>::value, "");
static_assert(std::is_convertible<Array&, Array>::value, "");
static_assert(std::is_convertible<Array, Array&>::value, "");
```

`std::is_convertible<From, To>` is calculated by checking to see if an imaginary function definition is well formed:

```cpp
   To test() { return std::declval<From>(); }
```

### Private destructors and `std::is_constructible`

Previous versions of the compiler ignored whether a destructor was private when deciding the result of [`std::is_constructible`](../standard-library/is-constructible-class.md). It now considers them. In the following example, the static asserts pass in earlier versions of Visual Studio but fail in Visual Studio 2017 version 15.3:

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

Private destructors cause a type to be non-constructible. `std::is_constructible<T, Args...>` is calculated as if the following declaration were written:

```cpp
   T obj(std::declval<Args>()...)
```

This call implies a destructor call.

### C2668: Ambiguous overload resolution

Previous versions of the compiler sometimes failed to detect ambiguity when it found multiple candidates via both using declarations and argument-dependent lookup. This failure can lead to the wrong overload being chosen, and to unexpected runtime behavior. In the following example, Visual Studio 2017 version 15.3 correctly raises [C2668](../error-messages/compiler-errors-2/compiler-error-c2668.md):

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
   f(s1, s2); // C2668: 'f': ambiguous call to overloaded function
}
```

To fix the code, remove the using `N::f` statement if you intended to call `::f()`.

### C2660: local function declarations and argument-dependent lookup

Local function declarations hide the function declaration in the enclosing scope and disable argument-dependent lookup. Previous versions of the compiler always did argument-dependent lookup in this case. It could potentially lead to unexpected runtime behavior, if the compiler chose the wrong overload. Typically, the error is because of an incorrect signature of the local function declaration. In the following example, Visual Studio 2017 version 15.3 correctly raises [C2660](../error-messages/compiler-errors-2/compiler-error-c2660.md):

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

To fix the problem, either change the `f(S)` signature or remove it.

### C5038: order of initialization in initializer lists

Class members get initialized in the order they're declared, not the order they appear in initializer lists. Previous versions of the compiler didn't warn when the order of the initializer list differed from the order of declaration. This issue could lead to undefined runtime behavior if one member's initialization depended on another member in the list already being initialized. In the following example, Visual Studio 2017 version 15.3 (with **`/Wall`**) raises warning [C5038](../error-messages/compiler-warnings/c5038.md):

```cpp
struct A
{    // Initialized in reverse, y reused
    A(int a) : y(a), x(y) {} // C5038: data member 'A::y' will be initialized after data member 'A::x'
    int x;
    int y;
};
```

To fix the problem, arrange the initializer list to have the same order as the declarations. A similar warning is raised when one or both initializers refer to base class members.

This warning is off-by-default, and only affects code compiled with **`/Wall`**.

## <a name="improvements_155"></a> Conformance improvements in 15.5

Features marked with \[14] are available unconditionally even in **`/std:c++14`** mode.

### New compiler switch for `extern constexpr`

In earlier versions of Visual Studio, the compiler always gave a **`constexpr`** variable internal linkage, even when the variable was marked **`extern`**. In Visual Studio 2017 version 15.5, a new compiler switch, [`/Zc:externConstexpr`](../build/reference/zc-externconstexpr.md), enables correct and standards-conforming behavior. For more information, see [`extern constexpr` linkage](#extern_linkage).

### Removing dynamic exception specifications

[P0003R5](https://wg21.link/p0003r5) Dynamic exception specifications were deprecated in C++11. The feature is removed from C++17, but the (still) deprecated `throw()` specification is kept strictly as an alias for `noexcept(true)`. For more information, see [Dynamic exception specification removal and `noexcept`](#noexcept_removal).

### `not_fn()`

[P0005R4](https://wg21.link/p0005r4) `not_fn` is a replacement of `not1` and `not2`.

### Rewording `enable_shared_from_this`

[P0033R1](https://wg21.link/p0033r1) `enable_shared_from_this` was added in C++11. The C++17 standard updates the specification to better handle certain corner cases. \[14]

### Splicing maps and sets

[P0083R3](https://wg21.link/p0083r3) This feature enables extraction of nodes from associative containers (that is, `map`, `set`, `unordered_map`, `unordered_set`) which can then be modified and inserted back into the same container or a different container that uses the same node type. (A common use case is to extract a node from a `std::map`, change the key, and reinsert.)

### Deprecating vestigial library parts

[P0174R2](https://wg21.link/p0174r2) Several features of the C++ standard library have been superseded by newer features over the years, or else have been found not useful, or problematic. These features are officially deprecated in C++17.

### Removing allocator support in `std::function`

[P0302R1](https://wg21.link/p0302r1) Prior to C++17, the class template `std::function` had several constructors that took an allocator argument. However, the use of allocators in this context was problematic, and the semantics were unclear. The problem contructors have been removed.

### Fixes for `not_fn()`

[P0358R1](https://wg21.link/p0358r1) New wording for `std::not_fn` provides support of propagation of value category when used in wrapper invocation.

### `shared_ptr<T[]>`, `shared_ptr<T[N]>`

[P0414R2](https://wg21.link/p0414r2) Merging `shared_ptr` changes from Library Fundamentals to C++17. \[14]

### Fixing `shared_ptr` for arrays

[P0497R0](https://wg21.link/p0497r0) Fixes to shared_ptr support for arrays. \[14]

### Clarifying `insert_return_type`

[P0508R0](https://wg21.link/p0508r0) The associative containers with unique keys, and the unordered containers with unique keys have a member function `insert` that returns a nested type `insert_return_type`. That return type is now defined as a specialization of a type that is parameterized on the Iterator and NodeType of the container.

### Inline variables for the standard library

For [P0607R0](https://wg21.link/p0607r0), several common variables declared in the standard library are now declared inline.

### Annex D features deprecated

Annex D of the C++ standard contains all the features that have been deprecated, including `shared_ptr::unique()`, `<codecvt>`, and `namespace std::tr1`. When the **`/std:c++17`** or later compiler option is set, almost all the standard library features in Annex D are marked as deprecated. For more information, see [Standard library features in Annex D are marked as deprecated](#annex_d).

The `std::tr2::sys` namespace in `<experimental/filesystem>` now emits a deprecation warning under **`/std:c++14`** by default, and is now removed under **`/std:c++17`** and later by default.

Improved conformance in `<iostream>` by avoiding a non-standard extension (in-class explicit specializations).

The standard library now uses variable templates internally.

The standard library was updated in response to C++17 compiler changes. Updates include the addition of **`noexcept`** in the type system, and the removal of dynamic-exception-specifications.

### Partial ordering change

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

```Output
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

The problem in the example above is that there are two differences in the types (const vs. non-const and pack vs. non-pack). To eliminate the compiler error, remove one of the differences. Then the compiler can unambiguously order the functions.

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

Handlers of reference to array or function type are never a match for any exception object. The compiler now correctly honors this rule and raises a level 4 warning, [C4843](../error-messages/compiler-warnings/c4843.md). It also no longer matches a handler of `char*` or `wchar_t*` to a string literal when **`/Zc:strictStrings`** is used.

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

```Output
warning C4843: 'int (&)[1]': An exception handler of reference to array or function type is unreachable, use 'int*' instead
warning C4843: 'void (__cdecl &)(void)': An exception handler of reference to array or function type is unreachable, use 'void (__cdecl*)(void)' instead
```

The following code avoids the error:

```cpp
catch (int (*)[1]) {}
```

### <a name="tr1"></a> `std::tr1` namespace is deprecated

The non-standard `std::tr1` namespace is now marked as deprecated in both C++14 and C++17 modes. In Visual Studio 2017 version 15.5, the following code raises C4996:

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

```Output
warning C4996: 'std::tr1': warning STL4002: The non-standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to acknowledge that you have received this warning.
```

To fix the error, remove the reference to the `tr1` namespace:

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

### <a name="annex_d"></a> Standard library features in Annex D are marked as deprecated

When the **`/std:c++17`** mode or later compiler switch is set, almost all standard library features in Annex D are marked as deprecated.

In Visual Studio 2017 version 15.5, the following code raises C4996:

```cpp
#include <iterator>

class MyIter : public std::iterator<std::random_access_iterator_tag, int> {
public:
    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

```Output
warning C4996: 'std::iterator<std::random_access_iterator_tag,int,ptrdiff_t,_Ty*,_Ty &>::pointer': warning STL4015: The std::iterator class template (used as a base class to provide typedefs) is deprecated in C++17. (The <iterator> header is NOT deprecated.) The C++ standard has never required user-defined iterators to derive from std::iterator. To fix this warning, stop deriving from std::iterator and start providing publicly accessible typedefs named iterator_category, value_type, difference_type, pointer, and reference. Note that value_type is required to be non-const, even for constant iterators. You can define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING or _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS to acknowledge that you have received this warning.
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

In Visual Studio 15.5, warning [C4189](../error-messages/compiler-warnings/compiler-warning-level-4-c4189.md) is emitted in more cases, as shown in the following code:

```cpp
void f() {
    char s[2] = {0}; // C4189. Either use the variable or remove it.
}
```

```Output
warning C4189: 's': local variable is initialized but not referenced
```

To fix the error, remove the unused variable.

### Single-line comments

In Visual Studio 2017 version 15.5, warnings C4001 and C4179 are no longer emitted by the C compiler. Previously, they were only emitted under the **`/Za`** compiler switch.  The warnings are no longer needed because single-line comments have been part of the C standard since C99.

```cpp
/* C only */
#pragma warning(disable:4001) // C4619
#pragma warning(disable:4179)
// single line comment
//* single line comment */
```

```Output
warning C4619: #pragma warning: there is no warning number '4001'
```

When the code doesn't need to be backwards compatible, avoid the warning by removing the C4001 and C4179 suppression. If the code does need to be backward compatible, then suppress C4619 only.

```C
/* C only */

#pragma warning(disable:4619)
#pragma warning(disable:4001)
#pragma warning(disable:4179)

// single line comment
/* single line comment */
```

### `__declspec` attributes with `extern "C"` linkage

In earlier versions of Visual Studio, the compiler ignored `__declspec(...)` attributes when `__declspec(...)` was applied before the `extern "C"` linkage specification. This behavior caused code to be generated that user didn't intend, with possible runtime implications. The [C4768](../error-messages/compiler-warnings/c4768.md) warning was added in Visual Studio version 15.3, but was off by default. In Visual Studio 2017 version 15.5, the warning is enabled by default.

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall // C4768
```

```Output
warning C4768: __declspec attributes before linkage specification are ignored
```

To fix the error, place the linkage specification before the __declspec attribute:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

This new warning C4768 is given on some Windows SDK headers that were shipped with Visual Studio 2017 15.3 or older (for example: version 10.0.15063.0, also known as RS2 SDK). However, later versions of Windows SDK headers (specifically, ShlObj.h and ShlObj_core.h) have been fixed so that they don't produce the warning. When you see this warning coming from Windows SDK headers, you can take these actions:

1. Switch to the latest Windows SDK that came with Visual Studio 2017 version 15.5 release.

1. Turn off the warning around the #include of the Windows SDK header statement:

```cpp
   #pragma warning (push)
   #pragma warning(disable:4768)
   #include <shlobj.h>
   #pragma warning (pop)
   ```

### <a name="extern_linkage"></a> `extern constexpr` linkage

In earlier versions of Visual Studio, the compiler always gave a **`constexpr`** variable internal linkage even when the variable was marked **`extern`**. In Visual Studio 2017 version 15.5, a new compiler switch (**`/Zc:externConstexpr`**) enables correct, standards-conforming behavior. Eventually this behavior will become the default.

```cpp
extern constexpr int x = 10;
```

```Output
error LNK2005: "int const x" already defined
```

If a header file contains a variable declared **`extern constexpr`**, it needs to be marked `__declspec(selectany)` to have its duplicate declarations combined correctly:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

### `typeid` can't be used on incomplete class type

In earlier versions of Visual Studio, the compiler incorrectly allowed the following code, resulting in potentially incorrect type information. In Visual Studio 2017 version 15.5, the compiler correctly raises an error:

```cpp
#include <typeinfo>

struct S;

void f() { typeid(S); } //C2027 in 15.5
```

```Output
error C2027: use of undefined type 'S'
```

### `std::is_convertible` target type

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

### <a name="noexcept_removal"></a> Dynamic exception specification removal and `noexcept`

In C++17, `throw()` is an alias for **`noexcept`**, `throw(<type list>)` and `throw(...)` are removed, and certain types may include **`noexcept`**. This change can cause source compatibility issues with code that conforms to C++14 or earlier. The **`/Zc:noexceptTypes-`** switch can be used to revert to the C++14 version of **`noexcept`** while using C++17 mode in general. It enables you to update your source code to conform to C++17 without having to rewrite all your `throw()` code at the same time.

The compiler also now diagnoses more mismatched exception specifications in declarations in C++17 mode or with [`/permissive-`](../build/reference/permissive-standards-conformance.md) with the new warning C5043.

The following code generates C5043 and C5040 in Visual Studio 2017 version 15.5 when the **`/std:c++17`** switch is applied:

```cpp
void f() throw(); // equivalent to void f() noexcept;
void f() {} // warning C5043
void g() throw(); // warning C5040

struct A {
    virtual void f() throw();
};

struct B : A {
    virtual void f() { } // error C2694
};
```

To remove the errors while still using **`/std:c++17`**, either add the **`/Zc:noexceptTypes-`** switch to the command line, or else update your code to use **`noexcept`**, as shown in the following example:

```cpp
void f() noexcept;
void f() noexcept { }
void g() noexcept(false);

struct A {
    virtual void f() noexcept;
};

struct B : A {
    virtual void f() noexcept { }
};
```

### Inline variables

Static **`constexpr`** data members are now implicitly **`inline`**, which means that their declaration within a class is now their definition. Using an out-of-line definition for a **`static constexpr`** data member is redundant, and now deprecated. In Visual Studio 2017 version 15.5, when the **`/std:c++17`** switch is applied the following code now produces warning C5041:

```cpp
struct X {
    static constexpr int size = 3;
};
const int X::size; // C5041: 'size': out-of-line definition for constexpr static data member is not needed and is deprecated in C++17
```

### `extern "C" __declspec(...)` warning C4768 now on by default

The warning was added in Visual Studio 2017 version 15.3, but was off by default. In Visual Studio 2017 version 15.5, the warning is on by default. For more information, see [New warning on `__declspec` attributes](#declspec).

### Defaulted functions and `__declspec(nothrow)`

The compiler previously allowed defaulted functions to be declared with `__declspec(nothrow)` when the corresponding base/member functions permitted exceptions. This behavior is contrary to the C++ standard and can cause undefined behavior at runtime. The standard requires such functions to be defined as deleted if there's an exception specification mismatch.  Under **`/std:c++17`**, the following code raises C2280:

```cpp
struct A {
    A& operator=(const A& other) { // No exception specification; this function may throw.
        ...
    }
};

struct B : public A {
    __declspec(nothrow) B& operator=(const B& other) = default;
};

int main()
{
    B b1, b2;
    b2 = b1; // error C2280: attempting to reference a deleted function.
             // Function was implicitly deleted because the explicit exception
             // specification is incompatible with that of the implicit declaration.
}
```

To correct this code, either remove __declspec(nothrow) from the defaulted function, or remove `= default` and provide a definition for the function along with any required exception handling:

```cpp
struct A {
    A& operator=(const A& other) {
        // ...
    }
};

struct B : public A {
    B& operator=(const B& other) = default;
};

int main()
{
    B b1, b2;
    b2 = b1;
}
```

### `noexcept` and partial specializations

With **`noexcept`** in the type system, partial specializations for matching particular "callable" types may not compile, or fail to choose the primary template, because of a missing partial specialization for pointers-to-noexcept-functions.

In such cases, you may need to add more partial specializations to handle the **`noexcept`** function pointers and **`noexcept`** pointers to member functions. These overloads are only legal in **`/std:c++17`** mode or later. If backwards-compatibility with C++14 must be maintained, and you're writing code that others consume, then you should guard these new overloads inside `#ifdef` directives. If you're working in a self-contained module, then instead of using `#ifdef` guards you can just compile with the **`/Zc:noexceptTypes-`** switch.

The following code compiles under **`/std:c++14`** but fails under **`/std:c++17`** with error C2027:

```cpp
template <typename T> struct A;

template <>
struct A<void(*)()>
{
    static const bool value = true;
};

template <typename T>
bool g(T t)
{
    return A<T>::value;
}

void f() noexcept {}

int main()
{
    return g(&f) ? 0 : 1; // C2027: use of undefined type 'A<T>'
}
```

The following code succeeds under **`/std:c++17`** because the compiler chooses the new partial specialization `A<void (*)() noexcept>`:

```cpp
template <typename T> struct A;

template <>
struct A<void(*)()>
{
    static const bool value = true;
};

template <>
struct A<void(*)() noexcept>
{
    static const bool value = true;
};

template <typename T>
bool g(T t)
{
    return A<T>::value;
}

void f() noexcept {}

int main()
{
    return g(&f) ? 0 : 1; // OK
}
```

## <a name="improvements_156"></a> Conformance improvements in 15.6

### C++17 Library Fundamentals V1

[P0220R1](https://wg21.link/p0220r1) incorporates Library Fundamentals Technical Specification for C++17 into the standard. Covers updates to *`<experimental/tuple>`*, *`<experimental/optional>`*, *`<experimental/functional>`*, *`<experimental/any>`*, *`<experimental/string_view>`*, *`<experimental/memory>`*, *`<experimental/memory_resource>`*, and *`<experimental/algorithm>`*.

### C++17: Improving class template argument deduction for the standard library

[P0739R0](https://wg21.link/p0739r0) Move `adopt_lock_t` to front of parameter list for `scoped_lock` to enable consistent use of `scoped_lock`. Allow `std::variant` constructor to participate in overload resolution in more cases, to enable copy assignment.

## <a name="improvements_157"></a> Conformance improvements in 15.7

### C++17: Rewording inheriting constructors

[P0136R1](https://wg21.link/p0136r1) specifies that a **`using`** declaration that names a constructor now makes the corresponding base class constructors visible to initializations of the derived class, rather than declaring more derived class constructors. This rewording is a change from C++14. In Visual Studio 2017 version 15.7 and later, in **`/std:c++17`** mode and later, code that is valid in C++14 and uses inheriting constructors may not be valid, or may have different semantics.

The following example shows C++14 behavior:

```cpp
struct A {
    template<typename T>
    A(T, typename T::type = 0);
    A(int);
};

struct B : A {
    using A::A;
    B(int n) = delete; // Error C2280
};

B b(42L); // Calls B<long>(long), which calls A(int)
          //  due to substitution failure in A<long>(long).
```

The following example shows **`/std:c++17`** behavior in Visual Studio 15.7:

```cpp
struct A {
    template<typename T>
    A(T, typename T::type = 0);
    A(int);
};

struct B : A {
    using A::A;
    B(int n)
    {
        //do something
    }
};

B b(42L); // now calls B(int)
```

For more information, see [Constructors](../cpp/constructors-cpp.md#inheriting_constructors).

### C++17: Extended aggregate initialization

[P0017R1](https://wg21.link/p0017r1)

If the constructor of a base class is non-public, but accessible to a derived class, then under **`/std:c++17`** mode and later in Visual Studio 2017 version 15.7, you can no longer use empty braces to initialize an object of the derived type.
The following example shows C++14 conforming behavior:

```cpp
struct Derived;
struct Base {
    friend struct Derived;
private:
    Base() {}
};

struct Derived : Base {};
Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // OK in C++14: Calls Derived::Derived()
               // which can call Base ctor.
```

In C++17, `Derived` is now considered an aggregate type. It means that the initialization of `Base` via the private default constructor happens directly, as part of the extended aggregate initialization rule. Previously, the `Base` private constructor was called via the `Derived` constructor, and it succeeded because of the friend declaration.
The following example shows C++17 behavior in Visual Studio version 15.7 in **`/std:c++17`** mode:

```cpp
struct Derived;
struct Base {
    friend struct Derived;
private:
    Base() {}
};
struct Derived : Base {
    Derived() {} // add user-defined constructor
                 // to call with {} initialization
};
Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // error C2248: 'Base::Base': cannot access
               // private member declared in class 'Base'
```

### C++17: Declaring non-type template parameters with auto

[P0127R2](https://wg21.link/p0127r2)

In **`/std:c++17`** mode, the compiler can now deduce the type of a non-type template argument that is declared with **`auto`**:

```cpp
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char
```

One effect of this new feature is that valid C++14 code may not be valid or may have different semantics. For example, some overloads that were previously invalid are now valid. The following example shows C++14 code that compiles because the call to `example(p)` is bound to `example(void*);`. In Visual Studio 2017 version 15.7, in **`/std:c++17`** mode, the `example` function template is the best match.

```cpp
template <int N> struct A;
template <typename T, T N> int example(A<N>*) = delete;

void example(void *);

void sample(A<0> *p)
{
    example(p); // OK in C++14
}
```

The following example shows C++17 code in Visual Studio 15.7 in **`/std:c++17`** mode:

```cpp
template <int N> struct A;
template <typename T, T N> int example(A<N>*);

void example(void *);

void sample(A<0> *p)
{
    example(p); // C2280: 'int example<int,0>(A<0>*)': attempting to reference a deleted function
}
```

### C++17: Elementary string conversions (partial)

[P0067R5](https://wg21.link/p0067r5) Low-level, locale-independent functions for conversions between integers and strings and between floating-point numbers and strings.

### C++20: Avoiding unnecessary decay (partial)

[P0777R1](https://wg21.link/p0777r1) Adds differentiation between the concept of "decay" and that of simply removing const or reference qualifiers.  New type trait `remove_reference_t` replaces `decay_t` in some contexts. Support for `remove_cvref_t` is implemented in Visual Studio 2019.

### C++17: Parallel algorithms

[P0024R2](https://wg21.link/p0024r2) The Parallelism TS is incorporated into the standard, with minor modifications.

### C++17: `hypot(x, y, z)`

[P0030R1](https://wg21.link/p0030r1) Adds three new overloads to `std::hypot`, for types **`float`**, **`double`**, and **`long double`**, each of which has three input parameters.

### C++17: *`<filesystem>`*

[P0218R1](https://wg21.link/p0218r1) Adopts the File System TS into the standard with a few wording modifications.

### C++17: Mathematical special functions

[P0226R1](https://wg21.link/p0220r1) Adopts previous technical specifications for Mathematical Special Functions into the standard *`<cmath>`* header.

### C++17: Deduction guides for the standard library

[P0433R2](https://wg21.link/p0433r2) Updates to STL to take advantage of C++17 adoption of [P0091R3](https://wg21.link/p0091r3), which adds support for class template argument deduction.

### C++17: Repairing elementary string conversions

[P0682R1](https://wg21.link/p0682r1) Move the new elementary string conversion functions from P0067R5 into a new header *`<charconv>`* and make other improvements, including changing error handling to use `std::errc` instead of `std::error_code`.

### C++17: `constexpr` for `char_traits` (partial)

[P0426R1](https://wg21.link/p0426r1) Changes to `std::traits_type` member functions `length`, `compare`, and `find` to make `std::string_view` usable in constant expressions. (In Visual Studio 2017 version 15.6, supported for Clang/LLVM only. In version 15.7, support is nearly complete for ClXX as well.)

### C++17: Default argument in the primary class template

This behavior change is a precondition for [`P0091R3 - Template argument deduction for class templates`](https://wg21.link/p0091r3).

Previously, the compiler ignored the default argument in the primary class template:

```cpp
template<typename T>
struct S {
    void f(int = 0);
};

template<typename T>
void S<T>::f(int = 0) {} // Re-definition necessary
```

In **`/std:c++17`** mode in Visual Studio 2017 version 15.7, the default argument isn't ignored:

```cpp
template<typename T>
struct S {
    void f(int = 0);
};

template<typename T>
void S<T>::f(int) {} // Default argument is used
```

### Dependent name resolution

This behavior change is a precondition for [`P0091R3 - Template argument deduction for class templates`](https://wg21.link/p0091r3).

In the following example, the compiler in Visual Studio 15.6 and earlier resolves `D::type` to `B<T>::type` in the primary class template.

```cpp
template<typename T>
struct B {
    using type = T;
};

template<typename T>
struct D : B<T*> {
    using type = B<T*>::type;
};
```

Visual Studio 2017 version 15.7, in **`/std:c++17`** mode, requires the **`typename`** keyword in the **`using`** statement in D. Without **`typename`**, the compiler raises warning C4346: `'B<T*>::type': dependent name is not a type` and error C2061: `syntax error: identifier 'type'`:

```cpp
template<typename T>
struct B {
    using type = T;
};

template<typename T>
struct D : B<T*> {
    using type = typename B<T*>::type;
};
```

### C++17: `[[nodiscard]]` attribute - warning level increase

In Visual Studio 2017 version 15.7 in **`/std:c++17`** mode, the warning level of [C4834](../error-messages/compiler-warnings/c4834.md) is increased from W3 to W1. You can disable the warning with a cast to **`void`**, or by passing **`/wd:4834`** to the compiler.

```cpp
[[nodiscard]] int f() { return 0; }

int main() {
    f(); // warning C4834: discarding return value
         // of function with 'nodiscard'
}
```

### Variadic template constructor base class initialization list

In previous editions of Visual Studio, a variadic template constructor base class initialization list that was missing template arguments was erroneously allowed without error. In Visual Studio 2017 version 15.7, a compiler error is raised.

The following code example in Visual Studio 2017 version 15.7 raises error C2614:

```cpp
template<typename T>
struct B {};

template<typename T>
struct D : B<T>
{

    template<typename ...C>
    D() : B() {} // C2614: D<int>: illegal member initialization: 'B' is not a base or member
};

D<int> d;
```

To fix the error, change the `B()` expression to `B<T>()`.

### `constexpr` aggregate initialization

Previous versions of the C++ compiler incorrectly handled **`constexpr`** aggregate initialization. The compiler accepted invalid code in which the aggregate-init-list had too many elements, and produced bad object code for it. The following code is an example of such code:

```cpp
#include <array>
struct X {
    unsigned short a;
    unsigned char b;
};

int main() {
    constexpr std::array<X, 2> xs = { // C2078: too many initializers
        { 1, 2 },
        { 3, 4 }
    };
    return 0;
}
```

In Visual Studio 2017 version 15.7 update 3 and later, the previous example now raises C2078. The following example shows how to fix the code. When initializing a `std::array` with nested brace-init-lists, give the inner array a braced-list of its own:

```cpp
#include <array>
struct X {
    unsigned short a;
    unsigned char b;
};

int main() {
    constexpr std::array<X, 2> xs = {{ // note double braces
        { 1, 2 },
        { 3, 4 }
    }}; // note double braces
    return 0;
}
```

## <a name="update_158"></a> Conformance improvements in 15.8

### `typename` on unqualified identifiers

In [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode, spurious **`typename`** keywords on unqualified identifiers in alias template definitions are no longer accepted by the compiler. The following code now produces C7511:

```cpp
template <typename T>
using  X = typename T; // C7511: 'T': 'typename' keyword must be 
                       // followed by a qualified name
```

To fix the error, change the second line to `using  X = T;`.

### `__declspec()` on right side of alias template definitions

[`__declspec`](../cpp/declspec.md) is no longer permitted on the right-hand-side of an alias template definition. Previously, the compiler accepted but ignored this code. It would never result in a deprecation warning when the alias was used.

The standard C++ attribute [`[[deprecated]]`](../cpp/attributes.md) may be used instead, and is respected in Visual Studio 2017 version 15.6. The following code now produces C2760:

```cpp
template <typename T>
using X = __declspec(deprecated("msg")) T; // C2760: syntax error:
                                           // unexpected token '__declspec',
                                           // expected 'type specifier'`
```

To fix the error, change to code to the following (with the attribute placed before the '=' of the alias definition):

```cpp
template <typename T>
using  X [[deprecated("msg")]] = T;
```

### Two-phase name lookup diagnostics

Two-phase name lookup requires that non-dependent names used in template bodies must be visible to the template at definition time. Previously, the Microsoft C++ compiler would leave an unfound name as not looked up until instantiation time. Now, it requires that non-dependent names are bound in the template body.

One way this can manifest is with lookup into dependent base classes. Previously, the compiler allowed the use of names that are defined in dependent base classes. It's because they'd be looked up during instantiation time when all the types are resolved. Now that code is treated as an error. In these cases, you can force the variable to be looked up at instantiation time by qualifying it with the base class type or otherwise making it dependent, for example, by adding a `this->` pointer.

In [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode, the following code now raises C3861:

```cpp
template <class T>
struct Base {
    int base_value = 42;
};

template <class T>
struct S : Base<T> {
    int f() {
        return base_value; // C3861: 'base_value': identifier not found
    }
};
```

To fix the error, change the **`return`** statement to `return this->base_value;`.

> [!NOTE]
> In Boost.Python library versions before 1.70, there's been an MSVC-specific workaround for a template forward declaration in [`unwind_type.hpp`](https://github.com/boostorg/python/blame/develop/include/boost/python/detail/unwind_type.hpp). Under [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode starting in Visual Studio 2017 version 15.8 (`_MSC_VER==1915`), the MSVC compiler does argument-dependent name lookup (ADL) correctly. It's now consistent with other compilers, making this workaround guard unnecessary. To avoid error C3861: `'unwind_type': identifier not found`, update your Boost.Python library.

### forward declarations and definitions in namespace `std`

The C++ standard doesn't allow a user to add forward declarations or definitions into namespace `std`. Adding declarations or definitions to namespace `std` or to a namespace within namespace `std` now results in undefined behavior.

At some time in the future, Microsoft will move the location where some standard library types are defined. This change will break existing code that adds forward declarations to namespace `std`. A new warning, C4643, helps identify such source issues. The warning is enabled in **`/default`** mode and is off by default. It will affect programs that are compiled with **`/Wall`** or **`/WX`**.

The following code now raises C4643:

```cpp
namespace std {
    template<typename T> class vector;  // C4643: Forward declaring 'vector'
                                        // in namespace std is not permitted
                                        // by the C++ Standard`
}
```

To fix the error, use a **`#include`** directive rather than a forward declaration:

```cpp
#include <vector>
```

### Constructors that delegate to themselves

The C++ standard suggests that a compiler should emit a diagnostic when a delegating constructor delegates to itself. The Microsoft C++ compiler in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) and [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) modes now raises C7535.

Without this error, the following program will compile but will generate an infinite loop:

```cpp
class X {
public:
    X(int, int);
    X(int v) : X(v){} // C7535: 'X::X': delegating constructor calls itself
};
```

To avoid the infinite loop, delegate to a different constructor:

```cpp
class X {
public:

    X(int, int);
    X(int v) : X(v, 0) {}
};
```

### `offsetof` with constant expressions

[`offsetof`](../c-runtime-library/reference/offsetof-macro.md) has traditionally been implemented using a macro that requires a [`reinterpret_cast`](../cpp/reinterpret-cast-operator.md). This usage is illegal in contexts that require a constant expression, but the Microsoft C++ compiler has traditionally allowed it. The `offsetof` macro that is shipped as part of the standard library correctly uses a compiler intrinsic (**`__builtin_offsetof`**), but many people have used the macro trick to define their own `offsetof`.

In Visual Studio 2017 version 15.8, the compiler constrains the areas that these **`reinterpret_cast`** operators can appear in the default mode, to help code conform to standard C++ behavior. Under [`/permissive-`](../build/reference/permissive-standards-conformance.md), the constraints are even stricter. Using the result of an `offsetof` in places that require constant expressions may result in code that issues warning C4644 or C2975.

The following code raises C4644 in default and **`/std:c++17`** modes, and C2975 in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode:

```cpp
struct Data {
    int x;
};

// Common pattern of user-defined offsetof
#define MY_OFFSET(T, m) (unsigned long long)(&(((T*)nullptr)->m))

int main()

{
    switch (0) {
    case MY_OFFSET(Data, x): return 0; // C4644: usage of the
        // macro-based offsetof pattern in constant expressions
        // is non-standard; use offsetof defined in the C++
        // standard library instead
        // OR
        // C2975: invalid template argument, expected
        // compile-time constant expression

    default: return 1;
    }
}
```

To fix the error, use `offsetof` as defined via *`<cstddef>`*:

```cpp
#include <cstddef>

struct Data {
    int x;
};

int main()
{
    switch (0) {
    case offsetof(Data, x): return 0;
    default: return 1;
    }
}
```

### cv-qualifiers on base classes subject to pack expansion

Previous versions of the Microsoft C++ compiler didn't detect that a base-class had cv-qualifiers if it was also subject to pack expansion.

In Visual Studio 2017 version 15.8, in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode, the following code raises C3770:

```cpp
template<typename... T>
class X : public T... { };

class S { };

int main()
{
    X<const S> x; // C3770: 'const S': is not a valid base class
}
```

### `template` keyword and nested-name-specifiers

In [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode, the compiler now requires the **`template`** keyword to precede a template-name when it comes after a dependent nested-name-specifier.

The following code in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode now raises [C7510](../error-messages/compiler-errors-2/compiler-error-c7510.md):

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        Base<T>::example<int>(); // C7510: 'example': use of dependent
            // template name must be prefixed with 'template'
            // note: see reference to class template instantiation
            // 'X<T>' being compiled
    }
};
```

To fix the error, add the **`template`** keyword to the `Base<T>::example<int>();` statement, as shown in the following example:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        // Add template keyword here:
        Base<T>::template example<int>();
    }
};
```

## <a name="improvements_159"></a> Conformance improvements in 15.9

### Left-to-right evaluation order for operators `->*`, `[]`, `>>`, and `<<`

Starting in C++17, the operands of the operators `->*`, `[]`, `>>`, and `<<` must be evaluated in left-to-right order. There are two cases in which the compiler is unable to guarantee this order:

- when one of the operand expressions is an object passed by value or contains an object passed by value, or

- when compiled by using **`/clr`**, and one of the operands is a field of an object or an array element.

The compiler emits warning [C4866](../error-messages/compiler-warnings/c4866.md) when it can't guarantee left-to-right evaluation. The compiler generates this warning only if **`/std:c++17`** or later is specified, as the left-to-right order requirement of these operators was introduced in C++17.

To resolve this warning, first consider whether left-to-right evaluation of the operands is necessary. For example, it could be necessary when evaluation of the operands might produce order-dependent side-effects. The order in which operands are evaluated has no observable effect in many cases. If the order of evaluation must be left-to-right, consider whether you can pass the operands by const reference instead. This change eliminates the warning in the following code sample:

```cpp
// C4866.cpp
// compile with: /w14866 /std:c++17

class HasCopyConstructor
{
public:
    int x;

    HasCopyConstructor(int x) : x(x) {}
    HasCopyConstructor(const HasCopyConstructor& h) : x(h.x) { }
};

int operator>>(HasCopyConstructor a, HasCopyConstructor b) { return a.x >> b.x; }

// This version of operator>> does not trigger the warning:
// int operator>>(const HasCopyConstructor& a, const HasCopyConstructor& b) { return a.x >> b.x; }

int main()
{
    HasCopyConstructor a{ 1 };
    HasCopyConstructor b{ 2 };

    a>>b;        // C4866 for call to operator>>
};
```

### Identifiers in member alias templates

An identifier used in a member alias template definition must be declared before use.

In previous versions of the compiler, the following code was allowed. In Visual Studio 2017 version 15.9, in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode, the compiler raises [C3861](../error-messages/compiler-errors-2/compiler-error-c3861.md):

```cpp
template <typename... Ts>
struct A
{
  public:
    template <typename U>
    using from_template_t = decltype(from_template(A<U>{})); // C3861:
        // 'from_template': identifier not found

  private:
    template <template <typename...> typename Type, typename... Args>
    static constexpr A<Args...> from_template(A<Type<Args...>>);
};

A<>::from_template_t<A<int>> a;
```

To fix the error, declare `from_template` before `from_template_t`.

### Modules changes

In Visual Studio 2017, version 15.9, the compiler raises [C5050](../error-messages/compiler-warnings/c5050.md) whenever the command-line options for modules aren't consistent between the module creation and module consumption sides. In the following example, there are two issues:

- On the consumption side (main.cpp), the option **`/EHsc`** isn't specified.

- The C++ version is **`/std:c++17`** on the creation side, and **`/std:c++14`** on the consumption side.

```cmd
cl /EHsc /std:c++17 m.ixx /experimental:module
cl /experimental:module /module:reference m.ifc main.cpp /std:c++14
```

The compiler raises C5050 for both of these cases:

```Output
warning C5050: Possible incompatible environment while
importing module 'm': mismatched C++ versions.
Current "201402" module version "201703".
```

The compiler also raises [C7536](../error-messages/compiler-errors-2/compiler-error-c7536.md) whenever the *`.ifc`* file has been tampered with. The header of the module interface contains an SHA2 hash of the contents below it. On import, the *`.ifc`* file is hashed, then checked against the hash provided in the header. If these don't match, error C7536 is raised:

```Output
error C7536: ifc failed integrity checks.
Expected SHA2: '66d5c8154df0c71d4cab7665bab4a125c7ce5cb9a401a4d8b461b706ddd771c6'
```

### Partial ordering involving aliases and non-deduced contexts

Implementations diverge in the partial ordering rules involving aliases in non-deduced contexts. In the following example, GCC and the Microsoft C++ compiler (in [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode) raise an error, while Clang accepts the code.

```cpp
#include <utility>
using size_t = std::size_t;

template <typename T>
struct A {};
template <size_t, size_t>
struct AlignedBuffer {};
template <size_t len>
using AlignedStorage = AlignedBuffer<len, 4>;

template <class T, class Alloc>
int f(Alloc &alloc, const AlignedStorage<T::size> &buffer)
{
    return 1;
}

template <class T, class Alloc>
int f(A<Alloc> &alloc, const AlignedStorage<T::size> &buffer)
{
    return 2;
}

struct Alloc
{
    static constexpr size_t size = 10;
};

int main()
{
    A<void> a;
    AlignedStorage<Alloc::size> buf;
    if (f<Alloc>(a, buf) != 2)
    {
        return 1;
    }

    return 0;
}
```

The previous example raises [C2668](../error-messages/compiler-errors-2/compiler-error-c2668.md):

```Output
partial_alias.cpp(32): error C2668: 'f': ambiguous call to overloaded function
partial_alias.cpp(18): note: could be 'int f<Alloc,void>(A<void> &,const AlignedBuffer<10,4> &)'
partial_alias.cpp(12): note: or       'int f<Alloc,A<void>>(Alloc &,const AlignedBuffer<10,4> &)'
        with
        [
            Alloc=A<void>
        ]
partial_alias.cpp(32): note: while trying to match the argument list '(A<void>, AlignedBuffer<10,4>)'
```

The implementation divergence is because of a regression in the C++ standard wording. The resolution to core issue 2235 removed some text that would allow these overloads to be ordered. The current C++ standard doesn't provide a mechanism to partially order these functions, so they're considered ambiguous.

As a workaround, we recommended that you not rely on partial ordering to resolve this problem. Instead, use SFINAE to remove particular overloads. In the following example, we use a helper class `IsA` to remove the first overload when `Alloc` is a specialization of `A`:

```cpp
#include <utility>
using size_t = std::size_t;

template <typename T>
struct A {};
template <size_t, size_t>
struct AlignedBuffer {};
template <size_t len>
using AlignedStorage = AlignedBuffer<len, 4>;

template <typename T> struct IsA : std::false_type {};
template <typename T> struct IsA<A<T>> : std::true_type {};

template <class T, class Alloc, typename = std::enable_if_t<!IsA<Alloc>::value>>
int f(Alloc &alloc, const AlignedStorage<T::size> &buffer)
{
    return 1;
}

template <class T, class Alloc>
int f(A<Alloc> &alloc, const AlignedStorage<T::size> &buffer)
{
    return 2;
}

struct Alloc
{
    static constexpr size_t size = 10;
};

int main()
{
    A<void> a;
    AlignedStorage<Alloc::size> buf;
    if (f<Alloc>(a, buf) != 2)
    {
        return 1;
    }

    return 0;
}
```

### Illegal expressions and non-literal types in templated function definitions

Illegal expressions and non-literal types are now correctly diagnosed in the definitions of templated functions that are explicitly specialized. Previously, such errors weren't emitted for the function definition. However, the illegal expression or non-literal type would still have been diagnosed if evaluated as part of a constant expression.

In previous versions of Visual Studio, the following code compiles without warning:

```cpp
void g();

template<typename T>
struct S
{
    constexpr void f();
};

template<>
constexpr void S<int>::f()
{
    g(); // C3615 in 15.9
}
```

In Visual Studio 2017 version 15.9, the code raises error [C3615](../error-messages/compiler-errors-2/compiler-error-c3615.md):

```Output
error C3615: constexpr function 'S<int>::f' cannot result in a constant expression.
note: failure was caused by call of undefined function or one not declared 'constexpr'
note: see usage of 'g'.
```

To avoid the error, remove the **`constexpr`** qualifier from the explicit instantiation of the function `f()`.

## See also

[Microsoft C/C++ language conformance](./visual-cpp-language-conformance.md)
