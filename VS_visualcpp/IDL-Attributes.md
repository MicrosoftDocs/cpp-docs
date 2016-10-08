---
title: "IDL Attributes"
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
ms.assetid: 04c596f4-c97b-4952-8053-316678b1d0b6
caps.latest.revision: 8
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
# IDL Attributes
Traditionally, maintaining an .idl file meant that you had to:  
  
-   Be familiar with the structure and syntax of an .idl file to be able to modify it.  
  
-   Rely on a wizard, which would let you modify some aspects of the .idl file.  
  
 Now, you can modify the .idl file from within a source code file using Visual C++ IDL attributes. In many cases, Visual C++ IDL attributes have the same name as MIDL attributes. When the name of a Visual C++ IDL attribute and a MIDL attribute are the same, it means that putting the Visual C++ attribute in your source code file will result in an .idl file that contains its namesake MIDL attribute. However, a Visual C++ IDL attribute may not provide all the functionality of a MIDL attribute.  
  
 When not used with [COM attributes](../VS_visualcpp/COM-Attributes.md), IDL attributes let you define interfaces. When the source code is compiled, the attributes are used to define the generated .idl file. When used with COM attributes in an ATL project, some IDL attributes, such as **coclass**, cause code to be injected into the project.  
  
 Note that [idl_quote](../VS_visualcpp/idl_quote.md) lets you use MIDL constructs that are not supported in the current version of Visual C++. This and other attributes such as [importlib](../VS_visualcpp/importlib.md) and [includelib](../VS_visualcpp/includelib--C---.md) help you to use existing .idl files in your current Visual C++ project.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../VS_visualcpp/aggregatable.md)|Indicates that a control can be aggregated by another control.|  
|[appobject](../VS_visualcpp/appobject.md)|Identifies the coclass as an application object, which is associated with a full EXE application, and indicates that the functions and properties of the coclass are globally available in this type library.|  
|[async_uuid](../VS_visualcpp/async_uuid.md)|Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.|  
|[bindable](../VS_visualcpp/bindable.md)|Indicates that the property supports data binding.|  
|[call_as](../VS_visualcpp/call_as.md)|Enables a nonremotable function to be mapped to a remote function.|  
|[case](../VS_visualcpp/case--C---.md)|Used with the [switch_type](../VS_visualcpp/switch_type.md) attribute in a union.|  
|[coclass](../VS_visualcpp/coclass.md)|Places class definition into an .idl file as coclass.|  
|[control](../VS_visualcpp/control.md)|Specifies that the user-defined type is a control.|  
|[cpp_quote](../VS_visualcpp/cpp_quote.md)|Emits the specified string, without the quote characters, into the generated header file.|  
|[defaultbind](../VS_visualcpp/defaultbind.md)|Indicates the single, bindable property that best represents the object.|  
|[defaultcollelem](../VS_visualcpp/defaultcollelem.md)|Used for Visual Basic code optimization.|  
|[defaultvalue](../VS_visualcpp/defaultvalue.md)|Allows specification of a default value for a typed optional parameter.|  
|[default](../VS_visualcpp/default--C---.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|  
|[defaultvtable](../VS_visualcpp/defaultvtable.md)|Defines an interface as the default vtable interface for a control.|  
|[dispinterface](../VS_visualcpp/dispinterface.md)|Places an interface in the .idl file as a dispatch interface.|  
|[displaybind](../VS_visualcpp/displaybind.md)|Indicates a property that should be displayed to the user as bindable.|  
|[dual](../VS_visualcpp/dual.md)|Places an interface in the .idl file as a dual interface.|  
|[entry](../VS_visualcpp/entry.md)|Specifies an exported function or constant in a module by identifying the entry point in the DLL.|  
|[first_is](../VS_visualcpp/first_is.md)|Specifies the index of the first array element to be transmitted.|  
|[helpcontext](../VS_visualcpp/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../VS_visualcpp/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstringcontext](../VS_visualcpp/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstringdll](../VS_visualcpp/helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|  
|[helpstring](../VS_visualcpp/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[hidden](../VS_visualcpp/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[idl_module](../VS_visualcpp/idl_module.md)|Specifies an entry point in a DLL.|  
|[idl_quote](../VS_visualcpp/idl_quote.md)|Allows you to use attributes or IDL constructs that are not supported in the current version of Visual C++.|  
|[id](../VS_visualcpp/id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|  
|[iid_is](../VS_visualcpp/iid_is.md)|Specifies the IID of the COM interface pointed to by an interface pointer.|  
|[immediatebind](../VS_visualcpp/immediatebind.md)|Indicates that the database will be notified immediately of all changes to a property of a data-bound object.|  
|[importlib](../VS_visualcpp/importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|  
|[import](../VS_visualcpp/import.md)|Specifies another .idl, .odl, or header file containing definitions you want to reference from your main .idl file.|  
|[include](../VS_visualcpp/include--C---.md)|Specifies one or more header files to be included in the generated .idl file.|  
|[includelib](../VS_visualcpp/includelib--C---.md)|Causes an .idl or .h file to be included in the generated .idl file.|  
|[in](../VS_visualcpp/in--C---.md)|Indicates that a parameter is to be passed from the calling procedure to the called procedure.|  
|[last_is](../VS_visualcpp/last_is.md)|Specifies the index of the last array element to be transmitted.|  
|[lcid](../VS_visualcpp/lcid.md)|Lets you pass a locale identifier to a function.|  
|[length_is](../VS_visualcpp/length_is.md)|Specifies the number of array elements to be transmitted.|  
|[licensed](../VS_visualcpp/licensed.md)|Indicates that the coclass to which it applies is licensed, and must be instantiated using **IClassFactory2**.|  
|[local](../VS_visualcpp/local--C---.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|  
|[max_is](../VS_visualcpp/max_is.md)|Designates the maximum value for a valid array index.|  
|[module](../VS_visualcpp/module--C---.md)|Defines the library block in the .idl file.|  
|[ms_union](../VS_visualcpp/ms_union.md)|Controls the network data representation alignment of nonencapsulated unions.|  
|[no_injected_text](../VS_visualcpp/no_injected_text.md)|Prevents the compiler from injecting code as a result of attribute use.|  
|[nonbrowsable](../VS_visualcpp/nonbrowsable.md)|Indicates that an interface member should not be displayed in a property browser.|  
|[noncreatable](../VS_visualcpp/noncreatable.md)|Defines an object that cannot be instantiated by itself.|  
|[nonextensible](../VS_visualcpp/nonextensible.md)|Specifies that the `IDispatch` implementation includes only the properties and methods listed in the interface description and cannot be extended with additional members at run time.|  
|[object](../VS_visualcpp/object--C---.md)|Identifies a custom interface; synonymous with custom attribute.|  
|[odl](../VS_visualcpp/odl.md)|Identifies an interface as an Object Description Language (ODL) interface.|  
|[oleautomation](../VS_visualcpp/oleautomation.md)|Indicates that an interface is compatible with Automation.|  
|[optional](../VS_visualcpp/optional--C---.md)|Specifies an optional parameter for a member function.|  
|[out](../VS_visualcpp/out--C---.md)|Identifies pointer parameters that are returned from the called procedure to the calling procedure (from the server to the client).|  
|[pointer_default](../VS_visualcpp/pointer_default.md)|Specifies the default pointer attribute for all pointers except top-level pointers that appear in parameter lists.|  
|[pragma](../VS_visualcpp/pragma.md)|Emits the specified string, without the quote characters, into the generated .idl file.|  
|[progid](../VS_visualcpp/progid.md)|Specifies the ProgID for a COM object.|  
|[propget](../VS_visualcpp/propget.md)|Specifies a property accessor (get) function.|  
|[propputref](../VS_visualcpp/propputref.md)|Specifies a property setting function that uses a reference instead of a value.|  
|[propput](../VS_visualcpp/propput.md)|Specifies a property setting function.|  
|[ptr](../VS_visualcpp/ptr.md)|Designates a pointer as a full pointer.|  
|[public](../VS_visualcpp/public--C---Attributes-.md)|Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.|  
|[range](../VS_visualcpp/range--C---.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|  
|[readonly](../VS_visualcpp/readonly--C---.md)|Prohibits assignment to a variable.|  
|[ref](../VS_visualcpp/ref--C---.md)|Identifies a reference pointer.|  
|[requestedit](../VS_visualcpp/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
|[restricted](../VS_visualcpp/restricted.md)|Specifies that a library, or member of a module, interface, or dispinterface cannot be called arbitrarily.|  
|[retval](../VS_visualcpp/retval.md)|Designates the parameter that receives the return value of the member.|  
|[size_is](../VS_visualcpp/size_is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|  
|[source](../VS_visualcpp/source--C---.md)|Indicates that a member of a class, property, or method is a source of events.|  
|[string](../VS_visualcpp/string--C---.md)|Indicates that the one-dimensional `char`, `wchar_t`, **byte**, or equivalent array or the pointer to such an array must be treated as a string.|  
|[switch_is](../VS_visualcpp/switch_is.md)|Specifies the expression or identifier acting as the union discriminant that selects the union member.|  
|[switch_type](../VS_visualcpp/switch_type.md)|Identifies the type of the variable used as the union discriminant.|  
|[transmit_as](../VS_visualcpp/transmit_as.md)|Instructs the compiler to associate a presented type, which client and server applications manipulate, with a transmitted type.|  
|[uidefault](../VS_visualcpp/uidefault.md)|Indicates that the type information member is the default member for display in the user interface.|  
|[unique](../VS_visualcpp/unique--C---.md)|Specifies a unique pointer.|  
|[usesgetlasterror](../VS_visualcpp/usesgetlasterror.md)|Tells the caller that if there is an error when calling that function, the caller can then call `GetLastError` to retrieve the error code.|  
|[uuid](../VS_visualcpp/uuid--C---Attributes-.md)|Specifies the unique ID for a class or interface.|  
|[v1_enum](../VS_visualcpp/v1_enum.md)|Directs that the specified enumerated type be transmitted as a 32-bit entity, rather than the 16-bit default.|  
|[vararg](../VS_visualcpp/vararg.md)|Specifies that the function take a variable number of arguments.|  
|[vi_progid](../VS_visualcpp/vi_progid.md)|Specifies a version-independent form of the ProgID.|  
|[wire_marshal](../VS_visualcpp/wire_marshal.md)|Specifies a data type that will be used for transmission instead of an application-specific data type.|  
  
## See Also  
 [Attributes by Group](../VS_visualcpp/Attributes-by-Group.md)   
 [Attribute Limitations](assetId:///6e6c4329-f667-4869-b991-cbe9cb7a8f61)