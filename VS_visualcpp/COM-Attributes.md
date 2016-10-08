---
title: "COM Attributes"
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
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
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
# COM Attributes
The COM attributes inject code to support numerous areas of COM development and .NET Framework common language runtime development. These areas range from custom interface implementation and support of existing interfaces to supporting stock properties, methods, and events. In addition, support can be found for composite and ActiveX control implementation.  
  
|Attribute|Description|  
|---------------|-----------------|  
|[aggregatable](../VS_visualcpp/aggregatable.md)|Indicates that a control can be aggregated by another control.|  
|[aggregates](../VS_visualcpp/aggregates.md)|Indicates that a control aggregates the target class.|  
|[coclass](../VS_visualcpp/coclass.md)|Creates a COM object, which can implement a COM interface.|  
|[com_interface_entry](../VS_visualcpp/com_interface_entry--C---.md)|Adds an interface entry to a COM map.|  
|[implements_category](../VS_visualcpp/implements_category.md)|Specifies implemented component categories for the class.|  
|[progid](../VS_visualcpp/progid.md)|Defines the ProgID for a control.|  
|[rdx](../VS_visualcpp/rdx.md)|Creates or modifies a registry key.|  
|[registration_script](../VS_visualcpp/registration_script.md)|Executes the specified registration script.|  
|[requires_category](../VS_visualcpp/requires_category.md)|Specifies required component categories for the class.|  
|[support_error_info](../VS_visualcpp/support_error_info.md)|Supports error reporting for the target object.|  
|[synchronize](../VS_visualcpp/synchronize.md)|Synchronizes access to a method.|  
|[threading](../VS_visualcpp/threading--C---.md)|Specifies the threading model for a COM object.|  
|[vi_progid](../VS_visualcpp/vi_progid.md)|Defines a version-independent ProgID for a control.|  
  
## See Also  
 [Attributes by Group](../VS_visualcpp/Attributes-by-Group.md)