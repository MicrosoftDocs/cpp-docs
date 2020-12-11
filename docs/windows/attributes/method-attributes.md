---
description: "Learn more about: Method Attributes"
title: "Method Attributes (C++ COM)"
ms.date: "10/02/2018"
helpviewer_keywords: ["method attributes", "attributes [C++/CLI], reference topics"]
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
---
# Method Attributes

The following attributes apply to the methods in a class, coclass, or interface.

|Attribute|Description|
|---------------|-----------------|
|[bindable](bindable.md)|Indicates that the property supports data binding.|
|[call_as](call-as.md)|Enables a nonremotable function to be mapped to a remote function.|
|[custom](custom-cpp.md)|Lets you define your own attribute.|
|[db_column](db-column.md)|Binds a specified column to the rowset.|
|[db_command](db-command.md)|Creates an OLE DB command.|
|[db_param](db-param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|
|[db_source](db-source.md)|Creates a connection to a data source.|
|[db_table](db-table.md)|Opens an OLE DB table.|
|[defaultbind](defaultbind.md)|Indicates the single, bindable property that best represents the object.|
|[defaultcollelem](defaultcollelem.md)|Used for Visual Basic code optimization.|
|[displaybind](displaybind.md)|Indicates a property that should be displayed to the user as bindable.|
|[helpcontext](helpcontext.md)|Specifies a context ID that lets the user view information about this element in the **Help** file.|
|[helpfile](helpfile.md)|Sets the name of the **Help** file for a type library.|
|[helpstring](helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|
|[helpstringcontext](helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|
|[helpstringdll](helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|
|[hidden](hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|
|[id](id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|
|[immediatebind](immediatebind.md)|Indicates that the database will be notified immediately of all changes to a property of a data-bound object.|
|[in](in-cpp.md)|Indicates that a parameter is to be passed from the calling procedure to the called procedure.|
|[local](local-cpp.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|
|[nonbrowsable](nonbrowsable.md)|Indicates that an interface member should not be displayed in a property browser.|
|[propget](propget.md)|Specifies a property accessor function.|
|[propput](propput.md)|Specifies a property-setting function.|
|[propputref](propputref.md)|Specifies a property-setting function that uses a reference instead of a value.|
|[ptr](ptr.md)|Designates a pointer as a full pointer.|
|[range](range-cpp.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|
|[requestedit](requestedit.md)|Indicates that the property supports the `OnRequestEdit` notification.|
|[restricted](restricted.md)|Specifies that a member of a module, interface, or dispinterface cannot be called arbitrarily.|
|[satype](satype.md)|Specifies the data type of the `SAFEARRAY` structure.|
|[source](source-cpp.md)|Specifies the control's source interfaces for connection points on a class. On a property or method, the `source` attribute indicates that the member returns an object or VARIANT that is a source of events.|
|[synchronize](synchronize.md)|Synchronizes access to the target method.|
|[vararg](vararg.md)|Specifies that the function take a variable number of arguments.|

## See also

[Attributes by Usage](attributes-by-usage.md)
