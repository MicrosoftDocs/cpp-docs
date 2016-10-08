---
title: "CCachedDataPathProperty Class"
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
ms.topic: reference
ms.assetid: 0d81356b-4fe5-43f6-aed2-2eb5a5485706
caps.latest.revision: 19
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
# CCachedDataPathProperty Class
Implements an OLE control property transferred asynchronously and cached in a memory file.  
  
## Syntax  
  
```  
class CCachedDataPathProperty : public CDataPathProperty  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCachedDataPathProperty::CCachedDataPathProperty](#ccacheddatapathproperty__ccacheddatapathproperty)|Constructs a `CCachedDataPathProperty` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCachedDataPathProperty::m_Cache](#ccacheddatapathproperty__m_cache)|`CMemFile` object in which to cache data.|  
  
## Remarks  
 A memory file is stored in RAM rather than on disk and is useful for fast temporary transfers.  
  
 Along with **CAysncMonikerFile** and `CDataPathProperty`, `CCachedDataPathProperty` provides functionality for the use of asynchronous monikers in OLE controls. With `CCachedDataPathProperty` objects, you are able to transfer data asynchronously from a URL or file source and store it in a memory file via the `m_Cache` public variable. All the data is stored in the memory file, and there is no need to override [OnDataAvailable](../VS_visualcpp/CAsyncMonikerFile-Class.md#casyncmonikerfile__ondataavailable) unless you want to watch for notifications and respond. For example, if you are transferring a large .GIF file and want to notify your control that more data has arrived and it should redraw itself, override `OnDataAvailable` to make the notification.  
  
 The class `CCachedDataPathProperty` is derived from `CDataPathProperty`.  
  
 For more information about how to use asynchronous monikers and ActiveX controls in Internet applications, see the following topics:  
  
-   [Internet First Steps: ActiveX Controls](../VS_visualcpp/ActiveX-Controls-on-the-Internet.md)  
  
-   [Internet First Steps: Asynchronous Monikers](../VS_visualcpp/Asynchronous-Monikers-on-the-Internet.md)  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CFile](../VS_visualcpp/CFile-Class.md)  
  
 [COleStreamFile](../VS_visualcpp/COleStreamFile-Class.md)  
  
 [CMonikerFile](../VS_visualcpp/CMonikerFile-Class.md)  
  
 [CAsyncMonikerFile](../VS_visualcpp/CAsyncMonikerFile-Class.md)  
  
 [CDataPathProperty](../VS_visualcpp/CDataPathProperty-Class.md)  
  
 `CCachedDataPathProperty`  
  
## Requirements  
 **Header:** afxctl.h  
  
##  <a name="ccacheddatapathproperty__ccacheddatapathproperty"></a>  CCachedDataPathProperty::CCachedDataPathProperty  
 Constructs a `CCachedDataPathProperty` object.  
  
```  
CCachedDataPathProperty(  
    COleControl* pControl = NULL );  
  
CCachedDataPathProperty(  
    LPCTSTR lpszPath,  
    COleControl* pControl = NULL );  
```  
  
### Parameters  
 `pControl`  
 A pointer to the ActiveX control object to be associated with this `CCachedDataPathProperty` object.  
  
 `lpszPath`  
 The path, which may be absolute or relative, used to create an asynchronous moniker that references the actual absolute location of the property. `CCachedDataPathProperty` uses URLs, not filenames. If you want a `CCachedDataPathProperty` object for a file, prepend file:// to the path.  
  
### Remarks  
 The `COleControl` object pointed to by `pControl` is used by [Open](../VS_visualcpp/CDataPathProperty-Class.md#cdatapathproperty__open) and retrieved by derived classes. If `pControl` is **NULL**, the control used with **Open** should be set with [SetControl](../VS_visualcpp/CDataPathProperty-Class.md#cdatapathproperty__setcontrol). If `lpszPath` is **NULL**, you can pass in the path through **Open** or set it with [SetPath](../VS_visualcpp/CDataPathProperty-Class.md#cdatapathproperty__setpath).  
  
##  <a name="ccacheddatapathproperty__m_cache"></a>  CCachedDataPathProperty::m_Cache  
 Contains the class name of the memory file into which data is cached.  
  
```  
CMemFile m_Cache;  
```  
  
### Remarks  
 A memory file is stored in RAM rather than on disk.  
  
## See Also  
 [CDataPathProperty Class](../VS_visualcpp/CDataPathProperty-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CDataPathProperty Class](../VS_visualcpp/CDataPathProperty-Class.md)