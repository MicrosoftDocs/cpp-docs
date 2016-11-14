---
title: "bindable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.bindable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bindable attribute"
ms.assetid: a2360f92-927b-4af8-98cc-6eca7f4ec954
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# bindable
Indicates that the property supports data binding.  
  
## Syntax  
  
```  
  
[bindable]  
  
```  
  
## Remarks  
 The **bindable** C++ attribute has the same functionality as the [bindable](http://msdn.microsoft.com/library/windows/desktop/aa366738) MIDL attribute. You can use it on properties defined with the [propget](../windows/propget.md), [propput](../windows/propput.md), or [propputref](../windows/propputref.md) attributes, or you can manually define a bindable method.  
  
 The following MFC samples show the use of **bindable**:  
  
-   [Controls Samples: MFC-Based ActiveX Controls](http://msdn.microsoft.com/en-us/a44adf86-0ba0-4504-bedb-512b6cba2e63)  
  
-   [CIRC Sample: ActiveX Control](http://msdn.microsoft.com/en-us/9ba34d04-280e-49f4-90ae-41a6be44c95b)  
  
-   [TESTHELP Sample: ActiveX Control with Tooltips and Help](http://msdn.microsoft.com/en-us/d822861d-c6f0-4d0a-ad11-970eebb1e8cd)  
  
## Example  
 The following code shows how you can use **bindable** on a property:  
  
```  
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
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)