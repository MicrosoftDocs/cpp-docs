---
title: "How to: Define an Interface Static Constructor (C++-CLI)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: How to: Define an Interface Static Constructor (C++/CLI)
ms.assetid: 1f031cb2-e94f-43dc-819b-44cf2faaaa49
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Define an Interface Static Constructor (C++-CLI)
An interface can have a static constructor, which can be used to initialize static data members.  A static constructor will be called at most once, and will be called before the first time a static interface member is accessed.  
  
 For more information on static constructors, see [How to: Define Static Constructors in a Class or Struct](../Topic/How%20to:%20Define%20Static%20Constructors%20in%20a%20Class%20or%20Struct.md).  
  
## Example  
  
```  
// mcppv2_interface_class2.cpp  
// compile with: /clr  
using namespace System;  
  
interface struct MyInterface {  
   static int i;  
   static void Test() {  
      Console::WriteLine(i);  
   }  
  
   static MyInterface() {   
      Console::WriteLine("in MyInterface static constructor");  
      i = 99;  
   }  
};  
  
ref class MyClass : public MyInterface {};  
  
int main() {  
   MyInterface::Test();  
   MyClass::MyInterface::Test();  
  
   MyInterface ^ mi = gcnew MyClass;  
   mi->Test();  
}  
```  
  
 **in MyInterface static constructor**  
**99**  
**99**  
**99**   
## See Also  
 [interface class](../VS_visualcpp/interface-class---C---Component-Extensions-.md)