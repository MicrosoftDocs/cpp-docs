---
title: "-permissive- (Standards conformance) | Microsoft Docs"
ms.custom: ""
ms.date: "11/11/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/permissive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/permissive compiler options [C++]"
  - "-permissive compiler options [C++]"
  - "Standards conformance compiler options"
  - "permissive compiler options [C++]"
ms.assetid: db1cc175-6e93-4a2e-9396-c3725d2d8f71
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
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
# /permissive- (Standards conformance)
Specify standards conformance mode to the compiler. Use this option to help you identify and fix conformance issues in your code, to make it both more correct and more portable.  
  
## Syntax  
```
/permissive-  
```  

## Remarks  
  
You can use the **/permissive-** compiler option to specify standards-conforming compiler behavior. This option disables permissive behaviors, and sets the [/Zc](../../build/reference/zc-conformance.md) compiler options for strict conformance. In the IDE, this option also makes the IntelliSense engine underline non-conforming code. 

By default, the **/permissive-** option is not set. When the option is set, the compiler generates diagnostic errors or warnings when non-standard language constructs are detected in your code, including some common bugs in pre-C++11 code.  

The **/permissive-** option sets the [/Zc:strictStrings](../../build/reference/zc-conformance.md) and [/Zc:rvalueCast](../../build/reference/zc-conformance.md) options to conforming behavior. They default to non-conforming behavior. You can pass specific **/Zc** options after **/permissive-** on the command line to override this behavior.  
  
Environment-specific extensions and language areas that the standard leaves up to the implementation are not affected by **/permissive-**. For example, the Microsoft-specific `__declspec`, calling convention and structured exception handling keywords, and compiler-specific pragma directives or attributes are not flagged by the compiler in **/permissive-** mode.  
  
The **/permissive-** option uses the conformance support in the current compiler version to determine which language constructs are non-conforming. The option does not determine if your code conforms to a specific version of the C++ standard. To enable all implemented compiler support for the latest draft standard, use the [/std:latest](../../build/reference/std-specify-language-standard-version.md) option. To restrict the compiler support to more closely match the C++14 standard, use the [/std:c++14](../../build/reference/std-specify-language-standard-version.md) option, which is the default.  

Not all C++11, C++14, or draft C++17 standards-conforming code is supported by the Visual C++ compiler in Visual Studio 2017 RC. The **/permissive-** option may not detect issues regarding two-phase name lookup, binding a non-const reference to a temporary, treating copy init as direct init, allowing multiple user-defined conversions in initialization, or alternative tokens for logical operators, and other non-supported conformance areas. For more information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).  
  
### How to fix your code
Here are some examples of code that is detected as non-conforming when you use **/permissive-**, along with suggested ways to fix the issues.
  
#### Use default as an identifier in native code
```cpp  
void func(int default); // Error C2321: 'default' is a keyword, and 
                        // cannot be used in this context
```  
  
#### Lookup members in dependent base
```cpp  
template <typename T> 
struct B {
    void f();
};

template <typename T> 
struct D : public B<T> // B is a dependent base because its type 
                       // depends on the type of T.
{
    // One possible fix is to uncomment the following line.  
    // If this is a type, don't forget the 'typename' keyword.  
    // using B<T>::f; 
    
    void g() {
        f(); // error C3861: 'f': identifier not found
             // Another fix is to change it to 'this->f();'
    }
};

void h() {
    D<int> d;
    d.g();
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
```cpp  
// Example 2
struct S {
    friend void f(S *);
};
void g() { 
    // Using nullptr instead of S prevents argument dependent lookup in S
    f(nullptr); // error C3861: 'f': identifier not found
    
    S *p = nullptr;
    f(S); // Hidden friend now found via argument-dependent lookup.
} 
```  
  
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
  
#### Use of ATL Attributes
```cpp  
// Example 1
[uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")]
class A {};
```  
```cpp  
// Fix for example 1
class __declspec(uuid("594382D9-44B0-461A-8DE3-E06A3E73C5EB")) B {};
```  
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
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open your project's **Property Pages** dialog box.   
  
2.  Under **Configuration Properties**, expand the **C/C++** folder and choose the **Command Line** property page.  
  
4.  Enter the **/permissive-** compiler option in the **Additional Options** box. Choose **OK** or **Apply** to save your changes. 
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)