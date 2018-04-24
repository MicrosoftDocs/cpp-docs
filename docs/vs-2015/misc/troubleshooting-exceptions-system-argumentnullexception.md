---
title: "Troubleshooting Exceptions: System.ArgumentNullException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
  - "ArgumentNullException class"
ms.assetid: 5f21413c-d997-47c6-9b06-3d85a719d51b
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.ArgumentNullException
An <xref:System.ArgumentNullException> exception is thrown when a null reference (`Nothing` in Visual Basic) is passed to a method that does not accept it as a valid argument.  
  
## Associated Tips  
 **Check arguments to make sure they are not null (Nothing in Visual Basic).**  
 A null reference is a reference to an object that does not exist, often because no instance of the object has been programmatically created.  
  
## Remarks  
 <xref:System.ArgumentNullException> behaves identically to <xref:System.ArgumentException>. It is provided so application code can differentiate between exceptions caused by null arguments and exceptions caused by arguments that are not null. For errors caused by arguments that are not null, see [Troubleshooting Exceptions: System.ArgumentOutOfRangeException](../misc/troubleshooting-exceptions-system-argumentoutofrangeexception.md).  
  
## See Also  
 <xref:System.ArgumentNullException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)