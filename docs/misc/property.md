---
title: "__property | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__property_cpp"
  - "__property"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__property keyword"
  - "managed classes"
  - "properties [C++], managed classes"
ms.assetid: 235e3574-6882-4c52-8301-270277b9216d
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
# __property
> [!NOTE]
>  This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [property](../windows/property-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Declares either a scalar or indexed property for the managed class.  
  
## Syntax  
  
```  
  
__property function-declarator  
```  
  
## Remarks  
 The `__property` keyword introduces the declaration of a property and can appear in a class, interface, or value type. A property can have a getter function (read only), a setter function (write only), or both (read-write).  
  
> [!NOTE]
>  A property name cannot match the name of the managed class containing it. The return type of the getter function must match the type of the last parameter of a corresponding setter function.  
  
## Example  
 In the following example, a scalar property (`Size`) is added to the `MyClass` declaration. The property is then implicitly set and retrieved using the `get_Size` and `set_Size` functions:  
  
```  
// keyword__property.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc class MyClass {  
public:  
   MyClass() : m_size(0) {}  
   __property int get_Size() { return m_size; }  
   __property void set_Size(int value) { m_size = value; }  
   // compiler generates pseudo data member called Size  
protected:  
   int m_size;  
};  
  
int main() {  
   MyClass* class1 = new MyClass;  
   int curValue;  
  
   Console::WriteLine(class1->Size);  
  
   class1->Size = 4;   // calls the set_Size function with value==4  
   Console::WriteLine(class1->Size);  
  
   curValue = class1->Size;   // calls the get_Size function  
   Console::WriteLine(curValue);  
}  
```  
  
## Output  
  
```  
0  
4  
4  
```