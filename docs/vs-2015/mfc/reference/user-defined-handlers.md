---
title: "User-Defined Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# User-Defined Handlers
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [User-Defined Handlers](https://docs.microsoft.com/cpp/mfc/reference/user-defined-handlers).  
  
  
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







