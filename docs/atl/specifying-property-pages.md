---
title: "Specifying Property Pages | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ISpecifyPropertyPages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISpecifyPropertyPages method"
  - "property pages, specifying"
ms.assetid: ee8678cf-c708-49ab-b0ad-fc2db31f1ac3
caps.latest.revision: 12
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
# Specifying Property Pages
When you create an ActiveX control, you will often want to associate it with property pages that can be used to set the properties of your control. Control containers use the **ISpecifyPropertyPages** interface to find out which property pages can be used to set your control's properties. You will need to implement this interface on your control.  
  
 To implement **ISpecifyPropertyPages** using ATL, take the following steps:  
  
1.  Derive your class from [ISpecifyPropertyPagesImpl](../atl/reference/ispecifypropertypagesimpl-class.md).  
  
2.  Add an entry for **ISpecifyPropertyPages** to your class's COM map.  
  
3.  Add a [PROP_PAGE](http://msdn.microsoft.com/library/2155973e-b96c-4385-bf85-5d6112c969b8) entry to the property map for each page associated with your control.  
  
> [!NOTE]
>  When generating a standard control using the [ATL Control Wizard](../atl/reference/atl-control-wizard.md), you will only have to add the `PROP_PAGE` entries to the property map. The wizard generates the necessary code for the other steps.  
  
 Well-behaved containers will display the specified property pages in the same order as the `PROP_PAGE` entries in the property map. Generally, you should put standard property page entries after the entries for your custom pages in the property map, so that users see the pages specific to your control first.  
  
## Example  
 The following class for a calendar control uses the **ISpecifyPropertyPages** interface to tell containers that its properties can be set using a custom date page and the stock color page.  
  
 [!code-cpp[NVC_ATL_Windowing#72](../atl/codesnippet/cpp/specifying-property-pages_1.h)]  
  
## See Also  
 [Property Pages](../atl/atl-com-property-pages.md)   
 [ATLPages Sample](../visual-cpp-samples.md)

