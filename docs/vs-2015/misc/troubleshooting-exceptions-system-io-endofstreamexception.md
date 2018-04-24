---
title: "Troubleshooting Exceptions: System.IO.EndOfStreamException | Microsoft Docs"
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
  - "EndOfStreamException class"
ms.assetid: 1271e6f6-3a0d-49f0-9ff4-178d480687be
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.IO.EndOfStreamException
An <xref:System.IO.EndOfStreamException> exception is thrown when there is an attempt to read past the end of a stream.  
  
## Associated Tips  
 **Check whether the end of the file has been reached before reading.**  
 Use the <xref:System.IO.StreamReader.Peek%2A> method to check the end of the file before reading from the stream.  
  
## See Also  
 <xref:System.IO.EndOfStreamException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [How to: Read and Write to a Newly Created Data File](http://msdn.microsoft.com/library/e209d949-31e8-44ea-8e38-87f9093f3093)   
 [How to: Open and Append to a Log File](http://msdn.microsoft.com/library/74423362-1721-49cb-aa0a-e04005f72a06)