---
title: "Method Attributes"
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
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
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
# Method Attributes
The following attributes apply to the methods in a class, coclass, or interface.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[bindable](../VS_visualcpp/bindable.md)|Indicates that the property supports data binding.|  
|[call_as](../VS_visualcpp/call_as.md)|Enables a nonremotable function to be mapped to a remote function.|  
|[custom](../VS_visualcpp/custom--C---.md)|Lets you define your own attribute.|  
|[db_column](../VS_visualcpp/db_column.md)|Binds a specified column to the rowset.|  
|[db_command](../VS_visualcpp/db_command.md)|Creates an OLE DB command.|  
|[db_param](../VS_visualcpp/db_param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../VS_visualcpp/db_source.md)|Creates a connection to a data source.|  
|[db_table](../VS_visualcpp/db_table.md)|Opens an OLE DB table.|  
|[defaultbind](../VS_visualcpp/defaultbind.md)|Indicates the single, bindable property that best represents the object.|  
|[defaultcollelem](../VS_visualcpp/defaultcollelem.md)|Used for Visual Basic code optimization.|  
|[displaybind](../VS_visualcpp/displaybind.md)|Indicates a property that should be displayed to the user as bindable.|  
|[helpcontext](../VS_visualcpp/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../VS_visualcpp/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../VS_visualcpp/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[helpstringcontext](../VS_visualcpp/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstringdll](../VS_visualcpp/helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|  
|[hidden](../VS_visualcpp/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[id](../VS_visualcpp/id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|  
|[immediatebind](../VS_visualcpp/immediatebind.md)|Indicates that the database will be notified immediately of all changes to a property of a data-bound object.|  
|[in](../VS_visualcpp/in--C---.md)|Indicates that a parameter is to be passed from the calling procedure to the called procedure.|  
|[local](../VS_visualcpp/local--C---.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|  
|[nonbrowsable](../VS_visualcpp/nonbrowsable.md)|Indicates that an interface member should not be displayed in a property browser.|  
|[propget](../VS_visualcpp/propget.md)|Specifies a property accessor function.|  
|[propput](../VS_visualcpp/propput.md)|Specifies a property-setting function.|  
|[propputref](../VS_visualcpp/propputref.md)|Specifies a property-setting function that uses a reference instead of a value.|  
|[ptr](../VS_visualcpp/ptr.md)|Designates a pointer as a full pointer.|  
|[range](../VS_visualcpp/range--C---.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|  
|[requestedit](../VS_visualcpp/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
|[restricted](../VS_visualcpp/restricted.md)|Specifies that a member of a module, interface, or dispinterface cannot be called arbitrarily.|  
|[satype](../VS_visualcpp/satype.md)|Specifies the data type of the **SAFEARRAY** structure.|  
|[source](../VS_visualcpp/source--C---.md)|Specifies the control's source interfaces for connection points on a class. On a property or method, the **source** attribute indicates that the member returns an object or VARIANT that is a source of events.|  
|[synchronize](../VS_visualcpp/synchronize.md)|Synchronizes access to the target method.|  
|[vararg](../VS_visualcpp/vararg.md)|Specifies that the function take a variable number of arguments.|  
  
## See Also  
 [Attributes by Usage](../VS_visualcpp/Attributes-by-Usage.md)