---
title: "User-Defined Handlers"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 99478294-bef0-4ba7-a369-25a6abdcdb62
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# User-Defined Handlers
The following map entries correspond to the function prototypes.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_MESSAGE( <message\>, <memberFxn\> )|afx_msg LRESULT memberFxn( WPARAM, LPARAM );|  
|ON_REGISTERED_MESSAGE( <nMessageVariable\>, <memberFxn\> )|afx_msg LRESULT memberFxn( WPARAM, LPARAM );|  
|ON_THREAD_MESSAGE( <message\>, <memberFxn\> )|afx_msg void memberFxn( WPARAM, LPARAM );|  
|ON_REGISTERED_THREAD_MESSAGE( <nMessageVariable\>, <memberFxn\> )|afx_msg void memberFxn( WPARAM, LPARAM );|  
  
## See Also  
 [Message Maps](../VS_visualcpp/Message-Maps--MFC-.md)   
 [Handlers for WM_ Messages](../VS_visualcpp/Handlers-for-WM_-Messages.md)