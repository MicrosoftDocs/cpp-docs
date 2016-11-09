---
title: "Troubleshooting Exceptions: System.Data.ConstraintException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "ConstraintException class"
ms.assetid: 5e9ba3b8-73d5-4657-a76e-63ab6ea32cf1
caps.latest.revision: 19
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
# Troubleshooting Exceptions: System.Data.ConstraintException
A <xref:System.Data.ConstraintException> exception is thrown when an action is attempted that violates a constraint.  
  
## Associated Tips  
 **Relax or turn off constraints in your DataSets**.  
 You can use the <xref:System.Data.DataSet.EnforceConstraints%2A> property to temporarily turn off constraints while filling tables in a <xref:System.Data.DataSet> object.  
  
 **Make sure you are not trying to assign a value to a primary key field where the primary key already exists in the data table.**  
 If the primary key exists, this exception is thrown.  
  
 **Clear datasets before loading them from view state.**  
 If there is data in the dataset when you load it, this exception may be thrown.  
  
## See Also  
 <xref:System.Data.ConstraintException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)