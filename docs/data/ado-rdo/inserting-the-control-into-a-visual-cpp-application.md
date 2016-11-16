---
title: "Inserting the Control into a Visual C++ Application | Microsoft Docs"
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
  - "ActiveX controls [C++], adding to dialog boxes"
ms.assetid: 7d517735-057b-49e3-8edf-eb087369b5b9
caps.latest.revision: 7
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
# Inserting the Control into a Visual C++ Application
You can insert an ActiveX control into a dialog box from the toolbar or using the [Insert ActiveX Control](../../mfc/insert-activex-control-dialog-box.md) dialog box.  
  
### To insert an ActiveX control from the Toolbox  
  
1.  Right-click an empty section of the Toolbox.  
  
2.  On the shortcut menu, click **Customize Toolbox**, and then select the controls that you want.  
  
3.  Drag controls to your dialog box in the Dialog editor.  
  
### To insert an ActiveX control from the Dialog editor  
  
1.  Right-click the dialog box.  
  
2.  On the shortcut menu, click [Insert ActiveX Control](../../mfc/insert-activex-control-dialog-box.md).  
  
    > [!NOTE]
    >  When you insert an ActiveX control from **Insert ActiveX Control** into a project, [wrapper classes](../../data/ado-rdo/wrapper-classes.md) are not included in the project. You are responsible for creating a wrapper class to customize the control's functionality.  
  
## See Also  
 [Using ActiveX Controls](../../data/ado-rdo/using-activex-controls.md)