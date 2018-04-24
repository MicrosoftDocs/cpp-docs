---
title: "propputref | Microsoft Docs"
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
  - "vc-attr.propputref"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "propputref attribute"
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# propputref
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [propputref](https://docs.microsoft.com/cpp/windows/propputref).  
  
Specifies a property setting function that uses a reference instead of a value.  
  
## Syntax  
  
```  
  
[propputref]  
  
```  
  
## Remarks  
 The **propputref** C++ attribute has the same functionality as the [propputref](http://msdn.microsoft.com/library/windows/desktop/aa367147) MIDL attribute.  
  
## Example  
 See the example for [bindable](../windows/bindable.md) for a sample use of **propputref**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Method|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|**propget**, **propput**|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [IDL Attributes](../windows/idl-attributes.md)   
 [Method Attributes](../windows/method-attributes.md)   
 [propget](../windows/propget.md)   
 [propput](../windows/propput.md)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)



