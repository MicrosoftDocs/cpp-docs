---
title: "List Box Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_LBN_DBLCLK"
  - "ON_LBN_ERRSPACE"
  - "ON_LBN_SETFOCUS"
  - "ON_LBN_SELCHANGE"
  - "ON_LBN_KILLFOCUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "list boxes, list box handlers"
  - "ON_LBN_KILLFOCUS"
  - "ON_LBN_ERRSPACE"
  - "ON_LBN_SELCHANGE"
  - "ON_LBN_SETFOCUS"
  - "ON_LBN_DBLCLK"
ms.assetid: e4e54412-2167-436a-883b-5dcad01820b8
caps.latest.revision: 11
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
# List Box Handlers
The following map entries have the corresponding function prototype.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_LBN_DBLCLK( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_LBN_ERRSPACE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_LBN_KILLFOCUS( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_LBN_SELCHANGE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_LBN_SETFOCUS( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)

