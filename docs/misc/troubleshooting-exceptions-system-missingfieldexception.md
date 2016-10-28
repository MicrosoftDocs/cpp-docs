---
title: "Troubleshooting Exceptions: System.MissingFieldException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "MissingFieldException class"
ms.assetid: afa4d669-7d08-4b14-8341-36717a5054d6
caps.latest.revision: 12
author: "mikeblome"
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
# Troubleshooting Exceptions: System.MissingFieldException
A <xref:System.MissingFieldException> exception is thrown when there is an attempt to dynamically access a field that does not exist.  
  
## Associated Tips  
 **If a field in a class library has been removed or renamed, recompile any assemblies that reference that library.**  
 This exception is generated when an attempt is made to dynamically access a deleted or renamed field of an assembly that is not referenced by its strong name.  
  
## See Also  
 <xref:System.MissingFieldException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)