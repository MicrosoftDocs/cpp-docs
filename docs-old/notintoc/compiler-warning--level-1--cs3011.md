---
title: "Compiler Warning (level 1) CS3011"
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
  - "CS3011"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3011"
ms.assetid: e27ce521-0147-488b-b4a1-1b6fb5168661
caps.latest.revision: 11
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
# Compiler Warning (level 1) CS3011
'member': only CLS-compliant members can be abstract  
  
 A class member cannot be both [abstract](../Topic/abstract%20\(C%23%20Reference\).md) and non-compliant with the Common Language Specification (CLS). The CLS specifies that all class members shall be implemented. For more information about CLS Compliance, see [Writing CLS-Compliant Code](assetId:///4c705105-69a2-4e5e-b24e-0633bc32c7f3) and [Language Independence and Language-Independent Components](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Example  
 The following example generates CS3011:  
  
```  
// CS3011.cs  
  
using System;  
  
[assembly:CLSCompliant(true)]  
public abstract class I  
{  
    [CLSCompliant(false)]  
    public abstract int M();   // CS3011  
  
    // OK  
    [CLSCompliant(false)]  
    public void M2()  
    {  
    }  
}  
  
public class C : I  
{  
    public override int M()  
    {  
        return 1;  
    }  
  
    public static void Main()  
    {  
    }  
}  
```