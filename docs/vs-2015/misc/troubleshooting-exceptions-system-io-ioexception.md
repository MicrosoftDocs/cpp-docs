---
title: "Troubleshooting Exceptions: System.IO.IOException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "IOException class"
ms.assetid: 87812daa-0784-43dc-b3dc-6652a960c362
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.IO.IOException
A <xref:System.IO.IOException> is thrown when an I/O error, such as failing to read from or write to a file, occurs.  
  
## Associated Tips  
 **Make sure the file and directory exist.**  
 Verify that the directory you are trying to read from/write to exists. Verify that the file you are trying to read from exists.  
  
### Remarks  
 <xref:System.IO.IOException> is the base class for exceptions thrown while accessing information using streams, files and directories.  
  
 The Base Class Library includes the following types, each of which is a derived class of <xref:System.IO.IOException>:  
  
-   <xref:System.IO.DirectoryNotFoundException>  
  
-   <xref:System.IO.EndOfStreamException>  
  
-   <xref:System.IO.FileNotFoundException>  
  
-   <xref:System.IO.FileLoadException>  
  
-   <xref:System.IO.PathTooLongException>  
  
## See Also  
 <xref:System.IO.IOException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [NOTINBUILD How to: Create CLR Console Applications](http://msdn.microsoft.com/en-us/b8af4197-e65f-4b17-b18e-b9e92965d026)