---
title: "iid_is | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.iid_is"]
dev_langs: ["C++"]
helpviewer_keywords: ["iid_is attribute"]
ms.assetid: 2f9b42a9-7130-4b08-9b1e-0d5d360e10ff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# iid_is
Specifies the IID of the COM interface pointed to by an interface pointer.  
  
## Syntax  
  
```  
[ iid_is(  
   "expression"  
) ]  
```  
  
#### Parameters  
 *expression*  
 A C language expression that specifies an IID of a COM interface pointed to by an interface pointer.  
  
## Remarks  
 The **iid_is** C++ attribute has the same functionality as the [iid_is](http://msdn.microsoft.com/library/windows/desktop/aa367044) MIDL attribute.  
  
## Example  
 The following code shows the use of **iid_is**:  
  
```cpp  
// cpp_attr_ref_iid_is.cpp  
// compile with: /LD  
#include "wtypes.h"  
#include "unknwn.h"  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface IFireTabCtrl : IDispatch  
{  
   [id(1)] HRESULT CreateInstance([in] REFIID riid,[out, iid_is("riid")]   
   IUnknown ** ppvObject);  
};  
  
[module(name="ATLFIRELib")];  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter, data member|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   