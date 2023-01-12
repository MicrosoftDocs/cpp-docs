---
title: "/permissive- (Standards conformance)"
description: "Reference guide to the Microsoft C++ /permissive- (Standards conformance) compiler option."
ms.date: 12/14/2022
f1_keywords: ["/permissive", "VC.Project.VCCLCompilerTool.ConformanceMode"]
helpviewer_keywords: ["/permissive compiler options [C++]", "-permissive compiler options [C++]", "Standards conformance compiler options", "permissive compiler options [C++]"]
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
---
# `/permissive-` (Standards conformance)

Specify standards conformance mode to the compiler. Use this option to help you identify and fix conformance issues in your code, to make it both more correct and more portable.

## Syntax

> **`/permissive-`**\
> **`/permissive`**

## Remarks

The **`/permissive-`** option is supported in Visual Studio 2017 and later. **`/permissive`** is supported in Visual Studio 2019 version 16.8 and later.

You can use the **`/permissive-`** compiler option to specify standards-conforming compiler behavior. This option disables permissive behaviors, and sets the [`/Zc`](zc-conformance.md) compiler options for strict conformance. In the IDE, this option also makes the IntelliSense engine underline non-conforming code.

The **`/permissive-`** option uses the conformance support in the current compiler version to determine which language constructs are non-conforming. The option doesn't determine if your code conforms to a specific version of the C++ standard. To enable all implemented compiler support for the latest draft standard, use the [`/std:c++latest`](std-specify-language-standard-version.md) option. To restrict the compiler support to the currently implemented C++20 standard, use the [`/std:c++20`](std-specify-language-standard-version.md) option. To restrict the compiler support to the currently implemented C++17 standard, use the [`/std:c++17`](std-specify-language-standard-version.md) option. To restrict the compiler support to more closely match the C++14 standard, use the [`/std:c++14`](std-specify-language-standard-version.md) option, which is the default.

The **`/permissive-`** option is implicitly set by the **`/std:c++latest`** option starting in Visual Studio 2019 version 16.8, and in version 16.11 by the **`/std:c++20`** option. **`/permissive-`** is required for C++20 Modules support. Perhaps your code doesn't need modules support but requires other features enabled under **`/std:c++20`** or **`/std:c++latest`**. You can explicitly enable Microsoft extension support by using the **`/permissive`** option without the trailing dash. The **`/permissive`** option must come after any option that sets **`/permissive-`** implicitly.

By default, the **`/permissive-`** option is set in new projects created by Visual Studio 2017 version 15.5 and later versions. It's not set by default in earlier versions. When the option is set, the compiler generates diagnostic errors or warnings when non-standard language constructs are detected in your code. These constructs include some common bugs in pre-C++11 code.

The **`/permissive-`** option is compatible with almost all of the header files from the latest Windows Kits, such as the Software Development Kit (SDK) or Windows Driver Kit (WDK), starting in the Windows Fall Creators SDK (10.0.16299.0). Older versions of the SDK may fail to compile under **`/permissive-`** for various source code conformance reasons. The compiler and SDKs ship on different release timelines, so there are some remaining issues. For specific header file issues, see [Windows header issues](#windows-header-issues) below.

The **`/permissive-`** option sets the [`/Zc:referenceBinding`](zc-referencebinding-enforce-reference-binding-rules.md), [`/Zc:strictStrings`](zc-strictstrings-disable-string-literal-type-conversion.md), and [`/Zc:rvalueCast`](zc-rvaluecast-enforce-type-conversion-rules.md) options to conforming behavior. These options default to non-conforming behavior. You can pass specific **`/Zc`** options after **`/permissive-`** on the command line to override this behavior.

In versions of the compiler beginning in Visual Studio 2017 version 15.3, the **`/permissive-`** option sets the [`/Zc:ternary`](zc-ternary.md) option. The compiler also implements more of the requirements for two-phase name look-up. When the **`/permissive-`** option is set, the compiler parses function and class template definitions, and identifies dependent and non-dependent names used in the templates. In this release, only name dependency analysis is performed.

Environment-specific extensions and language areas that the standard leaves up to the implementation aren't affected by **`/permissive-`**. For example, the Microsoft-specific **`__declspec`**, calling convention and structured exception handling keywords, and compiler-specific `pragma` directives or attributes aren't flagged by the compiler in **`/permissive-`** mode.

The MSVC compiler in earlier versions of Visual Studio 2017 doesn't support all C++11, C++14, or C++17 standards-conforming code. Depending on the version of Visual Studio, the **`/permissive-`** option may not detect issues in some aspects of two-phase name lookup, binding a non-const reference to a temporary, treating copy init as direct init, allowing multiple user-defined conversions in initialization, or alternative tokens for logical operators, and other non-supported conformance areas. For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md). To get the most out of **`/permissive-`**, update Visual Studio to the latest version.

### How to fix your code

Here are some examples of code that is detected as non-conforming when you use **`/permissive-`**, along with suggested ways to fix the issues.

#### Use `default` as an identifier in native code

```cpp
void func(int default); // Error C2321: 'default' is a keyword, and
                        // cannot be used in this context
```

#### Look up members in dependent base

```cpp
template <typename T>
struct B
{
    void f() {}
    template <typename U>
    struct S { void operator()(){ return; } };
};

template <typename T>
struct D : public B<T> // B is a dependent base because its type
                       // depends on the type of T.
{
    // One possible fix for non-template members and function
    // template members is a using statement:
    // using B<T>::f;
    // If it's a type, don't forget the 'typename' keyword.

    void g()
    {
        f(); // error C3861: 'f': identifier not found
        // Another fix is to change the call to 'this->f();'
    }

    void h()
    {
        S<int> s; // C2065 or C3878
        // Since template S is dependent, the type must be qualified
        // with the `typename` keyword.
        // To fix, replace the declaration of s with:
        // typename B<T>::template S<int> s;
        // Or, use this:
        // typename D::template S<int> s;
        s();
    }
};

void h() {
    D<int> d;
    d.g();
    d.h();
}
```

#### Use of qualified names in member declarations

```cpp
struct A {
    void A::f() { } // error C4596: illegal qualified name in member
                    // declaration.
                    // Remove redundant 'A::' to fix.
};
```

#### Initialize multiple union members in a member initializer

```cpp
union U
{
    U()
        : i(1), j(1) // error C3442: Initializing multiple members of
                     // union: 'U::i' and 'U::j'.
                     // Remove all but one of the initializations to fix.
    {}
    int i;
    int j;
};
```

#### Hidden friend name lookup rules

A declaration outside a class can make a hidden friend visible:

```cpp
// Example 1
struct S {
    friend void f(S *);
};
// Uncomment this declaration to make the hidden friend visible:
// void f(S *); // This declaration makes the hidden friend visible

using type = void (*)(S *);
type p = &f; // error C2065: 'f': undeclared identifier.
```

Use of literal `nullptr` can prevent argument dependent lookup:

```cpp
// Example 2
struct S {
    friend void f(S *);
};
void g() {
    // Using nullptr instead of S prevents argument dependent lookup in S
    f(nullptr); // error C3861: 'f': identifier not found

    S *p = nullptr;
    f(p); // Hidden friend now found via argument-dependent lookup.
}
```

You can enable the hidden friend name lookup rules independently of **`/permissive`** by using [`/Zc:hiddenFriend`](./zc-hiddenfriend.md). If you want legacy behavior for hidden friend name lookup, but otherwise want **`/permissive-`** behavior, use the **`/Zc:hiddenFriend-`** option.

#### Use scoped enums in array bounds

```cpp
enum class Color {
    Red, Green, Blue
};

int data[Color::Blue]; // error C3411: 'Color' is not valid as the size
                       // of an array as it is not an integer type.
                       // Cast to type size_t or int to fix.
```

#### Use for each in native code

```cpp
void func() {
    int array[] = {1, 2, 30, 40};
    for each (int i in array) // error C4496: nonstandard extension
                              // 'for each' used: replace with
                              // ranged-for statement:
                              // for (int i: array)
    {
        // ...
    }
}
```

#### Use of ATL attributes

Microsoft-specific ATL attributes can cause issues under **`/permissive-`**:

```cpp
// Example 1
[uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]
class A {};
```

You can fix the issue by using the **`__declspec`** form instead:

```cpp
// Fix for example 1
class __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) B {};
```

A more complex example:

```cpp
// Example 2
[emitidl];
[module(name="Foo")];

[object, local, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
__interface ICustom {
    HRESULT Custom([in] longl, [out, retval] long*pLong);
    [local] HRESULT CustomLocal([in] longl, [out, retval] long*pLong);
};

[coclass, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
class CFoo : public ICustom
{};
```

Resolution requires extra build steps. In this case, create an IDL file:

```cpp
// Fix for example 2
// First, create the *.idl file. The vc140.idl generated file can be
// used to automatically obtain a *.idl file for the interfaces with
// annotation. Second, add a midl step to your build system to make
// sure that the C++ interface definitions are outputted.
// Last, adjust your existing code to use ATL directly as shown in
// the atl implementation section.

-- IDL  FILE--
import "docobj.idl";

[object, local, uuid(9e66a290-4365-11d2-a997-00c04fa37ddb)]
interface ICustom : IUnknown {
    HRESULT Custom([in] longl, [out,retval] long*pLong);
    [local] HRESULT CustomLocal([in] longl, [out,retval] long*pLong);
};

[ version(1.0), uuid(29079a2c-5f3f-3325-99a1-3ec9c40988bb) ]
library Foo {
    importlib("stdole2.tlb");
    importlib("olepro32.dll");

    [version(1.0), appobject, uuid(9e66a294-4365-11d2-a997-00c04fa37ddb)]
    coclass CFoo { interface ICustom; };
}

-- ATL IMPLEMENTATION--
#include <idl.header.h>
#include <atlbase.h>

class ATL_NO_VTABLE CFooImpl : public ICustom,
    public ATL::CComObjectRootEx<CComMultiThreadModel>
{
    public:BEGIN_COM_MAP(CFooImpl)
    COM_INTERFACE_ENTRY(ICustom)
    END_COM_MAP()
};
```

#### Ambiguous conditional operator arguments

In versions of the compiler before Visual Studio 2017 version 15.3, the compiler accepted arguments to the conditional operator (or ternary operator) `?:` that are considered ambiguous by the Standard. In **`/permissive-`** mode, the compiler now issues one or more diagnostics in cases that compiled without diagnostics in earlier versions.

Common errors that may result from this change include:

- `error C2593: 'operator ?' is ambiguous`

- `error C2679: binary '?': no operator found which takes a right-hand operand of type 'B' (or there is no acceptable conversion)`

- `error C2678: binary '?': no operator found which takes a left-hand operand of type 'A' (or there is no acceptable conversion)`

- `error C2446: ':': no conversion from 'B' to 'A'`

A typical code pattern that can cause this issue is when some class `C` provides both a non-explicit constructor from another type `T` and a non-explicit conversion operator to type `T`. The conversion of the second argument to the third argument's type is a valid conversion. So is the conversion of the third argument to the second argument's type. Since both are valid, it's ambiguous according to the standard.

```cpp
// Example 1: class that provides conversion to and initialization from some type T
struct A
{
    A(int);
    operator int() const;
};

extern bool cond;

A a(42);
// Accepted when /Zc:ternary or /permissive- is not used:
auto x = cond ? 7 : a; // A: permissive behavior prefers A(7) over (int)a
// Accepted always:
auto y = cond ? 7 : int(a);
auto z = cond ? A(7) : a;
```

There's an important exception to this common pattern when T represents one of the null-terminated string types (for example, `const char *`, `const char16_t *`, and so on) and the actual argument to `?:` is a string literal of corresponding type. C++17 has changed semantics from C++14. As a result, the code in example 2 is accepted under **`/std:c++14`** and rejected under **`/std:c++17`** or later when **`/Zc:ternary`** or **`/permissive-`** is used.

```cpp
// Example 2: exception from the above
struct MyString
{
    MyString(const char* s = "") noexcept;  // from char*
    operator const char* () const noexcept; //   to char*
};

extern bool cond;

MyString s;
// Using /std:c++14, /permissive- or /Zc:ternary behavior
// is to prefer MyString("A") over (const char*)s
// but under /std:c++17 this line causes error C2445:
auto x = cond ? "A" : s;
// You can use a static_cast to resolve the ambiguity:
auto y = cond ? "A" : static_cast<const char*>(s);
```

You may also see errors in conditional operators with one argument of type **`void`**. This case may be common in ASSERT-like macros.

```cpp
// Example 3: void arguments
void myassert(const char* text, const char* file, int line);
// Accepted when /Zc:ternary or /permissive- is not used:
#define ASSERT_A(ex) (void)((ex) ? 1 : myassert(#ex, __FILE__, __LINE__))
// Accepted always:
#define ASSERT_B(ex) (void)((ex) ? void() : myassert(#ex, __FILE__, __LINE__))
```

You may also see errors in template metaprogramming, where conditional operator result types may change under **`/Zc:ternary`** and **`/permissive-`**. One way to resolve this issue is to use [`std::remove_reference`](../../standard-library/remove-reference-class.md) on the resulting type.

```cpp
// Example 4: different result types
extern bool cond;
extern int count;
char  a = 'A';
const char  b = 'B';
decltype(auto) x = cond ? a : b; // char without, const char& with /Zc:ternary
const char (&z)[2] = count > 3 ? "A" : "B"; // const char* without /Zc:ternary
```

#### Two-phase name look-up

When the **`/permissive-`** option is set, the compiler parses function and class template definitions, identifying dependent and non-dependent names used in templates as required for two-phase name look-up. In Visual Studio 2017 version 15.3, name dependency analysis is performed. In particular, non-dependent names that aren't declared in the context of a template definition cause a diagnostic message as required by the ISO C++ standards. In Visual Studio 2017 version 15.7, binding of non-dependent names that require argument-dependent look-up in the definition context is also done.

```cpp
// dependent base
struct B {
    void g() {}
};

template<typename T>
struct D : T {
    void f() {
        // The call to g was incorrectly allowed in VS2017:
        g();  // Now under /permissive-: C3861
        // Possible fixes:
        // this->g();
        // T::g();
    }
};

int main()
{
    D<B> d;
    d.f();
}
```

If you want legacy behavior for two-phase lookup, but otherwise want **`/permissive-`** behavior, add the **`/Zc:twoPhase-`** option.

### Windows header issues

The **`/permissive-`** option is too strict for versions of the Windows Kits before Windows Fall Creators Update SDK (10.0.16299.0), or the Windows Driver Kit (WDK) version 1709. We recommend you update to the latest versions of the Windows Kits to use **`/permissive-`** in your Windows or device driver code.

Certain header files in the Windows April 2018 Update SDK (10.0.17134.0), the Windows Fall Creators Update SDK (10.0.16299.0), or the Windows Driver Kit (WDK) 1709, still have issues that make them incompatible with use of **`/permissive-`**. To work around these issues, we recommend you restrict the use of these headers to only those source code files that require them, and remove the **`/permissive-`** option when you compile those specific source code files.

These WinRT WRL headers released in the Windows April 2018 Update SDK (10.0.17134.0) aren't clean with **`/permissive-`**. To work around these issues, either don't use **`/permissive-`**, or use **`/permissive-`** with **`/Zc:twoPhase-`** when you work with these headers:

- Issues in *`winrt/wrl/async.h`*

   ```Output
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(483): error C3861: 'TraceDelegateAssigned': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(491): error C3861: 'CheckValidStateForDelegateCall': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(509): error C3861: 'TraceProgressNotificationStart': identifier not found
   C:\Program Files (x86)\Windows Kits\10\Include\10.0.17134.0\winrt\wrl\async.h(513): error C3861: 'TraceProgressNotificationComplete': identifier not found
   ```

- Issue in *`winrt/wrl/implements.h`*

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\winrt\wrl\implements.h(2086): error C2039: 'SetStrongReference': is not a member of 'Microsoft::WRL::Details::WeakReferenceImpl'
   ```

These User Mode headers released in the Windows April 2018 Update SDK (10.0.17134.0) aren't clean with **`/permissive-`**. To work around these issues, don't use **`/permissive-`** when working with these headers:

- Issues in *`um/Tune.h`*

   ```Output
   C:\ProgramFiles(x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(139): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(559): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): error C3861: 'Release': identifier not found
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\tune.h(1240): note: 'Release': function declaration must be available as none of the arguments depend on a template parameter
   ```

- Issue in *`um/spddkhlp.h`*

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\spddkhlp.h(759): error C3861: 'pNode': identifier not found
   ```

- Issues in *`um/refptrco.h`*

   ```Output
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(179): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(342): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   C:\Program Files (x86)\Windows Kits\10\include\10.0.17134.0\um\refptrco.h(395): error C2760: syntax error: unexpected token 'identifier', expected 'type specifier'
   ```

These issues are specific to User Mode headers in the Windows Fall Creators Update SDK (10.0.16299.0):

- Issue in *`um/Query.h`*

   When you use the **`/permissive-`**  compiler switch, the `tagRESTRICTION` structure doesn't compile because of the `case(RTOr)` member `or`.

   ```cpp
   struct tagRESTRICTION
   {
       ULONG rt;
       ULONG weight;
       /* [switch_is][switch_type] */ union _URes
       {
           /* [case()] */ NODERESTRICTION ar;
           /* [case()] */ NODERESTRICTION or;  // error C2059: syntax error: '||'
           /* [case()] */ NODERESTRICTION pxr;
           /* [case()] */ VECTORRESTRICTION vr;
           /* [case()] */ NOTRESTRICTION nr;
           /* [case()] */ CONTENTRESTRICTION cr;
           /* [case()] */ NATLANGUAGERESTRICTION nlr;
           /* [case()] */ PROPERTYRESTRICTION pr;
           /* [default] */  /* Empty union arm */
       } res;
   };
   ```

   To address this issue, compile files that include *`Query.h`* without the **`/permissive-`** option.

- Issue in *`um/cellularapi_oem.h`*

   When you use the **`/permissive-`** compiler switch, the forward declaration of `enum UICCDATASTOREACCESSMODE` causes a warning:

   ```cpp
   typedef enum UICCDATASTOREACCESSMODE UICCDATASTOREACCESSMODE; // C4471
   ```

   The forward declaration of an unscoped `enum` is a Microsoft extension. To address this issue, compile files that include *`cellularapi_oem.h`* without the **`/permissive-`** option, or use the [`/wd`](compiler-option-warning-level.md) option to silence warning C4471.

- Issue in *`um/omscript.h`*

   In C++03, a conversion from a string literal to `BSTR` (which is a typedef to `wchar_t *`) is deprecated but allowed. In C++11, the conversion is no longer allowed.

   ```cpp
   virtual /* [id] */ HRESULT STDMETHODCALLTYPE setExpression(
       /* [in] */ __RPC__in BSTR propname,
       /* [in] */ __RPC__in BSTR expression,
       /* [in][defaultvalue] */ __RPC__in BSTR language = L"") = 0; // C2440
   ```

   To address this issue, compile files that include omscript.h without the **`/permissive-`** option, or use **`/Zc:strictStrings-`** instead.

### To set this compiler option in the Visual Studio development environment

In Visual Studio 2017 version 15.5 and later versions, use this procedure:

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **Language** property page.

1. Change the **Conformance mode** property value to **Yes (/permissive-)**. Choose **OK** or **Apply** to save your changes.

In versions before Visual Studio 2017 version 15.5, use this procedure:

1. Open your project's **Property Pages** dialog box.

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Enter the **/permissive-** compiler option in the **Additional Options** box. Choose **OK** or **Apply** to save your changes.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)\
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
