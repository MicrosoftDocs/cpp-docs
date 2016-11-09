---
title: "__typeof"
ms.custom: ""
ms.date: "10/20/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__typeof_cpp"
  - "__typeof"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__typeof keyword"
ms.assetid: d71b9603-35d0-4c62-b5b4-90ffc2305a55
caps.latest.revision: 8
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
# __typeof
**Note** This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [typeid](../windows/typeid-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Returns the **System::Type** of a specified type.  
  
```  
  
__typeof(  
typename  
)  
  
```  
  
 where:  
  
 *typename*  
 The name of a managed type for which you want the **System::Type** name. Note that in a managed program, some native types are aliased to types in the common language runtime. For example, `int` is an alias for **System::Int32**.  
  
## Remarks  
 The **__typeof** operator lets you get the **System::Type** type of a type that you specify. **__typeof** can also be used to return a value of **System::Type** in a custom attribute block. See [attribute](../windows/attribute.md) for more information about creating your own attributes.  
  
## Example  
 In the following example, a custom attribute (`AtClass`) is applied to a __gc class (`B`). The value of the custom attribute is then retrieved with **\__typeof**:  
  
```  
// keyword__typeof.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
public __gc class MyClass {};  
  
[attribute(All)]  
__gc class AtClass {  
public:  
   AtClass(Type*) {  
      Console::WriteLine("in Type * constructor");  
   }  
  
   AtClass(String*) {}  
   AtClass(int) {}  
};  
  
[AtClass(__typeof(MyClass))]   // Apply AtClass attribute to class B  
__gc class B {};  
  
int main() {  
   Type * mytype = __typeof(B);  
   Object * myobject __gc[] = mytype -> GetCustomAttributes(true);  
   Console::WriteLine(myobject[0]);  
}  
```  
  
## Output  
  
```  
in Type * constructor  
AtClass  
```