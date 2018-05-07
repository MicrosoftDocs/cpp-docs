---
title: "vararg | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.vararg"]
dev_langs: ["C++"]
helpviewer_keywords: ["vararg attribute"]
ms.assetid: 20fc3244-18e9-411c-990e-d5b4fa29a570
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# vararg
Specifies that the function takes a variable number of arguments.  
  
## Syntax  
  
```  
  
[vararg]  
  
```  
  
## Remarks  
 The **vararg** C++ attribute has the same functionality as the [vararg](http://msdn.microsoft.com/library/windows/desktop/aa367304) MIDL attribute.  
  
## Example  
 The following code shows a use of **vararg**:  
  
```  
// cpp_attr_ref_vararg.cpp  
// compile with: /LD  
#include "unknwn.h"  
#include "oaidl.h"  
[module(name="MyLibrary")];  
  
[object, uuid("00000000-0000-0000-0000-000000000001")]  
__interface X : public IUnknown   
{  
   [vararg] HRESULT Button([in, satype(VARIANT)]SAFEARRAY *psa);  
};  
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