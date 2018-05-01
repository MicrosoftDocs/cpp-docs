---
title: "importlib | Microsoft Docs"
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
  - "vc-attr.importlib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "importlib attribute"
ms.assetid: f129e459-b8d3-4aca-a0bc-ee53e18b62ed
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# importlib
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [importlib](https://docs.microsoft.com/cpp/windows/importlib).  
  
Makes types that have already been compiled into another type library available to the type library being created.  
  
## Syntax  
  
```  
  
      [ importlib(  
   "tlb_file"  
) ];  
```  
  
#### Parameters  
 *tlb_file*  
 The name of a .tlb file, in quotes, that you want imported into the type library of the current project.  
  
## Remarks  
 The **importlib** C++ attribute causes an `importlib` statement to be placed in the library block of the generated .idl file. The **importlib** attribute has the same functionality as the [importlib](http://msdn.microsoft.com/library/windows/desktop/aa367050) MIDL attribute.  
  
## Example  
 The following code shows an example of how to use **importlib**:  
  
```  
// cpp_attr_ref_importlib.cpp  
// compile with: /LD  
[module(name="MyLib")];  
[importlib("importlib.tlb")];  
```  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|Anywhere|  
|**Repeatable**|No|  
|**Required attributes**|None|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../windows/attribute-contexts.md).  
  
## See Also  
 [Compiler Attributes](../windows/compiler-attributes.md)   
 [Stand-Alone Attributes](../windows/stand-alone-attributes.md)   
 [import](../windows/import.md)   
 [importidl](../windows/importidl.md)   
 [include](../windows/include-cpp.md)   
 [includelib](../windows/includelib-cpp.md)



