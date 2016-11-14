---
title: "for each, in | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::foreach"
  - "for"
  - "each"
  - "in"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "for each keyword [C++]"
ms.assetid: 0c3a364b-2747-43f3-bb8d-b7d3b7023f79
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
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
# for each, in
Iterates through an array or collection. This non-standard keyword is available in both C++/CLI and native C++ projects. However, its use is not recommended. Consider using a standard [Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md) instead.  
  
## All Runtimes  
 **Syntax**  
  
```  
  
      for each (typeidentifierinexpression) {  
   statements  
}  
  
```  
  
 **Parameters**  
  
 `type`  
 The type of `identifier`.  
  
 `identifier`  
 The iteration variable that represents the collection element.  When `identifier` is a [Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md), you can modify the element.  
  
 `expression`  
 An array expression or collection. The collection element must be such that the compiler can convert it to the `identifier` type.  
  
 `statements`  
 One or more statements to be executed.  
  
 **Remarks**  
  
 The `for each` statement is used to iterate through a collection. You can modify elements in a collection, but you cannot add or delete elements.  
  
 The *statements* are executed for each element in the array or collection. After the iteration has been completed for all the elements in the collection, control is transferred to the statement that follows the `for each` block.  
  
 `for each` and `in` are [context-sensitive keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md).  
  
 For more information:  
  
-   [Iterating Over STL Collection By Using for each](../dotnet/iterating-over-stl-collection-by-using-for-each.md)  
  
-   [How to: Iterate Over Arrays with for each](../dotnet/how-to-iterate-over-arrays-with-for-each.md)  
  
-   [How to: Iterate Over a Generic Collection with for each](../dotnet/how-to-iterate-over-a-generic-collection-with-for-each.md)  
  
-   [How to: Iterate Over a User-Defined Collection with for each](../dotnet/how-to-iterate-over-a-user-defined-collection-with-for-each.md)  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
### Requirements  
 Compiler option: **/ZW**  
  
### Example  
 This example shows how to use `for each` to iterate through a string.  
  
```  
// for_each_string1.cpp  
// compile with: /ZW  
#include <stdio.h>  
using namespace Platform;  
  
ref struct MyClass {  
   property String^ MyStringProperty;  
};  
  
int main() {  
   String^ MyString = ref new String("abcd");  
  
   for each ( char c in MyString )  
      wprintf("%c", c);  
  
   wprintf("/n");  
  
   MyClass^ x = ref new MyClass();  
   x->MyStringProperty = "Testing";  
  
   for each( char c in x->MyStringProperty )  
      wprintf("%c", c);  
}  
```  
  
 **Output**  
  
```Output  
abcd  
  
Testing  
```  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Remarks**  
  
 The CLR syntax is the same as the **All Runtimes** syntax, except as follows.  
  
 *expression*  
 A managed array expression or collection. The collection element must be such that the compiler can convert it from <xref:System.Object> to the *identifier* type.  
  
 *expression* evaluates to a type that implements <xref:System.Collections.IEnumerable>, <xref:System.Collections.Generic.IEnumerable%601>, or a type that defines a `GetEnumerator` method that either returns a type that implements <xref:System.Collections.IEnumerator> or declares all of the methods that are defined in `IEnumerator`.  
  
### Requirements  
 Compiler option: **/clr**  
  
### Example  
 This example shows how to use `for each` to iterate through a string.  
  
```  
// for_each_string2.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct MyClass {  
   property String ^ MyStringProperty;  
};  
  
int main() {  
   String ^ MyString = gcnew String("abcd");  
  
   for each ( Char c in MyString )  
      Console::Write(c);  
  
   Console::WriteLine();  
  
   MyClass ^ x = gcnew MyClass();  
   x->MyStringProperty = "Testing";  
  
   for each( Char c in x->MyStringProperty )  
      Console::Write(c);  
}  
```  
  
 **Output**  
  
```Output  
abcd  
  
Testing   
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)