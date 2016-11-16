---
title: "IDL Attributes, Add Property Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.prop.idlattributes"
dev_langs: 
  - "C++"
ms.assetid: 356ed666-79d0-4bd9-a5e7-cda679cbadbd
caps.latest.revision: 6
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
# IDL Attributes, Add Property Wizard
Use this page of the Add Property Wizard to specify any interface definition language (IDL) settings for the property.  
  
 **id**  
 Sets the numerical ID that identifies the property. This option is not available for properties of custom interfaces. See [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) in the *MIDL Reference*.  
  
 **helpcontext**  
 Specifies a context ID that lets the user view information about this property in the Help file. See [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) in the *MIDL Reference*.  
  
 **helpstring**  
 Specifies a character string that is used to describe the element to which it applies. By default, it is set to "property *Property name*." See [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) in the *MIDL Reference*.  
  
## Other options  
 Not all options are available to all property types.  
  
|Option|Description|  
|------------|-----------------|  
|**bindable**|Indicates that the property supports data binding. See [bindable](http://msdn.microsoft.com/library/windows/desktop/aa366738) in the *MIDL Reference*. For the stock implementation of the property, this option is set by default and is unchangeable.|  
|**defaultbind**|Indicates that this the single, bindable property best represents the object. See [defaultbind](http://msdn.microsoft.com/library/windows/desktop/aa366790) in the *MIDL Reference*.|  
|**displaybind**|Indicates that this property should be displayed to the user as bindable. See [displaybind](http://msdn.microsoft.com/library/windows/desktop/aa366804) in the *MIDL Reference*.|  
|**immediatebind**|Indicates that the database will be notified immediately of all changes to this property of a data-bound object. See [immediatebind](http://msdn.microsoft.com/library/windows/desktop/aa367045) in the *MIDL Reference*.|  
|**defaultcollelem**|Indicates that the property is an accessor function for an element of the default collection. See [defaultcollelem](http://msdn.microsoft.com/library/windows/desktop/aa366792) in the *MIDL Reference*.|  
|**nonbrowsable**|Tags an interface or dispinterface member that should not be displayed in a properties browser. See [nonbrowsable](http://msdn.microsoft.com/library/windows/desktop/aa367117) in the *MIDL Reference*.|  
|**requestedit**|Indicates that the property supports the **OnRequestEdit** notification See [requestedit](http://msdn.microsoft.com/library/windows/desktop/aa367155) in the *MIDL Reference*. For the stock implementation of the property, this option is set by default and is unchangeable.|  
|**source**|Indicates that a member of the property is a source of events. See [source](http://msdn.microsoft.com/library/windows/desktop/aa367166) in the *MIDL Reference*.|  
|**hidden**|Indicates that the property exists but should not be displayed in a user-oriented browser. See [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) in the *MIDL Reference*.|  
|**restricted**|Specifies that the property cannot be called arbitrarily. See [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) in the *MIDL Reference*.|  
|`local`|Specifies to the MIDL compiler that the property is not remote. See [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) in the *MIDL Reference*.|  
  
## See Also  
 [Adding a Property](../ide/adding-a-property-visual-cpp.md)   
 [Names, Add Property Wizard](../ide/names-add-property-wizard.md)   
 [Implementing an Interface](../ide/implementing-an-interface-visual-cpp.md)   
 [Stock Properties](../ide/stock-properties.md)