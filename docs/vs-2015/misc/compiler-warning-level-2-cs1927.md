---
title: "Compiler Warning (Level 2) CS1927 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1927"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1927"
ms.assetid: 32b4e58f-668c-4596-9529-7f3a293ff4ac
caps.latest.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
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
 [/win32manifest (C# Compiler Options)](http://msdn.microsoft.com/library/9460ea1b-6c9f-44b8-8f73-301b30a01de1)   
 [/target:module (C# Compiler Options)](http://msdn.microsoft.com/library/9af1e4fa-c749-44e7-ae58-90a3d05d4e72)