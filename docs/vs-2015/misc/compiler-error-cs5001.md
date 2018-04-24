---
title: "Compiler Error CS5001 | Microsoft Docs"
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
  - "CS5001"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS5001"
ms.assetid: e1e26e75-84e0-47c7-be8a-3c4fd0d6f497
caps.latest.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS5001
Program 'program' does not contain a static 'Main' method suitable for an entry point  
  
 This error occurs when no static [Main](http://msdn.microsoft.com/library/73a17231-cf96-44ea-aa8a-54807c6fb1f4) method with a correct signature is found in the code that produces an executable file. This error also occurs if the entry point function, `Main`, is defined with the wrong case, such as lower-case `main`.  
  
-   `Main` must be declared as static and it must return [void](http://msdn.microsoft.com/library/0d2d8a95-fe20-4fbd-bf5d-c1e54bce71d4) or [int](http://msdn.microsoft.com/library/212447b4-5d2a-41aa-88ab-84fe710bdb52), and it must have either no parameters or else one parameter of type `string[]`.  
  
## Example  
 The following example generates CS5001:  
  
```  
// CS5001.cs  
// CS5001 expected  
public class a  
{  
   // Uncomment the following line to resolve.  
   // static void Main() {}  
}  
```  
  
## See Also  
 [Main() and Command-Line Arguments](http://msdn.microsoft.com/library/73a17231-cf96-44ea-aa8a-54807c6fb1f4)