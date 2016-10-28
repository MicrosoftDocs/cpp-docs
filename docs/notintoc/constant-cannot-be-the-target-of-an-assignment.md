---
title: "Constant cannot be the target of an assignment"
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
  - "bc30074"
  - "vbc30074"
helpviewer_keywords: 
  - "BC30074"
ms.assetid: e805a517-228a-4147-a2c0-9dba93d3ba42
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
# Constant cannot be the target of an assignment
A constant occurs in a context that assigns a value to it. Only writable variables, properties, and array elements can have values assigned to them during execution.  
  
 **Error ID:** BC30074  
  
### To correct this error  
  
-   Replace the constant with a single writable variable, property, or array element.  
  
## See Also  
 [Constants and Enumerations](../Topic/Constants%20and%20Enumerations%20in%20Visual%20Basic.md)   
 [NotInBuild:Assignment Statements](assetId:///eb4f91e9-fbbf-45ca-b21d-e8ae069de4f9)