---
title: "CMessageMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMessageMap"
  - "ATL.CMessageMap"
  - "ATL::CMessageMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMessageMap class"
  - "message maps, ATL"
  - "ATL, message handlers"
ms.assetid: 1f97bc16-a8a0-4cf0-b90f-1778813a5c8e
caps.latest.revision: 22
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
# CMessageMap Class
This class allows an object's message maps to be access by another object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class ATL_NO_VTABLE CMessageMap
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMessageMap::ProcessWindowMessage](#cmessagemap__processwindowmessage)|Accesses a message map in the `CMessageMap`-derived class.|  
  
## Remarks  
 `CMessageMap` is an abstract base class that allows an object's message maps to be accessed by another object. In order for an object to expose its message maps, its class must derive from `CMessageMap`.  
  
 ATL uses `CMessageMap` to support contained windows and dynamic message map chaining. For example, any class containing a [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) object must derive from `CMessageMap`. The following code is taken from the [SUBEDIT](../../visual-cpp-samples.md) sample. Through [CComControl](../../atl/reference/ccomcontrol-class.md), the `CAtlEdit` class automatically derives from `CMessageMap`.  
  
 [!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]  
  
 Because the contained window, `m_EditCtrl`, will use a message map in the containing class, `CAtlEdit` derives from `CMessageMap`.  
  
 For more information about message maps, see [Message Maps](../../atl/message-maps-atl.md) in the article "ATL Window Classes."  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="cmessagemap__processwindowmessage"></a>  CMessageMap::ProcessWindowMessage  
 Accesses the message map identified by `dwMsgMapID` in a `CMessageMap`-derived class.  
  
```
virtual BOOL ProcessWindowMessage(HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT& lResult,
    DWORD dwMsgMapID) = 0;
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to the window receiving the message.  
  
 `uMsg`  
 [in] The message sent to the window.  
  
 `wParam`  
 [in] Additional message-specific information.  
  
 `lParam`  
 [in] Additional message-specific information.  
  
 `lResult`  
 [out] The result of the message processing.  
  
 `dwMsgMapID`  
 [in] The identifier of the message map that will process the message. The default message map, declared with [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554), is identified by 0. An alternate message map, declared with [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), is identified by `msgMapID`.  
  
### Return Value  
 **TRUE** if the message is fully handled; otherwise, **FALSE**.  
  
### Remarks  
 Called by the window procedure of a [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) object or of an object that is dynamically chaining to the message map.  
  
## See Also  
 [CDynamicChain Class](../../atl/reference/cdynamicchain-class.md)   
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [ALT_MSG_MAP](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8)   
 [Class Overview](../../atl/atl-class-overview.md)
