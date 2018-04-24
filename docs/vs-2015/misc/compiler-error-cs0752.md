---
title: "Compiler Error CS0752 | Microsoft Docs"
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
  - "CS0752"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0752"
ms.assetid: f9a373d6-31ed-42db-8206-80cbe9b8c546
caps.latest.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0752
A partial method cannot have out parameters  
  
 A partial method cannot have an [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameter. Out parameters are not allowed because if the partial method is removed by the compiler then there is no guarantee that the out parameter is ever assigned.  
  
### To correct this error  
  
1.  Remove the out modifier from the parameter and use the return value of the method instead, or else remove the partial modifier from the method declaration.  
  
## Example  
 The following code generates CS0752:  
  
```  
// cs0752.cs  
public partial class C  
{  
    partial void Part(out int num); // CS0752  
    // try the following line instead  
    // partial void Part(int num);  
  
    public static int Main()  
    {  
        return 1;  
    }  
}  
```  
  
## See Also  
 [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1)