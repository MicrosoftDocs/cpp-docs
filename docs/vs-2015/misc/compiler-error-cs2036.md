---
title: "Compiler Error CS2036 | Microsoft Docs"
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
  - "CS2036"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2036"
ms.assetid: 44b73be4-b792-4735-bdbd-bd757ab22683
caps.latest.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS2036
The /pdb option requires that the /debug option also be used.  
  
 Program database files are only generated for debug builds. The **/pdb** option is therefore meaningless in a retail build.  
  
### To correct this error  
  
-   Add the **/debug** compiler option.  
  
-   Remove the **/pdb** compiler option.  
  
## Example  
 The following example generates CS2036 when it is compiled with the **/pdb** option but not the /debug option:  
  
```  
// cs2036.cs  
// Compile with: /pdb  
// CS2036  
class Test  
{  
    public static int Main()  
    {  
        return 1;  
    }  
}  
```  
  
## See Also  
 [/pdb (C# Compiler Options)](http://msdn.microsoft.com/library/e9d0f96a-5b75-45d6-9765-92538dd5f823)   
 [/debug (C# Compiler Options)](http://msdn.microsoft.com/library/e2b48c07-01bc-45cc-a52c-92e9085eb969)