---
title: "Class Attributes | Microsoft Docs"
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
  - "attributes [C++], class attributes"
  - "class attributes"
ms.assetid: fad04ea1-d8ff-46d4-bb42-2b4500a6ab60
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
# Class Attributes
The following attributes apply to the [class](../cpp/class-cpp.md) C++ keyword.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../windows/aggregatable.md)|Indicates that the class supports aggregation.|  
|[aggregates](../windows/aggregates.md)|Indicates that a control aggregates the target class.|  
|[appobject](../windows/appobject.md)|Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this type library.|  
|[case](../windows/case-cpp.md)|Used with the [switch_type](../windows/switch-type.md) attribute in a union.|  
|[coclass](../windows/coclass.md)|Creates an ActiveX control.|  
|[com_interface_entry](../windows/com-interface-entry-cpp.md)|Adds an interface entry to a COM map.|  
|[control](../windows/control.md)|Specifies that the user-defined type is a control.|  
|[custom](../windows/custom-cpp.md)|Lets you define your own attribute.|  
|[db_command](../windows/db-command.md)|Creates an OLE DB command.|  
|[db_param](../windows/db-param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../windows/db-source.md)|Creates a connection to a data source.|  
|[db_table](../windows/db-table.md)|Opens an OLE DB table.|  
|[default](../windows/default-cpp.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|  
|[defaultvtable](../windows/defaultvtable.md)|Defines an interface as the default vtable interface for a control.|  
|[event_receiver](../windows/event-receiver.md)|Creates an event receiver.|  
|[event_source](../windows/event-source.md)|Creates an event source.|  
|[helpcontext](../windows/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../windows/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstring](../windows/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[hidden](../windows/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[implements](../windows/implements-cpp.md)|Specifies dispatch interfaces that are forced to be members of the IDL coclass.|  
|[implements_category](../windows/implements-category.md)|Specifies implemented component categories for the class.|  
|[module](../windows/module-cpp.md)|Defines the library block in the .idl file.|  
|[noncreatable](../windows/noncreatable.md)|Defines an object that cannot be instantiated by itself.|  
|[progid](../windows/progid.md)|Defines the ProgID for a control.|  
|[registration_script](../windows/registration-script.md)|Executes the specified registration script.|  
|[requestedit](../windows/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
|[source](../windows/source-cpp.md)|Specifies the control's source interfaces for connection points on a class. On a property or method, the **source** attribute indicates that the member returns an object or VARIANT that is a source of events.|  
|[support_error_info](../windows/support-error-info.md)|Supports error reporting for the target object.|  
|[threading](../windows/threading-cpp.md)|Specifies the threading model for a control.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|  
|[version](../windows/version-cpp.md)|Identifies a particular version among multiple versions of a class.|  
|[vi_progid](../windows/vi-progid.md)|Specifies a version-independent form of the ProgID.|  
  
## See Also  
 [Attributes by Usage](../windows/attributes-by-usage.md)