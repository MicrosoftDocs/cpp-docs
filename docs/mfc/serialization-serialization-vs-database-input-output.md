---
title: "Serialization: Serialization vs. Database Input-Output | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database applications [C++], file I/O vs. serialization"
  - "serialization [C++], vs. database I/O"
  - "I/O [C++], vs. serialization"
  - "databases [C++], input/output handling"
ms.assetid: f1d23d77-4761-4a52-a7ea-54fc92d347ea
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Serialization: Serialization vs. Database Input/Output
This article explains when to use document objects and serialization for file-based input/output (I/O) and when other I/O techniques are appropriate — because the application reads and writes data on a per-transaction basis, as in database applications. If you don't use serialization, you also won't need the File Open, Save, and Save As commands. Topics covered include:  
  
-   [Recommendations for handling input/output](../mfc/recommendations-for-handling-input-output.md)  
  
-   [Handling the File menu in database applications](../mfc/file-menu-in-an-mfc-database-application.md)  
  
## See Also  
 [Serialization](../mfc/serialization-in-mfc.md)

