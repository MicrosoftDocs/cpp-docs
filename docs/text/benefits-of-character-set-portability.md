---
title: "Benefits of Character Set Portability | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["character sets [C++], benefits", "portability [C++], character sets"]
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
author: "mikeblome"
ms.author: "mikeblome"
ms.workload: ["cplusplus"]
---
# Benefits of Character Set Portability
You can benefit from using MFC and C run-time portability features even if you do not currently intend to internationalize your application:  
  
-   Coding portably makes your code base flexible. You can later move it easily to Unicode or MBCS.  
  
-   Using Unicode makes your applications for Windows more efficient. Because Windows uses Unicode, non-Unicode strings passed to and from the operating system must be translated, which incurs overhead.  

  
## See Also  
 [Unicode and MBCS](../text/unicode-and-mbcs.md)   
 [Support for Unicode](../text/support-for-unicode.md)