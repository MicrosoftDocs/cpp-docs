---
title: "includelib (C++)"
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
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
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
# includelib (C++)
Causes an .idl or .h file to be included in the generated .idl file.  
  
## Syntax  
  
```  
  
      [ includelib(  
   name.idl  
) ];  
```  
  
#### Parameters  
 *name.idl*  
 The name of the .idl file that you want included as part of the generated .idl file.  
  
## Remarks  
 The `includelib` C++ attribute causes an .idl or .h file to be included in the generated .idl file, after the `importlib` statement.  
  
## Example  
 The following code is shown in a .cpp file:  
  
```  
// cpp_attr_ref_includelib.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[includelib("includelib.idl")];  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Anywhere|  
|**Repeatable**|Yes|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [IDL Attributes](../VS_visualcpp/IDL-Attributes.md)   
 [Stand-Alone Attributes](../VS_visualcpp/Stand-Alone-Attributes.md)   
 [import](../VS_visualcpp/import.md)   
 [importidl](../VS_visualcpp/importidl.md)   
 [include](../VS_visualcpp/include--C---.md)   
 [importlib](../VS_visualcpp/importlib.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)