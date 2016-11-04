---
title: "Troubleshooting Exceptions: System.IO.InternalBufferOverflowException | Microsoft Docs"
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
  - "InternalBufferOverflowException class"
ms.assetid: 1f58ca15-c4e4-4af9-9a3d-42d2cf919cbe
caps.latest.revision: 11
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
# Troubleshooting Exceptions: System.IO.InternalBufferOverflowException
An <xref:System.IO.InternalBufferOverflowException> exception is thrown when the internal buffer overflows.  
  
## Associated Tips  
 **When using FileSystemWatcher, filter out unwanted change notifications.**  
 In a file-system watcher, when you are notified of file changes, the system stores those changes in a buffer that the component creates and passes to the application programming interfaces (APIs). If there are many changes in a short time, the buffer can overflow, resulting in an <xref:System.IO.InternalBufferOverflowException> exception, which loses all changes. To keep the buffer from overflowing, use the <xref:System.IO.FileSystemWatcher.NotifyFilter*> and <xref:System.IO.FileSystemWatcher.IncludeSubdirectories*> properties to filter out unwanted change notifications. For more information, see <xref:System.IO.FileSystemWatcher>.  
  
## Remarks  
 You can also increase the size of the internal buffer through the <xref:System.IO.FileSystemWatcher.InternalBufferSize*> property. However, increasing the size of the buffer will affect performance, so it is best to keep the buffer as small as possible.  
  
## See Also  
 <xref:System.IO.InternalBufferOverflowException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)