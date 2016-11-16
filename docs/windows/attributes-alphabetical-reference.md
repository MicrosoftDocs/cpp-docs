---
title: "Attributes Alphabetical Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "index-page "
f1_keywords: 
  - "vc.attributes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++]"
ms.assetid: fb2216ef-9fbd-44f4-afed-732aa99450e2
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
# Attributes Alphabetical Reference
The following attributes are available in Visual C++.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../windows/aggregatable.md)|Indicates that a control can be aggregated by another control.|  
|[aggregates](../windows/aggregates.md)|Indicates that a control aggregates the target class.|  
|[appobject](../windows/appobject.md)|Identifies the coclass as an application object, which is associated with a full EXE application, and indicates that the functions and properties of the coclass are globally available in this type library.|  
|[async_uuid](../windows/async-uuid.md)|Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.|  
|[attribute](../windows/attribute.md)|Allows you to create a custom attribute.|  
|[bindable](../windows/bindable.md)|Indicates that the property supports data binding.|  
|[call_as](../windows/call-as.md)|Enables a nonremotable function to be mapped to a remote function.|  
|[case](../windows/case-cpp.md)|Used with the [switch_type](../windows/switch-type.md) attribute in a union.|  
|[coclass](../windows/coclass.md)|Creates a COM object, which can implement a COM interface.|  
|[com_interface_entry](../windows/com-interface-entry-cpp.md)|Adds an interface entry to a COM map.|  
|[control](../windows/control.md)|Specifies that the user-defined type is a control.|  
|[cpp_quote](../windows/cpp-quote.md)|Emits the specified string, without the quote characters, into the generated header file.|  
|[custom](../windows/custom-cpp.md)|Lets you define your own attributes.|  
|[db_accessor](../windows/db-accessor.md)|Binds columns in a rowset and binds them to the corresponding accessor maps.|  
|[db_column](../windows/db-column.md)|Binds a specified column to the rowset.|  
|[db_command](../windows/db-command.md)|Executes an OLE DB command.|  
|[db_param](../windows/db-param.md)|Associates the specified member variable with an input or output parameter.|  
|[db_source](../windows/db-source.md)|Creates and encapsulates a connection, through a provider, to a data source.|  
|[db_table](../windows/db-table.md)|Opens an OLE DB table.|  
|[default](../windows/default-cpp.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|  
|[defaultbind](../windows/defaultbind.md)|Indicates the single, bindable property that best represents the object.|  
|[defaultcollelem](../windows/defaultcollelem.md)|Used for Visual Basic code optimization.|  
|[defaultvalue](../windows/defaultvalue.md)|Allows specification of a default value for a typed optional parameter.|  
|[defaultvtable](../windows/defaultvtable.md)|Defines an interface as the default vtable interface for a control.|  
|[dispinterface](../windows/dispinterface.md)|Places an interface in the .idl file as a dispatch interface.|  
|[displaybind](../windows/displaybind.md)|Indicates a property that should be displayed to the user as bindable.|  
|[dual](../windows/dual.md)|Places an interface in the .idl file as a dual interface.|  
|[emitidl](../windows/emitidl.md)|Determines whether all subsequent IDL attributes will be processed and placed in the generated .idl file.|  
|[entry](../windows/entry.md)|Specifies an exported function or constant in a module by identifying the entry point in the DLL.|  
|[event_receiver](../windows/event-receiver.md)|Creates an event receiver.|  
|[event_source](../windows/event-source.md)|Creates an event source.|  
|[export](../windows/export.md)|Causes a data structure to be placed in the .idl file.|  
|[first_is](../windows/first-is.md)|Specifies the index of the first array element to be transmitted.|  
|[helpcontext](../windows/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../windows/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../windows/helpstring.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|  
|[hidden](../windows/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[id](../windows/id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|  
|[idl_module](../windows/idl-module.md)|Specifies an entry point in a DLL.|  
|[idl_quote](../windows/idl-quote.md)|Allows you to use attributes or IDL constructs that are not supported in the current version of Visual C++.|  
|[iid_is](../windows/iid-is.md)|Specifies the IID of the COM interface pointed to by an interface pointer.|  
|[immediatebind](../windows/immediatebind.md)|Indicates that the database will be notified immediately of all changes to a property of a data-bound object.|  
|[implements](../windows/implements-cpp.md)|Specifies dispatch interfaces that are forced to be members of the IDL coclass.|  
|[implements_category](../windows/implements-category.md)|Specifies implemented component categories for the class.|  
|[import](../windows/import.md)|Specifies another .idl, .odl, or header file containing definitions you want to reference from your main .idl file.|  
|[importidl](../windows/importidl.md)|Inserts the specified .idl file into the generated .idl file.|  
|[importlib](../windows/importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|  
|[in](../windows/in-cpp.md)|Indicates that a parameter is to be passed from the calling procedure to the called procedure.|  
|[include](../windows/include-cpp.md)|Specifies one or more header files to be included in the generated .idl file.|  
|[includelib](../windows/includelib-cpp.md)|Causes an .idl or .h file to be included in the generated .idl file.|  
|[last_is](../windows/last-is.md)|Specifies the index of the last array element to be transmitted.|  
|[lcid](../windows/lcid.md)|Lets you pass a locale identifier to a function.|  
|[length_is](../windows/length-is.md)|Specifies the number of array elements to be transmitted.|  
|[library_block](../windows/library-block.md)|Places a construct inside the .idl file's library block.|  
|[licensed](../windows/licensed.md)|Indicates that the coclass to which it applies is licensed, and must be instantiated using **IClassFactory2**.|  
|[local](../windows/local-cpp.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|  
|[max_is](../windows/max-is.md)|Designates the maximum value for a valid array index.|  
|[module](../windows/module-cpp.md)|Defines the library block in the .idl file.|  
|[ms_union](../windows/ms-union.md)|Controls the network data representation alignment of nonencapsulated unions.|  
|[no_injected_text](../windows/no-injected-text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
|[nonbrowsable](../windows/nonbrowsable.md)|Indicates that an interface member should not be displayed in a property browser.|  
|[noncreatable](../windows/noncreatable.md)|Defines an object that cannot be instantiated by itself.|  
|[nonextensible](../windows/nonextensible.md)|Specifies that the `IDispatch` implementation includes only the properties and methods listed in the interface description and cannot be extended with additional members at run time.|  
|[object](../windows/object-cpp.md)|Identifies a custom interface; synonymous with custom attribute.|  
|[odl](../windows/odl.md)|Identifies an interface as an Object Description Language (ODL) interface.|  
|[oleautomation](../windows/oleautomation.md)|Indicates that an interface is compatible with Automation.|  
|[optional](../windows/optional-cpp.md)|Specifies an optional parameter for a member function.|  
|[out](../windows/out-cpp.md)|Identifies pointer parameters that are returned from the called procedure to the calling procedure (from the server to the client).|  
|[pointer_default](../windows/pointer-default.md)|Specifies the default pointer attribute for all pointers except top-level pointers that appear in parameter lists.|  
|[pragma](../windows/pragma.md)|Emits the specified string, without the quote characters, into the generated .idl file.|  
|[progid](../windows/progid.md)|Specifies the ProgID for a COM object.|  
|[propget](../windows/propget.md)|Specifies a property accessor (get) function.|  
|[propput](../windows/propput.md)|Specifies a property setting function.|  
|[propputref](../windows/propputref.md)|Specifies a property setting function that uses a reference instead of a value.|  
|[ptr](../windows/ptr.md)|Designates a pointer as a full pointer.|  
|[public](../windows/public-cpp-attributes.md)|Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.|  
|[range](../windows/range-cpp.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|  
|[rdx](../windows/rdx.md)|Creates or modifies a registry key.|  
|[readonly](../windows/readonly-cpp.md)|Prohibits assignment to a variable.|  
|[ref](../windows/ref-cpp.md)|Identifies a reference pointer.|  
|[registration_script](../windows/registration-script.md)|Executes the specified registration script.|  
|[requestedit](../windows/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
|[requires_category](../windows/requires-category.md)|Specifies required component categories for the class.|  
|[restricted](../windows/restricted.md)|Specifies that a library, or member of a module, interface, or dispinterface cannot be called arbitrarily.|  
|[retval](../windows/retval.md)|Designates the parameter that receives the return value of the member.|  
|[satype](../windows/satype.md)|Specifies the data type of the **SAFEARRAY**.|  
|[size_is](../windows/size-is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|  
|[source](../windows/source-cpp.md)|Indicates that a member of a class, property, or method is a source of events.|  
|[string](../windows/string-cpp.md)|Indicates that the one-dimensional `char`, `wchar_t`, **byte**, or equivalent array or the pointer to such an array must be treated as a string.|  
|[support_error_info](../windows/support-error-info.md)|Supports error reporting for the target object.|  
|[switch_is](../windows/switch-is.md)|Specifies the expression or identifier acting as the union discriminant that selects the union member.|  
|[switch_type](../windows/switch-type.md)|Identifies the type of the variable used as the union discriminant.|  
|[synchronize](../windows/synchronize.md)|Synchronizes access to a method.|  
|[threading](../windows/threading-cpp.md)|Specifies the threading model for a COM object.|  
|[transmit_as](../windows/transmit-as.md)|Instructs the compiler to associate a presented type, which client and server applications manipulate, with a transmitted type.|  
|[uidefault](../windows/uidefault.md)|Indicates that the type information member is the default member for display in the user interface.|  
|[unique](../windows/unique-cpp.md)|Specifies a unique pointer.|  
|[usesgetlasterror](../windows/usesgetlasterror.md)|Tells the caller that if there is an error when calling that function, the caller can then call `GetLastError` to retrieve the error code.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|  
|[v1_enum](../windows/v1-enum.md)|Directs that the specified enumerated type be transmitted as a 32-bit entity, rather than the 16-bit default.|  
|[vararg](../windows/vararg.md)|Specifies that the function take a variable number of arguments.|  
|[version](../windows/version-cpp.md)|Identifies a particular version among multiple versions of an interface or class.|  
|[vi_progid](../windows/vi-progid.md)|Specifies a version-independent form of the ProgID.|  
|[wire_marshal](../windows/wire-marshal.md)|Specifies a data type that will be used for transmission instead of an application-specific data type.|  
  
## See Also  
 [C++ Attributes Reference](../windows/cpp-attributes-reference.md)   
 [Concepts](../windows/attributed-programming-concepts.md)   
 [Attributes by Group](../windows/attributes-by-group.md)   
 [Attributes by Usage](../windows/attributes-by-usage.md)