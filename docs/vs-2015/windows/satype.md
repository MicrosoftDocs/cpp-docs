---
title: "satype | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.satype"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "satype attribute"
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# satype
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [satype](https://docs.microsoft.com/cpp/windows/satype).  
  
Specifies the data type of the **SAFEARRAY** structure.  
  
## Syntax  
  
```  
  
      [ satype(  
   data_type  
) ]  
```  
  
#### Parameters  
 *data_type*  
 The data type for the **SAFEARRAY** data structure that is being passed as a parameter to an interface method.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Interface parameter, interface method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
## Remarks  
 The **satype** C++ attribute specifies the data type of the **SAFEARRAY**.  
  
> [!NOTE]
>  A level of indirection is dropped from the **SAFEARRAY** pointer in the generated .idl file from how it is declared in the .cpp file.  
  
## Example  
  
```  
// cpp_attr_ref_satype.cpp  
// compile with: /LD  
#include "unknwn.h"  
[module(name="MyModule")];  
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]  
__interface A {  
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);  
};  
```  
  
## See Also  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Parameter Attributes](../windows/parameter-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [id](../windows/id.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



