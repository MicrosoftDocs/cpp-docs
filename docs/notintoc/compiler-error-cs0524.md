---
title: "Compiler Error CS0524"
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
  - "CS0524"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0524"
ms.assetid: a5cd8fb0-f5df-4580-9116-a6be4dffd1cb
caps.latest.revision: 8
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
# Compiler Error CS0524
'type' : interfaces cannot declare types  
  
 An [interface](../Topic/interface%20\(C%23%20Reference\).md) cannot contain a user-defined type; it should contain only methods and properties.  
  
## Example  
 The following sample generates CS0524:  
  
```  
// CS0524.cs  
public interface Clx  
{  
    public class Cly   // CS0524, delete user-defined type  
    {  
    }  
}  
  
```