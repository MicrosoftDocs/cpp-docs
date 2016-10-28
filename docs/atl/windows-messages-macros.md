---
title: "Windows Messages Macros"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
caps.latest.revision: 12
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
# Windows Messages Macros
This macro forwards window messages.  
  
|||  
|-|-|  
|[WM_FORWARDMSG](../Topic/WM_FORWARDMSG.md)|Use to forward a message received by a window to another window for processing.|  
  
##  <a name="wm_forwardmsg"></a>  WM_FORWARDMSG  
 This macro forwards a message received by a window to another window for processing.  
  
```
WM_FORWARDMSG
```  
  
### Return Value  
 Nonzero if the message was processed, zero if not.  
  
### Remarks  
 Use `WM_FORWARDMSG` to forward a message received by a window to another window for processing. The LPARAM and WPARAM parameters are used as follows:  
  
|Parameter|Usage|  
|---------------|-----------|  
|WPARAM|Data defined by user|  
|LPARAM|A pointer to a `MSG` structure that contains information about a message|  
  
### Example  
 In the following example, `m_hWndOther` represents the other window that receives this message.  
  
 [!code[NVC_ATL_Windowing#137](../atl/codesnippet/CPP/windows-messages-macros_1.cpp)]  
  
## See Also  
 [Macros](../atl/atl-macros.md)

