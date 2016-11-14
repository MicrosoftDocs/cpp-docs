---
title: "Automation Manager (MFC) | Microsoft Docs"
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
  - "Automation Manager"
  - "Automation servers, Automation Manager"
  - "Automation, Automation Manager"
  - "Remote Automation, Automation Manager"
  - "Automation clients, Automation Manager"
  - "AUTMGR32.exe"
ms.assetid: 6bf3429e-1946-41c5-86d0-ad7f5b8585b8
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
# Automation Manager (MFC)
AUTMGR32.EXE should be copied to the Windows system directory of each machine that is intending to provide Remote Automation objects. For Windows 95 and Windows 98, this directory is typically C:\WINDOWS\SYSTEM. For Windows NT and Windows 2000, it is typically C:\WINNT\SYSTEM32.  
  
 If you want to enable callbacks from the server to the client, this executable file should also be copied to the system directory of each client machine.  
  
 When the Automation Manager is running, it displays a small window on the server machine that contains brief status information. If you want to hide it, refer to article Q138067 in the Microsoft Knowledge Base.  
  
## See Also  
 [Remote Automation Connection Manager](../mfc/remote-automation-connection-manager.md)   
 [Remote Automation User Components](../mfc/remote-automation-user-components.md)   
 [Remote Automation Installation](../mfc/remote-automation-installation.md)

