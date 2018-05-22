---
title: "__value | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
|__gc struct<br /><br /> -or-<br /><br /> \__gc class|class|[class](http://msdn.microsoft.com/library/b95d8815-de18-4c3f-a8cc-a0a53bdf8690) keyword|  
|__value struct<br /><br /> -or-<br /><br /> \__value class|struct|[struct](http://msdn.microsoft.com/library/ff3dd9b7-dc93-4720-8855-ef5558f65c7c) keyword|  
  
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