---
title: "IPointerInactiveImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IPointerInactiveImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IPointerInactive ATL implementation"
  - "inactive objects"
  - "IPointerInactiveImpl class"
ms.assetid: e1fe9ea6-d38a-4527-9112-eb344771e0b7
caps.latest.revision: 21
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
# IPointerInactiveImpl Class
This class implements **IUnknown** and the [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712) interface methods.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template<class  T>
class IPointerInactiveImpl
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IPointerInactiveImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IPointerInactiveImpl::GetActivationPolicy](#ipointerinactiveimpl__getactivationpolicy)|Retrieves the current activation policy for the object. The ATL implementation returns **E_NOTIMPL**.|  
|[IPointerInactiveImpl::OnInactiveMouseMove](#ipointerinactiveimpl__oninactivemousemove)|Notifies the object that the mouse pointer has moved over it, indicating the object can fire mouse events. The ATL implementation returns **E_NOTIMPL**.|  
|[IPointerInactiveImpl::OnInactiveSetCursor](#ipointerinactiveimpl__oninactivesetcursor)|Sets the mouse pointer for the inactive object. The ATL implementation returns **E_NOTIMPL**.|  
  
## Remarks  
 An inactive object is one that is simply loaded or running. Unlike an active object, an inactive object cannot receive Windows mouse and keyboard messages. Thus, inactive objects use fewer resources and are typically more efficient.  
  
 The [IPointerInactive](http://msdn.microsoft.com/library/windows/desktop/ms693712) interface allows an object to support a minimal level of mouse interaction while remaining inactive. This functionality is particularly useful for controls.  
  
 Class `IPointerInactiveImpl` implements the `IPointerInactive` methods by simply returning **E_NOTIMPL**. However, it implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IPointerInactive`  
  
 `IPointerInactiveImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="ipointerinactiveimpl__getactivationpolicy"></a>  IPointerInactiveImpl::GetActivationPolicy  
 Retrieves the current activation policy for the object.  
  
```
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IPointerInactive::GetActivationPolicy](http://msdn.microsoft.com/library/windows/desktop/ms692470) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ipointerinactiveimpl__oninactivemousemove"></a>  IPointerInactiveImpl::OnInactiveMouseMove  
 Notifies the object that the mouse pointer has moved over it, indicating the object can fire mouse events.  
  
```
HRESULT OnInactiveMouseMove(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IPointerInactive::OnInactiveMouseMove](http://msdn.microsoft.com/library/windows/desktop/ms693374) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ipointerinactiveimpl__oninactivesetcursor"></a>  IPointerInactiveImpl::OnInactiveSetCursor  
 Sets the mouse pointer for the inactive object.  
  
```
HRESULT OnInactiveSetCursor(
    LPCRECT pRectBounds,
    long x,
    long y,
    DWORD dwMouseMsg,
    BOOL fSetAlways);
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IPointerInactive::OnInactiveSetCursor](http://msdn.microsoft.com/library/windows/desktop/ms694336) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
