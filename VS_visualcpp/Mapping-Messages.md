---
title: "Mapping Messages"
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
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
caps.latest.revision: 7
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
# Mapping Messages
Each framework class that can receive messages or commands has its own "message map." The framework uses message maps to connect messages and commands to their handler functions. Any class derived from class `CCmdTarget` can have a message map. Other articles explain message maps in detail and describe how to use them.  
  
 In spite of the name "message map," message maps handle both messages and commands — all three categories of messages listed in [Message Categories](../VS_visualcpp/Message-Categories.md).  
  
## See Also  
 [Messages and Commands in the Framework](../VS_visualcpp/Messages-and-Commands-in-the-Framework.md)