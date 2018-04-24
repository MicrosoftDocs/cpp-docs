---
title: "Remote Automation User Components | Microsoft Docs"
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
  - "DLLs [C++], Automation"
  - "Remote Automation [C++], user components"
ms.assetid: 601591cc-a442-440a-988e-baf3284b0d46
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Remote Automation User Components
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Remote Automation User Components](https://docs.microsoft.com/cpp/mfc/remote-automation-user-components).  
  
  
You will need to ensure that each client machine contains your client program and any support DLLs it requires. You will also need to ensure that the server application and any support DLLs it requires are present on the server machine. Finally, you will need to ensure that your server program is registered on each client machine before RAC Manager can be run to configure the connection. If the program is self-registering (as most will be), you need only execute the server program on the client machine to register it. Failing that, you may have to execute a registration file that you provide, or manually edit the registry.  
  
## See Also  
 [Automation Manager (MFC)](../mfc/automation-manager-mfc.md)   
 [Remote Automation Connection Manager](../mfc/remote-automation-connection-manager.md)   
 [Remote Automation Installation](../mfc/remote-automation-installation.md)





