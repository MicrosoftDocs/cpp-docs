---
title: "Compiler Warning (Level 2) CS1927"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS1927"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1927"
ms.assetid: 32b4e58f-668c-4596-9529-7f3a293ff4ac
caps.latest.revision: 5
ms.author: "billchi"
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
# Compiler Warning (Level 2) CS1927
Ignoring /win32manifest for module because it only applies to assemblies.  
  
 A win32 manifest is only applied at the assembly level. Your module will compile but it will not have a manifest.  
  
### To correct this error  
  
1.  Remove the **/win32manifest option**.  
  
2.  Compile the code as an assembly.  
  
## Example  
 The following example generates CS1927 when it is compiled with both the **/target:module** and **/win32manifest** compiler options.  
  
```  
// cs1927.cs  
// Compile with: /target:module /win32manifest  
using System;  
  
class ManifestWithModule  
{  
    static int Main()  
    {  
        return 1;  
    }  
}  
```  
  
## See Also  
 [/win32manifest (C# Compiler Options)](../Topic/-win32manifest%20\(C%23%20Compiler%20Options\).md)   
 [/target:module (C# Compiler Options)](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md)