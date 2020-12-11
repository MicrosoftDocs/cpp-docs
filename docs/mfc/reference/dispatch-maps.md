---
description: "Learn more about: Dispatch Maps"
title: "Dispatch Maps"
ms.date: "06/20/2018"
helpviewer_keywords: ["dispatch maps [MFC], macros", "dispatch maps [MFC]", "dispatch map macros [MFC]"]
ms.assetid: bef9d08b-ad35-4c3a-99d8-04150c7c04e2
---
# Dispatch Maps

OLE Automation provides ways to call methods and to access properties across applications. The mechanism supplied by the Microsoft Foundation Class Library for dispatching these requests is the "dispatch map," which designates the internal and external names of object functions and properties, as well as the data types of the properties themselves and of function arguments.

|Dispatch map macro|Description|
|-|-|
|[DECLARE_DISPATCH_MAP](#declare_dispatch_map)|Declares that a dispatch map will be used to expose a class's methods and properties (must be used in the class declaration).|
|[BEGIN_DISPATCH_MAP](#begin_dispatch_map)|Starts the definition of a dispatch map.|
|[END_DISPATCH_MAP](#end_dispatch_map)|Ends the definition of a dispatch map.|
|[DISP_FUNCTION](#disp_function)|Used in a dispatch map to define an OLE automation function.|
|[DISP_PROPERTY](#disp_property)|Defines an OLE automation property.|
|[DISP_PROPERTY_EX](#disp_property_ex)|Defines an OLE automation property and names the Get and Set functions.|
|[DISP_PROPERTY_NOTIFY](#disp_property_notify)|Defines an OLE automation property with notification.|
|[DISP_PROPERTY_PARAM](#disp_property_param)|Defines an OLE automation property that takes parameters and names the Get and Set functions.|
|[DISP_DEFVALUE](#disp_defvalue)|Makes an existing property the default value of an object.|

## <a name="declare_dispatch_map"></a> DECLARE_DISPATCH_MAP

If a `CCmdTarget`-derived class in your program supports OLE Automation, that class must provide a dispatch map to expose its methods and properties.

```cpp
DECLARE_DISPATCH_MAP()
```

### Remarks

Use the DECLARE_DISPATCH_MAP macro at the end of your class declaration. Then, in the .CPP file that defines the member functions for the class, use the BEGIN_DISPATCH_MAP macro. Then include macro entries for each of your class's exposed methods and properties (DISP_FUNCTION, DISP_PROPERTY, and so on). Finally, use the END_DISPATCH_MAP macro.

> [!NOTE]
> If you declare any members after DECLARE_DISPATCH_MAP, you must specify a new access type ( **`public`**, **`private`**, or **`protected`**) for them.

The Application Wizard and code wizards assist in creating Automation classes and in maintaining dispatch maps. For more information on dispatch maps, see [Automation Servers](../../mfc/automation-servers.md).

### Example

[!code-cpp[NVC_MFCAutomation#10](../../mfc/codesnippet/cpp/dispatch-maps_1.h)]

### Requirements

**Header:** afxwin.h

## <a name="begin_dispatch_map"></a> BEGIN_DISPATCH_MAP

Declares the definition of your dispatch map.

```cpp
BEGIN_DISPATCH_MAP(theClass, baseClass)
```

### Parameters

*theClass*<br/>
Specifies the name of the class that owns this dispatch map.

*baseClass*<br/>
Specifies the base class name of *theClass*.

### Remarks

In the implementation (.cpp) file that defines the member functions for your class, start the dispatch map with the BEGIN_DISPATCH_MAP macro, add macro entries for each of your dispatch functions and properties, and complete the dispatch map with the END_DISPATCH_MAP macro.

### Requirements

**Header:** afxdisp.h

## <a name="end_dispatch_map"></a> END_DISPATCH_MAP

Ends the definition of your dispatch map.

```cpp
END_DISPATCH_MAP()
```

### Remarks

It must be used in conjunction with BEGIN_DISPATCH_MAP.

### Requirements

**Header:** afxdisp.h

## <a name="disp_function"></a> DISP_FUNCTION

Defines an OLE automation function in a dispatch map.

```cpp
DISP_FUNCTION(
    theClass,
    pszName,
    pfnMember,
    vtRetVal,
    vtsParams)
```

### Parameters

*theClass*<br/>
Name of the class.

*pszName*<br/>
External name of the function.

*pfnMember*<br/>
Name of the member function.

*vtRetVal*<br/>
A value specifying the function's return type.

*vtsParams*<br/>
A space-separated list of one or more constants specifying the function's parameter list.

### Remarks

The *vtRetVal* argument is of type VARTYPE. The following possible values for this argument are taken from the `VARENUM` enumeration:

|Symbol|Return type|
|------------|-----------------|
|VT_EMPTY|**`void`**|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|BSTR|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

The *vtsParams* argument is a space-separated list of values from the `VTS_*` constants. One or more of these values separated by spaces (not commas) specifies the function's parameter list. For example,

[!code-cpp[NVC_MFCAutomation#14](../../mfc/codesnippet/cpp/dispatch-maps_2.cpp)]

specifies a list containing a short integer followed by a pointer to a short integer.

The `VTS_` constants and their meanings are as follows:

|Symbol|Parameter type|
|------------|--------------------|
|VTS_I2|**`short`**|
|VTS_I4|**`long`**|
|VTS_R4|**`float`**|
|VTS_R8|**`double`**|
|VTS_CY|`const CY` or `CY*`|
|VTS_DATE|DATE|
|VTS_BSTR|LPCSTR|
|VTS_DISPATCH|LPDISPATCH|
|VTS_SCODE|SCODE|
|VTS_BOOL|BOOL|
|VTS_VARIANT|`const VARIANT*` or `VARIANT&`|
|VTS_UNKNOWN|LPUNKNOWN|
|VTS_PI2|__short\*__|
|VTS_PI4|__long\*__|
|VTS_PR4|__float\*__|
|VTS_PR8|__double\*__|
|VTS_PCY|`CY*`|
|VTS_PDATE|`DATE*`|
|VTS_PBSTR|`BSTR*`|
|VTS_PDISPATCH|`LPDISPATCH*`|
|VTS_PSCODE|`SCODE*`|
|VTS_PBOOL|`BOOL*`|
|VTS_PVARIANT|`VARIANT*`|
|VTS_PUNKNOWN|`LPUNKNOWN*`|
|VTS_NONE|No parameters|

### Requirements

**Header:** afxdisp.h

## <a name="disp_property"></a> DISP_PROPERTY

Defines an OLE automation property in a dispatch map.

```cpp
DISP_PROPERTY(
    theClass,
    pszName,
    memberName,
    vtPropType)
```

### Parameters

*theClass*<br/>
Name of the class.

*pszName*<br/>
External name of the property.

*memberName*<br/>
Name of the member variable in which the property is stored.

*vtPropType*<br/>
A value specifying the property's type.

### Remarks

The *vtPropType* argument is of type **VARTYPE**. Possible values for this argument are taken from the VARENUM enumeration:

|Symbol|Property type|
|------------|-----------------------|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|`CString`|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

When an external client changes the property, the value of the member variable specified by *memberName* changes; there is no notification of the change.

### Requirements

**Header:** afxdisp.h

## <a name="disp_property_ex"></a> DISP_PROPERTY_EX

Defines an OLE automation property and name the functions used to get and set the property's value in a dispatch map.

```cpp
DISP_PROPERTY_EX(
    theClass,
    pszName,
    memberGet,
    memberSet,
    vtPropType)
```

### Parameters

*theClass*<br/>
Name of the class.

*pszName*<br/>
External name of the property.

*memberGet*<br/>
Name of the member function used to get the property.

*memberSet*<br/>
Name of the member function used to set the property.

*vtPropType*<br/>
A value specifying the property's type.

### Remarks

The *memberGet* and *memberSet* functions have signatures determined by the *vtPropType* argument. The *memberGet* function takes no arguments and returns a value of the type specified by *vtPropType*. The *memberSet* function takes an argument of the type specified by *vtPropType* and returns nothing.

The *vtPropType* argument is of type VARTYPE. Possible values for this argument are taken from the VARENUM enumeration. For a list of these values, see the Remarks for the *vtRetVal* parameter in [DISP_FUNCTION](#disp_function). Note that VT_EMPTY, listed in the DISP_FUNCTION remarks, is not permitted as a property data type.

### Requirements

**Header:** afxdisp.h

## <a name="disp_property_notify"></a> DISP_PROPERTY_NOTIFY

Defines an OLE automation property with notification in a dispatch map.

```cpp
DISP_PROPERTY_NOTIFY(
    theClass,
    szExternalName,
    memberName,
    pfnAfterSet,
    vtPropType)
```

### Parameters

*theClass*<br/>
Name of the class.

*szExternalName*<br/>
External name of the property.

*memberName*<br/>
Name of the member variable in which the property is stored.

*pfnAfterSet*<br/>
Name of the notification function for *szExternalName*.

*vtPropType*<br/>
A value specifying the property's type.

### Remarks

Unlike properties defined with DISP_PROPERTY, a property defined with DISP_PROPERTY_NOTIFY will automatically call the function specified by *pfnAfterSet* when the property is changed.

The *vtPropType* argument is of type VARTYPE. Possible values for this argument are taken from the VARENUM enumeration:

|Symbol|Property type|
|------------|-----------------------|
|VT_I2|**`short`**|
|VT_I4|**`long`**|
|VT_R4|**`float`**|
|VT_R8|**`double`**|
|VT_CY|CY|
|VT_DATE|DATE|
|VT_BSTR|`CString`|
|VT_DISPATCH|LPDISPATCH|
|VT_ERROR|SCODE|
|VT_BOOL|BOOL|
|VT_VARIANT|VARIANT|
|VT_UNKNOWN|LPUNKNOWN|

### Requirements

**Header:** afxdisp.h

## <a name="disp_property_param"></a> DISP_PROPERTY_PARAM

Defines a property accessed with separate `Get` and `Set` member functions.

```cpp
DISP_PROPERTY_PARAM(
    theClass,
    pszExternalName,
    pfnGet,
    pfnSet,
    vtPropType,
    vtsParams)
```

### Parameters

*theClass*<br/>
Name of the class.

*pszExternalName*<br/>
External name of the property.

*pfnGet*<br/>
Name of the member function used to get the property.

*pfnSet*<br/>
Name of the member function used to set the property.

*vtPropType*<br/>
A value specifying the property's type.

*vtsParams*<br/>
A string of space-separated `VTS_*` variant parameter types, one for each parameter.

### Remarks

Unlike the DISP_PROPERTY_EX macro, this macro allows you to specify a parameter list for the property. This is useful for implementing properties that are indexed or parameterized.

### Example

Consider the following declaration of get and set member functions that allow the user to request a specific row and column when accessing the property:

[!code-cpp[NVC_MFCActiveXControl#9](../../mfc/codesnippet/cpp/dispatch-maps_3.h)]

These correspond to the following DISP_PROPERTY_PARAM macro in the control dispatch map:

[!code-cpp[NVC_MFCActiveXControl#10](../../mfc/codesnippet/cpp/dispatch-maps_4.cpp)]

As another example, consider the following get and set member functions:

[!code-cpp[NVC_MFCActiveXControl#11](../../mfc/codesnippet/cpp/dispatch-maps_5.h)]

These correspond to the following DISP_PROPERTY_PARAM macro in the control dispatch map:

[!code-cpp[NVC_MFCActiveXControl#12](../../mfc/codesnippet/cpp/dispatch-maps_6.cpp)]

### Requirements

**Header:** afxdisp.h

## <a name="disp_defvalue"></a> DISP_DEFVALUE

Makes an existing property the default value of an object.

```cpp
DISP_DEFVALUE(theClass, pszName)
```

### Parameters

*theClass*<br/>
Name of the class.

*pszName*<br/>
External name of the property that represents the "value" of the object.

### Remarks

Using a default value can make programming your automation object simpler for Visual Basic applications.

The "default value" of your object is the property that is retrieved or set when a reference to an object does not specify a property or member function.

### Requirements

**Header:** afxdisp.h

## See also

[Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
