---
title: "An invalid name was specified for the event log | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b1b158bd-f13f-4371-a8af-31c0e86ae6be
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# An invalid name was specified for the event log
An invalid name was specified for the event log. Usually this is a result of invalid characters in the name, a blank file name, or a file name that is too long.  
  
### To correct this error  
  
-   If the specified name is more than eight characters, make sure there is no conflict with the names of other event logs. Only the first eight characters are evaluated when determining if the name is unique.  
  
-   If supplying a path, make sure it is parsed correctly.  
  
-   Check that there are no invalid characters in the name. Characters that cannot be used in a file name include `<`, `>`, `:`, `"`, `/`, `\`, and `|`.  
  
## See Also  
 [How to: Parse File Paths](http://msdn.microsoft.com/library/c1bd99c9-8160-456a-b5ab-60a49139b923)   
 [How to: Rename a File](http://msdn.microsoft.com/library/0ea7e0c8-2cb2-4bf5-a00d-7b6e3c08a3bc)   
 [How to: Create and Remove Custom Event Logs](http://msdn.microsoft.com/en-us/af9b7da0-80c7-46ac-b7f7-897063ddd503)