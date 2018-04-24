---
title: "__raise | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__raise"
  - "__raise_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__raise keyword [C++]"
ms.assetid: 6f1ae418-5f0f-48b6-9f6e-8ea7e66b239a
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __raise
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__raise](https://docs.microsoft.com/cpp/cpp/raise).  
  
Emphasizes the call site of an event.  
  
## Syntax  
  
```  
  
__raise   
method-declarator  
;  
  
```  
  
## Remarks  
 From managed code, an event can only be raised from within the class where it is defined. See [event](../windows/event-cpp-component-extensions.md) for more information.  
  
 The keyword `__raise` causes an error to be emitted if you call a non-event.  
  
> [!NOTE]
>  A templated class or struct cannot contain events.  
  
## Example  
  
```  
// EventHandlingRef_raise.cpp  
struct E {  
   __event void func1();  
   void func1(int) {}  
  
   void func2() {}  
  
   void b() {  
      __raise func1();  
      __raise func1(1);  // C3745: 'int Event::bar(int)':   
                         // only an event can be 'raised'  
      __raise func2();   // C3745  
   }  
};  
  
int main() {  
   E e;  
   __raise e.func1();  
   __raise e.func1(1);  // C3745  
   __raise e.func2();   // C3745  
}  
```  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)   
 [Event Handling](../cpp/event-handling.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)





