---
title: "Linker Tools Warning LNK4227 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4227"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4227"
ms.assetid: 941a0414-9964-4e02-8487-f9daa42ef7f9
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
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
# Linker Tools Warning LNK4227
metadata operation warning (HRESULT) : warning_message  
  
The linker detected metadata differences when merging:  
  
-   One or more referenced assemblies with the assembly currently being built.  
  
-   One or more source code files in a compilation.  
  
For example, LNK4227 may be caused if you have two global functions with the same name but parameter information declared differently (declarations are not consistent in all compilands). Use ildasm.exe /TEXT /METADATA `object_file` on each .obj file and you should see how the types differ.  
  
LNK4227 also reports problems that originate with another tool. For example, al.exe; see [Al.exe Tool Errors and Warnings](http://msdn.microsoft.com/en-us/7f125d49-0a03-47a6-9ba9-d61a679a7d4b).  
  
The metadata problems must be fixed to resolve the warning.  
  
For example, LNK4227 is generated when a referenced assembly was signed differently than the assembly that references it.  
  
The following sample generates LNK4227:  
  
```  
// LNK4227.cpp  
// compile with: /clr  
using namespace System::Reflection;  
  
[assembly:AssemblyDelaySignAttribute(false)];  
  
int main() {}  
```  
  
 and then,  
  
```  
// LNK4227b.cpp  
// compile with: /clr LNK4227.cpp /FeLNK4227b.exe  
using namespace System::Reflection;  
using namespace System::Runtime::CompilerServices;  
  
[assembly:AssemblyDelaySignAttribute(true)];  
// Try the following line instead  
// [assembly:AssemblyDelaySignAttribute(false)];  
  
ref class MyClass  
{  
};  
```  
  
LNK4227 can also be generated when version numbers in the wrong format are passed to assembly attributes.  The '*' notation is specific to the AssemblyVersionAttribute.  To resolve this warning, use only numbers in the version attributes other than AssemblyVersionAttribute.  
  
The following sample generates LNK4227:  
  
```  
// LNK4227e.cpp  
// compile with: /clr /LD /W1  
using namespace System::Reflection;  
[assembly:AssemblyVersionAttribute("2.3.*")];   // OK  
[assembly:AssemblyFileVersionAttribute("2.3.*")];   // LNK4227  
// try the following line instead  
// [assembly:AssemblyFileVersionAttribute("2.3")];  
```