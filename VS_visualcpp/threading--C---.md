---
title: "threading (C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: 9b558cd6-fbf0-4602-aed5-31c068550ce3
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
  
 In ATL projects, If the [coclass](../VS_visualcpp/coclass.md) attribute is also present, the threading model specified by *model* is passed as the template parameter to the [CComObjectRootEx](../VS_visualcpp/CComObjectRootEx-Class.md) class, inserted by the **coclass** attribute.  
  
 The **threading** attribute also guards access to an [event_source](../VS_visualcpp/event_source.md).  
  
## Example  
 See the [licensed](../VS_visualcpp/licensed.md) example for a sample use of **threading**.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|**coclass**|  
|**Invalid attributes**|None|  
  
 For more information about the attribute contexts, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [COM Attributes](../VS_visualcpp/COM-Attributes.md)   
 [Typedef, Enum, Union, and Struct Attributes](../VS_visualcpp/Typedef--Enum--Union--and-Struct-Attributes.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Multithreading Support for Older Code (Visual C++)](../VS_visualcpp/Multithreading-Support-for-Older-Code--Visual-C---.md)   
 [Neutral Apartments](http://msdn.microsoft.com/library/windows/desktop/ms681813)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)