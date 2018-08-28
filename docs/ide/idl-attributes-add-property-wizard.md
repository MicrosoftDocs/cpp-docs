---
title: "IDL Attributes, Add Property Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["vc.codewiz.prop.idlattributes"]
dev_langs: ["C++"]
ms.assetid: 356ed666-79d0-4bd9-a5e7-cda679cbadbd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IDL Attributes, Add Property Wizard
Use this page of the Add Property Wizard to specify any interface definition language (IDL) settings for the property.  
  
 **id**  
 Sets the numerical ID that identifies the property. This option is not available for properties of custom interfaces. See [id](/windows/desktop/Midl/id) in the *MIDL Reference*.  
  
 **helpcontext**  
 Specifies a context ID that lets the user view information about this property in the Help file. See [helpcontext](/windows/desktop/Midl/helpcontext) in the *MIDL Reference*.  
  
 **helpstring**  
 Specifies a character string that is used to describe the element to which it applies. By default, it is set to "property *Property name*." See [helpstring](/windows/desktop/Midl/helpstring) in the *MIDL Reference*.  
  
## Other options  
 Not all options are available to all property types.  
  
|Option|Description|  
|------------|-----------------|  
|**bindable**|Indicates that the property supports data binding. See [bindable](/windows/desktop/Midl/bindable) in the *MIDL Reference*. For the stock implementation of the property, this option is set by default and is unchangeable.|  
|**defaultbind**|Indicates that this the single, bindable property best represents the object. See [defaultbind](/windows/desktop/Midl/defaultbind) in the *MIDL Reference*.|  
|**displaybind**|Indicates that this property should be displayed to the user as bindable. See [displaybind](/windows/desktop/Midl/displaybind) in the *MIDL Reference*.|  
|**immediatebind**|Indicates that the database will be notified immediately of all changes to this property of a data-bound object. See [immediatebind](/windows/desktop/Midl/immediatebind) in the *MIDL Reference*.|  
|**defaultcollelem**|Indicates that the property is an accessor function for an element of the default collection. See [defaultcollelem](/windows/desktop/Midl/defaultcollelem) in the *MIDL Reference*.|  
|**nonbrowsable**|Tags an interface or dispinterface member that should not be displayed in a properties browser. See [nonbrowsable](/windows/desktop/Midl/nonbrowsable) in the *MIDL Reference*.|  
|**requestedit**|Indicates that the property supports the **OnRequestEdit** notification See [requestedit](/windows/desktop/Midl/requestedit) in the *MIDL Reference*. For the stock implementation of the property, this option is set by default and is unchangeable.|  
|**source**|Indicates that a member of the property is a source of events. See [source](/windows/desktop/Midl/source) in the *MIDL Reference*.|  
|**hidden**|Indicates that the property exists but should not be displayed in a user-oriented browser. See [hidden](/windows/desktop/Midl/hidden) in the *MIDL Reference*.|  
|**restricted**|Specifies that the property cannot be called arbitrarily. See [restricted](/windows/desktop/Midl/restricted) in the *MIDL Reference*.|  
|`local`|Specifies to the MIDL compiler that the property is not remote. See [local](/windows/desktop/Midl/local) in the *MIDL Reference*.|  
  
## See Also  
 [Adding a Property](../ide/adding-a-property-visual-cpp.md)   
 [Names, Add Property Wizard](../ide/names-add-property-wizard.md)   
 [Implementing an Interface](../ide/implementing-an-interface-visual-cpp.md)   
 [Stock Properties](../ide/stock-properties.md)