---
description: "Learn more about: `__declspec`"
title: "__declspec"
ms.date: "03/21/2019"
f1_keywords: ["__declspec_cpp", "__declspec", "_declspec"]
helpviewer_keywords: ["__declspec keyword [C++]"]
---
# `__declspec`

**Microsoft Specific**

The extended attribute syntax for specifying storage-class information uses the **`__declspec`** keyword, which specifies that an instance of a given type is to be stored with a Microsoft-specific storage-class attribute listed below. Examples of other storage-class modifiers include the **`static`** and **`extern`** keywords. However, these keywords are part of the ANSI specification of the C and C++ languages, and as such are not covered by extended attribute syntax. The extended attribute syntax simplifies and standardizes Microsoft-specific extensions to the C and C++ languages.

## Grammar

*`decl-specifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`__declspec (`**  *`extended-decl-modifier-seq`*  **`)`**

*`extended-decl-modifier-seq`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`extended-decl-modifier`*<sub>opt</sub><br/>
&nbsp;&nbsp;&nbsp;&nbsp;*`extended-decl-modifier`* *`extended-decl-modifier-seq`*

*`extended-decl-modifier`*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`align(`** *number* **`)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`allocate("`** *segname* **`")`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`allocator`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`appdomain`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`code_seg("`** *segname* **`")`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`deprecated`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllimport`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`dllexport`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`jitintrinsic`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`naked`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`noalias`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`noinline`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`noreturn`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`nothrow`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`novtable`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`process`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`property(`** { **`get=`**_get-func-name_ &#124; **`,put=`**_put-func-name_ } **`)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`restrict`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`safebuffers`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`selectany`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`spectre(nomitigation)`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`thread`**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**`uuid("`** *ComObjectGUID* **`")`**

White space separates the declaration modifier sequence. Examples appear in later sections.

Extended attribute grammar supports these Microsoft-specific storage-class attributes: [`align`](../cpp/align-cpp.md), [`allocate`](../cpp/allocate.md), [`allocator`](../cpp/allocator.md), [`appdomain`](../cpp/appdomain.md), [`code_seg`](../cpp/code-seg-declspec.md), [`deprecated`](../cpp/deprecated-cpp.md), [`dllexport`](../cpp/dllexport-dllimport.md), [`dllimport`](../cpp/dllexport-dllimport.md), [`jitintrinsic`](../cpp/jitintrinsic.md), [`naked`](../cpp/naked-cpp.md), [`noalias`](../cpp/noalias.md), [`noinline`](../cpp/noinline.md), [`noreturn`](../cpp/noreturn.md), [`nothrow`](../cpp/nothrow-cpp.md), [`novtable`](../cpp/novtable.md), [`process`](../cpp/process.md), [`restrict`](../cpp/restrict.md), [`safebuffers`](../cpp/safebuffers.md), [`selectany`](../cpp/selectany.md), [`spectre`](../cpp/spectre.md), and [`thread`](../cpp/thread.md). It also supports these COM-object attributes: [`property`](../cpp/property-cpp.md) and [`uuid`](../cpp/uuid-cpp.md).

The **`code_seg`**, **`dllexport`**, **`dllimport`**, **`naked`**, **`noalias`**, **`nothrow`**, **`property`**, **`restrict`**, **`selectany`**, **`thread`**, and **`uuid`** storage-class attributes are properties only of the declaration of the object or function to which they are applied. The **`thread`** attribute affects data and objects only. The **`naked`** and **`spectre`** attributes affect functions only. The **`dllimport`** and **`dllexport`** attributes affect functions, data, and objects. The **`property`**, **`selectany`**, and **`uuid`** attributes affect COM objects.

For compatibility with previous versions, **`_declspec`** is a synonym for **`__declspec`** unless compiler option [/Za \(Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

The **`__declspec`** keywords should be placed at the beginning of a simple declaration. The compiler ignores, without warning, any **`__declspec`** keywords placed after * or & and in front of the variable identifier in a declaration.

A **`__declspec`** attribute specified in the beginning of a user-defined type declaration applies to the variable of that type. For example:

```cpp
__declspec(dllimport) class X {} varX;
```

In this case, the attribute applies to `varX`. A **`__declspec`** attribute placed after the **`class`** or **`struct`** keyword applies to the user-defined type. For example:

```cpp
class __declspec(dllimport) X {};
```

In this case, the attribute applies to `X`.

The general guideline for using the **`__declspec`** attribute for simple declarations is as follows:

*decl-specifier-seq* *init-declarator-list*;

The *decl-specifier-seq* should contain, among other things, a base type (e.g. **`int`**, **`float`**, a **`typedef`**, or a class name), a storage class (e.g. **`static`**, **`extern`**), or the **`__declspec`** extension. The *init-declarator-list* should contain, among other things, the pointer part of declarations. For example:

```cpp
__declspec(selectany) int * pi1 = 0;   //Recommended, selectany & int both part of decl-specifier
int __declspec(selectany) * pi2 = 0;   //OK, selectany & int both part of decl-specifier
int * __declspec(selectany) pi3 = 0;   //ERROR, selectany is not part of a declarator
```

The following code declares an integer thread local variable and initializes it with a value:

```cpp
// Example of the __declspec keyword
__declspec( thread ) int tls_i = 1;
```

**END Microsoft Specific**

## See also

[Keywords](../cpp/keywords-cpp.md)<br/>
[C Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md)
