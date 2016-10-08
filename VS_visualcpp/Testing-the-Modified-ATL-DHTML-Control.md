---
title: "Testing the Modified ATL DHTML Control"
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
ms.assetid: 42316118-9433-410f-9d8a-0efcc1eff824
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Testing the Modified ATL DHTML Control
Try out your new control to see how it works now.  
  
#### To build and test the modified control  
  
1.  Rebuild the project and open it in Test Container. See [Testing Properties and Events with Test Container](../VS_visualcpp/Testing-Properties-and-Events-with-Test-Container.md) for information on how to access Test Container.  
  
     Resize the control to show all of the buttons you added.  
  
2.  Examine the two buttons that you inserted by altering the HTML. Each button bears the label you identified in [Modifying the ATL DHTML Control](../VS_visualcpp/Modifying-the-ATL-DHTML-Control.md): **Refresh** and **HelloHTML**.  
  
3.  Test the two new buttons to see how they work.  
  
 Now test the methods that are not part of the UI.  
  
1.  Highlight the control, so the border is activated.  
  
2.  On the **Control** menu, click **Invoke Methods**.  
  
 The methods in the list labeled **Method Name** are the methods that the container can call: `MethodInvoked` and `GoToURL`. All other methods are controlled by the UI.  
  
1.  Select a method to invoke and click `Invoke` to display the method's message box or to navigate to www.microsoft.com.  
  
2.  In the **Invoke Methods** dialog box, click **Close**.  
  
 To learn more about the various elements and files that make up an ATL DHTML control, see [Identifying the Elements of the DHTML Control Project](../VS_visualcpp/Identifying-the-Elements-of-the-DHTML-Control-Project.md).  
  
## See Also  
 [Support for DHTML Control](../VS_visualcpp/ATL-Support-for-DHTML-Controls.md)