---
title: "threading (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc-attr.threading"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threading attribute"
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
caps.latest.revision: 10
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
# threading (C++)
Specifies the threading model for a COM object.  
  
## Syntax  
  
```  
  
      [ threading(  
   model=enumeration  
) ]  
```  
  
#### Parameters  
 ***model*** (optional)  
 One of the following threading models:  
  
-   **apartment** (apartment threading)  
  
-   **neutral** (.NET Framework components with no user interface)  
  
-   **single** (simple threading)  
  
-   **free** (free threading)  
  
-   **both** (apartment and free threading)  
  
 The default value is **apartment**.  
  
## Remarks  
 The **threading** C++ attribute does not appear in the generated .idl file but will be used in the implementation of your COM object.  
  
 In ATL projects, If the [coclass](../windows/coclass.md) attribute is also present, the threading model specified by *model* is passed as the template parameter to the [CComObjectRootEx](../atl/reference/ccomobjectrootex-class.md) class, inserted by the **coclass** attribute.  
  
 The **threading** attribute also guards access to an [event_source](../windows/event-source.md).  
  
## Example  
 See the [licensed](../windows/licensed.md) example for a sample use of **threading**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|**coclass**|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [COM Attributes](../windows/com-attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)   
 [Class Attributes](../windows/class-attributes.md)   
 [Multithreading Support for Older Code (Visual C++)](../parallel/multithreading-support-for-older-code-visual-cpp.md)   
 [Neutral Apartments](http://msdn.microsoft.com/library/windows/desktop/ms681813)   
 [Attributes Samples](http://msdn.microsoft.com/en-us/558ebdb2-082f-44dc-b442-d8d33bf7bdb8)