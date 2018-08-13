---
title: "Compiler Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["cl.exe compiler, attributes", "attributes [C++], compiler"]
ms.assetid: 53cd9bee-1521-48ec-b171-80feac2096cc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Compiler Attributes
Compiler attributes provide a variety of functionality.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[emitidl](../windows/emitidl.md)|Determines whether all subsequent IDL attributes will be processed and placed in the generated .idl file.|  
|[event_receiver](../windows/event-receiver.md)|Creates an event receiver.|  
|[event_source](../windows/event-source.md)|Creates an event source.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[implements](../windows/implements-cpp.md)|Specifies dispatch interfaces that are forced to be members of the IDL coclass.|  
|[importidl](../windows/importidl.md)|Inserts the specified .idl file into the generated .idl file.|  
|[importlib](../windows/importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|  
|[includelib](../windows/includelib-cpp.md)|Causes an .idl or .h file to be included in the generated .idl file.|  
|[library_block](../windows/library-block.md)|Places a construct inside the .idl file's library block.|  
|[no_injected_text](../windows/no-injected-text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
|[satype](../windows/satype.md)|Specifies the data type of the `SAFEARRAY`.|  
|[version](../windows/version-cpp.md)|Identifies a particular version among multiple versions of an interface or class.|  
  
## See Also  
 [Attributes by Group](../windows/attributes-by-group.md)