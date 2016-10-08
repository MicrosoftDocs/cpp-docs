---
title: "Class Attributes"
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
ms.assetid: fad04ea1-d8ff-46d4-bb42-2b4500a6ab60
caps.latest.revision: 9
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
# Class Attributes
The following attributes apply to the [class](../VS_visualcpp/class--C---.md) C++ keyword.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../VS_visualcpp/aggregatable.md)|Indicates that the class supports aggregation.|  
|[aggregates](../VS_visualcpp/aggregates.md)|Indicates that a control aggregates the target class.|  
|[appobject](../VS_visualcpp/appobject.md)|Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this type library.|  
|[case](../VS_visualcpp/case--C---.md)|Used with the [switch_type](../VS_visualcpp/switch_type.md) attribute in a union.|  
|[coclass](../VS_visualcpp/coclass.md)|Creates an ActiveX control.|  
|[com_interface_entry](../VS_visualcpp/com_interface_entry--C---.md)|Adds an interface entry to a COM map.|  
|[control](../VS_visualcpp/control.md)|Specifies that the user-defined type is a control.|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[db_command](../VS_visualcpp/db_command.md)|Creates an OLE DB command.|  
|[db_param](../VS_visualcpp/db_param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../VS_visualcpp/db_source.md)|Creates a connection to a data source.|  
|[db_table](../VS_visualcpp/db_table.md)|Opens an OLE DB table.|  
|[default](../VS_visualcpp/default--C---.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|  
|[defaultvtable](../VS_visualcpp/defaultvtable.md)|Defines an interface as the default vtable interface for a control.|  
|[event_receiver](../VS_visualcpp/event_receiver.md)|Creates an event receiver.|  
|[event_source](../VS_visualcpp/event_source.md)|Creates an event source.|  
|[helpcontext](../VS_visualcpp/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../VS_visualcpp/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstringcontext](../VS_visualcpp/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstring](../VS_visualcpp/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[hidden](../VS_visualcpp/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[implements](../VS_visualcpp/implements--C---.md)|Specifies dispatch interfaces that are forced to be members of the IDL coclass.|  
|[implements_category](../VS_visualcpp/implements_category.md)|Specifies implemented component categories for the class.|  
|[module](../VS_visualcpp/module--C---.md)|Defines the library block in the .idl file.|  
|[noncreatable](../VS_visualcpp/noncreatable.md)|Defines an object that cannot be instantiated by itself.|  
|[progid](../VS_visualcpp/progid.md)|Defines the ProgID for a control.|  
|[registration_script](../VS_visualcpp/registration_script.md)|Executes the specified registration script.|  
|[requestedit](../VS_visualcpp/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
|[source](../VS_visualcpp/source--C---.md)|Specifies the control's source interfaces for connection points on a class. On a property or method, the **source** attribute indicates that the member returns an object or VARIANT that is a source of events.|  
|[support_error_info](../VS_visualcpp/support_error_info.md)|Supports error reporting for the target object.|  
|[threading](../VS_visualcpp/threading--C---.md)|Specifies the threading model for a control.|  
|[uuid](../VS_visualcpp/uuid--C---Attributes-.md)|Specifies the unique ID for a class or interface.|  
|[version](../VS_visualcpp/version--C---.md)|Identifies a particular version among multiple versions of a class.|  
|[vi_progid](../VS_visualcpp/vi_progid.md)|Specifies a version-independent form of the ProgID.|  
  
## See Also  
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)