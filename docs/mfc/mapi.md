---
title: "MAPI"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "messaging, client applications"
  - "enabling applications for MAPI"
  - "MAPI support in MFC"
  - "e-mail, enabling"
  - "mail, enabling your application"
  - "MAPI, MFC"
  - "enabling applications for mail"
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
caps.latest.revision: 9
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
# MAPI
This article describes the Microsoft Messaging Application Programming Interface (MAPI) for client message application developers. MFC supplies support for a subset of MAPI in class **CDocument** but does not encapsulate the entire API. For more information, see [MAPI Support in MFC](../mfc/mapi-support-in-mfc.md).  
  
 MAPI is a set of functions that mail-enabled and mail-aware applications use to create, manipulate, transfer, and store mail messages. It gives application developers the tools to define the purpose and content of mail messages and gives them flexibility in their management of stored mail messages. MAPI also provides a common interface that application developers can use to create mail-enabled and mail-aware applications independent of the underlying messaging system.  
  
 Messaging clients provide a human interface for interaction with the Microsoft Windows Messaging System (WMS). This interaction typically includes requesting services from MAPI-compliant providers such as message stores and address books.  
  
 For more information about MAPI, see the articles under Guide in Win32 Messaging (MAPI) of the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## In This Section  
 [MAPI Support in MFC](../mfc/mapi-support-in-mfc.md)  
  
## See Also  
 [CDocument::OnFileSendMail](../Topic/CDocument::OnFileSendMail.md)   
 [CDocument::OnUpdateFileSendMail](../Topic/CDocument::OnUpdateFileSendMail.md)   
 [COleDocument::OnFileSendMail](../Topic/COleDocument::OnFileSendMail.md)