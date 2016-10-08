---
title: "List Box Handlers"
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
ms.assetid: e4e54412-2167-436a-883b-5dcad01820b8
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
# List Box Handlers
The following map entries have the corresponding function prototype.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_LBN_DBLCLK( <id\>, <memberFxn\> )|afx_msg void memberFxn( );|  
|ON_LBN_ERRSPACE( <id\>, <memberFxn\> )|afx_msg void memberFxn( );|  
|ON_LBN_KILLFOCUS( <id\>, <memberFxn\> )|afx_msg void memberFxn( );|  
|ON_LBN_SELCHANGE( <id\>, <memberFxn\> )|afx_msg void memberFxn( );|  
|ON_LBN_SETFOCUS( <id\>, <memberFxn\> )|afx_msg void memberFxn( );|  
  
## See Also  
 [Message Maps](../VS_visualcpp/Message-Maps--MFC-.md)