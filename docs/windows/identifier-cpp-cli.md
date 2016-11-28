---
title: "__identifier (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__identifier"
  - "__identifier_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__identifier keyword [C++]"
ms.assetid: 348428af-afa7-4ff3-b571-acf874301cf2
caps.latest.revision: 18
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
# __identifier (C++/CLI)
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
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
  
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
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Remarks**  
  
 The `__identifier` keyword is valid with the **/clr** compiler option.  
  
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
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)