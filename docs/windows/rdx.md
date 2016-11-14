---
title: "rdx | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.rdx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rdx attribute"
ms.assetid: ff8e4312-c1ad-4934-bdaa-86f54409651e
caps.latest.revision: 14
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
# rdx
Creates a registry key or modifies an existing registry key.  
  
## Syntax  
  
```  
  
      [ rdx(   
   key,   
   valuename=NULL,   
   regtype   
) ]  
```  
  
#### Parameters  
 `key`  
 The name of the key to be created or opened.  
  
 `valuename`(optional)  
 Specifies the value field to be set. If a value field with this name does not already exist in the key, it is added.  
  
 *regtype*  
 The type of registry key being added. Can be one of the following: **text**, **dword**, **binary**, or `CString`.  
  
## Remarks  
 The **rdx** C++ attribute creates or modifies an existing registry key for a COM component. The attribute adds a BEGIN_RDX_MAP macro to the object that implements the target member. `RegistryDataExchange`, a function injected as a result of the BEGIN_RDX_MAP macro, can be used to transfer data between the registry and the data members  
  
 This attribute can be used in conjunction with the [coclass](../windows/coclass.md), [progid](../windows/progid.md), or [vi_progid](../windows/vi-progid.md) attributes or other attributes that implies one of these.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class** or `struct` member|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## Example  
 The following code adds a registry key called MyValue to the system describing the CMyClass COM component.  
  
```  
// cpp_attr_ref_rdx.cpp  
// compile with: /LD /link /OPT:NOREF  
#define _ATL_ATTRIBUTES  
#include "atlbase.h"  
  
[module (name="MyLib")];  
  
class CMyClass {  
public:  
   CMyClass() {  
      strcpy_s(m_sz, "SomeValue");  
   }  
  
   [ rdx(key = "HKCR\\MyApp.MyApp.1", valuename = "MyValue", regtype = "text")]   
   char m_sz[256];  
};  
```  
  
## See Also  
 [COM Attributes](../windows/com-attributes.md)   
 [registration_script](../windows/registration-script.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)