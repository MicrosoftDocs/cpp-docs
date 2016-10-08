---
title: "Context-Sensitive Keywords  (C++ Component Extensions)"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Context-Sensitive Keywords  (C++ Component Extensions)
*Context-sensitive keywords* are language elements that are recognized only in specific contexts. Outside the specific context, a context-sensitive keyword can be a user-defined symbol.  
  
## All Runtimes  
 **Remarks**  
  
 The following is a list of context-sensitive keywords:  
  
-   [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md)  
  
-   [delegate](../VS_visualcpp/delegate---C---Component-Extensions-.md)  
  
-   [event](../VS_visualcpp/event---C---Component-Extensions-.md)  
  
-   [finally](../VS_visualcpp/finally.md)  
  
-   [for each, in](../VS_visualcpp/for-each--in.md)  
  
-   [initonly](../VS_visualcpp/initonly--C---CLI-.md)  
  
-   `internal` (see [Member Visibility](../Topic/Member%20Visibility.md))  
  
-   [literal](../VS_visualcpp/literal--C---Component-Extensions-.md)  
  
-   [override](../VS_visualcpp/override---C---Component-Extensions-.md)  
  
-   [property](../VS_visualcpp/property---C---Component-Extensions-.md)  
  
-   [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md)  
  
-   `where` (part of [Generics](../VS_visualcpp/Generics---C---Component-Extensions-.md))  
  
 For readability purposes, you may want to limit your use of context-sensitive keywords as user–defined symbols.  
  
## Windows Runtime  
 **Remarks**  
  
 (There are no platform-specific remarks for this feature.)  
  
### Requirements  
 Compiler option: **/ZW**  
  
## Common Language Runtime  
 **Remarks**  
  
 (There are no platform-specific remarks for this feature.)  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following code example shows that in the appropriate context, the `property` context-sensitive keyword can be used to define a property and a variable.  
  
```  
// context_sensitive_keywords.cpp  
// compile with: /clr  
public ref class C {  
   int MyInt;  
public:  
   C() : MyInt(99) {}  
  
   property int Property_Block {   // context-sensitive keyword  
      int get() { return MyInt; }  
   }  
};  
  
int main() {  
   int property = 0;               // variable name  
   C ^ MyC = gcnew C();  
   property = MyC->Property_Block;  
   System::Console::WriteLine(++property);  
}  
```  
  
 **Output**  
  
 **100**   
## See Also  
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)