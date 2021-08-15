---
description: "Learn more about: IDL Attributes"
title: "IDL Attributes (C++ COM)"
ms.date: "10/02/2018"
helpviewer_keywords: ["attributes [C++/CLI], reference topics", "IDL attributes", ".idl files [C++], attributes", "IDL files [C++], attributes", ".idl files [C++]"]
ms.assetid: 04c596f4-c97b-4952-8053-316678b1d0b6
---
# IDL Attributes

Traditionally, maintaining an .idl file meant that you had to:

- Be familiar with the structure and syntax of an .idl file to be able to modify it.

- Rely on a wizard, which would let you modify some aspects of the .idl file.

Now, you can modify the .idl file from within a source code file using Visual C++ IDL attributes. In many cases, Visual C++ IDL attributes have the same name as MIDL attributes. When the name of a Visual C++ IDL attribute and a MIDL attribute are the same, it means that putting the Visual C++ attribute in your source code file will result in an .idl file that contains its namesake MIDL attribute. However, a Visual C++ IDL attribute may not provide all the functionality of a MIDL attribute.

When not used with [COM attributes](com-attributes.md), IDL attributes let you define interfaces. When the source code is compiled, the attributes are used to define the generated .idl file. When used with COM attributes in an ATL project, some IDL attributes, such as `coclass`, cause code to be injected into the project.

Note that [idl_quote](idl-quote.md) lets you use MIDL constructs that are not supported in the current version of Visual C++. This and other attributes such as [importlib](importlib.md) and [includelib](includelib-cpp.md) help you to use existing .idl files in your current Visual Studio C++ project.

|Attribute|Description|
|---------------|-----------------|
|[aggregatable](aggregatable.md)|Indicates that a control can be aggregated by another control.|
|[appobject](appobject.md)|Identifies the coclass as an application object, which is associated with a full EXE application, and indicates that the functions and properties of the coclass are globally available in this type library.|
|[async_uuid](async-uuid.md)|Specifies the UUID that directs the MIDL compiler to define both synchronous and asynchronous versions of a COM interface.|
|[bindable](bindable.md)|Indicates that the property supports data binding.|
|[call_as](call-as.md)|Enables a nonremotable function to be mapped to a remote function.|
|[case](case-cpp.md)|Used with the [switch_type](switch-type.md) attribute in a union.|
|[coclass](coclass.md)|Places class definition into an .idl file as coclass.|
|[control](control.md)|Specifies that the user-defined type is a control.|
|[cpp_quote](cpp-quote.md)|Emits the specified string, without the quote characters, into the generated header file.|
|[defaultbind](defaultbind.md)|Indicates the single, bindable property that best represents the object.|
|[defaultcollelem](defaultcollelem.md)|Used for Visual Basic code optimization.|
|[defaultvalue](defaultvalue.md)|Allows specification of a default value for a typed optional parameter.|
|[default](default-cpp.md)|Indicates that the custom or dispinterface defined within a coclass represents the default programmability interface.|
|[defaultvtable](defaultvtable.md)|Defines an interface as the default vtable interface for a control.|
|[dispinterface](dispinterface.md)|Places an interface in the .idl file as a dispatch interface.|
|[displaybind](displaybind.md)|Indicates a property that should be displayed to the user as bindable.|
|[dual](dual.md)|Places an interface in the .idl file as a dual interface.|
|[entry](entry.md)|Specifies an exported function or constant in a module by identifying the entry point in the DLL.|
|[first_is](first-is.md)|Specifies the index of the first array element to be transmitted.|
|[helpcontext](helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|
|[helpfile](helpfile.md)|Sets the name of the Help file for a type library.|
|[helpstringcontext](helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|
|[helpstringdll](helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|
|[helpstring](helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|
|[hidden](hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|
|[idl_module](idl-module.md)|Specifies an entry point in a DLL.|
|[idl_quote](idl-quote.md)|Allows you to use attributes or IDL constructs that are not supported in the current version of Visual C++.|
|[id](id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|
|[iid_is](iid-is.md)|Specifies the IID of the COM interface pointed to by an interface pointer.|
|[immediatebind](immediatebind.md)|Indicates that the database will be notified immediately of all changes to a property of a data-bound object.|
|[importlib](importlib.md)|Makes types that have already been compiled into another type library available to the type library being created.|
|[import](import.md)|Specifies another .idl, .odl, or header file containing definitions you want to reference from your main .idl file.|
|[include](include-cpp.md)|Specifies one or more header files to be included in the generated .idl file.|
|[includelib](includelib-cpp.md)|Causes an .idl or .h file to be included in the generated .idl file.|
|[in](in-cpp.md)|Indicates that a parameter is to be passed from the calling procedure to the called procedure.|
|[last_is](last-is.md)|Specifies the index of the last array element to be transmitted.|
|[lcid](lcid.md)|Lets you pass a locale identifier to a function.|
|[length_is](length-is.md)|Specifies the number of array elements to be transmitted.|
|[licensed](licensed.md)|Indicates that the coclass to which it applies is licensed, and must be instantiated using `IClassFactory2`.|
|[local](local-cpp.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|
|[max_is](max-is.md)|Designates the maximum value for a valid array index.|
|[module](module-cpp.md)|Defines the library block in the .idl file.|
|[ms_union](ms-union.md)|Controls the network data representation alignment of nonencapsulated unions.|
|[no_injected_text](no-injected-text.md)|Prevents the compiler from injecting code as a result of attribute use.|
|[nonbrowsable](nonbrowsable.md)|Indicates that an interface member should not be displayed in a property browser.|
|[noncreatable](noncreatable.md)|Defines an object that cannot be instantiated by itself.|
|[nonextensible](nonextensible.md)|Specifies that the `IDispatch` implementation includes only the properties and methods listed in the interface description and cannot be extended with additional members at run time.|
|[object](object-cpp.md)|Identifies a custom interface; synonymous with custom attribute.|
|[odl](odl.md)|Identifies an interface as an Object Description Language (ODL) interface.|
|[oleautomation](oleautomation.md)|Indicates that an interface is compatible with Automation.|
|[optional](optional-cpp.md)|Specifies an optional parameter for a member function.|
|[out](out-cpp.md)|Identifies pointer parameters that are returned from the called procedure to the calling procedure (from the server to the client).|
|[pointer_default](pointer-default.md)|Specifies the default pointer attribute for all pointers except top-level pointers that appear in parameter lists.|
|[pragma](pragma.md)|Emits the specified string, without the quote characters, into the generated .idl file.|
|[progid](progid.md)|Specifies the ProgID for a COM object.|
|[propget](propget.md)|Specifies a property accessor (get) function.|
|[propputref](propputref.md)|Specifies a property setting function that uses a reference instead of a value.|
|[propput](propput.md)|Specifies a property setting function.|
|[ptr](ptr.md)|Designates a pointer as a full pointer.|
|[public](public-cpp-attributes.md)|Ensures that a typedef will go into the type library even if it is not referenced from within the .idl file.|
|[range](range-cpp.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|
|[readonly](readonly-cpp.md)|Prohibits assignment to a variable.|
|[ref](ref-cpp.md)|Identifies a reference pointer.|
|[requestedit](requestedit.md)|Indicates that the property supports the `OnRequestEdit` notification.|
|[restricted](restricted.md)|Specifies that a library, or member of a module, interface, or dispinterface cannot be called arbitrarily.|
|[retval](retval.md)|Designates the parameter that receives the return value of the member.|
|[size_is](size-is.md)|Specifies the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.|
|[source](source-cpp.md)|Indicates that a member of a class, property, or method is a source of events.|
|[string](string-cpp.md)|Indicates that the one-dimensional **`char`**, **`wchar_t`**, `byte`, or equivalent array or the pointer to such an array must be treated as a string.|
|[switch_is](switch-is.md)|Specifies the expression or identifier acting as the union discriminant that selects the union member.|
|[switch_type](switch-type.md)|Identifies the type of the variable used as the union discriminant.|
|[transmit_as](transmit-as.md)|Instructs the compiler to associate a presented type, which client and server applications manipulate, with a transmitted type.|
|[uidefault](uidefault.md)|Indicates that the type information member is the default member for display in the user interface.|
|[unique](unique-cpp.md)|Specifies a unique pointer.|
|[usesgetlasterror](usesgetlasterror.md)|Tells the caller that if there is an error when calling that function, the caller can then call `GetLastError` to retrieve the error code.|
|[uuid](uuid-cpp-attributes.md)|Specifies the unique ID for a class or interface.|
|[v1_enum](v1-enum.md)|Directs that the specified enumerated type be transmitted as a 32-bit entity, rather than the 16-bit default.|
|[vararg](vararg.md)|Specifies that the function take a variable number of arguments.|
|[vi_progid](vi-progid.md)|Specifies a version-independent form of the ProgID.|
|[wire_marshal](wire-marshal.md)|Specifies a data type that will be used for transmission instead of an application-specific data type.|

## See also

[Attributes by Group](attributes-by-group.md)
