---
title: "Options, ATL Property Page Wizard"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.ppg.options"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL Property Page Wizard, options"
ms.assetid: a7107779-b2ea-4f99-b84b-7f3e0c504bc8
caps.latest.revision: 11
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
# Options, ATL Property Page Wizard
Use this page of the wizard to define the threading model and aggregation level of property page you are creating.  
  
 **Threading model**  
 Specifies the threading model used by the property page.  
  
 See [Specifying the Project's Threading Model](../atl/specifying-the-threading-model-for-a-project--atl-.md) for more information.  
  
|Option|Description|  
|------------|-----------------|  
|`Single`|The property page runs only in the primary COM thread.|  
|**Apartment**|The property page can be created in any single thread apartment. The default.|  
  
 **Aggregation**  
 Adds aggregation support for the property page you are creating. See [Aggregation](../atl/aggregation.md) for more information.  
  
|Option|Description|  
|------------|-----------------|  
|**Yes**|Create a property page that can be aggregated.|  
|**No**|Create a property page that cannot be aggregated.|  
|**Only**|Create a property page that can only be instantiated through aggregation.|  
  
## See Also  
 [ATL Property Page Wizard](../atl/atl-property-page-wizard.md)   
 [Strings, ATL Property Page Wizard](../atl/strings--atl-property-page-wizard.md)