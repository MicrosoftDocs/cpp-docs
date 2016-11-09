---
title: "__delegate"
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
  - "__delegate_cpp"
  - "__delegate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delegates, _delegate keyword"
  - "function pointers, managed"
  - "__delegate keyword"
ms.assetid: a41d2211-b79b-4509-a4c2-cc91f3d4fc9d
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
# __delegate
**Note** This topic applies only to version 1 of Managed Extensions for C++. This syntax should only be used to maintain version 1 code. See [delegate  (C++ Component Extensions)](../windows/delegate-cpp-component-extensions.md) for information on using the equivalent functionality in the new syntax.  
  
 Defines a reference type that can be used to encapsulate a method with a specific signature.  
  
## Syntax  
  
```  
  
__delegate   
function-declarator  
  
```  
  
## Remarks  
 A delegate is roughly equivalent to a C++ function pointer except for the following difference:  
  
-   A delegate can only be bound to one or more methods within a __gc class.  
  
 When the compiler encounters the `__delegate` keyword, a definition of a __gc class is generated. This \__gc class has the following characteristics:  
  
-   It inherits from **System::MulticastDelegate**.  
  
-   It has a constructor that takes two arguments: a pointer to a __gc class or **NULL** (in the case of binding to a static method) and a fully qualified method of the specified type.  
  
-   It has a method called `Invoke`, whose signature matches the declared signature of the delegate.  
  
## Example  
 In the following example, a __gc class (`MyCalendar`) and a delegate (`GetDayOfWeek`) are declared. The delegate is then bound to the different methods of `MyCalendar`, invoking each in turn:  
  
```  
// keyword__delegate.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__delegate int GetDayOfWeek();  
__gc class MyCalendar {  
public:  
   MyCalendar() : m_nDayOfWeek(4) {}  
   int MyGetDayOfWeek() {   
      Console::WriteLine("handler"); return m_nDayOfWeek;   
   }  
   static int MyStaticGetDayOfWeek() {   
      Console::WriteLine("static handler");   
      return 6;  
   }  
private:  
   int m_nDayOfWeek;  
};  
  
int main () {  
   GetDayOfWeek * pGetDayOfWeek;  // declare delegate type  
   int nDayOfWeek;  
  
   // bind delegate to static method  
   pGetDayOfWeek = new GetDayOfWeek(0, &MyCalendar::MyStaticGetDayOfWeek);  
   nDayOfWeek = pGetDayOfWeek->Invoke();  
   Console::WriteLine(nDayOfWeek);  
  
   // bind delegate to instance method  
   MyCalendar * pcal = new MyCalendar();  
   pGetDayOfWeek = static_cast<GetDayOfWeek*>(Delegate::Combine(pGetDayOfWeek,  
      new GetDayOfWeek(pcal, &MyCalendar::MyGetDayOfWeek)));  
   nDayOfWeek = pGetDayOfWeek->Invoke();  
   Console::WriteLine(nDayOfWeek);  
  
   // delegate now bound to two methods; remove instance method  
   pGetDayOfWeek = static_cast<GetDayOfWeek*>(Delegate::Remove(pGetDayOfWeek,  
      new GetDayOfWeek(pcal, &MyCalendar::MyGetDayOfWeek)));  
}  
```  
  
## Sample Output  
  
```  
static handler  
6  
static handler  
handler  
4  
```