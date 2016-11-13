---
title: "User Button Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ON_BN_HILITE"
  - "ON_BN_DOUBLECLICKED"
  - "ON_BN_CLICKED"
  - "ON_BN_PAINT"
  - "ON_BN_DISABLE"
  - "ON_BN_UNHILITE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ON_BN_PAINT"
  - "user buttons"
  - "ON_BN_DOUBLECLICKED"
  - "ON_BN_DISABLE"
  - "ON_BN_UNHILITE"
  - "ON_BN_HILITE"
  - "ON_BN_CLICKED"
ms.assetid: 410ea968-478f-4806-b7b8-5d7c8dc2bf42
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
# User Button Handlers
The following map entries correspond to the function prototypes.  
  
|Map entry|Function prototype|  
|---------------|------------------------|  
|ON_BN_CLICKED( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_DISABLE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_DOUBLECLICKED( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_HILITE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_PAINT( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
|ON_BN_UNHILITE( \<id>, \<memberFxn> )|afx_msg void memberFxn( );|  
  
## See Also  
 [Message Maps](../../mfc/reference/message-maps-mfc.md)

