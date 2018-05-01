---
title: "Windows Messages Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Windows Messages Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Windows Messages Macros](https://docs.microsoft.com/cpp/atl/reference/windows-messages-macros).  
  
  
This macro forwards window messages.  
  
|||  
|-|-|  
|[WM_FORWARDMSG](#wm_forwardmsg)|Use to forward a message received by a window to another window for processing.|  
  
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
  
 [!code-cpp[NVC_ATL_Windowing#137](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyWindow.cpp#137)]  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)






