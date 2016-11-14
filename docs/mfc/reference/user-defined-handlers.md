---
title: "User-Defined Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.handlers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_REGISTERED_MESSAGE macro"
  - "ON_MESSAGE macro"
  - "user-defined handlers"
ms.assetid: 99478294-bef0-4ba7-a369-25a6abdcdb62
caps.latest.revision: 10
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
# User-Defined Handlers
The following map entries correspond to the function prototypes.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_MESSAGE( \<message>, \<memberFxn> )|afx_msg LRESULT memberFxn( WPARAM, LPARAM );|  
|ON_REGISTERED_MESSAGE( \<nMessageVariable>, \<memberFxn> )|afx_msg LRESULT memberFxn( WPARAM, LPARAM );|  
|ON_THREAD_MESSAGE( \<message>, \<memberFxn> )|afx_msg void memberFxn( WPARAM, LPARAM );|  
|ON_REGISTERED_THREAD_MESSAGE( \<nMessageVariable>, \<memberFxn> )|afx_msg void memberFxn( WPARAM, LPARAM );|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)   
 [Handlers for WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

