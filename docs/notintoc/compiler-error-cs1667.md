---
title: "Compiler Error CS1667"
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
  - "CS1667"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1667"
ms.assetid: 59f64828-58bc-487c-862a-75537e21d4ea
caps.latest.revision: 7
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
# Compiler Error CS1667
Attribute 'attribute' is not valid on property or event accessors. It is valid on 'declaration type' declarations only.  
  
 This error occurs if you use an attribute on a property or event accessor, when it should be on the property or event itself. This error could occur with the attributes \<xref:System.CLSCompliantAttribute>, \<xref:System.Diagnostics.ConditionalAttribute>, and \<xref:System.ObsoleteAttribute>.  
  
## Example  
 The following sample generates CS1670:  
  
```  
// CS1667.cs  
using System;  
  
public class C  
{  
    private int i;  
  
    //Try this instead:  
    //[Obsolete]  
    public int ObsoleteProperty  
    {  
        [Obsolete]  // CS1667  
        get { return i; }  
        set { i = value; }  
    }  
  
    public static void Main()  
    {  
    }  
}  
```