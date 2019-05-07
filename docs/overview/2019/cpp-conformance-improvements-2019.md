---
title: "C++ conformance improvements"
ms.date: "05/07/2019"
ms.technology: "cpp-language"
author: "mikeblome"
ms.author: "mblome"
---
# C++ conformance improvements in Visual Studio 2019 RTW and version [16.1](#improvements_161)

## Improvements in Visual Studio 2019 RTW

Visual Studio 2019 RTW contains the following conformance improvements, bug fixes and behavior changes in the Microsoft C++ compiler (MSVC).

**Note:** C++20 features will be made available in `/std:c++latest` mode until the C++20 implementation is complete for both the compiler and IntelliSense. At that time, the `/std:c++20` compiler mode will be introduced.

## Conformance improvements

### Improved modules support for templates and error detection

Modules are now officially in the C++20 standard. Improved support was added in Visual Studio 2017 version 15.9. For more information, see [Better template support and error detection in C++ Modules with MSVC 2017 version 15.9](https://devblogs.microsoft.com/cppblog/better-template-support-and-error-detection-in-c-modules-with-msvc-2017-version-15-9/).

### Modified specification of aggregate type

The specification of an aggregate type has changed in C++20 (see [Prohibit aggregates with user-declared constructors](http://wg21.link/p1008r1)). In Visual Studio 2019, under `/std:c++latest`, a class with any user-declared constructor (e.g. including a constructor declared `= default` or `= delete`) is not an aggregate. Previously, only user-provided constructors would disqualify a class from being an aggregate. This change puts additional restrictions on how such types can be initialized.

The following code compiles without errors in Visual Studio 2017 but raises errors C2280 and C2440 in Visual Studio 2019 under `/std:c++latest`:

```cpp
struct A
{
    A() = delete; // user-declared ctor
};

struct B
{
    B() = default; // user-declared ctor
    int i = 0;
};

A a{}; // ill-formed in C++20, previously well-formed
B b = { 1 }; // ill-formed in C++20, previously well-formed
```

### Partial support for operator <=>

C++20 introduces the `<=>` three-way comparison operator, also known as the "spaceship operator". Visual Studio 2019 in `/std:c++latest` mode introduces partial support for the operator by raising errors for syntax that is now disallowed. For example, the following code compiles without errors in Visual Studio 2017 but raises multiple errors in Visual Studio 2019 under `/std:c++latest`:

```cpp
struct S
{
       bool operator<=(const S&) const { return true; }
};

template <bool (S::*)(const S&) const>
struct U { };
int main(int argc, char** argv)
{
       U<&S::operator<=> u; // In Visual Studio 2019 raises C2039, 2065, 2146.
}
```

To avoid the errors, insert a space in the offending line before the final bracket: `U<&S::operator<= > u;`.

### References to types with mismatched cv-qualifiers

MSVC previously allowed direct binding of a reference from a type with mismatched cv-qualifiers below the top level. This could allow modification of supposedly const data referred to by the reference, and the compiler now creates a temporary as required by the standard. In Visual Studio 2017, the following code compiles without warnings. In Visual Studio 2019, the compiler raises *warning C4172: \<func:#1 "?PData@X@@QBEABQBXXZ"> returning address of local variable or temporary*.

```cpp
struct X
{
    const void* const& PData() const
    {
        return _pv;
    }

    void* _pv;
};

int main()
{
    X x;
    auto p = x.PData(); // C4172
}
```
### `reinterpret_cast` from an overloaded function

The argument to `reinterpret_cast` is not one of the contexts in which the address of an overloaded function is permitted. The following code compiles without errors in Visual Studio 2017, but in Visual Studio 2019 it raises *C2440: cannot convert from 'overloaded-function' to 'fp'*:

```cpp
int f(int) { return 1; }
int f(float) { return .1f; }
using fp = int(*)(int);

int main()
{
    fp r = reinterpret_cast<fp>(&f);
}
```

To avoid the error, use an allowed cast for this scenario:

```cpp
int f(int);
int f(float);
using fp = int(*)(int);

int main()
{
    fp r = static_cast<fp>(&f); // or just &f;
}
```

### Lambda closures

In C++14, lambda closure types are not literal. The primary consequence of this rule is that a lambda may not be assigned to a `constexpr` variable. The following code compiles without errors in Visual Studio 2017 but in Visual Studio 2019 it raises *C2127: 'l': illegal initialization of 'constexpr' entity with a non-constant expression* :

```cpp
int main()
{
    constexpr auto l = [] {}; // C2127 in VS2019
}
```

To avoid the error, either remove the `constexpr` qualifier, or else change the conformance mode to `/std:c++17`.

## Bug fixes and behavior changes

### Correct diagnostics for basic_string range constructor

In Visual Studio 2019, the `basic_string` range constructor no longer suppresses compiler diagnostics with `static_cast`. The following code compiles without warnings in Visual Studio 2017, despite the possible loss of data from `wchar_t` to `char` when initializing `out`:

```cpp
std::wstring ws = /* … */;
std::string out(ws.begin(), ws.end());
```

Visual Studio 2019 correctly raises *C4244: 'argument': conversion from 'wchar_t' to 'const _Elem', possible loss of data*. To avoid the warning, you can initialize the std::string as shown in this example:

```cpp
std::wstring ws = L"Hello world";
std::string out;
for (wchar_t ch : ws)
{
    out.push_back(static_cast<char>(ch));
}
```

### Incorrect calls to += and -= under /clr or /ZW are now correctly detected.

A bug was introduced in Visual Studio 2017 which caused the compiler to silently ignore errors and generate no code for the invalid calls to += and -= under `/clr` or `/ZW`. The following code compiles without errors in Visual Studio 2017 but in Visual Studio 2019 it correctly raises *error C2845: 'System::String ^': pointer arithmetic not allowed on this type*:

```cpp
public enum class E { e };

void f(System::String ^s)
{
    s += E::e; // C2845 in VS2019
}
```
To avoid the error in this example, use the operator with the ToString() method: `s += E::e.ToString();`.

### Initializers for inline static data members

Invalid member accesses within `inline` and `static constexpr` initializers are now correctly detected. The following example compiles without error in Visual Studio 2017, but in Visual Studio 2019 under `/std:c++17` mode it raises *error C2248: cannot access private member declared in class 'X'*.

```cpp
struct X
{
    private:
        static inline const int c = 1000;
};

struct Y : X
{
    static inline int d = c; // C2248 in Visual Studio 2019
};
```

To avoid the error, declare the member `X::c` as protected:

```cpp
struct X
{
    protected:
        static inline const int c = 1000;
};
```
### C4800 reinstated

MSVC used to have a performance warning C4800 about implicit conversion to bool that was too noisy and insuppressible, leading us to remove it in VS 2017. However, over the lifecycle of VS 2017 we got a lot of feedback on the useful cases it was solving. We bring back in Visual Studio 2019 a carefully tailored C4800 along with its accompanying C4165, both of which can be easily suppressed with either an explicit cast or comparison to 0 of the appropriate type. C4800 is an off-by-default level 4 warning, and C4165 is an off-by-default level 3 warning. Both are discoverable by using the `/Wall` compiler option.

The following example raises C4800 and C4165 under `/Wall`:

```cpp
bool test(IUnknown* p)
{
    bool valid = p; // warning C4800: Implicit conversion from 'IUnknown*' to bool. Possible information loss
    IDispatch* d = nullptr;
    HRESULT hr = p->QueryInterface(__uuidof(IDispatch), reinterpret_cast<void**>(&d));
    return hr; // warning C4165: 'HRESULT' is being converted to 'bool'; are you sure this is what you want?
}
```
To avoid the warnings in the previous example, you can write the code like this:

```cpp
bool test(IUnknown* p)
{
    bool valid = p != nullptr; // OK
    IDispatch* d = nullptr;
    HRESULT hr = p->QueryInterface(__uuidof(IDispatch), reinterpret_cast<void**>(&d));
    return SUCCEEDED(hr);  // OK
}
```

### Local class member function doesn't have a body

In Visual Studio 2017, *C4822: Local class member function doesn't have a body* is raised only when compiler option `/w14822` is explicitly set; it isn't shown with `/Wall`. In Visual Studio 2019, C4822 is an off-by-default warning, which makes it discoverable under `/Wall` without having to set `/w14822` explicitly.

```cpp
void foo()
{
    struct A
        {
            int boo(); // warning C4822
        };
}
```

### /clr now incompatible with /std:c++latest

As MSVC begins implementing features from the C++20 standard draft under the `/std:c++latest` flag, `/std:c++latest` is now incompatible with `/clr` (all flavors), `/ZW`, and `/Gm`. In Visual Studio 2019, use `/std:c++17` or `/std:c++14` modes when compiling with `/clr`, `/ZW` or `/Gm`.

### Function template bodies containing constexpr if statements

Template function bodies containing `if constexpr` statements have some `/permissive-` parsing-related checks enabled. For example, in Visual Studio 2017 the following code produces C*7510: 'Type': use of dependent type name must be prefixed with 'typename'* only if the `/permissive-` option is not set. In Visual Studio 2019 the same code raises errors whether or not the `/permissive-` option is set:

```cpp
template <typename T>

int f()
{
    T::Type a; // error C7510

    if constexpr (T::val)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

struct X
{
    using Type = X;
    constexpr static int val = 1;
};

int main()
{
    return f<X>();
}

```

To avoid the error, add the `typename` keyword to the declaration of `a`: `typename T::Type a;`.

### Inline assembly code is not supported in a lambda expression

The Visual C++ team was recently made aware of a security issue in which the use of inline-assembler within a lambda could lead to the corruption of 'ebp' (the return address register) at runtime. A malicious attacker might be able to take advantage of this scenario. Given the nature of the issue, the fact that inline assembler is only supported on x86, and the poor interaction of the inline assembler with the rest of the compiler it was felt that the safest solution to this problem was disallow inline assembler within a lambda expression.

Note: the only use of inline assembler within a lambda expression that we have encountered in the 'wild' was a use in which the aim was to capture the return address. In this scenario, you can capture the return address on all platforms simply by using a compiler intrinsic `_ReturnAddress()`.

The following code produces *C7552: inline assembler is not supported in a lambda* in both Visual Studio 2017 15.9 and in Visual Studio 2019:

```cpp
#include <cstdio>

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;

    auto lambda = [&]
    {
        __asm {

            mov eax, x
            mov y, eax
        }
    };

    lambda();
    return y;
}
```

To avoid the error, move the assembly code into a named function as shown in the following example:

```cpp
#include <cstdio>

void g(int& x, int& y)
{
    __asm {
        mov eax, x
        mov y, eax
    }
}

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;
    auto lambda = [&]
    {
        g(x, y);
    };
    lambda();
    return y;
}

int main()
{
    std::printf("%d\n", f());
}
```

## <a name="improvements_161"></a> Improvements in Visual Studio 2019 version 16.1

### char8_t

C++20 adds new character type that is used to represent UTF-8 code units. u8 string literals in C++20 have type `const char8_t[N]` instead of `const char[N]`, which was the case up until C++17 [P0482r6](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0482r6.html). The C standard makes similar changes [N2231](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n2231.htm). Suggestions for char8_t backward compatibility remediation are given in [P1423r0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p1423r0.html). The Microsoft C++ compiler adds support for char8_t in Visual Studio 2019 version 16.1 when you specify the **/Zc:char8_t** compiler option. In the future, it will be supported with [/std:c++latest](../../build/reference/std-specify-language-standard-version.md), which can be reverted to C++17 behavior via **/Zc:char8_t-**.


the EDG compiler which powers IntelliSense does not yet support it, so you will see spurious IntelliSense-only errors which do not impact the actual compilation.

#### Example

```cpp
const char* s = u8"Hello"; //C++17
const char8_t* s = u8"Hello"; // C++20
```

### std::type_identity metafunction and std::identity function object

The deprecated std::identity class template extension has been removed, and replaced with the C++20 `std::type_identity` metafunction and `std::identity` function object. Both are available only under [/std:c++latest](../../build/reference/std-specify-language-standard-version.md). 

The following example shows the old usage with the std::identity class:

```cpp
    using T = std::identity<U>::type;
    T x, y = std::identity<T>{}(x);
    int x = 42;
    long y = std::identity<long>{}(x);
```

@@@@@@TODO@@@@@@ This example shows the ...
TBD: error C2143: syntax error: missing ';' before '<'

```cpp
using T = std::type_identity<U>::type;
T x, y = std::identity{}(x);
int x = 42;
long y = static_cast<long>(x);
```

### Syntax checks for generic lambdas

The new lambda preprocessor enables some conformance-mode syntactic checks in generic lambdas, under [/std:c++latest](../../build/reference/std-specify-language-standard-version.md) or with or with **/experimental:newLambdaProcessor**. 

Before:

```cpp
void f() {
    auto a = [](auto arg) {
        decltype(arg)::Type t;
    };
}
```

After:

```cpp
void f() {
    auto a = [](auto arg) {
        typename decltype(arg)::Type t;
    };
}
```
@@@TODO@@@
error C2760: syntax error: unexpected token '<id-expr>', expected 'id-expression'

### std::atomic conformance

LWG 3012 requires the argument to std::atomic to be copy constructible, move constructible, copy assignable, and move assignable in addition to the previous trivially copyable requirement.

```cpp
struct S {
  S() = default;
  S(const S&) = delete;
  S(S&&) = default;
  S& operator=(const S&) = delete;
  S& operator=(S&) = delete;
};
std::atomic<S> s;
```

After:

```cpp
struct S {
  S() = default;
  S(const S&) = default;
  S(S&&) = default;
  S& operator=(const S&) = default;
  S& operator=(S&) = default;
}; // or simply struct S {};
std::atomic<S> s;
```
@@@TODO@@@ error C2338: atomic<T> requires T to be trivially copyable, copy constructible, move constructible, copy assignable, and move assignable.


### Mac line endings in the editor

'\r' (MacOS line ending) is now recognized in addition to '\r\n' (Windows line ending) and '\n' (Linux line ending). This change is to help compile files with mixed line ending.


```cpp
#include <assert.h>
#include <string.h>

auto s = "
"; // this is not a valid string literal

int main()
{
	assert(strcmp(s, "\r") == 0);
}

(assume '\r' follows 'auto s = "' in the file)

```
After:

```cpp
#include <assert.h>
#include <string.h>

auto s = "\r"; // this is what 's' used to have

int main()
{
	assert(strcmp(s, "\r") == 0);
}
```
@@@TODO@@@ error C2001: newline in constant

## See also

[What's new in Visual Studio 2019](../what-s-new-for-visual-cpp-in-visual-studio.md)