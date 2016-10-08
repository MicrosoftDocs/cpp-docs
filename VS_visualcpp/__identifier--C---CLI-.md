---
title: "__identifier (C++-CLI)"
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
H1: __identifier (C++/CLI)
ms.assetid: 348428af-afa7-4ff3-b571-acf874301cf2
caps.latest.revision: 18
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
# __identifier (C++-CLI)
Enables the use of Visual C++ keywords as identifiers.  
  
## All Platforms  
 **Syntax**  
  
```  
  
__identifier(  
Visual_C++_keyword  
)  
  
```  
  
 **Remarks**  
  
 Use of the `__identifier` keyword for identifiers that are not keywords is permitted, but strongly discouraged as a matter of style.  
  
## Windows Runtime  
  
### Requirements  
 Compiler option: **/ZW**  
  
### Examples  
 **Example**  
  
 In the following example, a class named `template` is created in C# and distributed as a DLL. In the Visual C++ program that uses the `template` class, the `__identifier` keyword conceals the fact that `template` is a standard C++ keyword.  
  
```  
// identifier_template.cs  
// compile with: /target:library  
public class template {  
   public void Run() { }  
}  
```  
  
```  
// keyword__identifier.cpp  
// compile with: /ZW  
#using <identifier_template.dll>  
int main() {  
   __identifier(template)^ pTemplate = ref new __identifier(template)();  
   pTemplate->Run();  
}  
```  
  
## Common Language Runtime  
 **Remarks**  
  
 The `__identifier` keyword is valid with the **/clr** and **/clr:oldSyntax** compiler options.  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 In the following example, a class named `template` is created in C# and distributed as a DLL. In the Visual C++ program that uses the `template` class, the `__identifier` keyword conceals the fact that `template` is a standard C++ keyword.  
  
```  
// identifier_template.cs  
// compile with: /target:library  
public class template {  
   public void Run() { }  
}  
```  
  
```  
// keyword__identifier.cpp  
// compile with: /clr  
#using <identifier_template.dll>  
  
int main() {  
   __identifier(template) ^pTemplate = gcnew __identifier(template)();  
   pTemplate->Run();  
}  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)   
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)