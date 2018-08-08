---
title: "v1_enum | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.v1_enum"]
dev_langs: ["C++"]
helpviewer_keywords: ["v1_enum attribute"]
ms.assetid: 2fe92d92-81b9-4a1c-b6ce-437d0eb770ca
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# v1_enum
Directs that the specified enumerated type be transmitted as a 32-bit entity rather than the 16-bit default.  
  
## Syntax  
  
```  
[v1_enum]  
```  
  
## Remarks  
 The **v1_enum** C++ attribute has the same functionality as the [v1_enum](http://msdn.microsoft.com/library/windows/desktop/aa367303) MIDL attribute.  
  
## Example  
 The following code shows a use of **v1_enum**:  
  
```cpp  
// cpp_attr_ref_v1_enum.cpp  
// compile with: /LD  
[module(name="MyLibrary")];  
  
[export, v1_enum]   
enum eList {   
   e1 = 1,   
   e2 = 2  
};  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Enumerated type|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   