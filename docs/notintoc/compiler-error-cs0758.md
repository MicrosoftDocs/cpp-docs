---
title: "Compiler Error CS0758"
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
  - "CS0758"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0758"
ms.assetid: 06ddd548-1311-40db-9078-8a18107b8346
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
# Compiler Error CS0758
Both partial method declarations must use a params parameter or neither may use a params parameter  
  
 If one part of a partial method specifies a `params` parameter, the other part must specify one also.  
  
### To correct this error  
  
1.  Either add the `params` modifier in one part of the method, or remove it in the other.  
  
## Example  
 The following code generates CS0758:  
  
```  
using System;  
  
    public partial class C  
    {  
        partial void Part(int i, params char[] array);  
        partial void Part(int i, char[] array) // CS0758  
        {  
        }  
  
        public static int Main()  
        {  
            return 1;  
        }  
  
    }  
```  
  
## See Also  
 [Partial Classes and Methods](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [params](../Topic/params%20\(C%23%20Reference\).md)