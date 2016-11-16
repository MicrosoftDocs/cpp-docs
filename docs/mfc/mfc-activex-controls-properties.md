---
title: "MFC ActiveX Controls: Properties | Microsoft Docs"
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
  - "properties [MFC], ActiveX controls"
  - "MFC ActiveX controls, properties"
  - "properties [MFC]"
ms.assetid: b678a53c-0d9e-476f-8aa0-23b80baaba46
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
# MFC ActiveX Controls: Properties
An ActiveX control fires events to communicate with its control container. The container, in return, uses methods and properties to communicate with the control. Methods and properties are similar in use and purpose, respectively, to member functions and member variables of a C++ class. Properties are data members of the ActiveX control that are exposed to any container. Properties provide an interface for applications that contain ActiveX controls, such as Automation clients and ActiveX control containers.  
  
 Properties are also called attributes.  
  
 For more information on ActiveX control methods, see the article [MFC ActiveX Controls: Methods](../mfc/mfc-activex-controls-methods.md).  
  
 ActiveX controls can implement both stock and custom methods and properties. Class `COleControl` provides an implementation for stock properties. (For a complete list of stock properties, see the article [MFC ActiveX Controls: Adding Stock Properties](../mfc/mfc-activex-controls-adding-stock-properties.md).) Custom properties, defined by the developer, add specialized capabilities to an ActiveX control. For more information, see [MFC ActiveX Controls: Adding Custom Properties](../mfc/mfc-activex-controls-adding-custom-properties.md).  
  
 Both custom and stock properties, like methods, are supported by a mechanism that consists of a dispatch map that handles properties and methods and existing member functions of the `COleControl` class. In addition, these properties can have parameters that the developer uses to pass extra information to the control.  
  
 The following articles discuss ActiveX control properties in more detail:  
  
-   [MFC ActiveX Controls: Adding Stock Properties](../mfc/mfc-activex-controls-adding-stock-properties.md)  
  
-   [MFC ActiveX Controls: Adding Custom Properties](../mfc/mfc-activex-controls-adding-custom-properties.md)  
  
-   [MFC ActiveX Controls: Advanced Property Implementation](../mfc/mfc-activex-controls-advanced-property-implementation.md)  
  
-   [MFC ActiveX Controls: Accessing Ambient Properties](../mfc/mfc-activex-controls-accessing-ambient-properties.md)  
  
## See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)

