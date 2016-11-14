---
title: "CFirePropNotifyEvent Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFirePropNotifyEvent"
  - "ATL::CFirePropNotifyEvent"
  - "ATL.CFirePropNotifyEvent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sinks, notifying of ATL events"
  - "CFirePropNotifyEvent class"
  - "connection points [C++], notifying of events"
ms.assetid: eb7a563e-6bce-4cdf-8d20-8c6a5307781b
caps.latest.revision: 20
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
# CFirePropNotifyEvent Class
This class provides methods for notifying the container's sink regarding control property changes.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CFirePropNotifyEvent
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFirePropNotifyEvent::FireOnChanged](#cfirepropnotifyevent__fireonchanged)|(Static) Notifies the container's sink that a control property has changed.|  
|[CFirePropNotifyEvent::FireOnRequestEdit](#cfirepropnotifyevent__fireonrequestedit)|(Static) Notifies the container's sink that a control property is about to change.|  
  
## Remarks  
 `CFirePropNotifyEvent` has two methods that notify the container's sink that a control property has changed or is about to change.  
  
 If the class implementing your control is derived from `IPropertyNotifySink`, the `CFirePropNotifyEvent` methods are invoked when you call `FireOnRequestEdit` or `FireOnChanged`. If your control class is not derived from `IPropertyNotifySink`, calls to these functions return `S_OK`.  
  
 For more information about creating controls, see the [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md).  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="cfirepropnotifyevent__fireonchanged"></a>  CFirePropNotifyEvent::FireOnChanged  
 Notifies all connected [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaces (on every connection point of the object) that the specified object property has changed.  
  
```
static HRESULT FireOnChanged(
    IUnknown* pUnk,  DISPID dispID);
```  
  
### Parameters  
 *pUnk*  
 [in] Pointer to the **IUnknown** of the object sending the notification.  
  
 *dispID*  
 [in] Identifier of the property that has changed.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 This function is safe to call even if your control does not support connection points.  
  
##  <a name="cfirepropnotifyevent__fireonrequestedit"></a>  CFirePropNotifyEvent::FireOnRequestEdit  
 Notifies all connected [IPropertyNotifySink](http://msdn.microsoft.com/library/windows/desktop/ms692638) interfaces (on every connection point of the object) that the specified object property is about to change.  
  
```
static HRESULT FireOnRequestEdit(
    IUnknown* pUnk,  DISPID dispID);
```  
  
### Parameters  
 *pUnk*  
 [in] Pointer to the **IUnknown** of the object sending the notification.  
  
 *dispID*  
 [in] Identifier of the property about to change.  
  
### Return Value  
 One of the standard `HRESULT` values.  
  
### Remarks  
 This function is safe to call even if your control does not support connection points.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
