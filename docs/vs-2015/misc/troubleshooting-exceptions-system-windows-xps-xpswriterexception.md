---
title: "Troubleshooting Exceptions: System.Windows.Xps.XpsWriterException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWXXpsWriter"
helpviewer_keywords: 
  - "System.Windows.Xps.XpsWriterException exception"
  - "XpsWriterException exception"
ms.assetid: 3b9fbb94-ed67-44f2-82bb-af5cb5ada1ef
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Windows.Xps.XpsWriterException
An <xref:System.Windows.Xps.XpsWriterException> exception is thrown when a method of either an <xref:System.Windows.Xps.XpsDocumentWriter> or a <xref:System.Windows.Xps.VisualsToXpsDocument> object is called that is incompatible with the current state of the object.  
  
## Remarks  
 For example, this exception is thrown if the `CancelAsync` method of either object type is called when the object is not performing an asynchronous write operation.  
  
## See Also  
 <xref:System.Windows.Xps.XpsWriterException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)