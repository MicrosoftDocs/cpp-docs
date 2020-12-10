---
description: "Learn more about: Aggregation and Class Factory Macros"
title: "Aggregation and Class Factory Macros"
ms.date: 08/12/2020
f1_keywords: ["ATLCOM/ATL::DECLARE_AGGREGATABLE", "ATLCOM/ATL::DECLARE_CLASSFACTORY", "ATLCOM/ATL::DECLARE_CLASSFACTORY_EX", "ATLCOM/ATL::DECLARE_CLASSFACTORY_AUTO_THREAD", "ATLCOM/ATL::DECLARE_CLASSFACTORY_SINGLETON", "ATLCOM/ATL::DECLARE_GET_CONTROLLING_UNKNOWN", "ATLCOM/ATL::DECLARE_NOT_AGGREGATABLE", "ATLCOM/ATL::DECLARE_ONLY_AGGREGATABLE", "ATLCOM/ATL::DECLARE_POLY_AGGREGATABLE", "ATLCOM/ATL::DECLARE_PROTECT_FINAL_CONSTRUCT", "ATLCOM/ATL::DECLARE_VIEW_STATUS", "ATLDEF/ATL::DECLARE_AGGREGATABLE", "ATLDEF/ATL::DECLARE_CLASSFACTORY", "ATLDEF/ATL::DECLARE_CLASSFACTORY_EX", "ATLDEF/ATL::DECLARE_CLASSFACTORY_AUTO_THREAD", "ATLDEF/ATL::DECLARE_CLASSFACTORY_SINGLETON", "ATLDEF/ATL::DECLARE_GET_CONTROLLING_UNKNOWN", "ATLDEF/ATL::DECLARE_NOT_AGGREGATABLE", "ATLDEF/ATL::DECLARE_ONLY_AGGREGATABLE", "ATLDEF/ATL::DECLARE_POLY_AGGREGATABLE", "ATLDEF/ATL::DECLARE_PROTECT_FINAL_CONSTRUCT", "ATLDEF/ATL::DECLARE_VIEW_STATUS", "ATLCOM/DECLARE_AGGREGATABLE", "ATLCOM/DECLARE_CLASSFACTORY", "ATLCOM/DECLARE_CLASSFACTORY_EX", "ATLCOM/DECLARE_CLASSFACTORY_AUTO_THREAD", "ATLCOM/DECLARE_CLASSFACTORY_SINGLETON", "ATLCOM/DECLARE_GET_CONTROLLING_UNKNOWN", "ATLCOM/DECLARE_NOT_AGGREGATABLE", "ATLCOM/DECLARE_ONLY_AGGREGATABLE", "ATLCOM/DECLARE_POLY_AGGREGATABLE", "ATLCOM/DECLARE_PROTECT_FINAL_CONSTRUCT", "ATLCOM/DECLARE_VIEW_STATUS", "ATL::DECLARE_AGGREGATABLE", "ATL::DECLARE_CLASSFACTORY", "ATL::DECLARE_CLASSFACTORY_EX", "ATL::DECLARE_CLASSFACTORY_AUTO_THREAD", "ATL::DECLARE_CLASSFACTORY_SINGLETON", "ATL::DECLARE_GET_CONTROLLING_UNKNOWN", "ATL::DECLARE_NOT_AGGREGATABLE", "ATL::DECLARE_ONLY_AGGREGATABLE", "ATL::DECLARE_POLY_AGGREGATABLE", "ATL::DECLARE_PROTECT_FINAL_CONSTRUCT", "ATL::DECLARE_VIEW_STATUS", "DECLARE_AGGREGATABLE", "DECLARE_CLASSFACTORY", "DECLARE_CLASSFACTORY_EX", "DECLARE_CLASSFACTORY_AUTO_THREAD", "DECLARE_CLASSFACTORY_SINGLETON", "DECLARE_GET_CONTROLLING_UNKNOWN", "DECLARE_NOT_AGGREGATABLE", "DECLARE_ONLY_AGGREGATABLE", "DECLARE_POLY_AGGREGATABLE", "DECLARE_PROTECT_FINAL_CONSTRUCT", "DECLARE_VIEW_STATUS"]
helpviewer_keywords: ["class factories, ATL macros", "aggregation [C++], ATL macros", "ATL::DECLARE_AGGREGATABLE", "ATL::DECLARE_CLASSFACTORY", "ATL::DECLARE_CLASSFACTORY_EX", "ATL::DECLARE_CLASSFACTORY_AUTO_THREAD", "ATL::DECLARE_CLASSFACTORY_SINGLETON", "ATL::DECLARE_GET_CONTROLLING_UNKNOWN", "ATL::DECLARE_NOT_AGGREGATABLE", "ATL::DECLARE_ONLY_AGGREGATABLE", "ATL::DECLARE_POLY_AGGREGATABLE", "ATL::DECLARE_PROTECT_FINAL_CONSTRUCT", "ATL::DECLARE_VIEW_STATUS"]
ms.assetid: d99d379a-0eec-481f-8daa-252dac18f163
---
# Aggregation and Class Factory Macros

These macros provide ways of controlling aggregation and of declaring class factories.

| Macro | Description |
|--|--|
| [DECLARE_AGGREGATABLE](#declare_aggregatable) | Declares that your object can be aggregated (the default). |
| [DECLARE_CLASSFACTORY](#declare_classfactory) | Declares the class factory to be [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), the ATL default class factory. |
| [DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex) | Declares your class factory object to be the class factory. |
| [DECLARE_CLASSFACTORY2](#declare_classfactory2) | Declares [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) to be the class factory. |
| [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) | Declares [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) to be the class factory. |
| [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) | Declares [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) to be the class factory. |
| [DECLARE_GET_CONTROLLING_UNKNOWN](#declare_get_controlling_unknown) | Declares a virtual `GetControllingUnknown` function. |
| [DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable) | Declares that your object cannot be aggregated. |
| [DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable) | Declares that your object must be aggregated. |
| [DECLARE_POLY_AGGREGATABLE](#declare_poly_aggregatable) | Checks the value of the outer unknown and declares your object aggregatable or not aggregatable, as appropriate. |
| [DECLARE_PROTECT_FINAL_CONSTRUCT](#declare_protect_final_construct) | Protects the outer object from deletion during construction of an inner object. |
| [DECLARE_VIEW_STATUS](#declare_view_status) | Specifies the VIEWSTATUS flags to the container. |

## Requirements

**Header:** atlcom.h

## <a name="declare_aggregatable"></a> DECLARE_AGGREGATABLE

Specifies that your object can be aggregated.

```cpp
DECLARE_AGGREGATABLE( x )
```

### Parameters

*x*<br/>
[in] The name of the class you are defining as aggregatable.

### Remarks

[CComCoClass](../../atl/reference/ccomcoclass-class.md) contains this macro to specify the default aggregation model. To override this default, specify either the [DECLARE_NOT_AGGREGATABLE](#declare_not_aggregatable) or [DECLARE_ONLY_AGGREGATABLE](#declare_only_aggregatable) macro in your class definition.

### Example

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

## <a name="declare_classfactory"></a> DECLARE_CLASSFACTORY

Declares [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) to be the class factory.

```cpp
DECLARE_CLASSFACTORY()
```

### Remarks

[CComCoClass](../../atl/reference/ccomcoclass-class.md) uses this macro to declare the default class factory for your object.

### Example

[!code-cpp[NVC_ATL_COM#55](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_2.h)]

## <a name="ccomclassfactory_class"></a> CComClassFactory Class

This class implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface.

```cpp
class CComClassFactory : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### Remarks

`CComClassFactory` implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface, which contains methods for creating an object of a particular CLSID, as well as locking the class factory in memory to allow new objects to be created more quickly. `IClassFactory` must be implemented for every class that you register in the system registry and to which you assign a CLSID.

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](#declare_classfactory), which declares `CComClassFactory` as the default class factory. To override this default, specify one of the DECLARE_CLASSFACTORY*XXX* macros in your class definition. For example, the [DECLARE_CLASSFACTORY_EX](#declare_classfactory_ex) macro uses the specified class for the class factory:

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

The above class definition specifies that `CMyClassFactory` will be used as the object's default class factory. `CMyClassFactory` must derive from `CComClassFactory` and override `CreateInstance`.

ATL provides three other macros that declare a class factory:

- [DECLARE_CLASSFACTORY2](#declare_classfactory2) Uses [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md), which controls creation through a license.

- [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) Uses [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md), which creates objects in multiple apartments.

- [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) Uses [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md), which constructs a single [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) object.

## <a name="declare_classfactory_ex"></a> DECLARE_CLASSFACTORY_EX

Declares `cf` to be the class factory.

```cpp
DECLARE_CLASSFACTORY_EX( cf )
```

### Parameters

*cf*<br/>
[in] The name of the class that implements your class factory object.

### Remarks

The *cf* parameter must derive from [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) and override the `CreateInstance` method.

[CComCoClass](../../atl/reference/ccomcoclass-class.md) includes the [DECLARE_CLASSFACTORY](#declare_classfactory) macro, which specifies `CComClassFactory` as the default class factory. However, by including the DECLARE_CLASSFACTORY_EX macro in your object's class definition, you override this default.

### Example

[!code-cpp[NVC_ATL_COM#8](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_3.h)]

## <a name="declare_classfactory2"></a> DECLARE_CLASSFACTORY2

Declares [CComClassFactory2](../../atl/reference/ccomclassfactory2-class.md) to be the class factory.

```cpp
DECLARE_CLASSFACTORY2( lic )
```

### Parameters

*lic*<br/>
[in] A class that implements `VerifyLicenseKey`, `GetLicenseKey`, and `IsLicenseValid`.

### Remarks

[CComCoClass](../../atl/reference/ccomcoclass-class.md) includes the [DECLARE_CLASSFACTORY](#declare_classfactory) macro, which specifies [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. However, by including the DECLARE_CLASSFACTORY2 macro in your object's class definition, you override this default.

### Example

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

## <a name="ccomclassfactory2_class"></a> CComClassFactory2 Class

This class implements the [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) interface.

```cpp
template <class license>
class  CComClassFactory2 : public IClassFactory2,
    public CComObjectRootEx<CComGlobalsThreadModel>,
    public license
```

### Parameters

*license*<br/>
A class that implements the following static functions:

- `static BOOL VerifyLicenseKey( BSTR bstr );`

- `static BOOL GetLicenseKey( DWORD dwReserved, BSTR * pBstr );`

- `static BOOL IsLicenseValid( );`

### Remarks

`CComClassFactory2` implements the [IClassFactory2](/windows/win32/api/ocidl/nn-ocidl-iclassfactory2) interface, which is an extension of [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory). `IClassFactory2` controls object creation through a license. A class factory executing on a licensed machine can provide a run-time license key. This license key allows an application to instantiate objects when a full machine license does not exist.

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](#declare_classfactory), which declares [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. To use `CComClassFactory2`, specify the [DECLARE_CLASSFACTORY2](#declare_classfactory2) macro in your object's class definition. For example:

[!code-cpp[NVC_ATL_COM#2](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_4.h)]

`CMyLicense`, the template parameter to `CComClassFactory2`, must implement the static functions `VerifyLicenseKey`, `GetLicenseKey`, and `IsLicenseValid`. The following is an example of a simple license class:

[!code-cpp[NVC_ATL_COM#3](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_5.h)]

`CComClassFactory2` derives from both `CComClassFactory2Base` and *license*. `CComClassFactory2Base`, in turn, derives from `IClassFactory2` and **CComObjectRootEx\< CComGlobalsThreadModel >**.

## <a name="declare_classfactory_auto_thread"></a> DECLARE_CLASSFACTORY_AUTO_THREAD

Declares [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) to be the class factory.

```cpp
DECLARE_CLASSFACTORY_AUTO_THREAD()
```

### Remarks

[CComCoClass](../../atl/reference/ccomcoclass-class.md) includes the [DECLARE_CLASSFACTORY](#declare_classfactory) macro, which specifies [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. However, by including the DECLARE_CLASSFACTORY_AUTO_THREAD macro in your object's class definition, you override this default.

When you create objects in multiple apartments (in an out-of-proc server), add DECLARE_CLASSFACTORY_AUTO_THREAD to your class.

### Example

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

## <a name="ccomclassfactoryautothread_class"></a> CComClassFactoryAutoThread Class

This class implements the [IClassFactory](/windows/win32/api/unknwnbase/nn-unknwnbase-iclassfactory) interface, and allows objects to be created in multiple apartments.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

```cpp
class CComClassFactoryAutoThread : public IClassFactory,
public CComObjectRootEx<CComGlobalsThreadModel>
```

### Remarks

`CComClassFactoryAutoThread` is similar to [CComClassFactory](../../atl/reference/ccomclassfactory-class.md), but allows objects to be created in multiple apartments. To take advantage of this support, derive your EXE module from [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](#declare_classfactory), which declares [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. To use `CComClassFactoryAutoThread`, specify the [DECLARE_CLASSFACTORY_AUTO_THREAD](#declare_classfactory_auto_thread) macro in your object's class definition. For example:

[!code-cpp[NVC_ATL_COM#9](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_6.h)]

## <a name="declare_classfactory_singleton"></a> DECLARE_CLASSFACTORY_SINGLETON

Declares [CComClassFactorySingleton](../../atl/reference/ccomclassfactorysingleton-class.md) to be the class factory.

```cpp
DECLARE_CLASSFACTORY_SINGLETON( obj )
```

### Parameters

*obj*<br/>
[in] The name of your class object.

### Remarks

[CComCoClass](../../atl/reference/ccomcoclass-class.md) includes the [DECLARE_CLASSFACTORY](#declare_classfactory) macro, which specifies [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) as the default class factory. However, by including the DECLARE_CLASSFACTORY_SINGLETON macro in your object's class definition, you override this default.

### Example

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

## <a name="ccomclassfactorysingleton_class"></a> CComClassFactorySingleton Class

This class derives from [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) and uses [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) to construct a single object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

```cpp
template<class T>
class CComClassFactorySingleton : public CComClassFactory
```

### Parameters

*T*<br/>
Your class.

`CComClassFactorySingleton` derives from [CComClassFactory](../../atl/reference/ccomclassfactory-class.md) and uses [CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md) to construct a single object. Each call to the `CreateInstance` method simply queries this object for an interface pointer.

### Remarks

ATL objects normally acquire a class factory by deriving from [CComCoClass](../../atl/reference/ccomcoclass-class.md). This class includes the macro [DECLARE_CLASSFACTORY](#declare_classfactory), which declares `CComClassFactory` as the default class factory. To use `CComClassFactorySingleton`, specify the [DECLARE_CLASSFACTORY_SINGLETON](#declare_classfactory_singleton) macro in your object's class definition. For example:

[!code-cpp[NVC_ATL_COM#10](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_7.h)]

## <a name="declare_get_controlling_unknown"></a> DECLARE_GET_CONTROLLING_UNKNOWN

Declares a virtual function `GetControllingUnknown`.

```cpp
DECLARE_GET_CONTROLLING_UNKNOWN()
```

### Remarks

Add this macro to your object if you get the compiler error message that `GetControllingUnknown` is undefined (for example, in `CComAggregateCreator`).

## <a name="declare_not_aggregatable"></a> DECLARE_NOT_AGGREGATABLE

Specifies that your object cannot be aggregated.

```cpp
DECLARE_NOT_AGGREGATABLE( x )
```

### Parameters

*x*<br/>
[in] The name of the class object you are defining as not aggregatable.

### Remarks

DECLARE_NOT_AGGREGATABLE causes `CreateInstance` to return an error (CLASS_E_NOAGGREGATION) if an attempt is made to aggregate onto your object.

By default, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contains the [DECLARE_AGGREGATABLE](#declare_aggregatable) macro, which specifies that your object can be aggregated. To override this default behavior, include DECLARE_NOT_AGGREGATABLE in your class definition.

### Example

[!code-cpp[NVC_ATL_Windowing#121](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_1.h)]

## <a name="declare_only_aggregatable"></a> DECLARE_ONLY_AGGREGATABLE

Specifies that your object must be aggregated.

```cpp
DECLARE_ONLY_AGGREGATABLE( x )
```

### Parameters

*x*<br/>
[in] The name of the class object you are defining as only aggregatable.

### Remarks

DECLARE_ONLY_AGGREGATABLE causes an error (E_FAIL) if an attempt is made to `CoCreate` your object as nonaggregated object.

By default, [CComCoClass](../../atl/reference/ccomcoclass-class.md) contains the [DECLARE_AGGREGATABLE](#declare_aggregatable) macro, which specifies that your object can be aggregated. To override this default behavior, include DECLARE_ONLY_AGGREGATABLE in your class definition.

### Example

[!code-cpp[NVC_ATL_Windowing#125](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_8.h)]

## <a name="declare_poly_aggregatable"></a> DECLARE_POLY_AGGREGATABLE

Specifies that an instance of **CComPolyObject \<** *x* **>** is created when your object is created.

```cpp
DECLARE_POLY_AGGREGATABLE( x )
```

### Parameters

*x*<br/>
[in] The name of the class object you are defining as aggregatable or not aggregatable.

### Remarks

During creation, the value of the outer unknown is checked. If it is NULL, `IUnknown` is implemented for a nonaggregated object. If the outer unknown is not NULL, `IUnknown` is implemented for an aggregated object.

The advantage of using DECLARE_POLY_AGGREGATABLE is that you avoid having both `CComAggObject` and `CComObject` in your module to handle the aggregated and nonaggregated cases. A single `CComPolyObject` object handles both cases. This means only one copy of the vtable and one copy of the functions exist in your module. If your vtable is large, this can substantially decrease your module size. However, if your vtable is small, using `CComPolyObject` can result in a slightly larger module size because it is not optimized for an aggregated or nonaggregated object, as are `CComAggObject` and `CComObject`.

The DECLARE_POLY_AGGREGATABLE macro is automatically declared in your object if you use the ATL Control Wizard to create a full control.

## <a name="declare_protect_final_construct"></a> DECLARE_PROTECT_FINAL_CONSTRUCT

Protects your object from being deleted if (during [FinalConstruct](ccomobjectrootex-class.md#finalconstruct)) the internal aggregated object increments the reference count then decrements the count to 0.

```cpp
DECLARE_PROTECT_FINAL_CONSTRUCT()
```

## <a name="declare_view_status"></a> DECLARE_VIEW_STATUS

Place this macro in an ATL ActiveX control's control class to specify the VIEWSTATUS flags to the container.

```cpp
DECLARE_VIEW_STATUS( statusFlags )
```

### Parameters

*statusFlags*<br/>
[in] The VIEWSTATUS flags. See [VIEWSTATUS](/windows/win32/api/ocidl/ne-ocidl-viewstatus) for a list of flags.

### Example

[!code-cpp[NVC_ATL_Windowing#126](../../atl/codesnippet/cpp/aggregation-and-class-factory-macros_9.h)]

## See also

[Macros](../../atl/reference/atl-macros.md)
