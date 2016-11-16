---
title: "IObjectWithSiteImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::IObjectWithSiteImpl"
  - "ATL.IObjectWithSiteImpl<T>"
  - "IObjectWithSiteImpl"
  - "ATL.IObjectWithSiteImpl"
  - "ATL::IObjectWithSiteImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IObjectWithSiteImpl class"
ms.assetid: 4e1f774f-bc3d-45ee-9a1c-c3533a511588
caps.latest.revision: 18
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
# IObjectWithSiteImpl Class
This class provides methods allowing an object to communicate with its site.  
  
## Syntax  
  
```
template <class   T>
    class ATL_NO_VTABLE IObjectWithSiteImpl :
    public IObjectWithSite
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IObjectWithSiteImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IObjectWithSiteImpl::GetSite](#iobjectwithsiteimpl__getsite)|Queries the site for an interface pointer.|  
|[IObjectWithSiteImpl::SetChildSite](#iobjectwithsiteimpl__setchildsite)|Provides the object with the site's **IUnknown** pointer.|  
|[IObjectWithSiteImpl::SetSite](#iobjectwithsiteimpl__setsite)|Provides the object with the site's **IUnknown** pointer.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[IObjectWithSiteImpl::m_spUnkSite](#iobjectwithsiteimpl__m_spunksite)|Manages the site's **IUnknown** pointer.|  
  
## Remarks  
 The [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) interface allows an object to communicate with its site. Class `IObjectWithSiteImpl` provides a default implementation of this interface and implements **IUnknown** by sending information to the dump device in debug builds.  
  
 `IObjectWithSiteImpl` specifies two methods. The client first calls `SetSite`, passing the site's **IUnknown** pointer. This pointer is stored within the object, and can later be retrieved through a call to `GetSite`.  
  
 Typically, you derive your class from `IObjectWithSiteImpl` when you are creating an object that is not a control. For controls, derive your class from [IOleObjectImpl](../../atl/reference/ioleobjectimpl-class.md), which also provides a site pointer. Do not derive your class from both `IObjectWithSiteImpl` and `IOleObjectImpl`.  
  
## Inheritance Hierarchy  
 `IObjectWithSite`  
  
 `IObjectWithSiteImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="iobjectwithsiteimpl__getsite"></a>  IObjectWithSiteImpl::GetSite  
 Queries the site for a pointer to the interface identified by `riid`.  
  
```
STDMETHOD(GetSite)(
    REFIID riid,
    void** ppvSite);
```  
  
### Remarks  
 If the site supports this interface, the pointer is returned via `ppvSite`. Otherwise, `ppvSite` is set to **NULL**.  
  
 See [IObjectWithSite::GetSite](http://msdn.microsoft.com/library/windows/desktop/ms694452) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="iobjectwithsiteimpl__m_spunksite"></a>  IObjectWithSiteImpl::m_spUnkSite  
 Manages the site's **IUnknown** pointer.  
  
```
CComPtr<IUnknown> m_spUnkSite;
```  
  
### Remarks  
 `m_spUnkSite` initially receives this pointer through a call to [SetSite](#iobjectwithsiteimpl__setsite).  
  
##  <a name="iobjectwithsiteimpl__setchildsite"></a>  IObjectWithSiteImpl::SetChildSite  
 Provides the object with the site's **IUnknown** pointer.  
  
```
HRESULT SetChildSite(IUnknown* pUnkSite);
```  
  
### Parameters  
 *pUnkSite*  
 [in] Pointer to the **IUnknown** interface pointer of the site managing this object. If NULL, the object should call `IUnknown::Release` on any existing site at which point the object no longer knows its site.  
  
### Return Value  
 Returns `S_OK`.  
  
##  <a name="iobjectwithsiteimpl__setsite"></a>  IObjectWithSiteImpl::SetSite  
 Provides the object with the site's **IUnknown** pointer.  
  
```
STDMETHOD(SetSite)(IUnknown* pUnkSite);
```  
  
### Remarks  
 See [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
