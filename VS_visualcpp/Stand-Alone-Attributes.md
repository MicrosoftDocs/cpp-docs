---
title: "Stand-Alone Attributes"
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
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
caps.latest.revision: 7
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
# Stand-Alone Attributes
A stand-alone attribute does not operate on a C++ keyword but is more like a line of code. Stand-alone attribute statements require a semicolon at the end of the line.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[cpp_quote](../VS_visualcpp/cpp_quote.md)|Emits the specified string, without the quote characters, into the generated header file.|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[db_command](../VS_visualcpp/db_command.md)|Creates an OLE DB command.|  
|[emitidl](../VS_visualcpp/emitidl.md)|Determines whether all subsequent IDL attributes will be processed and placed in the generated .idl file.|  
|[idl_module](../VS_visualcpp/idl_module.md)|Specifies an entry point in a DLL.|  
|[idl_quote](../VS_visualcpp/idl_quote.md)|Allows you to use IDL constructs that are not supported in the current version of Visual C++ and have them pass through to the generated .idl file.|  
|[import](../VS_visualcpp/import.md)|Specifies another .idl, .odl, or .h file containing definitions you want to reference from your main .idl file.|  
|[importidl](../VS_visualcpp/importidl.md)|Inserts the specified .idl file into the generated .idl file|  
|[importlib](../VS_visualcpp/importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|  
|[include](../VS_visualcpp/include--C---.md)|Specifies one or more header files to be included in the generated .idl file.|  
|[includelib](../VS_visualcpp/includelib--C---.md)|Causes an .idl or .h file to be included in the generated .idl file.|  
|[library_block](../VS_visualcpp/library_block.md)|Places a construct inside the .idl file's library block.|  
|[module](../VS_visualcpp/module--C---.md)|Defines the library block in the .idl file.|  
|[no_injected_text](../VS_visualcpp/no_injected_text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
|[pragma](../VS_visualcpp/pragma.md)|Emits the specified string, without the quote characters, into the generated .idl file.|  
  
## See Also  
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)