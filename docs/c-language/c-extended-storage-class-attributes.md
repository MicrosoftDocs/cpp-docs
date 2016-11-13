---
title: "C Extended Storage-Class Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "__declspec keyword [C]"
  - "extended attributes"
  - "extended storage-class attributes"
  - "storage class specifiers, C storage classes"
ms.assetid: 2580735c-f5bf-46ab-9468-0696893d82be
caps.latest.revision: 9
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
# C Extended Storage-Class Attributes
**Microsoft Specific**  
  
 More up-to-date information on this topic can be found under [__declspec (C++ Reference)](../cpp/declspec.md).  
  
 Extended attribute syntax simplifies and standardizes the Microsoft-specific extensions to the C language. The storage-class attributes that use extended attribute syntax include thread, naked, dllimport, and dllexport.  
  
 The extended attribute syntax for specifying storage-class information uses the __declspec keyword, which specifies that an instance of a given type is to be stored with a Microsoft-specific storage-class attribute (thread, naked, dllimport, or dllexport). Examples of other storage-class modifiers include the static and extern keywords. However, these keywords are part of the ANSI C standard and as such are not covered by extended attribute syntax.  
  
## Syntax  
 *storage-class-specifier*:  
 `__declspec` ( *extended-decl-modifier-seq* ) /* Microsoft Specific \*/  
  
 *extended-decl-modifier-seq*:  
 *extended-decl-modifier* opt  
  
 *extended-decl-modifier-seq extended-decl-modifier*  
  
 *extended-decl-modifier*:  
 **thread**  
  
 **naked**  
  
 **dllimport**  
  
 `dllexport`  
  
 White space separates the declaration modifiers. Note that *extended-decl-modifier-seq* can be empty; in this case, __declspec has no effect.  
  
 The thread, naked, dllimport, and dllexport storage-class attributes are a property only of the declaration of the data or function to which they are applied; they do not redefine the type attributes of the function itself. The thread attribute affects data only. The naked attribute affects functions only. The dllimport and dllexport attributes affect functions and data.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Declarations and Types](../c-language/declarations-and-types.md)