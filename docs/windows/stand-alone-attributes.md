---
title: "Stand-Alone Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "standalone attributes"
  - "attributes [C++], standalone"
ms.assetid: 0d72e84e-236c-43b3-ac9a-d9b91fcd6794
caps.latest.revision: 7
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
# Stand-Alone Attributes
A stand-alone attribute does not operate on a C++ keyword but is more like a line of code. Stand-alone attribute statements require a semicolon at the end of the line.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[cpp_quote](../windows/cpp-quote.md)|Emits the specified string, without the quote characters, into the generated header file.|  
|[custom](../windows/custom-cpp.md)|Lets you define your own attribute.|  
|[db_command](../windows/db-command.md)|Creates an OLE DB command.|  
|[emitidl](../windows/emitidl.md)|Determines whether all subsequent IDL attributes will be processed and placed in the generated .idl file.|  
|[idl_module](../windows/idl-module.md)|Specifies an entry point in a DLL.|  
|[idl_quote](../windows/idl-quote.md)|Allows you to use IDL constructs that are not supported in the current version of Visual C++ and have them pass through to the generated .idl file.|  
|[import](../windows/import.md)|Specifies another .idl, .odl, or .h file containing definitions you want to reference from your main .idl file.|  
|[importidl](../windows/importidl.md)|Inserts the specified .idl file into the generated .idl file|  
|[importlib](../windows/importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|  
|[include](../windows/include-cpp.md)|Specifies one or more header files to be included in the generated .idl file.|  
|[includelib](../windows/includelib-cpp.md)|Causes an .idl or .h file to be included in the generated .idl file.|  
|[library_block](../windows/library-block.md)|Places a construct inside the .idl file's library block.|  
|[module](../windows/module-cpp.md)|Defines the library block in the .idl file.|  
|[no_injected_text](../windows/no-injected-text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
|[pragma](../windows/pragma.md)|Emits the specified string, without the quote characters, into the generated .idl file.|  
  
## See Also  
 [Attributes by Usage](../windows/attributes-by-usage.md)