---
title: "Dialog-Box Components in the Framework"
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
ms.topic: article
ms.assetid: 592db160-0a8a-49be-ac72-ead278aca53f
caps.latest.revision: 7
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
# Dialog-Box Components in the Framework
In the MFC framework, a dialog box has two components:  
  
-   A dialog-template resource that specifies the dialog box's controls and their placement.  
  
     The dialog resource stores a dialog template from which Windows creates the dialog window and displays it. The template specifies the dialog box's characteristics, including its size, location, style, and the types and positions of the dialog box's controls. You will usually use a dialog template stored as a resource, but you can also create your own template in memory.  
  
-   A dialog class, derived from [CDialog](../VS_visualcpp/CDialog-Class.md), to provide a programmatic interface for managing the dialog box.  
  
     A dialog box is a window and will be attached to a Windows window when visible. When the dialog window is created, the dialog-template resource is used as a template for creating child window controls for the dialog box.  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)