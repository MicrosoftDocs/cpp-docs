---
title: "Compiler Error CS0752"
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
  - "CS0752"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0752"
ms.assetid: f9a373d6-31ed-42db-8206-80cbe9b8c546
caps.latest.revision: 6
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
# Compiler Error CS0752
A partial method cannot have out parameters  
  
 A partial method cannot have an [out](../Topic/out%20\(C%23%20Reference\).md) parameter. Out parameters are not allowed because if the partial method is removed by the compiler then there is no guarantee that the out parameter is ever assigned.  
  
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
 [Partial Classes and Methods](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)