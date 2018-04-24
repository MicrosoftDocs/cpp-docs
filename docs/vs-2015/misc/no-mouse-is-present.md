---
title: "No mouse is present | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrMouse_NoMouseIsPresent"
ms.assetid: 4472fd57-4217-4463-9d3c-dc4a8fe88f1b
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# No mouse is present
One of the properties of the `My.Computer.Mouse` object was called, but the computer has no mouse or mouse port installed.  
  
### To correct this error  
  
-   Add a `Try...Catch` block around the call to the property of the `My.Computer.Mouse` object.  
  
     — or —  
  
-   Install a mouse on the computer.  
  
## See Also  
 [My.Computer.Mouse Object](http://msdn.microsoft.com/library/da473357-2120-47dd-bd42-c63d695157eb)   
 [Exception and Error Handling in Visual Basic](http://msdn.microsoft.com/en-us/3e351e73-cf23-40ab-8b60-05794160529e)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)