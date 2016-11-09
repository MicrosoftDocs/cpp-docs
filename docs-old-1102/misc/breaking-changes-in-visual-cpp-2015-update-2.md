---
title: "Breaking Changes in Visual C++ 2015 Update 2"
ms.custom: ""
ms.date: "10/20/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 5545ce3f-d8da-4007-88b7-8dba7dcd4d10
caps.latest.revision: 8
ms.author: "mithom"
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
# Breaking Changes in Visual C++ 2015 Update 2
When you upgrade to Visual C++ 2015 Update 2 CTP you might encounter compilation and/or runtime errors in code that previously compiled and ran correctly. Changes in compiler or runtime behavior that cause such problems are known as *breaking changes*, and typically they're required by modifications in the C++ language standard, function signatures, or the layout of objects in memory.  
  
 The rest of this article describes specific breaking changes in Visual C++ 2015 Update 2 CTP, and in this article the terms "new behavior" or "now" refer to that version. The terms "old behavior" and "previous" refer to Visual C++ 2015 Update 1 and earlier releases. For information on breaking changes that occurred between the initial release of Visual C++ 2015 and Visual C++ 2015 Update 1, see [Breaking Changes in Update 1](../misc/breaking-changes-in-visual-cpp-2015-update-1.md). For information on breaking changes that occurred between Visual C++ 2013 and Visual C++ 2015, see [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
-   [Compiler Breaking Changes](#BK_compiler)  
  
##  <a name="BK_compiler"></a> Visual C++ Compiler  
  
-   **Additional warnings and errors might be issued as a result of partial support for expression SFINAE**  
  
     Previous versions of the compiler did not parse certain kinds of expressions inside `decltype` specifiers due to lack of  support for expression SFINAE. This old behavior was incorrect and does not conform to the C++ standard. The compiler now parses these expressions and has partial support for expression SFINAE due to  ongoing conformance improvements. As a result, the compiler now issues warnings and errors found in  expressions that previous versions of the compiler did not parse.  
  
     When this new behavior parses a `decltype` expression that includes a type that has not yet been declared, the compiler issues compiler error C2039 as a result.  
  
 **error C2039: *'type'*: is not a member of *'`global namespace''***     Example 1:  use of an undeclared type (before)  
  
<CodeContentPlaceHolder>0</CodeContentPlaceHolder>  
     Example 1 (after)  
  
<CodeContentPlaceHolder>1</CodeContentPlaceHolder>  
     When this new behavior parses a `decltype` expression that is missing a necessary use of the `typename` keyword to specify that a dependent name is a type, the compiler issues  compiler warning C4346 together with compiler error C2923.  
  
 **warning C4346: *'S2<T\>::Type'*: dependent name is not a type error C2923: *'s1'*: *'S2<T\>::Type'* is not a valid template type argument for parameter *'T'***     Example 2: dependent name is not a type (before)  
  
<CodeContentPlaceHolder>2</CodeContentPlaceHolder>  
     Example 2 (after)  
  
<CodeContentPlaceHolder>3</CodeContentPlaceHolder>  
-   `volatile` **member variables prevent implicitly defined constructors and assignment operators**  
  
     Previous versions of the compiler allowed a class that has `volatile` member variables to have default copy/move constructors and default copy/move assignment operators automatically generated. This old behavior was incorrect and does not conform to the C++ standard. The compiler now considers a class that has volatile member variables to have non-trivial construction and assignment operators which prevents default implementations of these operators from being automatically generated.  When such a class is a member of a union (or an anonymous union inside of a class), the copy/move constructors and copy/move assignment operators of the union (or the class containing the unonymous union) will be implicitly defined as deleted. Attempting to construct or copy the union (or class containing the anonymous union) without explicitly defining them is an error and the compiler  issues compiler error C2280 as a result.  
  
 **error C2280: *'B::B(const B &)'*: attempting to reference a deleted function**     Example (before)  
  
<CodeContentPlaceHolder>4</CodeContentPlaceHolder>  
     Example (after)  
  
<CodeContentPlaceHolder>5</CodeContentPlaceHolder>  
-   **Static member functions do not support cv-qualifiers.**  
  
     Previous versions of Visual C++ 2015 allowed static member functions to have cv-qualifiers. This behavior is due to a regression in Visual C++ 2015 and Visual C++ 2015 Update 1; Visual C++ 2013 and previous versions of Visual C++ reject code written in this way. The behavior of Visual C++ 2015 and Visual C++ 2015 Update 1 is incorrect and does not conform to the C++ standard.  Visual Studio 2015 Update 2 rejects code written in this way and issues compiler error C2511 instead.  
  
 **error C2511: 'void A::func(void) const': overloaded member function not found in 'A'**     Example (before)  
  
<CodeContentPlaceHolder>6</CodeContentPlaceHolder>  
     Example (after)  
  
<CodeContentPlaceHolder>7</CodeContentPlaceHolder>  
-   **Forward declaration of enum is not allowed in WinRT code** (affects /ZW only)  
  
     Code compiled for the Windows Runtime (WinRT) doesn't allow `enum` types to be forward declared, similarly to when managed C++ code is compiled for the .Net Framework using the /clr compiler switch. This behavior is ensures that the size of an enumeration is always known and can be correctly projected to the WinRT type system. The compiler rejects code written in this way and  issues compiler error C2599 together with compiler error C3197.  
  
 **error C2599: *'CustomEnum'*: the forward declaration of a WinRT enum is not allowed error C3197: *'public'*: can only be used in definitions**     Example (before)  
  
    ```cpp  
    namespace A {  
      public enum class CustomEnum: int32;  // forward declaration; error C2599, error C3197  
    }  
  
    namespace A {  
      public enum class CustomEnum: int32  
      {  
        Value1  
      };  
    }  
  
    public ref class Component sealed  
    {  
    public:  
      CustomEnum f()  
      {  
        return CustomEnum::Value1;  
      }  
    };  
    ```  
  
     Example (after)  
  
    ```cpp  
  
              // forward declaration of CustomEnum removed  
  
    namespace A {  
      public enum class CustomEnum: int32  
      {  
        Value1  
      };  
    }  
  
    public ref class Component sealed  
    {  
    public:  
      CustomEnum f()  
      {  
        return CustomEnum::Value1;  
      }  
    };  
    ```  
  
-   **Overloaded non-member operator new and operator delete may not be declared inline** (Level 1 (/W1) on-by-default)  
  
     Previous versions of the compiler do not issue a warning when non-member operator new and operator delete functions are declared inline. Code written in this way is ill-formed (no diagnostic required) and can cause memory issues  resulting from mismatched new and delete operators (especially when used together with sized deallocation) that can be difficult to diagnose.   The compiler now issues compiler warning C4595 to help identify code written in this way.  
  
 **warning C4595: *'operator new'*: non-member operator new or delete functions may not be declared inline**     Example (before)  
  
    ```cpp  
  
              inline void* operator new(size_t sz)  // warning C4595  
    {  
      ...  
    }  
    ```  
  
     Example (after)  
  
    ```cpp  
  
              void* operator new(size_t sz)  // removed inline  
    {  
      ...  
    }  
    ```  
  
     Fixing code that's written in this way might require that the operator definitions be moved out of a header file and into a corresponding source file.