---
description: "Learn more about: bindable"
title: "bindable (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.bindable"]
helpviewer_keywords: ["bindable attribute"]
ms.assetid: a2360f92-927b-4af8-98cc-6eca7f4ec954
---
# bindable

Indicates that the property supports data binding.

## Syntax

```cpp
[bindable]
```

## Remarks

The **bindable** C++ attribute has the same functionality as the [bindable](/windows/win32/Midl/bindable) MIDL attribute. You can use it on properties defined with the [propget](propget.md), [propput](propput.md), or [propputref](propputref.md) attributes, or you can manually define a bindable method.

The following MFC samples show the use of **bindable**:

- [Controls Samples: MFC-Based ActiveX Controls](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/controls)

- [CIRC Sample: ActiveX Control](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/controls)

- [TESTHELP Sample: ActiveX Control with Tooltips and Help](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/controls)

## Example

The following code shows how you can use **bindable** on a property:

```cpp
// cpp_attr_ref_bindable.cpp
// compile with: /LD
#include <windows.h>
[
   uuid("479B29E3-9A2C-11D0-B696-00A0C903487A"), dispinterface, helpstring("property demo Interface")
]
__interface IPropDemo : IDispatch {

   [propget, id(1), bindable, displaybind, defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);
   [propput, id(1), bindable, displaybind, defaultbind, requestedit] HRESULT P1([in] long nSize);
   [id(3), bindable, propget] HRESULT Object([out, retval] IDispatch **ppObj);
   [id(3), bindable, propputref] HRESULT Object([in] IDispatch* pObj);
   [id(-552), helpstring("method AboutBox")] HRESULT AboutBox();
};

[ module(name="PropDemoLib", uuid="479B29E2-9A2C-11D0-B696-00A0C903487A", version="1.0", helpstring="property demo") ];
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[defaultbind](defaultbind.md)<br/>
[displaybind](displaybind.md)<br/>
[immediatebind](immediatebind.md)<br/>
[requestedit](requestedit.md)
