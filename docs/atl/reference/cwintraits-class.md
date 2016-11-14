---
title: "CWinTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinTraits"
  - "CMDIChildWinTraits"
  - "ATL.CWinTraits"
  - "CFrameWinTraits"
  - "ATL::CWinTraits"
  - "CControlWinTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDIChildWinTraits class"
  - "window styles, default values for ATL"
  - "CWinTraits class"
  - "CFrameWinTraits class"
  - "CControlWinTraits class"
ms.assetid: f78f486e-6d9c-42c6-8e86-371e05aa7e59
caps.latest.revision: 19
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
# CWinTraits Class
This class provides a method for standardizing the styles used when creating a window object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <DWORD t_dwStyle = 0,  DWORD t_dwExStyle = 0>  class CWinTraits
```  
  
#### Parameters  
 `t_dwStyle`  
 Default standard window styles.  
  
 `t_dwExStyle`  
 Default extended window styles.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinTraits::GetWndExStyle](#cwintraits__getwndexstyle)|(Static) Retrieves the extended styles for the `CWinTraits` object.|  
|[CWinTraits::GetWndStyle](#cwintraits__getwndstyle)|(Static) Retrieves the standard styles for the `CWinTraits` object.|  
  
## Remarks  
 This [window traits](../../atl/understanding-window-traits.md) class provides a simple method for standardizing the styles used for the creation of an ATL window object. Use a specialization of this class as a template parameter to [CWindowImpl](../../atl/reference/cwindowimpl-class.md) or another of ATL's window classes to specify the default standard and extended styles used for instances of that window class.  
  
 Use this template when you want to provide default window styles that will be used only when no other styles are specified in the call to [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#cwindowimpl__create).  
  
 ATL provides three predefined specializations of this template for commonly used combinations of window styles:  
  
 `CControlWinTraits`  
 Designed for a standard control window. The following standard styles are used: **WS_CHILD**, **WS_VISIBLE**, **WS_CLIPCHILDREN**, and **WS_CLIPSIBLINGS**. There are no extended styles.  
  
 `CFrameWinTraits`  
 Designed for a standard frame window. The standard styles used include: **WS_OVERLAPPEDWINDOW**, **WS_CLIPCHILDREN**, and **WS_CLIPSIBLINGS**. The extended styles used include: **WS_EX_APPWINDOW** and **WS_EX_WINDOWEDGE**.  
  
 `CMDIChildWinTraits`  
 Designed for a standard MDI child window. The standard styles used include: **WS_OVERLAPPEDWINDOW**, **WS_CHILD**, **WS_VISIBLE**, **WS_CLIPCHILDREN**, and **WS_CLIPSIBLINGS**. The extended styles used include: **WS_EX_MDICHILD**.  
  
 If you want to ensure that certain styles are set for all instances of the window class while permitting other styles to be set on a per-instance basis, use [CWinTraitsOR](../../atl/reference/cwintraitsor-class.md) instead.  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="cwintraits__getwndstyle"></a>  CWinTraits::GetWndStyle  
 Call this function to retrieve the standard styles of the `CWinTraits` object.  
  
```
static DWORD GetWndStyle(DWORD dwStyle);
```  
  
### Parameters  
 `dwStyle`  
 Standard styles used for creation of a window. If `dwStyle` is 0, the template style values ( `t_dwStyle`) are returned. If `dwStyle` is nonzero, `dwStyle` is returned.  
  
### Return Value  
 The standard window styles of the object.  
  
##  <a name="cwintraits__getwndexstyle"></a>  CWinTraits::GetWndExStyle  
 Call this function to retrieve the extended styles of the `CWinTraits` object.  
  
```
static DWORD GetWndExStyle(DWORD dwExStyle);
```  
  
### Parameters  
 `dwExStyle`  
 Extended styles used for creation of a window. If `dwExStyle` is 0, the template style values ( `t_dwExStyle`) are returned. If `dwExStyle` is nonzero, `dwExStyle` is returned.  
  
### Return Value  
 The extended window styles of the object.  
  
## See Also  
 [Class Members](http://msdn.microsoft.com/en-us/dbe6a147-3f01-4aea-a3fb-fe6ebadc31f8)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Understanding Window Traits](../../atl/understanding-window-traits.md)









