---
title: "IPersistStorageImpl Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "ATL::IPersistStorageImpl"
  - "ATL::IPersistStorageImpl<T>"
  - "ATL.IPersistStorageImpl<T>"
  - "IPersistStorageImpl"
  - "ATL.IPersistStorageImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "storage, ATL"
  - "IPersistStorageImpl class"
ms.assetid: d652f02c-239c-47c7-9a50-3e9fc3014fff
caps.latest.revision: 15
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
# IPersistStorageImpl Class
This class implements the [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interface.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../atl/includes/wrt_md.md)].  
  
## Syntax  
  
```
template <class T>  class ATL_NO_VTABLE IPersistStorageImpl :  public IPersistStorage
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IPersistStorageImpl`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IPersistStorageImpl::GetClassID](../Topic/IPersistStorageImpl::GetClassID.md)|Retrieves the object's CLSID.|  
|[IPersistStorageImpl::HandsOffStorage](../Topic/IPersistStorageImpl::HandsOffStorage.md)|Instructs the object to release all storage objects and enter HandsOff mode. The ATL implementation returns `S_OK`.|  
|[IPersistStorageImpl::InitNew](../Topic/IPersistStorageImpl::InitNew.md)|Initializes a new storage.|  
|[IPersistStorageImpl::IsDirty](../Topic/IPersistStorageImpl::IsDirty.md)|Checks whether the object's data has changed since it was last saved.|  
|[IPersistStorageImpl::Load](../Topic/IPersistStorageImpl::Load.md)|Loads the object's properties from the specified storage.|  
|[IPersistStorageImpl::Save](../Topic/IPersistStorageImpl::Save.md)|Saves the object's properties to the specified storage.|  
|[IPersistStorageImpl::SaveCompleted](../Topic/IPersistStorageImpl::SaveCompleted.md)|Notifies an object that it can return to Normal mode to write to its storage object. The ATL implementation returns `S_OK`.|  
  
## Remarks  
 `IPersistStorageImpl` implements the [IPersistStorage](http://msdn.microsoft.com/library/windows/desktop/ms679731) interface, which allows a client to request that your object load and save its persistent data using a storage.  
  
 The implementation of this class requires class `T` to make an implementation of the `IPersistStreamInit` interface available via `QueryInterface`. Typically this means that class `T` should derive from [IPersistStreamInitImpl](../atl/ipersiststreaminitimpl-class.md), provide an entry for `IPersistStreamInit` in the [COM map](../Topic/BEGIN_COM_MAP.md), and use a [property map](../Topic/BEGIN_PROP_MAP.md) to describe the class's persistent data.  
  
 **Related Articles** [ATL Tutorial](../atl/active-template-library--atl--tutorial.md), [Creating an ATL Project](../atl/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IPersistStorage`  
  
 `IPersistStorageImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="ipersiststorageimpl__getclassid"></a>  IPersistStorageImpl::GetClassID  
 Retrieves the object's CLSID.  
  
```
STDMETHOD(GetClassID)(CLSID* pClassID);
```  
  
### Remarks  
 See [IPersist::GetClassID](http://msdn.microsoft.com/library/windows/desktop/ms688664) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersiststorageimpl__handsoffstorage"></a>  IPersistStorageImpl::HandsOffStorage  
 Instructs the object to release all storage objects and enter HandsOff mode.  
  
```
STDMETHOD(HandsOffStorage)(void);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IPersistStorage::HandsOffStorage](http://msdn.microsoft.com/library/windows/desktop/ms679742) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersiststorageimpl__initnew"></a>  IPersistStorageImpl::InitNew  
 Initializes a new storage.  
  
```
STDMETHOD(InitNew)(IStorage*);
```  
  
### Remarks  
 The ATL implementation delegates to the [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interface.  
  
 See [IPersistStorage:InitNew](http://msdn.microsoft.com/library/windows/desktop/ms687194) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersiststorageimpl__isdirty"></a>  IPersistStorageImpl::IsDirty  
 Checks whether the object's data has changed since it was last saved.  
  
```
STDMETHOD(IsDirty)(void);
```  
  
### Remarks  
 The ATL implementation delegates to the [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interface.  
  
 See [IPersistStorage:IsDirty](http://msdn.microsoft.com/library/windows/desktop/ms683910) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersiststorageimpl__load"></a>  IPersistStorageImpl::Load  
 Loads the object's properties from the specified storage.  
  
```
STDMETHOD(Load)(IStorage* pStorage);
```  
  
### Remarks  
 The ATL implementation delegates to the [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interface. **Load** uses a stream named "Contents" to retrieve the object's data. The [Save](../Topic/IPersistStorageImpl::Save.md) method originally creates this stream.  
  
 See [IPersistStorage:Load](http://msdn.microsoft.com/library/windows/desktop/ms680557) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersiststorageimpl__save"></a>  IPersistStorageImpl::Save  
 Saves the object's properties to the specified storage.  
  
```
STDMETHOD(Save)(
    IStorage*  pStorage,  BOOL fSameAsLoad);
```  
  
### Remarks  
 The ATL implementation delegates to the [IPersistStreamInit](http://msdn.microsoft.com/library/windows/desktop/ms682273) interface. When **Save** is first called, it creates a stream named "Contents" on the specified storage. This stream is then used in later calls to **Save** and in calls to [Load](../Topic/IPersistStorageImpl::Load.md).  
  
 See [IPersistStorage:Save](http://msdn.microsoft.com/library/windows/desktop/ms680680) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
##  <a name="ipersiststorageimpl__savecompleted"></a>  IPersistStorageImpl::SaveCompleted  
 Notifies an object that it can return to Normal mode to write to its storage object.  
  
```
STDMETHOD(SaveCompleted)(IStorage*);
```  
  
### Return Value  
 Returns `S_OK`.  
  
### Remarks  
 See [IPersistStorage:SaveCompleted](http://msdn.microsoft.com/library/windows/desktop/ms679713) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## See Also  
 [Storages and Streams](http://msdn.microsoft.com/library/windows/desktop/aa380352)   
 [IPersistStreamInitImpl Class](../atl/ipersiststreaminitimpl-class.md)   
 [IPersistPropertyBagImpl Class](../atl/ipersistpropertybagimpl-class.md)   
 [Class Overview](../atl/atl-class-overview.md)

