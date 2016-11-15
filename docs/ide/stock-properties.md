---
title: "Stock Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stock properties, about stock properties"
  - "stock properties"
ms.assetid: a89fc454-0b8e-447a-9033-4c8af46a24d9
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
# Stock Properties
If you are adding a property to an MFC dispinterface using the [Add Property Wizard](../ide/idl-attributes-add-property-wizard.md), you can choose a stock property from the **Property name** list in the [Names](../ide/names-add-property-wizard.md) page of the wizard. These properties are as follows:  
  
|Property name|Description|  
|-------------------|-----------------|  
|**Appearance**|Returns or sets a value that determines the appearance of the control. The control's **Appearance** property can include or omit three-dimensional display effects. This is an ambient read/write property.|  
|`BackColor`|Returns or sets the control's ambient `BackColor` property to either a palette (RGB) color or a predefined system color. By default, its value corresponds to the foreground color of the control's container. This is an ambient read/write property.|  
|`BorderStyle`|Returns or sets the border style for a control. This is a read/write property.|  
|**Caption**|Returns or sets the control's **Caption** property. The caption is the title of the window. **Caption** has no **Member variable** implementation type.|  
|**Enabled**|Returns or sets the control's **Enabled** property. An enabled control can respond to user-generated events.|  
|**Font**|Returns or sets the control's ambient font. Null if the control has no font.|  
|`ForeColor`|Returns or sets the control's ambient `ForeColor` property.|  
|**hWnd**|Returns or sets the control's **hWnd** property. **hWnd** has no **Member variable** implementation type.|  
|**ReadyState**|Returns or sets the control's **ReadyState** property. A control can be uninitialized, initialized, loading, interactive, or complete. See [READYSTATE](https://msdn.microsoft.com/en-us/library/aa768362.aspx) in the *Internet SDK* for more information.|  
|**Text**|Returns or sets the text contained in a control. **Text** has no **Member variable** implementation type.|  
  
## See Also  
 [Adding a Property](../ide/adding-a-property-visual-cpp.md)   
 [IDL Attributes, Add Property Wizard](../ide/idl-attributes-add-property-wizard.md)