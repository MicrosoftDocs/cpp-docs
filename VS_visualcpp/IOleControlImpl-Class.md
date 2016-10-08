---
title: "IOleControlImpl Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 5a4255ad-ede4-49ca-ba9a-07c2e919fa85
caps.latest.revision: 16
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
# IOleControlImpl Class
This class provides a default implementation of the **IOleControl** interface and implements **IUnknown**.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
  
template< class  T>  
   class  
   IOleControlImpl  
  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IOleControlImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IOleControlImpl::FreezeEvents](../Topic/IOleControlImpl::FreezeEvents.md)|Indicates whether or not the container ignores or accepts events from the control.|  
|[IOleControlImpl::GetControlInfo](../Topic/IOleControlImpl::GetControlInfo.md)|Fills in information about the control's keyboard behavior. The ATL implementation returns **E_NOTIMPL**.|  
|[IOleControlImpl::OnAmbientPropertyChange](../Topic/IOleControlImpl::OnAmbientPropertyChange.md)|Informs a control that one or more of the container's ambient properties has changed. The ATL implementation returns `S_OK`.|  
|[IOleControlImpl::OnMnemonic](../Topic/IOleControlImpl::OnMnemonic.md)|Informs the control that a user has pressed a specified keystroke. The ATL implementation returns **E_NOTIMPL**.|  
  
## Remarks  
 Class `IOleControlImpl` provides a default implementation of the [IOleControl](http://msdn.microsoft.com/library/windows/desktop/ms694320) interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../VS_visualcpp/Active-Template-Library--ATL--Tutorial.md), [Creating an ATL Project](../VS_visualcpp/Creating-an-ATL-Project.md)  
  
## Inheritance Hierarchy  
 `IOleControl`  
  
 `IOleControlImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="iolecontrolimpl__freezeevents"></a>  IOleControlImpl::FreezeEvents  
 In ATL's implementation, `FreezeEvents` increments the control class's `m_nFreezeEvents` data member if `bFreeze` is **TRUE**, and decrements `m_nFreezeEvents` if `bFreeze` is **FALSE**.  
  
```  
  
HRESULT FreezeEvents(  
      BOOL  bFreeze  
   );  
  
```  
  
### Remarks  
 `FreezeEvents` then returns `S_OK`.  
  
 See [IOleControl::FreezeEvents](http://msdn.microsoft.com/library/windows/desktop/ms678482) in the Windows SDK.  
  
##  <a name="iolecontrolimpl__getcontrolinfo"></a>  IOleControlImpl::GetControlInfo  
 Fills in information about the control's keyboard behavior.  
  
```  
  
HRESULT GetControlInfo(  
      LPCONTROLINFO  pCI  
   );  
  
```  
  
### Remarks  
 See [IOleControl:GetControlInfo](http://msdn.microsoft.com/library/windows/desktop/ms693730) in the Windows SDK.  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
##  <a name="iolecontrolimpl__onambientpropertychange"></a>  IOleControlImpl::OnAmbientPropertyChange  
 Informs a control that one or more of the container's ambient properties has changed.  
  
```  
  
HRESULT OnAmbientPropertyChange(  
      DISPID  dispid  
   );  
  
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IOleControl::OnAmbientPropertyChange](http://msdn.microsoft.com/library/windows/desktop/ms690175) in the Windows SDK.  
  
##  <a name="iolecontrolimpl__onmnemonic"></a>  IOleControlImpl::OnMnemonic  
 Informs the control that a user has pressed a specified keystroke.  
  
```  
  
HRESULT OnMnemonic(  
      LPMSG  pMsg  
   );  
  
```  
  
### Return Value  
 Returns **E_NOTIMPL**.  
  
### Remarks  
 See [IOleControl::OnMnemonic](http://msdn.microsoft.com/library/windows/desktop/ms680699) in the Windows SDK.  
  
## See Also  
 [IOleObjectImpl Class](../VS_visualcpp/IOleObjectImpl-Class.md)   
 [ActiveX Controls Interfaces](http://msdn.microsoft.com/library/windows/desktop/ms692724)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)