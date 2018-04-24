---
title: "Encoding cannot be set to Nothing | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 59f7c731-8291-4a85-bf51-c225e48cdc84
caps.latest.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Encoding cannot be set to Nothing
An attempt to read from or write to a file has failed because the parameter `encoding` has been set to `Nothing` but requires a valid value.  
  
 <xref:System.Text.Encoding> is used to determine what encoding to use when writing to a file. The default is UTF-8.  
  
### To correct this error  
  
-   Supply a valid value for the `encoding` parameter.  
  
## See Also  
 [File Encodings](http://msdn.microsoft.com/library/ea2c5f5f-bbb1-4150-9928-b9951fa6bc57)   
 [Reading from Files](http://msdn.microsoft.com/library/ad831a1b-7d01-4f07-a47b-799f3037df19)   
 [Writing to Files](http://msdn.microsoft.com/library/ac6fb453-0d6c-4ce4-93b4-1bbcd06de83e)   
 [My.Computer.FileSystem.ReadAllText Method](http://msdn.microsoft.com/en-us/3a7ac8be-fb1d-4087-bc65-167d6754d57f)   
 [My.Computer.FileSystem.WriteAllText Method](http://msdn.microsoft.com/en-us/f507460c-87d9-4504-b74f-3ff825c7d5c4)