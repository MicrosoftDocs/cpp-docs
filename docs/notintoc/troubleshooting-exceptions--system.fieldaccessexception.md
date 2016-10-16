---
title: "Troubleshooting Exceptions: System.FieldAccessException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "FieldAccessException class"
ms.assetid: 47a72daf-500e-494c-b2fe-374edad2e9cd
caps.latest.revision: 15
ms.author: "mblome"
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
# Troubleshooting Exceptions: System.FieldAccessException
A \<xref:System.FieldAccessException> exception is thrown when there is an invalid attempt to access a private or protected field inside a class.  
  
## Associated Tips  
 **If the access level of a field in a class library has changed, recompile any assemblies that reference that library.**  
 This exception is usually thrown when the access level (`Public`, `Private`, etc) of a field in a class library is changed, and one or more assemblies referencing the library have not been recompiled.  
  
## See Also  
 \<xref:System.FieldAccessException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)