---
title: "Troubleshooting Exceptions: System.ArgumentOutOfRangeException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
  - "ArgumentOutOfRangeException class"
ms.assetid: f53c58d9-7c4e-407f-93d3-1e59d90d98f5
caps.latest.revision: 24
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
# Troubleshooting Exceptions: System.ArgumentOutOfRangeException
An <xref:System.ArgumentOutOfRangeException> is thrown when a method is invoked and at least one of the arguments passed to the method is not a null reference (`Nothing` in Visual Basic) and does not contain a valid value.  
  
## Associated Tips  
 **Make sure all arguments to this method have valid values as defined by the invoked method.**  
 Arguments that are not null references must contain valid values.  
  
 **If you are working with a collection, make sure that the index is less than the size of the collection.**  
 The index must be within the size range of the collection and cannot exceed the size range or be less than zero. For more information, see [Collections](../Topic/Collections%20\(C%23%20and%20Visual%20Basic\).md).  
  
 **When using the overloaded two-argument FindString or FindStringExact methods of the ComboBox or ListBox class, check the startIndex parameter**.  
 This exception may be thrown if `startIndex` is equal to the index value of the last item of the associated list. To work around this, pass 0 as the `startIndex` parameter or use the one-argument `FindString` or `FindStringExact` method. For more information, see [CComboBox::FindString](../Topic/CComboBox::FindString.md) or [CListBox::FindString](../Topic/CListBox::FindString.md).  
  
## See Also  
 <xref:System.ArgumentOutOfRangeException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)