---
title: "Specifiers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "declaration specifiers"
  - "declarations, specifiers"
  - "specifiers, in declarations"
ms.assetid: 8b14e844-9880-4571-8779-28c8efe44633
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
# Specifiers
This topic describes the *decl-specifiers* (declaration specifiers) component of a [declaration](declarations-and-definitions-cpp.md).  
  
 The following placeholders and language keywords are declaration specifiers:  
  
 *storage-class-specifier*  
  
 *type-specifier*  
  
 *function-specifier*  
  
 [friend](../cpp/friend-cpp.md)  
  
 [typedef](http://msdn.microsoft.com/en-us/cc96cf26-ba93-4179-951e-695d1f5fdcf1)  
  
 [__declspec](../cpp/declspec.md) `(` *extended-decl-modifier-seq* `)`  
  
## Remarks  
 The *decl-specifiers* part of a declaration is the longest sequence of *decl-specifiers* that can be taken to mean a type name, not including the pointer or reference modifiers. The remainder of the declaration is the *declarator*, which includes the name introduced.  
  
 The following table lists four declarations, and then lists each declaration's *decl-specifers* and *declarator* component separately.  
  
|Declaration|*decl-specifiers*|`declarator`|  
|-----------------|------------------------|------------------|  
|`char *lpszAppName;`|`char`|`*lpszAppName`|  
|`typedef char * LPSTR;`|`char`|`*LPSTR`|  
|`const int func1();`|`const int`|`func1`|  
|`volatile void *pvvObj;`|`volatile void`|`*pvvObj`|  
  
 Because `signed`, `unsigned`, `long`, and `short` all imply `int`, a `typedef` name following one of these keywords is taken to be a member of *declarator-list,* not of *decl-specifiers*.  
  
> [!NOTE]
>  Because a name can be redeclared, its interpretation is subject to the most recent declaration in the current scope. Redeclaration can affect how names are interpreted by the compiler, especially `typedef` names.  
  
## See Also  
 [Declarations and Definitions](declarations-and-definitions-cpp.md)