---
title: "Context-Sensitive Keywords  (C++ Component Extensions)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "internal_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "context-sensitive keywords"
ms.assetid: e33da089-f434-44e9-8cce-4668d05a8939
caps.latest.revision: 17
ms.author: "mblome"
manager: "ghogen"
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
# Context-Sensitive Keywords  (C++ Component Extensions)
*Context-sensitive keywords* are language elements that are recognized only in specific contexts. Outside the specific context, a context-sensitive keyword can be a user-defined symbol.  
  
## All Runtimes  
 **Remarks**  
  
 The following is a list of context-sensitive keywords:  
  
-   [abstract](../windows/abstract---c---component-extensions-.md)  
  
-   [delegate](../windows/delegate---c---component-extensions-.md)  
  
-   [event](../windows/event---c---component-extensions-.md)  
  
-   [finally](../cli/finally.md)  
  
-   [for each, in](../cli/for-each--in.md)  
  
-   [initonly](../cli/initonly--c---cli-.md)  
  
-   `internal` (see [Member Visibility](../notintoc/member-visibility.md))  
  
-   [literal](../windows/literal--c---component-extensions-.md)  
  
-   [override](../windows/override---c---component-extensions-.md)  
  
-   [property](../windows/property---c---component-extensions-.md)  
  
-   [sealed](../windows/sealed---c---component-extensions-.md)  
  
-   `where` (part of [Generics](../windows/generics---c---component-extensions-.md))  
  
 For readability purposes, you may want to limit your use of context-sensitive keywords as user–defined symbols.  
  
## [!INCLUDE[wrt](../atl/includes/wrt_md.md)]  
 **Remarks**  
  
 (There are no platform-specific remarks for this feature.)  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../cli/includes/clr_for_headings_md.md)]  
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
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)