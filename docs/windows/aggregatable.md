---
title: "aggregatable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.aggregatable"]
dev_langs: ["C++"]
helpviewer_keywords: ["aggregatable attribute"]
ms.assetid: 9253a46a-cd76-41f2-b3b6-86f709bb069c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# aggregatable
Indicates that the class supports aggregation.  
  
## Syntax  
  
```cpp  
[ aggregatable(   
   value  
) ]  
```  
  
### Parameters  
 *value* (optional)  
 A parameter to indicate when the COM object can be aggregated:  
  
-   `never` The COM object cannot be aggregated.  
  
-   `allowed` The COM object can be created directly or it can be aggregated. This is the default.  
  
-   `always` The COM object cannot be created directly and can only be aggregated. When you call `CoCreateInstance` for this object, you must specify the aggregating object's `IUnknown` interface (the controlling `IUnknown`).  
  
## Remarks  
 The **aggregatable** C++ attribute has the same functionality as the [aggregatable](http://msdn.microsoft.com/library/windows/desktop/aa366721) MIDL attribute. This means that the compiler will pass the **aggregatable** attribute through to the generated .idl file.  
  
 This attribute requires that the [coclass](../windows/coclass.md), [progid](../windows/progid.md), or [vi_progid](../windows/vi-progid.md) attribute (or another attribute that implies one of these) also be applied to the same element. If any single attribute is used, the other two are automatically applied. For example, if `progid` is applied, `vi_progid` and `coclass` are also applied.  
  
### ATL Projects  
  
 If this attribute is used within a project that uses ATL, the behavior of the attribute changes. In addition to the previously described behavior, the attribute also adds one of the following macros to the target class:  
  
|Parameter value|Inserted macro|  
|---------------------|--------------------|  
|`Never`|[DECLARE_NOT_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_not_aggregatable)|  
|`Allowed`|[DECLARE_POLY_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_poly_aggregatable)|  
|`Always`|[DECLARE_ONLY_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_only_aggregatable)|  
  
## Example  
  
```cpp  
// cpp_attr_ref_aggregatable.cpp  
// compile with: /LD  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
#include "atlcom.h"  
  
[module(name="MyModule")];  
  
[ coclass, aggregatable(allowed),  
  uuid("1a8369cc-1c91-42c4-befa-5a5d8c9d2529")]  
class CMyClass {};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, **struct**|  
|**Repeatable**|No|  
|**Required attributes**|One or more of the following: `coclass`, `progid`, or `vi_progid`.|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Aggregation](http://msdn.microsoft.com/library/windows/desktop/ms686558)   