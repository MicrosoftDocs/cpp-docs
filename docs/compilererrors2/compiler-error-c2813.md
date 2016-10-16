---
title: "Compiler Error C2813"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2813"
ms.assetid: 6cf2135f-7b82-42d1-909a-5e864308a09c
caps.latest.revision: 9
ms.author: "corob"
manager: "douge"
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
# Compiler Error C2813
\#import is not supported with /MP  
  
 C2813 is emitted if in a compiler command you specify the **/MP** compiler option and two or more files to compile, and one or more of the files contains the[#import](../c/sharpimport-directive--c---.md) preprocessor directive. The [#import](../c/sharpimport-directive--c---.md) directive generates C++ classes from the types in the specified type library, and then writes those classes to two header files. The [#import](../c/sharpimport-directive--c---.md) directive is not supported because if multiple compilation units import the same type library, those units conflict when they try to write the same header files at the same time.  
  
 This compiler error and the **/MP** compiler option are new in [!INCLUDE[vs_orcas_long](../atl/includes/vs_orcas_long_md.md)].  
  
## Example  
 The following sample generates C2813. The command line in the "compile with:" comment indicates to the compiler to use the **/MP** and **/c** compiler options to compile several files. At least one of the files contains the [#import](../c/sharpimport-directive--c---.md) directive. We use the same file twice for the sake of testing this example.  
  
```  
// C2813.cpp  
// compile with: /MP /c C2813.cpp C2813.cpp  
#import "C:\windows\system32\stdole2.tlb"   // C2813  
int main()   
{  
}  
```