---
description: "Learn more about: Class Attributes"
title: "Class Attributes (C++ COM)"
ms.date: "10/02/2018"
helpviewer_keywords: ["attributes [C++/CLI], class attributes"]
ms.assetid: fad04ea1-d8ff-46d4-bb42-2b4500a6ab60
---
# Class Attributes

The following attributes apply to the [class](../../cpp/class-cpp.md) C++ keyword.

|Attribute|Description|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indicates that the class supports aggregation.|
|[aggregates](aggregates.md)|Indicates that a control aggregates the target class.|
|[appobject](appobject.md)|Identifies the coclass as an application object, which is associated with a full .exe application, and indicates that the functions and properties of the coclass are globally available in this type library.|
|[case](case-cpp.md)|Used with the [switch_type](switch-type.md) attribute in a union.|
|[coclass](coclass.md)|Creates an ActiveX control.|
|[com_interface_entry](com-interface-entry-cpp.md)|Adds an interface entry to a COM map.|
|[control](control.md)|Specifies that the user-defined type is a control.|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[db_command](db-command.md)|Creates an OLE DB command.|
|[db_param](db-param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|
|[db_source](db-source.md)|Creates a connection to a data source.|
|[db_table](db-table.md)|Opens an OLE DB table.|
|[default](default-cpp.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|
|[defaultvtable](defaultvtable.md)|Defines an interface as the default vtable interface for a control.|
|[event_receiver](event-receiver.md)|Creates an event receiver.|
|[event_source](event-source.md)|Creates an event source.|
|[helpcontext](helpcontext.md)|Specifies a context ID that lets the user view information about this element in the **Help** file.|
|[helpfile](helpfile.md)|Sets the name of the Help file for a type library.|
|[helpstringcontext](helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|
|[helpstring](helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|
|[hidden](hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|
|[implements](implements-cpp.md)|Specifies dispatch interfaces that are forced to be members of the IDL coclass.|
|[implements_category](implements-category.md)|Specifies implemented component categories for the class.|
|[module](module-cpp.md)|Defines the library block in the .idl file.|
|[noncreatable](noncreatable.md)|Defines an object that cannot be instantiated by itself.|
|[progid](progid.md)|Defines the ProgID for a control.|
|[registration_script](registration-script.md)|Executes the specified registration script.|
|[requestedit](requestedit.md)|Indicates that the property supports the `OnRequestEdit` notification.|
|[source](source-cpp.md)|Specifies the control's source interfaces for connection points on a class. On a property or method, the `source` attribute indicates that the member returns an object or `VARIANT` that is a source of events.|
|[support_error_info](support-error-info.md)|Supports error reporting for the target object.|
|[threading](threading-cpp.md)|Specifies the threading model for a control.|
|[uuid](uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|
|[version](version-cpp.md)|Identifies a particular version among multiple versions of a class.|
|[vi_progid](vi-progid.md)|Specifies a version-independent form of the ProgID.|

## See also

[Attributes by Usage](attributes-by-usage.md)
