---
title: "Life Cycle of a Dialog Box"
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
ms.assetid: e16fd78e-238d-4f31-8c9d-8564f3953bd9
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
# Life Cycle of a Dialog Box
During the life cycle of a dialog box, the user invokes the dialog box, typically inside a command handler that creates and initializes the dialog object, the user interacts with the dialog box, and the dialog box closes.  
  
 For modal dialog boxes, your handler gathers any data the user entered once the dialog box closes. Since the dialog object exists after its dialog window has closed, you can simply use the member variables of your dialog class to extract the data.  
  
 For modeless dialog boxes, you may often extract data from the dialog object while the dialog box is still visible. At some point, the dialog object is destroyed; when this happens depends on your code.  
  
## What do you want to know more about?  
  
-   [Creating and displaying dialog boxes](../VS_visualcpp/Creating-and-Displaying-Dialog-Boxes.md)  
  
-   [Creating modal dialog boxes](../VS_visualcpp/Creating-Modal-Dialog-Boxes.md)  
  
-   [Creating modeless dialog boxes](../VS_visualcpp/Creating-Modeless-Dialog-Boxes.md)  
  
-   [Using a dialog template in memory](../VS_visualcpp/Using-a-Dialog-Template-in-Memory.md)  
  
-   [Setting the dialog box's background color](../VS_visualcpp/Setting-the-Dialog-Box’s-Background-Color.md)  
  
-   [Initializing the dialog box](../VS_visualcpp/Initializing-the-Dialog-Box.md)  
  
-   [Handling Windows messages in your dialog box](../VS_visualcpp/Handling-Windows-Messages-in-Your-Dialog-Box.md)  
  
-   [Retrieving data from the dialog object](../VS_visualcpp/Retrieving-Data-from-the-Dialog-Object.md)  
  
-   [Closing the dialog box](../VS_visualcpp/Closing-the-Dialog-Box.md)  
  
-   [Destroying the dialog box](../VS_visualcpp/Destroying-the-Dialog-Box.md)  
  
-   [Dialog data exchange (DDX) and validation (DDV)](../VS_visualcpp/Dialog-Data-Exchange-and-Validation.md)  
  
-   [Property sheet dialog boxes](../VS_visualcpp/Property-Sheets-and-Property-Pages--MFC-.md)  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)