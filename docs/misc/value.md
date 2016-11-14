---
title: "__value | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__value_cpp"
  - "__value"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__value keyword"
  - "value types, declaring"
  - "__value keyword, syntax"
ms.assetid: b14b64f7-5db6-4e92-a144-fcbf67572b49
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.mt: 
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
# __value
> [!NOTE]
>  This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Declares a class to be a __value type.  
  
## Syntax  
  
```  
  
      __value  
       class-specifier  
__value struct-specifier  
__nogc array-specifier  
__nogc pointer-specifier  
```  
  
## Remarks  
 A `__value` type differs from `__gc` types in that `__value` type variables directly contain their data, whereas managed variables point to their data, which is stored on the common language runtime heap.  
  
 The following conditions apply to `__value` types:  
  
-   The `__value` keyword cannot be applied to an interface.  
  
-   A `__value` type can inherit from any number of interfaces and cannot inherit from other types or `__value` types.  
  
-   A `__value` type is sealed by definition. For more information, see [__sealed](../misc/sealed.md).  
  
-   It is valid to use a `__value` type anywhere a managed type is allowed.  
  
> [!NOTE]
>  The `__value` keyword is not allowed when used with the `__abstract` keyword.  
  
 A `__value` type can be explicitly connected to a **System::Object** pointer. This is known as boxing.  
  
 The following guidelines apply to embedding a value type inside a `__nogc` type:  
  
-   The value type must have **LayoutSequential** or **LayoutExplicit**.  
  
-   The value type can not have gc pointer members.  
  
-   The value type can not have private data members.  
  
 In Managed Extensions for C++, the equivalents to a C# class and a C# struct are as follows:  
  
|Managed Extensions for C++|C#|For more information|  
|----------------------------------|---------|--------------------------|  
|__gc struct<br /><br /> -or-<br /><br /> \__gc class|class|[class](/dotnet/csharp/language-reference/keywords/class) keyword|  
|__value struct<br /><br /> -or-<br /><br /> \__value class|struct|[struct](/dotnet/csharp/language-reference/keywords/struct) keyword|  
  
## Example  
 In the following example, a `__value` type (`V`) is declared and then two instances of the `__value` type are manipulated:  
  
```  
// keyword__value.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value struct V {   
   int m_i;  
};  
  
int main() {  
   V v1, v2;  
   v1.m_i = 5;  
   v2 = v1;   // copies all fields of v1 to v2  
   v2.m_i = 6;   // does not affect v1.m_I  
}  
```