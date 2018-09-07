---
title: "COM Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["attributes [C++], reference topics", "attributes [COM]", "COM, attributes"]
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# COM Attributes
The COM attributes inject code to support numerous areas of COM development and .NET Framework common language runtime development. These areas range from custom interface implementation and support of existing interfaces to supporting stock properties, methods, and events. In addition, support can be found for composite and ActiveX control implementation.
  
|Attribute|Description|
|---------------|-----------------|
|[aggregatable](../windows/aggregatable.md)|Indicates that a control can be aggregated by another control.|
|[aggregates](../windows/aggregates.md)|Indicates that a control aggregates the target class.|
|[coclass](../windows/coclass.md)|Creates a COM object, which can implement a COM interface.|
|[com_interface_entry](../windows/com-interface-entry-cpp.md)|Adds an interface entry to a COM map.|
|[implements_category](../windows/implements-category.md)|Specifies implemented component categories for the class.|
|[progid](../windows/progid.md)|Defines the ProgID for a control.|
|[rdx](../windows/rdx.md)|Creates or modifies a registry key.|
|[registration_script](../windows/registration-script.md)|Executes the specified registration script.|
|[requires_category](../windows/requires-category.md)|Specifies required component categories for the class.|
|[support_error_info](../windows/support-error-info.md)|Supports error reporting for the target object.|
|[synchronize](../windows/synchronize.md)|Synchronizes access to a method.|
|[threading](../windows/threading-cpp.md)|Specifies the threading model for a COM object.|
|[vi_progid](../windows/vi-progid.md)|Defines a version-independent ProgID for a control.|
  
## See Also
 [Attributes by Group](../windows/attributes-by-group.md)