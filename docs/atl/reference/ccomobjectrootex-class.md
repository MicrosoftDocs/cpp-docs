---
description: "Learn more about: CComObjectRootEx Class"
title: "CComObjectRootEx Class"
ms.date: "11/04/2016"
f1_keywords: ["CComObjectRootEx", "ATLCOM/ATL::CComObjectRootEx", "ATLCOM/ATL::InternalAddRef", "ATLCOM/ATL::InternalRelease", "ATLCOM/ATL::Lock", "ATLCOM/ATL::Unlock", "ATLCOM/ATL::FinalConstruct", "ATLCOM/ATL::FinalRelease", "ATLCOM/ATL::OuterAddRef", "ATLCOM/ATL::OuterQueryInterface", "ATLCOM/ATL::OuterRelease", "ATLCOM/ATL::InternalQueryInterface", "ATLCOM/ATL::ObjectMain", "ATLCOM/ATL::m_dwRef", "ATLCOM/ATL::m_pOuterUnknown"]
helpviewer_keywords: ["reference counting"]
ms.assetid: 894a3d7c-2daf-4fd0-8fa4-e6a05bcfb631
---
# CComObjectRootEx Class

This class provides methods to handle object reference count management for both nonaggregated and aggregated objects.

## Syntax

```
template<class ThreadModel>
class CComObjectRootEx : public CComObjectRootBase
```

#### Parameters

*ThreadModel*<br/>
The class whose methods implement the desired threading model. You can explicitly choose the threading model by setting *ThreadModel* to [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md), [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md), or [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md). You can accept the server's default thread model by setting *ThreadModel* to [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) or [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel).

## Members

### Methods

|Function|Description|
|-|-|
|[CComObjectRootEx](#ccomobjectrootex)|Constructor.|
|[InternalAddRef](#internaladdref)|Increments the reference count for a nonaggregated object.|
|[InternalRelease](#internalrelease)|Decrements the reference count for a nonaggregated object.|
|[Lock](#lock)|If the thread model is multithreaded, obtains ownership of a critical section object.|
|[Unlock](#unlock)|If the thread model is multithreaded, releases ownership of a critical section object.|

### CComObjectRootBase Methods

|Function|Description|
|-|-|
|[FinalConstruct](#finalconstruct)|Override in your class to perform any initialization required by your object.|
|[FinalRelease](#finalrelease)|Override in your class to perform any cleanup required by your object.|
|[OuterAddRef](#outeraddref)|Increments the reference count for an aggregated object.|
|[OuterQueryInterface](#outerqueryinterface)|Delegates to the outer `IUnknown` of an aggregated object.|
|[OuterRelease](#outerrelease)|Decrements the reference count for an aggregated object.|

### Static Functions

|Function|Description|
|-|-|
|[InternalQueryInterface](#internalqueryinterface)|Delegates to the `IUnknown` of a nonaggregated object.|
|[ObjectMain](#objectmain)|Called during module initialization and termination for derived classes listed in the object map.|

### Data Members

|Data member|Description|
|-|-|
|[m_dwRef](#m_dwref)|With `m_pOuterUnknown`, part of a union. Used when the object is not aggregated to hold the reference count of `AddRef` and `Release`.|
|[m_pOuterUnknown](#m_pouterunknown)|With `m_dwRef`, part of a union. Used when the object is aggregated to hold a pointer to the outer unknown.|

## Remarks

`CComObjectRootEx` handles object reference count management for both nonaggregated and aggregated objects. It holds the object reference count if your object is not being aggregated, and holds the pointer to the outer unknown if your object is being aggregated. For aggregated objects, `CComObjectRootEx` methods can be used to handle the failure of the inner object to construct, and to protect the outer object from deletion when inner interfaces are released or the inner object is deleted.

A class that implements a COM server must inherit from `CComObjectRootEx` or [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md).

If your class definition specifies the [DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable) macro, ATL creates an instance of `CComPolyObject<CYourClass>` when `IClassFactory::CreateInstance` is called. During creation, the value of the outer unknown is checked. If it is NULL, `IUnknown` is implemented for a nonaggregated object. If the outer unknown is not NULL, `IUnknown` is implemented for an aggregated object.

If your class does not specify the DECLARE_POLY_AGGREGATABLE macro, ATL creates an instance of `CAggComObject<CYourClass>` for aggregated objects or an instance of `CComObject<CYourClass>` for nonaggregated objects.

The advantage of using `CComPolyObject` is that you avoid having both `CComAggObject` and `CComObject` in your module to handle the aggregated and nonaggregated cases. A single `CComPolyObject` object handles both cases. Therefore, only one copy of the vtable and one copy of the functions exist in your module. If your vtable is large, this can substantially decrease your module size. However, if your vtable is small, using `CComPolyObject` can result in a slightly larger module size because it is not optimized for an aggregated or nonaggregated object, as are `CComAggObject` and `CComObject`.

If your object is aggregated, [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) is implemented by `CComAggObject` or `CComPolyObject`. These classes delegate `QueryInterface`, `AddRef`, and `Release` calls to `CComObjectRootEx`'s `OuterQueryInterface`, `OuterAddRef`, and `OuterRelease` to forward to the outer unknown. Typically, you override `CComObjectRootEx::FinalConstruct` in your class to create any aggregated objects, and override `CComObjectRootEx::FinalRelease` to free any aggregated objects.

If your object is not aggregated, `IUnknown` is implemented by `CComObject` or `CComPolyObject`. In this case, calls to `QueryInterface`, `AddRef`, and `Release` are delegated to `CComObjectRootEx`'s `InternalQueryInterface`, `InternalAddRef`, and `InternalRelease` to perform the actual operations.

## Requirements

**Header:** atlcom.h

## <a name="ccomobjectrootex"></a> CComObjectRootEx::CComObjectRootEx

The constructor initializes the reference count to 0.

```
CComObjectRootEx();
```

## <a name="finalconstruct"></a> CComObjectRootEx::FinalConstruct

You can override this method in your derived class to perform any initialization required for your object.

```
HRESULT FinalConstruct();
```

### Return Value

Return S_OK on success or one of the standard error HRESULT values.

### Remarks

By default, `CComObjectRootEx::FinalConstruct` simply returns S_OK.

There are advantages to performing initialization in `FinalConstruct` rather than the constructor of your class:

- You cannot return a status code from a constructor, but you can return an HRESULT by means of `FinalConstruct`'s return value. When objects of your class are being created using the standard class factory provided by ATL, this return value is propagated back to the COM client allowing you to provide them with detailed error information.

- You cannot call virtual functions through the virtual function mechanism from the constructor of a class. Calling a virtual function from the constructor of a class results in a statically resolved call to the function as it is defined at that point in the inheritance hierarchy. Calls to pure virtual functions result in linker errors.

   Your class is not the most derived class in the inheritance hierarchy — it relies on a derived class supplied by ATL to provide some of its functionality. There is a good chance that your initialization will need to use the features provided by that class (this is certainly true when objects of your class need to aggregate other objects), but the constructor in your class has no way to access those features. The construction code for your class is executed before the most derived class is fully constructed.

   However, `FinalConstruct` is called immediately after the most derived class is fully constructed allowing you to call virtual functions and use the reference-counting implementation provided by ATL.

### Example

Typically, override this method in the class derived from `CComObjectRootEx` to create any aggregated objects. For example:

[!code-cpp[NVC_ATL_COM#40](../../atl/codesnippet/cpp/ccomobjectrootex-class_1.h)]

If the construction fails, you can return an error. You can also use the macro [DECLARE_PROTECT_FINAL_CONSTRUCT](aggregation-and-class-factory-macros.md#declare_protect_final_construct) to protect your outer object from being deleted if, during creation, the internal aggregated object increments the reference count then decrements the count to 0.

Here is a typical way to create an aggregate:

- Add an `IUnknown` pointer to your class object and initialize it to NULL in the constructor.

- Override `FinalConstruct` to create the aggregate.

- Use the `IUnknown` pointer you defined as the parameter to the [COM_INTERFACE_ENTRY_AGGREGATE](com-interface-entry-macros.md#com_interface_entry_aggregate) macro.

- Override `FinalRelease` to release the `IUnknown` pointer.

## <a name="finalrelease"></a> CComObjectRootEx::FinalRelease

You can override this method in your derived class to perform any cleanup required for your object.

```cpp
void FinalRelease();
```

### Remarks

By default, `CComObjectRootEx::FinalRelease` does nothing.

Performing cleanup in `FinalRelease` is preferable to adding code to the destructor of your class since the object is still fully constructed at the point at which `FinalRelease` is called. This enables you to safely access the methods provided by the most derived class. This is particularly important for freeing any aggregated objects before deletion.

## <a name="internaladdref"></a> CComObjectRootEx::InternalAddRef

Increments the reference count of a nonaggregated object by 1.

```
ULONG InternalAddRef();
```

### Return Value

A value that may be useful for diagnostics and testing.

### Remarks

If the thread model is multithreaded, `InterlockedIncrement` is used to prevent more than one thread from changing the reference count at the same time.

## <a name="internalqueryinterface"></a> CComObjectRootEx::InternalQueryInterface

Retrieves a pointer to the requested interface.

```
static HRESULT InternalQueryInterface(
    void* pThis,
    const _ATL_INTMAP_ENTRY* pEntries,
    REFIID iid,
    void** ppvObject);
```

### Parameters

*pThis*<br/>
[in] A pointer to the object that contains the COM map of interfaces exposed to `QueryInterface`.

*pEntries*<br/>
[in] A pointer to the `_ATL_INTMAP_ENTRY` structure that accesses a map of available interfaces.

*iid*<br/>
[in] The GUID of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer specified in *iid*, or NULL if the interface is not found.

### Return Value

One of the standard HRESULT values.

### Remarks

`InternalQueryInterface` only handles interfaces in the COM map table. If your object is aggregated, `InternalQueryInterface` does not delegate to the outer unknown. You can enter interfaces into the COM map table with the macro [COM_INTERFACE_ENTRY](com-interface-entry-macros.md#com_interface_entry) or one of its variants.

## <a name="internalrelease"></a> CComObjectRootEx::InternalRelease

Decrements the reference count of a nonaggregated object by 1.

```
ULONG InternalRelease();
```

### Return Value

In both non-debug and debug builds, this function returns a value which may be useful for diagnostics or testing. The exact value returned depends on many factors such as the operating system used, and may, or may not, be the reference count.

### Remarks

If the thread model is multithreaded, `InterlockedDecrement` is used to prevent more than one thread from changing the reference count at the same time.

## <a name="lock"></a> CComObjectRootEx::Lock

If the thread model is multithreaded, this method calls the Win32 API function [EnterCriticalSection](/windows/win32/api/synchapi/nf-synchapi-entercriticalsection), which waits until the thread can take ownership of the critical section object obtained through a private data member.

```cpp
void Lock();
```

### Remarks

When the protected code finishes executing, the thread must call `Unlock` to release ownership of the critical section.

If the thread model is single-threaded, this method does nothing.

## <a name="m_dwref"></a> CComObjectRootEx::m_dwRef

Part of a union that accesses four bytes of memory.

```
long m_dwRef;
```

### Remarks

With `m_pOuterUnknown`, part of a union:

```
union {
    long m_dwRef;
    IUnknown* m_pOuterUnknown;
};
```

If the object is not aggregated, the reference count accessed by `AddRef` and `Release` is stored in `m_dwRef`. If the object is aggregated, the pointer to the outer unknown is stored in [m_pOuterUnknown](#m_pouterunknown).

## <a name="m_pouterunknown"></a> CComObjectRootEx::m_pOuterUnknown

Part of a union that accesses four bytes of memory.

```
IUnknown*
    m_pOuterUnknown;
```

### Remarks

With `m_dwRef`, part of a union:

```
union {
    long m_dwRef;
    IUnknown* m_pOuterUnknown;
};
```

If the object is aggregated, the pointer to the outer unknown is stored in `m_pOuterUnknown`. If the object is not aggregated, the reference count accessed by `AddRef` and `Release` is stored in [m_dwRef](#m_dwref).

## <a name="objectmain"></a> CComObjectRootEx::ObjectMain

For each class listed in the object map, this function is called once when the module is initialized, and again when it is terminated.

```
static void WINAPI ObjectMain(bool bStarting);
```

### Parameters

*bStarting*<br/>
[out] The value is TRUE if the class is being initialized; otherwise FALSE.

### Remarks

The value of the *bStarting* parameter indicates whether the module is being initialized or terminated. The default implementation of `ObjectMain` does nothing, but you can override this function in your class to initialize or clean up resources that you want to allocate for the class. Note that `ObjectMain` is called before any instances of the class are requested.

`ObjectMain` is called from the entry point of the DLL, so the type of operation that the entry-point function can perform is restricted. For more information on these restrictions, see [DLLs and Visual C++ run-time library behavior](../../build/run-time-library-behavior.md) and [DllMain](/windows/win32/Dlls/dllmain).

### Example

[!code-cpp[NVC_ATL_COM#41](../../atl/codesnippet/cpp/ccomobjectrootex-class_2.h)]

## <a name="outeraddref"></a> CComObjectRootEx::OuterAddRef

Increments the reference count of the outer unknown of an aggregation.

```
ULONG OuterAddRef();
```

### Return Value

A value that may be useful for diagnostics and testing.

## <a name="outerqueryinterface"></a> CComObjectRootEx::OuterQueryInterface

Retrieves an indirect pointer to the requested interface.

```
HRESULT OuterQueryInterface(REFIID iid, void** ppvObject);
```

### Parameters

*iid*<br/>
[in] The GUID of the interface being requested.

*ppvObject*<br/>
[out] A pointer to the interface pointer specified in *iid*, or NULL if the aggregation does not support the interface.

### Return Value

One of the standard HRESULT values.

## <a name="outerrelease"></a> CComObjectRootEx::OuterRelease

Decrements the reference count of the outer unknown of an aggregation.

```
ULONG OuterRelease();
```

### Return Value

In non-debug builds, always returns 0. In debug builds, returns a value that may be useful for diagnostics or testing.

## <a name="unlock"></a> CComObjectRootEx::Unlock

If the thread model is multithreaded, this method calls the Win32 API function [LeaveCriticalSection](/windows/win32/api/synchapi/nf-synchapi-leavecriticalsection), which releases ownership of the critical section object obtained through a private data member.

```cpp
void Unlock();
```

### Remarks

To obtain ownership, the thread must call `Lock`. Each call to `Lock` requires a corresponding call to `Unlock` to release ownership of the critical section.

If the thread model is single-threaded, this method does nothing.

## See also

[CComAggObject Class](../../atl/reference/ccomaggobject-class.md)<br/>
[CComObject Class](../../atl/reference/ccomobject-class.md)<br/>
[CComPolyObject Class](../../atl/reference/ccompolyobject-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
