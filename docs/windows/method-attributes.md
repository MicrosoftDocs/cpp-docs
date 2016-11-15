---
title: "Method Attributes | Microsoft Docs"
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
  - "method attributes"
  - "attributes [C++], reference topics"
ms.assetid: b2313352-480d-488b-8c35-6242ffd3a549
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
# Method Attributes
The following attributes apply to the methods in a class, coclass, or interface.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[bindable](../windows/bindable.md)|Indicates that the property supports data binding.|  
|[call_as](../windows/call-as.md)|Enables a nonremotable function to be mapped to a remote function.|  
|[custom](../windows/custom-cpp.md)|Lets you define your own attribute.|  
|[db_column](../windows/db-column.md)|Binds a specified column to the rowset.|  
|[db_command](../windows/db-command.md)|Creates an OLE DB command.|  
|[db_param](../windows/db-param.md)|Associates the specified member variable with an input or output parameter and delimits the variable.|  
|[db_source](../windows/db-source.md)|Creates a connection to a data source.|  
|[db_table](../windows/db-table.md)|Opens an OLE DB table.|  
|[defaultbind](../windows/defaultbind.md)|Indicates the single, bindable property that best represents the object.|  
|[defaultcollelem](../windows/defaultcollelem.md)|Used for Visual Basic code optimization.|  
|[displaybind](../windows/displaybind.md)|Indicates a property that should be displayed to the user as bindable.|  
|[helpcontext](../windows/helpcontext.md)|Specifies a context ID that lets the user view information about this element in the Help file.|  
|[helpfile](../windows/helpfile.md)|Sets the name of the Help file for a type library.|  
|[helpstring](../windows/helpstring.md)|Specifies a character string that is used to describe the element to which it applies.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifies the ID of a help topic in an .hlp or .chm file.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifies the name of the DLL to use to perform document string lookup (localization).|  
|[hidden](../windows/hidden.md)|Indicates that the item exists but should not be displayed in a user-oriented browser.|  
|[id](../windows/id.md)|Specifies a DISPID for a member function (either a property or a method, in an interface or dispinterface).|  
|[immediatebind](../windows/immediatebind.md)|Indicates that the database will be notified immediately of all changes to a property of a data-bound object.|  
|[in](../windows/in-cpp.md)|Indicates that a parameter is to be passed from the calling procedure to the called procedure.|  
|[local](../windows/local-cpp.md)|Allows you to use the MIDL compiler as a header generator when used in the interface header. When used in an individual function, designates a local procedure for which no stubs are generated.|  
|[nonbrowsable](../windows/nonbrowsable.md)|Indicates that an interface member should not be displayed in a property browser.|  
|[propget](../windows/propget.md)|Specifies a property accessor function.|  
|[propput](../windows/propput.md)|Specifies a property-setting function.|  
|[propputref](../windows/propputref.md)|Specifies a property-setting function that uses a reference instead of a value.|  
|[ptr](../windows/ptr.md)|Designates a pointer as a full pointer.|  
|[range](../windows/range-cpp.md)|Specifies a range of allowable values for arguments or fields whose values are set at run time.|  
|[requestedit](../windows/requestedit.md)|Indicates that the property supports the **OnRequestEdit** notification.|  
|[restricted](../windows/restricted.md)|Specifies that a member of a module, interface, or dispinterface cannot be called arbitrarily.|  
|[satype](../windows/satype.md)|Specifies the data type of the **SAFEARRAY** structure.|  
|[source](../windows/source-cpp.md)|Specifies the control's source interfaces for connection points on a class. On a property or method, the **source** attribute indicates that the member returns an object or VARIANT that is a source of events.|  
|[synchronize](../windows/synchronize.md)|Synchronizes access to the target method.|  
|[vararg](../windows/vararg.md)|Specifies that the function take a variable number of arguments.|  
  
## See Also  
 [Attributes by Usage](../windows/attributes-by-usage.md)