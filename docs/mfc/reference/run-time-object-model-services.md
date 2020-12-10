---
description: "Learn more about: Run-Time Object Model Services"
title: "Run-Time Object Model Services"
ms.date: "03/27/2019"
helpviewer_keywords: ["run-time object model services macros"]
ms.assetid: 4a3e79df-2ee3-43a4-8193-20298828de85
---
# Run-Time Object Model Services

The classes [CObject](../../mfc/reference/cobject-class.md) and [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) encapsulate several object services, including access to run-time class information, serialization, and dynamic object creation. All classes derived from `CObject` inherit this functionality.

Access to run-time class information enables you to determine information about an object's class at run time. The ability to determine the class of an object at run time is useful when you need extra type-checking of function arguments and when you must write special-purpose code based on the class of an object. Run-time class information is not supported directly by the C++ language.

Serialization is the process of writing or reading an object's contents to or from a file. You can use serialization to store an object's contents even after the application exits. The object can then be read from the file when the application is restarted. Such data objects are said to be "persistent."

Dynamic object creation enables you to create an object of a specified class at run time. For example, document, view, and frame objects must support dynamic creation because the framework needs to create them dynamically.

The following table lists the MFC macros that support run-time class information, serialization, and dynamic creation.

For more information on these run-time object services and serialization, see the article [CObject Class: Accessing Run-Time Class Information](../../mfc/accessing-run-time-class-information.md).

### Run-Time Object Model Services Macros

|Name|Description|
|-|-|
|[DECLARE_DYNAMIC](#declare_dynamic)|Enables access to run-time class information (must be used in the class declaration).|
|[DECLARE_DYNCREATE](#declare_dyncreate)|Enables dynamic creation and access to run-time class information (must be used in the class declaration).|
|[DECLARE_SERIAL](#declare_serial)|Enables serialization and access to run-time class information (must be used in the class declaration).|
|[IMPLEMENT_DYNAMIC](#implement_dynamic)|Enables access to run-time class information (must be used in the class implementation).|
|[IMPLEMENT_DYNCREATE](#implement_dyncreate)|Enables dynamic creation and access to run-time information (must be used in the class implementation).|
|[IMPLEMENT_SERIAL](#implement_serial)|Permits serialization and access to run-time class information (must be used in the class implementation).|
|[RUNTIME_CLASS](#runtime_class)|Returns the `CRuntimeClass` structure that corresponds to the named class.|

OLE frequently requires the dynamic creation of objects at run time. For example, an OLE server application must be able to create OLE items dynamically in response to a request from a client. Similarly, an automation server must be able to create items in response to requests from automation clients.

The Microsoft Foundation Class Library provides two macros specific to OLE.

### Dynamic Creation of OLE Objects

|Name|Description|
|-|-|
|[AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)|Determines whether the Common Controls library implements the specified API.|
|[AFX_COMCTL32_IF_EXISTS2](#afx_comctl32_if_exists2)|Determines whether the Common Controls library implements the specified API.|
|[DECLARE_OLECREATE](#declare_olecreate)|Enables objects to be created through OLE automation.|
|[DECLARE_OLECTLTYPE](#declare_olectltype)|Declares the `GetUserTypeNameID` and `GetMiscStatus` member functions of your control class.|
|[DECLARE_PROPPAGEIDS](#declare_proppageids)|Declares that the OLE control provides a list of property pages to display its properties.|
|[IMPLEMENT_OLECREATE](#implement_olecreate)|Enables objects to be created by the OLE system.|
|[IMPLEMENT_OLECTLTYPE](#implement_olectltype)|Implements the `GetUserTypeNameID` and `GetMiscStatus` member functions of your control class.|
|[IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags)|Either this macro or [IMPLEMENT_OLECREATE](#implement_olecreate) must appear in the implementation file for any class that uses `DECLARE_OLECREATE`. |

## <a name="afx_comctl32_if_exists"></a> AFX_COMCTL32_IF_EXISTS

Determines whether the Common Controls library implements the specified API.

### Syntax

```
AFX_COMCTL32_IF_EXISTS(  proc );
```

### Parameters

*proc*<br/>
Pointer to a null-terminated string containing the function name, or specifies the function's ordinal value. If this parameter is an ordinal value, it must be in the low-order word; the high-order word must be zero. This parameter must be in Unicode.

### Remarks

Use this macro to determine whether the Common Controls library the function specified by *proc* (instead of calling [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress).

### Requirements

afxcomctl32.h, afxcomctl32.inl

## <a name="afx_comctl32_if_exists2"></a> AFX_COMCTL32_IF_EXISTS2

Determines whether the Common Controls library implements the specified API (this is the Unicode version of [AFX_COMCTL32_IF_EXISTS](#afx_comctl32_if_exists)).

### Syntax

```
AFX_COMCTL32_IF_EXISTS2( proc );
```

### Parameters

*proc*<br/>
Pointer to a null-terminated string containing the function name, or specifies the function's ordinal value. If this parameter is an ordinal value, it must be in the low-order word; the high-order word must be zero. This parameter must be in Unicode.

### Remarks

Use this macro to determine whether the Common Controls library the function specified by *proc* (instead of calling [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress). This macro is the Unicode version of AFX_COMCTL32_IF_EXISTS.

### Requirements

afxcomctl32.h, afxcomctl32.inl

## <a name="declare_dynamic"></a> DECLARE_DYNAMIC

Adds the ability to access run-time information about an object's class when deriving a class from `CObject`.

```
DECLARE_DYNAMIC(class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class.

### Remarks

Add the DECLARE_DYNAMIC macro to the header (.h) module for the class, then include that module in all .cpp modules that need access to objects of this class.

If you use the DECLARE_ DYNAMIC and IMPLEMENT_DYNAMIC macros as described, you can then use the RUNTIME_CLASS macro and the `CObject::IsKindOf` function to determine the class of your objects at run time.

If DECLARE_DYNAMIC is included in the class declaration, then IMPLEMENT_DYNAMIC must be included in the class implementation.

For more information on the DECLARE_DYNAMIC macro, see [CObject Class Topics](../../mfc/using-cobject.md).

### Example

See the example for [IMPLEMENT_DYNAMIC](#implement_dynamic).

### Requirements

**Header:** afx.h

## <a name="declare_dyncreate"></a> DECLARE_DYNCREATE

Enables objects of `CObject`-derived classes to be created dynamically at run time.

```
DECLARE_DYNCREATE(class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class.

### Remarks

The framework uses this ability to create new objects dynamically. For example, the new view created when you open a new document. Document, view, and frame classes should support dynamic creation because the framework needs to create them dynamically.

Add the DECLARE_DYNCREATE macro in the .h module for the class, then include that module in all .cpp modules that need access to objects of this class.

If DECLARE_DYNCREATE is included in the class declaration, then IMPLEMENT_DYNCREATE must be included in the class implementation.

For more information on the DECLARE_DYNCREATE macro, see [CObject Class Topics](../../mfc/using-cobject.md).

> [!NOTE]
> The DECLARE_DYNCREATE macro includes all the functionality of DECLARE_DYNAMIC.

### Example

See the example for [IMPLEMENT_DYNCREATE](#implement_dyncreate).

### Requirements

**Header:** afx.h

## <a name="declare_olectltype"></a> DECLARE_OLECTLTYPE

Declares the `GetUserTypeNameID` and `GetMiscStatus` member functions of your control class.

### Syntax

```
DECLARE_OLECTLTYPE( class_name )
```

### Parameters

*class_name*<br/>
The name of the control class.

### Remarks

`GetUserTypeNameID` and `GetMiscStatus` are pure virtual functions, declared in `COleControl`. Because these functions are pure virtual, they must be overridden in your control class. In addition to DECLARE_OLECTLTYPE, you must add the IMPLEMENT_OLECTLTYPE macro to your control class declaration.

### Requirements

**Header:** afxctl.h

## <a name="declare_proppageids"></a> DECLARE_PROPPAGEIDS

Declares that the OLE control provides a list of property pages to display its properties.

### Syntax

```
DECLARE_PROPPAGEIDS( class_name )
```

### Parameters

*class_name*<br/>
The name of the control class that owns the property pages.

### Remarks

Use the `DECLARE_PROPPAGEIDS` macro at the end of your class declaration. Then, in the .cpp file that defines the member functions for the class, use the `BEGIN_PROPPAGEIDS` macro, macro entries for each of your control's property pages, and the `END_PROPPAGEIDS` macro to declare the end of the property page list.

For more information on property pages, see the article [ActiveX Controls: Property Pages](../mfc-activex-controls-property-pages.md).

### Requirements

**Header:** afxctl.h

## <a name="declare_serial"></a> DECLARE_SERIAL

Generates the C++ header code necessary for a `CObject`-derived class that can be serialized.

```
DECLARE_SERIAL(class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class.

### Remarks

Serialization is the process of writing or reading the contents of an object to and from a file.

Use the DECLARE_SERIAL macro in an .h module, and then include that module in all .cpp modules that need access to objects of this class.

If DECLARE_SERIAL is included in the class declaration, then IMPLEMENT_SERIAL must be included in the class implementation.

The DECLARE_SERIAL macro includes all the functionality of DECLARE_DYNAMIC and DECLARE_DYNCREATE.

You can use the AFX_API macro to automatically export the `CArchive` extraction operator for classes that use the DECLARE_SERIAL and IMPLEMENT_SERIAL macros. Bracket the class declarations (located in the .h file) with the following code:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

For more information on the DECLARE_SERIAL macro, see [CObject Class Topics](../../mfc/using-cobject.md).

### Example

[!code-cpp[NVC_MFCCObjectSample#21](../../mfc/codesnippet/cpp/run-time-object-model-services_2.h)]

### Requirements

**Header:** afx.h

## <a name="implement_dynamic"></a> IMPLEMENT_DYNAMIC

Generates the C++ code necessary for a dynamic `CObject`-derived class with run-time access to the class name and position within the hierarchy.

```
IMPLEMENT_DYNAMIC(class_name, base_class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class.

*base_class_name*<br/>
The name of the base class.

### Remarks

Use the IMPLEMENT_DYNAMIC macro in a .cpp module, and then link the resulting object code only once.

For more information, see [CObject Class Topics](../../mfc/using-cobject.md).

### Example

[!code-cpp[NVC_MFCCObjectSample#2](../../mfc/codesnippet/cpp/run-time-object-model-services_3.h)]

[!code-cpp[NVC_MFCCObjectSample#3](../../mfc/codesnippet/cpp/run-time-object-model-services_4.cpp)]

### Requirements

**Header:** afx.h

## <a name="implement_dyncreate"></a> IMPLEMENT_DYNCREATE

Enables objects of `CObject`-derived classes to be created dynamically at run time when used with the DECLARE_DYNCREATE macro.

```
IMPLEMENT_DYNCREATE(class_name, base_class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class.

*base_class_name*<br/>
The actual name of the base class.

### Remarks

The framework uses this ability to create new objects dynamically, for example, when it reads an object from disk during serialization. Add the IMPLEMENT_DYNCREATE macro in the class implementation file. For more information, see [CObject Class Topics](../../mfc/using-cobject.md).

If you use the DECLARE_DYNCREATE and IMPLEMENT_DYNCREATE macros, you can then use the RUNTIME_CLASS macro and the `CObject::IsKindOf` member function to determine the class of your objects at run time.

If DECLARE_DYNCREATE is included in the class declaration, then IMPLEMENT_DYNCREATE must be included in the class implementation.

Note that this macro definition will invoke the default constructor for your class. If a non-trivial constructor is explicitly implemented by the class, it must also explicitly implement the default constructor as well. The default constructor can be added to the class's **`private`** or **`protected`** member sections to prevent it from being called from outside the class implementation.

### Example

[!code-cpp[NVC_MFCCObjectSample#22](../../mfc/codesnippet/cpp/run-time-object-model-services_5.h)]

[!code-cpp[NVC_MFCCObjectSample#23](../../mfc/codesnippet/cpp/run-time-object-model-services_6.cpp)]

### Requirements

**Header:** afx.h

## <a name="implement_olecreate_flags"></a> IMPLEMENT_OLECREATE_FLAGS

Either this macro or [IMPLEMENT_OLECREATE](#implement_olecreate) must appear in the implementation file for any class that uses DECLARE_OLECREATE.

### Syntax

```
IMPLEMENT_OLECREATE_FLAGS( class_name, external_name, nFlags,
    l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### Parameters

*class_name*<br/>
The actual name of the class.

*external_name*<br/>
The object name exposed to other applications (enclosed in quotation marks).

*nFlags*<br/>
Contains one or more of the following flags:

- `afxRegInsertable` Allows the control to appear in the Insert Object dialog box for OLE objects.
- `afxRegApartmentThreading` Sets the threading model in the registry to ThreadingModel=Apartment.
- `afxRegFreeThreading` Sets the threading model in the registry to ThreadingModel=Free.

You can combine the two flags `afxRegApartmentThreading` and `afxRegFreeThreading` to set ThreadingModel=Both. See [InprocServer32](/windows/win32/com/inprocserver32) in the Windows SDK for more information on threading model registration.

*l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8*
Components of the class's CLSID.

### Remarks

> [!NOTE]
> If you use IMPLEMENT_OLECREATE_FLAGS, you can specify which threading model your object supports by using the *nFlags* parameter. If you want to support only the single-treading model, use IMPLEMENT_OLECREATE.

The external name is the identifier exposed to other applications. Client applications use the external name to request an object of this class from an automation server.

The OLE class ID is a unique 128-bit identifier for the object. It consists of one **`long`**, two **WORD**s, and eight **BYTE**s, as represented by *l*, *w1*, *w2*, and *b1* through *b8* in the syntax description. The Application Wizard and code wizards create unique OLE class IDs for you as required.

### Requirements

**Header:** afxdisp.h

## <a name="implement_olectltype"></a> IMPLEMENT_OLECTLTYPE

Implements the `GetUserTypeNameID` and `GetMiscStatus` member functions of your control class.

### Syntax

```
DECLARE_OLECTLTYPE( class_name, idsUserTypeName, dwOleMisc )
```

### Parameters

*class_name*<br/>
The name of the control class.

*idsUserTypeName*<br/>
The resource ID of a string containing the external name of the control.

*dwOleMisc*<br/>
An enumeration containing one or more flags. For more information on this enumeration, see [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) in the Windows SDK.

### Remarks

In addition to IMPLEMENT_OLECTLTYPE, you must add the DECLARE_OLECTLTYPE macro to your control class declaration.

The `GetUserTypeNameID` member function returns the resource string that identifies your control class. `GetMiscStatus` returns the OLEMISC bits for your control. This enumeration specifies a collection of settings describing miscellaneous characteristics of your control. For a full description of the OLEMISC settings, see [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) in the Windows SDK.

> [!NOTE]
> The default settings used by the ActiveX ControlWizard are: OLEMISC_ACTIVATEWHENVISIBLE, OLEMISC_SETCLIENTSITEFIRST, OLEMISC_INSIDEOUT, OLEMISC_CANTLINKINSIDE, and OLEMISC_RECOMPOSEONRESIZE.

### Requirements

**Header:** afxctl.h

## <a name="implement_serial"></a> IMPLEMENT_SERIAL

Generates the C++ code necessary for a dynamic `CObject`-derived class with run-time access to the class name and position within the hierarchy.

```
IMPLEMENT_SERIAL(class_name, base_class_name, wSchema)
```

### Parameters

*class_name*<br/>
The actual name of the class.

*base_class_name*<br/>
The name of the base class.

*wSchema*<br/>
A UINT "version number" that will be encoded in the archive to enable a deserializing program to identify and handle data created by earlier program versions. The class schema number must not be -1.

### Remarks

Use the IMPLEMENT_SERIAL macro in a .cpp module; then link the resulting object code only once.

You can use the AFX_API macro to automatically export the `CArchive` extraction operator for classes that use the DECLARE_SERIAL and IMPLEMENT_SERIAL macros. Bracket the class declarations (located in the .h file) with the following code:

[!code-cpp[NVC_MFCCObjectSample#20](../../mfc/codesnippet/cpp/run-time-object-model-services_1.h)]

For more information, see the [CObject Class Topics](../../mfc/using-cobject.md).

### Example

[!code-cpp[NVC_MFCCObjectSample#24](../../mfc/codesnippet/cpp/run-time-object-model-services_7.cpp)]

### Requirements

**Header:** afx.h

## <a name="runtime_class"></a> RUNTIME_CLASS

Gets the run-time class structure from the name of a C++ class.

```
RUNTIME_CLASS(class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class (not enclosed in quotation marks).

### Remarks

RUNTIME_CLASS returns a pointer to a [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure for the class specified by *class_name*. Only `CObject`-derived classes declared with DECLARE_DYNAMIC, DECLARE_DYNCREATE, or DECLARE_SERIAL will return pointers to a `CRuntimeClass` structure.

For more information, see [CObject Class Topics](../../mfc/using-cobject.md).

### Example

[!code-cpp[NVC_MFCCObjectSample#25](../../mfc/codesnippet/cpp/run-time-object-model-services_8.cpp)]

### Requirements

**Header:** afx.h

## <a name="declare_olecreate"></a> DECLARE_OLECREATE

Enables objects of `CCmdTarget`-derived classes to be created through OLE automation.

```
DECLARE_OLECREATE(class_name)
```

### Parameters

*class_name*<br/>
The actual name of the class.

### Remarks

This macro enables other OLE-enabled applications to create objects of this type.

Add the DECLARE_OLECREATE macro in the .h module for the class, and then include that module in all .cpp modules that need access to objects of this class.

If DECLARE_OLECREATE is included in the class declaration, then IMPLEMENT_OLECREATE must be included in the class implementation. A class declaration using DECLARE_OLECREATE must also use DECLARE_DYNCREATE or DECLARE_SERIAL.

### Requirements

**Header**: afxdisp.h

## <a name="implement_olecreate"></a> IMPLEMENT_OLECREATE

Either this macro or [IMPLEMENT_OLECREATE_FLAGS](#implement_olecreate_flags) must appear in the implementation file for any class that uses `DECLARE_OLECREATE`.

```
IMPLEMENT_OLECREATE(class_name, external_name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8)
```

### Parameters

*class_name*<br/>
The actual name of the class.

*external_name*<br/>
The object name exposed to other applications (enclosed in quotation marks).

*l*, *w1*, *w2*, *b1*, *b2*, *b3*, *b4*, *b5*, *b6*, *b7*, *b8*
Components of the class's CLSID.

### Remarks

> [!NOTE]
> If you use IMPLEMENT_OLECREATE, by default, you support only the single threading model. If you use IMPLEMENT_OLECREATE_FLAGS, you can specify which threading model your object supports by using the *nFlags* parameter.

The external name is the identifier exposed to other applications. Client applications use the external name to request an object of this class from an automation server.

The OLE class ID is a unique 128-bit identifier for the object. It consists of one **`long`**, two **WORD**s, and eight **BYTE**s, as represented by *l*, *w1*, *w2*, and *b1* through *b8* in the syntax description. The Application Wizard and code wizards create unique OLE class IDs for you as required.

### Requirements

**Header**: afxdisp.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)<br/>
[Isolation of the MFC Common Controls Library](../isolation-of-the-mfc-common-controls-library.md)<br/>
[CLSID Key](/windows/win32/com/clsid-key-hklm)
