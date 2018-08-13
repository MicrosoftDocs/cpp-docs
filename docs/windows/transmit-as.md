---
title: "transmit_as | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.transmit_as"]
dev_langs: ["C++"]
helpviewer_keywords: ["transmit_as attribute"]
ms.assetid: 53d0b8ab-5b06-423e-83eb-3d01a10424b2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# transmit_as
Instructs the compiler to associate a presented type that client and server applications manipulate, with a transmitted type.  
  
## Syntax  
  
```cpp  
[ transmit_as(  
   type  
) ]  
```  
  
### Parameters  
 *type*  
 Specifies the data type that is transmitted between client and server.  
  
## Remarks  
 The **transmit_as** C++ attribute has the same functionality as the [transmit_as](http://msdn.microsoft.com/library/windows/desktop/aa367286) MIDL attribute.  
  
## Example  
 The following code shows a use of the **transmit_as** attribute:  
  
```cpp  
// cpp_attr_ref_transmit_as.cpp  
// compile with: /LD  
#include "windows.h"  
[module(name="MyLibrary")];  
  
[export] typedef struct _TREE_NODE_TYPE {  
unsigned short data;   
struct _TREE_NODE_TYPE * left;  
struct _TREE_NODE_TYPE * right;   
} TREE_NODE_TYPE;  
  
[export] struct PACKED_NODE {  
   unsigned short data;   // same as normal node  
   int index;   // array index of parent  
};  
  
// A left node recursive built array of  
// the nodes in the tree.  Can be unpacked with  
// that knowledge  
[export] typedef struct _TREE_XMIT_TYPE {  
   int count;  
   [size_is(count)] PACKED_NODE node[];  
} TREE_XMIT_TYPE;  
  
[transmit_as(TREE_XMIT_TYPE)] typedef TREE_NODE_TYPE * TREE_TYPE;  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**typedef**|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [export](../windows/export.md)   