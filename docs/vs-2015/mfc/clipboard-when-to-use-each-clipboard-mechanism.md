---
title: "Clipboard: When to Use Each Clipboard Mechanism | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applications [OLE], Clipboard"
  - "OLE Clipboard, guidelines"
  - "Clipboard [C++], mechanisms"
  - "OLE Clipboard, formats"
  - "formats [C++], Clipboard for OLE"
  - "Clipboard [C++], formats"
ms.assetid: fd071996-ef8c-488b-81bd-89057095a201
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Clipboard: When to Use Each Clipboard Mechanism
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Clipboard: When to Use Each Clipboard Mechanism](https://docs.microsoft.com/cpp/mfc/clipboard-when-to-use-each-clipboard-mechanism).  
  
  
Follow these guidelines in using the Clipboard:  
  
-   Use the OLE Clipboard mechanism now to enable new capabilities in the future. While the standard Clipboard API will be maintained, the OLE mechanism is the future of data transfer.  
  
-   Use the OLE Clipboard mechanism if you are writing an OLE application or you want any of the OLE features, such as drag and drop.  
  
-   Use the OLE Clipboard mechanism if you are providing OLE formats.  
  
## What do you want to do  
  
-   [Use the OLE Clipboard mechanism](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)  
  
-   [Use the Windows Clipboard mechanism](../mfc/clipboard-using-the-windows-clipboard.md)  
  
## See Also  
 [Clipboard](../mfc/clipboard.md)





