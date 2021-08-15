---
description: "Learn more about: FtmBase Class"
title: "FtmBase Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["ftm/Microsoft::WRL::FtmBase", "ftm/Microsoft::WRL::FtmBaseCreateGlobalInterfaceTable", "ftm/Microsoft::WRL::FtmBase::DisconnectObject", "ftm/Microsoft::WRL::FtmBase::FtmBase", "ftm/Microsoft::WRL::FtmBase::GetMarshalSizeMax", "ftm/Microsoft::WRL::FtmBase::GetUnmarshalClass", "ftm/Microsoft::WRL::FtmBase::MarshalInterface", "ftm/Microsoft::WRL::FtmBase::marshaller_", "ftm/Microsoft::WRL::FtmBase::ReleaseMarshalData", "ftm/Microsoft::WRL::FtmBase::UnmarshalInterface"]
helpviewer_keywords: ["Microsoft::WRL::FtmBase class", "Microsoft::WRL::FtmBase::CreateGlobalInterfaceTable method", "Microsoft::WRL::FtmBase::DisconnectObject method", "Microsoft::WRL::FtmBase::FtmBase, constructor", "Microsoft::WRL::FtmBase::GetMarshalSizeMax method", "Microsoft::WRL::FtmBase::GetUnmarshalClass method", "Microsoft::WRL::FtmBase::MarshalInterface method", "Microsoft::WRL::FtmBase::marshaller_ data member", "Microsoft::WRL::FtmBase::ReleaseMarshalData method", "Microsoft::WRL::FtmBase::UnmarshalInterface method"]
ms.assetid: 275f3b71-2975-4f92-89e7-d351e96496df
---
# FtmBase Class

Represents a free-threaded marshaler object.

## Syntax

```cpp
class FtmBase :
    public Microsoft::WRL::Implements<
        Microsoft::WRL::RuntimeClassFlags<WinRtClassicComMix>,
        Microsoft::WRL::CloakedIid<IMarshal>
    >;
```

## Remarks

For more information, see [RuntimeClass Class](runtimeclass-class.md).

## Members

### Public Constructors

| Name                         | Description                                        |
| ---------------------------- | -------------------------------------------------- |
| [FtmBase::FtmBase](#ftmbase) | Initializes a new instance of the `FtmBase` class. |

### Public Methods

| Name                                                               | Description                                                                                                                                                          |
| ------------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [FtmBase::CreateGlobalInterfaceTable](#createglobalinterfacetable) | Creates a global interface table (GIT).                                                                                                                              |
| [FtmBase::DisconnectObject](#disconnectobject)                     | Forcibly releases all external connections to an object. The object's server calls the object's implementation of this method prior to shutting down.                |
| [FtmBase::GetMarshalSizeMax](#getmarshalsizemax)                   | Get the upper bound on the number of bytes needed to marshal the specified interface pointer on the specified object.                                                |
| [FtmBase::GetUnmarshalClass](#getunmarshalclass)                   | Gets the CLSID that COM uses to locate the DLL containing the code for the corresponding proxy. COM loads this DLL to create an uninitialized instance of the proxy. |
| [FtmBase::MarshalInterface](#marshalinterface)                     | Writes into a stream the data required to initialize a proxy object in some client process.                                                                          |
| [FtmBase::ReleaseMarshalData](#releasemarshaldata)                 | Destroys a marshaled data packet.                                                                                                                                    |
| [FtmBase::UnmarshalInterface](#unmarshalinterface)                 | Initializes a newly created proxy and returns an interface pointer to that proxy.                                                                                    |

### Public Data Members

| Name                                | Description                                       |
| ----------------------------------- | ------------------------------------------------- |
| [FtmBase::marshaller_](#marshaller) | Holds a reference to the free threaded marshaler. |

## Inheritance Hierarchy

`FtmBase`

## Requirements

**Header:** ftm.h

**Namespace:** Microsoft::WRL

## <a name="createglobalinterfacetable"></a> FtmBase::CreateGlobalInterfaceTable

Creates a global interface table (GIT).

```cpp
static HRESULT CreateGlobalInterfaceTable(
   __out IGlobalInterfaceTable **git
);
```

### Parameters

*git*<br/>
When this operation completes, a pointer to a global interface table.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

For more information, see [`IGlobalInterfaceTable`](/windows/win32/api/objidl/nn-objidl-iglobalinterfacetable).

## <a name="disconnectobject"></a> FtmBase::DisconnectObject

Forcibly releases all external connections to an object. The object's server calls the object's implementation of this method prior to shutting down.

```cpp
STDMETHODIMP DisconnectObject(
   __in DWORD dwReserved
) override;
```

### Parameters

*dwReserved*<br/>
Reserved for future use; must be zero.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="ftmbase"></a> FtmBase::FtmBase

Initializes a new instance of the `FtmBase` class.

```cpp
FtmBase();
```

## <a name="getmarshalsizemax"></a> FtmBase::GetMarshalSizeMax

Get the upper bound on the number of bytes needed to marshal the specified interface pointer on the specified object.

```cpp
STDMETHODIMP GetMarshalSizeMax(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out DWORD *pSize
) override;
```

### Parameters

*riid*<br/>
Reference to the identifier of the interface to be marshaled.

*pv*<br/>
Interface pointer to be marshaled; can be NULL.

*dwDestContext*<br/>
Destination context where the specified interface is to be unmarshaled.

Specify one or more MSHCTX enumeration values.

Currently, unmarshaling can occur either in another apartment of the current process (MSHCTX_INPROC) or in another process on the same computer as the current process (MSHCTX_LOCAL).

*pvDestContext*<br/>
Reserved for future use; must be NULL.

*mshlflags*<br/>
Flag indicating whether the data to be marshaled is to be transmitted back to the client process — the typical case — or written to a global table, where it can be retrieved by multiple clients. Specify one or more MSHLFLAGS enumeration values.

*pSize*<br/>
When this operation completes, pointer to the upper bound on the amount of data to be written to the marshaling stream.

### Return Value

S_OK if successful; otherwise, E_FAIL or E_NOINTERFACE.

## <a name="getunmarshalclass"></a> FtmBase::GetUnmarshalClass

Gets the CLSID that COM uses to locate the DLL containing the code for the corresponding proxy. COM loads this DLL to create an uninitialized instance of the proxy.

```cpp
STDMETHODIMP GetUnmarshalClass(
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags,
   __out CLSID *pCid
) override;
```

### Parameters

*riid*<br/>
Reference to the identifier of the interface to be marshaled.

*pv*<br/>
Pointer to the interface to be marshaled; can be NULL if the caller does not have a pointer to the desired interface.

*dwDestContext*<br/>
Destination context where the specified interface is to be unmarshaled.

Specify one or more MSHCTX enumeration values.

Unmarshaling can occur either in another apartment of the current process (MSHCTX_INPROC) or in another process on the same computer as the current process (MSHCTX_LOCAL).

*pvDestContext*<br/>
Reserved for future use; must be NULL.

*mshlflags*<br/>
When this operation completes, pointer to the CLSID to be used to create a proxy in the client process.

*pCid*

### Return Value

S_OK if successful; otherwise, S_FALSE.

## <a name="marshalinterface"></a> FtmBase::MarshalInterface

Writes into a stream the data required to initialize a proxy object in some client process.

```cpp
STDMETHODIMP MarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __in_opt void *pv,
   __in DWORD dwDestContext,
   __reserved void *pvDestContext,
   __in DWORD mshlflags
) override;
```

### Parameters

*pStm*<br/>
Pointer to the stream to be used during marshaling.

*riid*<br/>
Reference to the identifier of the interface to be marshaled. This interface must be derived from the `IUnknown` interface.

*pv*<br/>
Pointer to the interface pointer to be marshaled; can be NULL if the caller does not have a pointer to the desired interface.

*dwDestContext*<br/>
Destination context where the specified interface is to be unmarshaled.

Specify one or more MSHCTX enumeration values.

Unmarshaling can occur in another apartment of the current process (MSHCTX_INPROC) or in another process on the same computer as the current process (MSHCTX_LOCAL).

*pvDestContext*<br/>
Reserved for future use; must be zero.

*mshlflags*<br/>
Specifies whether the data to be marshaled is to be transmitted back to the client process — the typical case — or written to a global table, where it can be retrieved by multiple clients.

### Return Value

S_OK
The interface pointer was marshaled successfully.

E_NOINTERFACE
The specified interface is not supported.

STG_E_MEDIUMFULL
The stream is full.

E_FAIL
The operation failed.

## <a name="marshaller"></a> FtmBase::marshaller_

Holds a reference to the free threaded marshaler.

```cpp
Microsoft::WRL::ComPtr<IMarshal> marshaller_; ;
```

## <a name="releasemarshaldata"></a> FtmBase::ReleaseMarshalData

Destroys a marshaled data packet.

```cpp
STDMETHODIMP ReleaseMarshalData(
   __in IStream *pStm
) override;
```

### Parameters

*pStm*<br/>
Pointer to a stream that contains the data packet to be destroyed.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="unmarshalinterface"></a> FtmBase::UnmarshalInterface

Initializes a newly created proxy and returns an interface pointer to that proxy.

```cpp
STDMETHODIMP UnmarshalInterface(
   __in IStream *pStm,
   __in REFIID riid,
   __deref_out void **ppv
) override;
```

### Parameters

*pStm*<br/>
Pointer to the stream from which the interface pointer is to be unmarshaled.

*riid*<br/>
Reference to the identifier of the interface to be unmarshaled.

*ppv*<br/>
When this operation completes, the address of a pointer variable that receives the interface pointer requested in *riid*. If this operation is successful, **ppv* contains the requested interface pointer of the interface to be unmarshaled.

### Return Value

S_OK if successful; otherwise, E_NOINTERFACE or E_FAIL.
