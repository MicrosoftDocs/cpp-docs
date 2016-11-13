---
title: "Troubleshooting Exceptions: System.IO.EndOfStreamException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "EndOfStreamException class"
ms.assetid: 1271e6f6-3a0d-49f0-9ff4-178d480687be
caps.latest.revision: 14
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
# Troubleshooting Exceptions: System.IO.EndOfStreamException
An <xref:System.IO.EndOfStreamException> exception is thrown when there is an attempt to read past the end of a stream.  
  
## Associated Tips  
 **Check whether the end of the file has been reached before reading.**  
 Use the <xref:System.IO.StreamReader.Peek%2A> method to check the end of the file before reading from the stream.  
  
## See Also  
 <xref:System.IO.EndOfStreamException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Read and Write to a Newly Created Data File](../Topic/How%20to:%20Read%20and%20Write%20to%20a%20Newly%20Created%20Data%20File.md)   
 [How to: Open and Append to a Log File](../Topic/How%20to:%20Open%20and%20Append%20to%20a%20Log%20File.md)