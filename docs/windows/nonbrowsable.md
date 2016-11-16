---
title: "nonbrowsable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.nonbrowsable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "nonbrowsable attribute"
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
caps.latest.revision: 9
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
# nonbrowsable
Indicates that an interface member should not be displayed in a property browser.  
  
## Syntax  
  
```  
  
[nonbrowsable]  
  
```  
  
## Remarks  
 The **nonbrowsable** C++ attribute has the same functionality as the [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) MIDL attribute.  
  
## Example  
  
```  
// cpp_attr_ref_nonbrowsable.cpp  
// compile with: /LD  
#include <unknwn.h>  
[module(name="MyLib")];  
  
[object, helpstring("help string"), helpstringcontext(1),   
uuid="11111111-1111-1111-1111-111111111111"]   
__interface IMyI  
{  
   [nonbrowsable] HRESULT xx();  
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
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)