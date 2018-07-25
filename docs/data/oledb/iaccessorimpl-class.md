---
title: "IAccessorImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IAccessorImpl", "ATL.IAccessorImpl.IAccessorImpl", "ATL::IAccessorImpl::IAccessorImpl", "IAccessorImpl::IAccessorImpl", "IAccessorImpl.IAccessorImpl", "IAccessorImpl",                                      "ATL::IAccessorImpl::AddRefAccessor", "AddRefAccessor", "IAccessorImpl::AddRefAccessor", "IAccessorImpl.AddRefAccessor", "ATL.IAccessorImpl.AddRefAccessor", "IAccessorImpl::CreateAccessor", "CreateAccessor",         "ATL::IAccessorImpl::CreateAccessor", "IAccessorImpl.CreateAccessor", "ATL.IAccessorImpl.CreateAccessor", "IAccessorImpl.GetBindings", "ATL::IAccessorImpl::GetBindings", "IAccessorImpl::GetBindings",                 "GetBindings", "ATL.IAccessorImpl.GetBindings", "ReleaseAccessor", "IAccessorImpl::ReleaseAccessor", "ATL.IAccessorImpl.ReleaseAccessor", "ATL::IAccessorImpl::ReleaseAccessor", "IAccessorImpl.ReleaseAccessor"]
dev_langs: ["C++"]
helpviewer_keywords: ["IAccessorImpl class", "IAccessorImpl class, constructor", "IAccessorImpl constructor", "AddRefAccessor method", "CreateAccessor method", "GetBindings method", "ReleaseAccessor method"]
ms.assetid: 768606da-8b71-417c-a62c-88069ce7730d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IAccessorImpl Class
Provides an implementation of the [IAccessor](https://msdn.microsoft.com/library/ms719672.aspx) interface.  
  
## Syntax

```cpp
template <class T, 
          class BindType = ATLBINDINGS,
          class BindingVector = CAtlMap <HACCESSOR hAccessor, BindType* pBindingsStructure>>  
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>  
```  
  
### Parameters  
 *T*  
 Your rowset or command object class.  
  
 *BindType*  
 Storage unit for binding information. The default is the `ATLBINDINGS` structure (see atldb.h).  
  
 *BindingVector*  
 Storage unit for column information. The default is [CAtlMap](../../atl/reference/catlmap-class.md) where the key element is an HACCESSOR value and the value element is a pointer to a `BindType` structure.  
  
## Requirements  
 **Header:** atldb.h  

## Members  
  
### Methods  
  
|||  
|-|-|  
|[IAccessorImpl](#iaccessorimpl)|The constructor.|  
  
### Interface Methods  
  
|||  
|-|-|  
|[AddRefAccessor](#addrefaccessor)|Adds a reference count to an existing accessor.|  
|[CreateAccessor](#createaccessor)|Creates an accessor from a set of bindings.|  
|[GetBindings](#getbindings)|Returns the bindings in an accessor.|  
|[ReleaseAccessor](#releaseaccessor)|Releases an accessor.|  
  
## Remarks  
 This is mandatory on rowsets and commands. OLE DB requires providers to implement an HACCESSOR, which is a tag to an array of [DBBINDING](https://msdn.microsoft.com/library/ms716845.aspx) structures. HACCESSORs provided by `IAccessorImpl` are addresses of the `BindType` structures. By default, `BindType` is defined as an `ATLBINDINGS` in `IAccessorImpl`'s template definition. `BindType` provides a mechanism used by `IAccessorImpl` to track the number of elements in its `DBBINDING` array as well as a reference count and accessor flags.  

## <a name="iaccessorimpl"></a> IAccessorImpl::IAccessorImpl
The constructor.  
  
### Syntax  
  
```cpp
IAccessorImpl();  
  
```  

## <a name="addrefaccessor"></a> IAccessorImpl::AddRefAccessor
Adds a reference count to an existing accessor.  
  
### Syntax  
  
```cpp
      STDMETHOD(AddRefAccessor)(HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount);  
```  
  
#### Parameters  
 See [IAccessor::AddRefAccessor](https://msdn.microsoft.com/library/ms714978.aspx) in the *OLE DB Programmer's Reference*.

## <a name="createaccessor"></a> IAccessorImpl::CreateAccessor
Creates an accessor from a set of bindings.  
  
### Syntax  
  
```cpp
      STDMETHOD(CreateAccessor)(DBACCESSORFLAGS dwAccessorFlags,  
   DBCOUNTITEM cBindings,  
   const DBBINDING rgBindings[],  
   DBLENGTH cbRowSize,  
   HACCESSOR* phAccessor,  
   DBBINDSTATUS rgStatus[]);  
```  
  
#### Parameters  
 See [IAccessor::CreateAccessor](https://msdn.microsoft.com/library/ms720969.aspx) in the *OLE DB Programmer's Reference*.  

## <a name="getbindings"></a> IAccessorImpl::GetBindings
Returns the basic columns bindings from the consumer in an accessor.  
  
### Syntax  
  
```cpp
      STDMETHOD(GetBindings)(HACCESSOR hAccessor,  
   DBACCESSORFLAGS* pdwAccessorFlags,  
   DBCOUNTITEM* pcBindings,  
   DBBINDING** prgBindings);  
```  
  
#### Parameters  
 See [IAccessor::GetBindings](https://msdn.microsoft.com/library/ms721253.aspx) in the *OLE DB Programmer's Reference*. 

## <a name="releaseaccessor"></a> IAccessorImpl::ReleaseAccessor
Releases an accessor.  
  
### Syntax  
  
```cpp
      STDMETHOD(ReleaseAccessor)(HACCESSOR hAccessor,  
   DBREFCOUNT* pcRefCount);  
```  
  
#### Parameters  
 See [IAccessor::ReleaseAccessor](https://msdn.microsoft.com/library/ms719717.aspx) in the *OLE DB Programmer's Reference*.
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
