---
title: "IDL Attributes, Add Method Wizard | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["vc.codewiz.method.idlattrib"]
dev_langs: ["C++"]
helpviewer_keywords: ["Add Method Wizard [C++]", "IDL attributes, Add Method Wizard"]
ms.assetid: f80c3bc1-b515-4d6c-83ee-98c2c21ba902
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IDL Attributes, Add Method Wizard
Use this page of the Add Method Wizard to specify any interface definition language (IDL) settings for the method.  
  
 **id**  
 Sets the numerical ID that identifies the method. See [id](http://msdn.microsoft.com/library/windows/desktop/aa367040) in the *MIDL Reference*.  
  
 This box is unavailable for custom interfaces and is not available for MFC dispinterfaces.  
  
 **call_as**  
 Specifies the name of a remote method to which this local method can be mapped. See [call_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) in the *MIDL Reference*.  
  
 Not available for MFC dispinterfaces.  
  
 **helpcontext**  
 Specifies a context ID that lets the user view information about this method in the Help file. See [helpcontext](http://msdn.microsoft.com/library/windows/desktop/aa366851) in the *MIDL Reference*.  
  
 Not available for MFC dispinterfaces.  
  
 **helpstring**  
 Specifies a character string that is used to describe the element to which it applies. By default, it is set to "method *Method name*." See [helpstring](http://msdn.microsoft.com/library/windows/desktop/aa366856) in the *MIDL Reference*.  
  
 Not available for MFC dispinterfaces.  
  
 **Additional attributes**  
 Not available for MFC dispinterfaces.  
  
|Attribute|Description|  
|---------------|-----------------|  
|**hidden**|Indicates that the method exists but should not be displayed in a user-oriented browser. See [hidden](http://msdn.microsoft.com/library/windows/desktop/aa366861) in the *MIDL Reference*.|  
|**source**|Indicates that a member of the method is a source of events. See [source](http://msdn.microsoft.com/library/windows/desktop/aa367166) in the *MIDL Reference*.|  
|`local`|Specifies to the MIDL compiler that the method is not remote. See [local](http://msdn.microsoft.com/library/windows/desktop/aa367071) in the *MIDL Reference*.|  
|**restricted**|Specifies that the method cannot be called arbitrarily. See [restricted](http://msdn.microsoft.com/library/windows/desktop/aa367157) in the *MIDL Reference*.|  
|**vararg**|Specifies that the method takes a variable number of arguments. To accomplish this, the last argument must be a safe array of **VARIANT** type that contains all the remaining arguments. See [vararg](http://msdn.microsoft.com/library/windows/desktop/aa367304) in the *MIDL Reference*.|  
  
## See Also  
 [Adding a Method](../ide/adding-a-method-visual-cpp.md)   
 [Add Method Wizard](../ide/add-method-wizard.md)