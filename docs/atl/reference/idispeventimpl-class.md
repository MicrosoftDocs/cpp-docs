---
title: "IDispEventImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IDispEventImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispEventImpl class"
ms.assetid: a64b5288-35cb-4638-aad6-2d15b1c7cf7b
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
# IDispEventImpl Class
This class provides implementations of the `IDispatch` methods.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template <UINT   nID, class T,
    const IID* pdiid = &IID_NULL,
    const GUID* plibid = &GUID_NULL,
    WORD wMajor = 0,
    WORD wMinor = 0, class tihclass = CcomTypeInfoHolder>
    class ATL_NO_VTABLE IDispEventImpl :
    public IDispEventSimpleImpl<nID,
    T,
 pdiid>
```  
  
#### Parameters  
 `nID`  
 A unique identifier for the source object. When `IDispEventImpl` is the base class for a composite control, use the resource ID of the desired contained control for this parameter. In other cases, use an arbitrary positive integer.  
  
 `T`  
 The user's class, which is derived from `IDispEventImpl`.  
  
 `pdiid`  
 The pointer to the IID of the event dispinterface implemented by this class. This interface must be defined in the type library denoted by `plibid`, `wMajor`, and `wMinor`.  
  
 `plibid`  
 A pointer to the type library that defines the dispatch interface pointed to by `pdiid`. If **&GUID_NULL**, the type library will be loaded from the object sourcing the events.  
  
 `wMajor`  
 The major version of the type library. The default value is 0.  
  
 `wMinor`  
 The minor version of the type library. The default value is 0.  
  
 `tihclass`  
 The class used to manage the type information for `T`. The default value is a class of type `CComTypeInfoHolder`; however, you can override this template parameter by providing a class of a type other than `CComTypeInfoHolder`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[IDispEventImpl::_tihclass](../../atl/reference/idispeventimpl-class.md)|The class used to manage the type information. By default, `CComTypeInfoHolder`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[IDispEventImpl::IDispEventImpl](#idispeventimpl__idispeventimpl)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IDispEventImpl::GetFuncInfoFromId](#idispeventimpl__getfuncinfofromid)|Locates the function index for the specified dispatch identifier.|  
|[IDispEventImpl::GetIDsOfNames](#idispeventimpl__getidsofnames)|Maps a single member and an optional set of argument names to a corresponding set of integer DISPIDs.|  
|[IDispEventImpl::GetTypeInfo](#idispeventimpl__gettypeinfo)|Retrieves the type information for an object.|  
|[IDispEventImpl::GetTypeInfoCount](#idispeventimpl__gettypeinfocount)|Retrieves the number of type information interfaces.|  
|[IDispEventImpl::GetUserDefinedType](#idispeventimpl__getuserdefinedtype)|Retrieves the basic type of a user-defined type.|  
  
## Remarks  
 `IDispEventImpl` provides a way of implementing an event dispinterface without requiring you to supply implementation code for every method/event on that interface. `IDispEventImpl` provides implementations of the `IDispatch` methods. You only need to supply implementations for the events that you are interested in handling.  
  
 `IDispEventImpl` works in conjunction with the [event sink map](http://msdn.microsoft.com/library/32542b3d-ac43-4139-8ac4-41c48481744f) in your class to route events to the appropriate handler function. To use this class:  
  

 Add a [SINK_ENTRY](http://msdn.microsoft.com/library/33a5fff6-5248-47c0-8cf4-8bdf760e86e5) or [SINK_ENTRY_EX](http://msdn.microsoft.com/library/e1d14342-838f-4791-ac2f-5dae2801c1ac) macro to the event sink map for each event on each object that you want to handle. When using `IDispEventImpl` as a base class of a composite control, you can call [AtlAdviseSinkMap](http://msdn.microsoft.com/library/0757a6af-3de3-4179-8b4f-ccd137d919b4) to establish and break the connection with the event sources for all entries in the event sink map. In other cases, or for greater control, call [DispEventAdvise](idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventadvise) to establish the connection between the source object and the base class. Call [DispEventUnadvise](idispeventsimpleimpl-class.md#idispeventsimpleimpl__dispeventunadvise) to break the connection.  

  
 You must derive from `IDispEventImpl` (using a unique value for `nID`) for each object for which you need to handle events. You can reuse the base class by unadvising against one source object then advising against a different source object, but the maximum number of source objects that can be handled by a single object at one time is limited by the number of `IDispEventImpl` base classes.  
  
 `IDispEventImpl` provides the same functionality as [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), except it gets type information about the interface from a type library rather than having it supplied as a pointer to an [_ATL_FUNC_INFO](../../atl/reference/atl-func-info-structure.md) structure. Use `IDispEventSimpleImpl` when you do not have a type library describing the event interface or want to avoid the overhead associated with using the type library.  
  
> [!NOTE]
> `IDispEventImpl` and `IDispEventSimpleImpl` provide their own implementation of **IUnknown::QueryInterface** enabling each `IDispEventImpl` and `IDispEventSimpleImpl` base class to act as a separate COM identity while still allowing direct access to class members in your main COM object.  
  
 CE ATL implementation of ActiveX event sinks only supports return values of type HRESULT or void from your event handler methods; any other return value is unsupported and its behavior is undefined.  
  
 For more information, see [Supporting IDispEventImpl](../../atl/supporting-idispeventimpl.md).  
  
## Inheritance Hierarchy  
 `_IDispEvent`  
  
 `_IDispEventLocator`  
  
 [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md)  
  
 `IDispEventImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="idispeventimpl__getfuncinfofromid"></a>  IDispEventImpl::GetFuncInfoFromId  
 Locates the function index for the specified dispatch identifier.  
  
```
HRESULT GetFuncInfoFromId(
    const IID& iid,
    DISPID dispidMember,
    LCID lcid,
    _ATL_FUNC_INFO& info);
```  
  
### Parameters  
 `iid`  
 [in] A reference to the ID of the function.  
  
 *dispidMember*  
 [in] The dispatch ID of the function.  
  
 `lcid`  
 [in] The locale context of the function ID.  
  
 `info`  
 [in] The structure indicating how the function is called.  
  
### Return Value  
 A standard `HRESULT` value.  
  
##  <a name="idispeventimpl__getidsofnames"></a>  IDispEventImpl::GetIDsOfNames  
 Maps a single member and an optional set of argument names to a corresponding set of integer DISPIDs, which can be used on subsequent calls to [IDispatch::Invoke](http://msdn.microsoft.com/en-us/964ade8e-9d8a-4d32-bd47-aa678912a54d).  
  
```
STDMETHOD(GetIDsOfNames)(
    REFIID riid,
    LPOLESTR* rgszNames,
    UINT cNames,
    LCID lcid,
    DISPID* rgdispid);
```  
  
### Remarks  
 See [IDispatch::GetIDsOfNames](http://msdn.microsoft.com/en-us/6f6cf233-3481-436e-8d6a-51f93bf91619) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idispeventimpl__gettypeinfo"></a>  IDispEventImpl::GetTypeInfo  
 Retrieves the type information for an object, which can then be used to get the type information for an interface.  
  
```
STDMETHOD(GetTypeInfo)(
    UINT itinfo,
    LCID lcid,
    ITypeInfo** pptinfo);
```  
  
### Remarks  
  
##  <a name="idispeventimpl__gettypeinfocount"></a>  IDispEventImpl::GetTypeInfoCount  
 Retrieves the number of type information interfaces that an object provides (either 0 or 1).  
  
```
STDMETHOD(GetTypeInfoCount)(UINT* pctinfo);
```  
  
### Remarks  
 See [IDispatch::GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="idispeventimpl__getuserdefinedtype"></a>  IDispEventImpl::GetUserDefinedType  
 Retrieves the basic type of a user-defined type.  
  
```
VARTYPE GetUserDefinedType(
    ITypeInfo* pTI,
    HREFTYPE hrt);
```  
  
### Parameters  
 `pTI`  
 [in] A pointer to the [ITypeInfo](http://msdn.microsoft.com/en-us/f3356463-3373-4279-bae1-953378aa2680) interface containing the user-defined type.  
  
 *hrt*  
 [in] A handle to the type description to be retrieved.  
  
### Return Value  
 The type of variant.  
  
### Remarks  
 See [ITypeInfo::GetRefTypeInfo](http://msdn.microsoft.com/en-us/61d3b31d-6591-4e55-9e82-5246a168be00).  
  
##  <a name="idispeventimpl__idispeventimpl"></a>  IDispEventImpl::IDispEventImpl  
 The constructor. Stores the values of the class template parameters `plibid`, `pdiid`, `wMajor`, and `wMinor`.  
  
```
IDispEventImpl();
```  
  
##  <a name="idispeventimpl__tihclass"></a>  IDispEventImpl::tihclass  
 This typedef is an instance of the class template parameter `tihclass`.  
  
```
typedef tihclass _tihclass;
```  
  
### Remarks  
 By default, the class is `CComTypeInfoHolder`. `CComTypeInfoHolder` manages the type information for the class.  
  
## See Also  
 [_ATL_FUNC_INFO Structure](../../atl/reference/atl-func-info-structure.md)   
 [IDispatchImpl Class](../../atl/reference/idispatchimpl-class.md)   
 [IDispEventSimpleImpl Class](../../atl/reference/idispeventsimpleimpl-class.md)   
 [SINK_ENTRY](http://msdn.microsoft.com/library/33a5fff6-5248-47c0-8cf4-8bdf760e86e5)   
 [SINK_ENTRY_EX](http://msdn.microsoft.com/library/e1d14342-838f-4791-ac2f-5dae2801c1ac)   
 [SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7)   
 [Class Overview](../../atl/atl-class-overview.md)