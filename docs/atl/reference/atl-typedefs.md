---
description: "Learn more about: ATL Typedefs"
title: "ATL Typedefs"
ms.date: "11/04/2016"
f1_keywords: ["atlcore/ATL::_ATL_BASE_MODULE", "atlbase/ATL::_ATL_COM_MODULE", "atlbase/ATL::_ATL_MODULE", "atlbase/ATL::_ATL_WIN_MODULE", "atlutil/ATL::ATL_URL_PORT", "atlbase/ATL::CComDispatchDriver", "atlbase/ATL::CComGlobalsThreadModel", "atlbase/ATL::CComObjectThreadModel", "atlwin/ATL::CContainedWindow", "atlpath/ATL::CPath", "atlpath/ATL::CPathA", "atlpath/ATL::CPathW", " atlsimpcoll/ATL::CSimpleValArray", " atlutil/ATL::LPCURL", "atlbase/ATL::DefaultThreadTraits", "atlutil/ATL::LPURL"]
helpviewer_keywords: ["typedefs, ATL", "typedefs", "ATL, typedefs"]
ms.assetid: 7dd05baa-3efb-4e3b-af23-793c610f4560
---
# ATL Typedefs

The Active Template Library includes the following typedefs.

|Typedef|Description|
|-|-|
|[_ATL_BASE_MODULE](#_atl_base_module)|Defined as a typedef based on [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|
|[_ATL_COM_MODULE](#_atl_com_module)|Defined as a typedef based on [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|
|[_ATL_MODULE](#_atl_module)|Defined as a typedef based on [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|
|[_ATL_WIN_MODULE](#_atl_win_module)|Defined as a typedef based on [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|
|[ATL_URL_PORT](#atl_url_port)|The type used by [CUrl](../../atl/reference/curl-class.md) for specifying a port number.|
|[CComDispatchDriver](#ccomdispatchdriver)|This class manages COM interface pointers.|
|[CComGlobalsThreadModel](#ccomglobalsthreadmodel)|Calls the appropriate thread model methods, regardless of the threading model being used.|
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Calls the appropriate thread model methods, regardless of the threading model being used.|
|[CContainedWindow](#ccontainedwindow)|This class is a specialization of `CContainedWindowT`.|
|[CPath](#cpath)|A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CString`.|
|[CPathA](#cpatha)|A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringA`.|
|[CPathW](#cpathw)|A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringW`.|
|[CSimpleValArray](#csimplevalarray)|Represents an array for storing simple types.|
|[DefaultThreadTraits](#defaultthreadtraits)|The default thread traits class.|
|[LPCURL](#lpcurl)|A pointer to a constant [CUrl](../../atl/reference/curl-class.md) object.|
|[LPURL](#lpurl)|A pointer to a [CUrl](../../atl/reference/curl-class.md) object.|

## <a name="_atl_base_module"></a> _ATL_BASE_MODULE

Defined as a typedef based on _ATL_BASE_MODULE70.

```cpp
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;
```

### Remarks

Used in every ATL project. Based on [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).

Classes that are part of the ATL 7.0 Module Classes derive from the _ATL_BASE_MODULE structure.  For more information on ATL Module Classes, refer to [COM Modules Classes](../../atl/com-modules-classes.md).

### Requirements

**Header:** atlcore.h

## <a name="_atl_com_module"></a> _ATL_COM_MODULE

Defined as a typedef based on _ATL_COM_MODULE70.

```cpp
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;
```

### Remarks

Used by ATL projects which use COM features. Based on [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).

### Requirements

**Header:** atlbase.h

## <a name="_atl_module"></a> _ATL_MODULE

Defined as a typedef based on _ATL_MODULE70.

```cpp
typedef ATL::_ATL_MODULE70 _ATL_MODULE;
```

### Requirements

**Header:**

### Remarks

Based on [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).

## <a name="_atl_win_module"></a> _ATL_WIN_MODULE

Defined as a typedef based on _ATL_WIN_MODULE70.

```cpp
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE;
```

### Remarks

Used by any ATL projects which use windowing features. Based on [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).

### Requirements

**Header:** atlbase.h

## <a name="atl_url_port"></a> ATL_URL_PORT

The type used by [CUrl](curl-class.md) for specifying a port number.

```cpp
typedef WORD ATL_URL_PORT;
```

### Requirements

**Header:** atlutil.h

## <a name="ccomdispatchdriver"></a> CComDispatchDriver

This class manages COM interface pointers.

```cpp
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;
```

### Requirements

**Header:** atlbase.h

## <a name="ccomglobalsthreadmodel"></a> CComGlobalsThreadModel

Calls the appropriate thread model methods, regardless of the threading model being used.

```cpp
#if defined(_ATL_SINGLE_THREADED)
typedef CComSingleThreadModel CComGlobalsThreadModel;
#elif defined(_ATL_APARTMENT_THREADED)
typedef CComMultiThreadModel CComGlobalsThreadModel;
#elif defined(_ATL_FREE_THREADED)
typedef CComMultiThreadModel CComGlobalsThreadModel;
#else
#pragma message ("No global threading model defined")
#endif
```

### Remarks

Depending on the threading model used by your application, the **`typedef`** name `CComGlobalsThreadModel` references either [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). These classes provide additional **`typedef`** names to reference a critical section class.

> [!NOTE]
> `CComGlobalsThreadModel` does not reference class [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

Using `CComGlobalsThreadModel` frees you from specifying a particular threading model class. Regardless of the threading model being used, the appropriate methods will be called.

In addition to `CComGlobalsThreadModel`, ATL provides the **`typedef`** name [CComObjectThreadModel](#ccomobjectthreadmodel). The class referenced by each **`typedef`** depends on the threading model used, as shown in the following table:

|typedef|Single threading|Apartment threading|Free threading|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S= `CComSingleThreadModel`; M= `CComMultiThreadModel`

Use `CComObjectThreadModel` within a single object class. Use `CComGlobalsThreadModel` in an object that is globally available to your program, or when you want to protect module resources across multiple threads.

### Requirements

**Header:** atlbase.h

## <a name="ccomobjectthreadmodel"></a> CComObjectThreadModel

Calls the appropriate thread model methods, regardless of the threading model being used.

```cpp
#if defined(_ATL_SINGLE_THREADED)
typedef CComSingleThreadModel CComObjectThreadModel;
#elif defined(_ATL_APARTMENT_THREADED)
typedef CComSingleThreadModel CComObjectThreadModel;
#elif defined(_ATL_FREE_THREADED)
typedef CComMultiThreadModel CComObjectThreadModel;
#else
#pragma message ("No global threading model defined")
#endif
```

### Remarks

Depending on the threading model used by your application, the **`typedef`** name `CComObjectThreadModel` references either [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) or [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). These classes provide additional **`typedef`** names to reference a critical section class.

> [!NOTE]
> `CComObjectThreadModel` does not reference class [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

Using `CComObjectThreadModel` frees you from specifying a particular threading model class. Regardless of the threading model being used, the appropriate methods will be called.

In addition to `CComObjectThreadModel`, ATL provides the **`typedef`** name [CComGlobalsThreadModel](#ccomglobalsthreadmodel). The class referenced by each **`typedef`** depends on the threading model used, as shown in the following table:

|typedef|Single threading|Apartment threading|Free threading|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S= `CComSingleThreadModel`; M= `CComMultiThreadModel`

Use `CComObjectThreadModel` within a single object class. Use `CComGlobalsThreadModel` in an object that is either globally available to your program, or when you want to protect module resources across multiple threads.

### Requirements

**Header:** atlbase.h

## <a name="ccontainedwindow"></a> CContainedWindow

This class is a specialization of `CContainedWindowT`.

```cpp
typedef CContainedWindowT<CWindow> CContainedWindow;
```

### Requirements

**Header:** atlwin.h

### Remarks

`CContainedWindow` is a specialization of [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). If you want to change the base class or traits, use `CContainedWindowT` directly.

## <a name="cpath"></a> CPath

A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CString`.

```cpp
typedef CPathT<CString> CPath;
```

### Requirements

**Header:** atlpath.h

## <a name="cpatha"></a> CPathA

A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringA`.

```cpp
typedef CPathT<CStringA> CPathA;
```

### Requirements

**Header:** atlpath.h

## <a name="cpathw"></a> CPathW

A specialization of [CPathT](../../atl/reference/cpatht-class.md) using `CStringW`.

```cpp
typedef ATL::CPathT<CStringW> CPathW;
```

### Requirements

**Header:** atlpath.h

## <a name="csimplevalarray"></a> CSimpleValArray

Represents an array for storing simple types.

```cpp
#define CSimpleValArray CSimpleArray
```

### Remarks

`CSimpleValArray` is provided for creating and managing arrays containing simple data types. It is a simple #define of [CSimpleArray](../../atl/reference/csimplearray-class.md).

### Requirements

**Header:** atlsimpcoll.h

## <a name="lpcurl"></a> LPCURL

A pointer to a constant [CUrl](../../atl/reference/curl-class.md) object.

```cpp
typedef const CUrl* LPCURL;
```

### Requirements

**Header:** atlutil.h

## <a name="defaultthreadtraits"></a> DefaultThreadTraits

The default thread traits class.

### Syntax

```cpp
#if defined(_MT)
   typedef CRTThreadTraits DefaultThreadTraits;
#else
   typedef Win32ThreadTraits DefaultThreadTraits;
#endif
```

## Remarks

If the current project uses the multithreaded CRT, DefaultThreadTraits is defined as CRTThreadTraits. Otherwise, Win32ThreadTraits is used.

### Requirements

**Header:** atlbase.h

## <a name="lpurl"></a> LPURL

A pointer to a [CUrl](../../atl/reference/curl-class.md) object.

```cpp
typedef CUrl* LPURL;
```

### Requirements

**Header:** atlutil.h

## See also

[ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)<br/>
[Functions](../../atl/reference/atl-functions.md)<br/>
[Global Variables](../../atl/reference/atl-global-variables.md)<br/>
[Classes and structs](../../atl/reference/atl-classes.md)<br/>
[Macros](../../atl/reference/atl-macros.md)
