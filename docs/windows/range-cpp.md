---
title: "range (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.range"]
dev_langs: ["C++"]
helpviewer_keywords: ["range attribute"]
ms.assetid: f352f79e-ecb3-4cdd-9cdd-8406ef473594
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# range (C++)
Specifies a range of allowable values for arguments or fields whose values are set at run time.  
  
## Syntax  
  
```  
  
      [ range(  
   low,   
   high  
) ]  
```  
  
#### Parameters  
 *low*  
 The low range value.  
  
 *high*  
 The high range value.  
  
## Remarks  
 The **range** C++ attribute has the same functionality as the [range](http://msdn.microsoft.com/library/windows/desktop/aa367151) MIDL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_range.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]  
__interface ICustom {  
   HRESULT Custom([in] long l, [out, retval] long *pLong);  
   HRESULT length_is1([in, range(0, 999)] long f, [in, length_is(f)] char array[10]);  
   HRESULT length_is2([in, range(-99, -1)] long f, [in, length_is("f"), size_is(10)] char *array);  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface method, interface parameter|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Data Member Attributes](../windows/data-member-attributes.md)   