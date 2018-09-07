---
title: "bindable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.bindable"]
dev_langs: ["C++"]
helpviewer_keywords: ["bindable attribute"]
ms.assetid: a2360f92-927b-4af8-98cc-6eca7f4ec954
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# bindable

Indicates that the property supports data binding.

## Syntax

```cpp
[bindable]
```

## Remarks

The **bindable** C++ attribute has the same functionality as the [bindable](/windows/desktop/Midl/bindable) MIDL attribute. You can use it on properties defined with the [propget](../windows/propget.md), [propput](../windows/propput.md), or [propputref](../windows/propputref.md) attributes, or you can manually define a bindable method.

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
   uuid("479B29E3-9A2C-11D0-B696-00A0C903487A"),
   dispinterface,
   helpstring("property demo Interface")  
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

### Attribute Context

|||
|-|-|
|**Applies to**|Interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Method Attributes](../windows/method-attributes.md)  
[defaultbind](../windows/defaultbind.md)  
[displaybind](../windows/displaybind.md)  
[immediatebind](../windows/immediatebind.md)  
[requestedit](../windows/requestedit.md)  