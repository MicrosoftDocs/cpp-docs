---
title: "Modifying the ATL DHTML Control | Microsoft Docs"
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
  - "HTML controls, modifying"
  - "DHTML controls"
  - "DHTML controls, modifying"
ms.assetid: c053f35f-8629-4600-9595-721f5956777a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Modifying the ATL DHTML Control
The ATL Control Wizard provides starter code so you can build and run the control, and so you can see how the methods are written in the project files and how the DHTML calls into the control's C++ code using the dispatch methods. You can add any dispatch method to the interface. Then, you can call the methods in the HTML resource.  
  
#### To modify the ATL DHTML control  
  
1.  In Class View, expand the control project.  
  
     Note that the interface that ends in "UI" has one method, `OnClick`. The interface that does not end in "UI" does not have any methods.  
  
2.  Add a method called `MethodInvoked` to the interface that does not end in "UI."  
  
     This method will be added to the interface that is used in the control container for container interaction, not to the interface used by DHTML to interact with the control. Only the container can invoke this method.  
  
3.  Find the stubbed-out method in the .cpp file and add code to display a message box, for example:  
  
 [!code-cpp[NVC_ATL_COM#5](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_1.cpp)]  
  
4.  Add another method called `HelloHTML`, only this time, add it to the interface that ends in "UI." Find the stubbed-out `HelloHTML` method in the .cpp file and add code to display a message box, for example:  
  
 [!code-cpp[NVC_ATL_COM#6](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_2.cpp)]  
  
5.  Add a third method, `GoToURL`, to the interface that does not end in "UI." Implement this method by calling [IWebBrowser2::Navigate](https://msdn.microsoft.com/library/aa752133.aspx), as follows:  
  
 [!code-cpp[NVC_ATL_COM#7](../atl/codesnippet/cpp/modifying-the-atl-dhtml-control_3.cpp)]  
  
     You can use the **IWebBrowser2** methods because ATL provides a pointer to that interface for you in your .h file.  
  
 Next, modify the HTML resource to invoke the methods you created. You will add three buttons for invoking these methods.  
  
#### To modify the HTML resource  
  
1.  In Solution Explorer, double-click the .htm file to display the HTML resource.  
  
     Examine the HTML, especially the calls to the external Windows dispatch methods. The HTML calls the project's `OnClick` method, and the parameters indicate the body of the control (`theBody`) and the color to assign ("`red`"). The text following the method call is the label that appears on the button.  
  
2.  Add another `OnClick` method, only change the color. For example:  
  
 ```  
 <br>  
 <br>  
 <BUTTON onclick='window.external.OnClick(theBody, "white");'>Refresh</BUTTON>  
 ```  
  
     This method will create a button, labeled **Refresh**, that the user can click to return the control to the original, white background.  
  
3.  Add the call to the `HelloHTML` method you created. For example:  
  
 ```  
 <br>  
 <br>  
 <BUTTON onclick='window.external.HelloHTML();'>HelloHTML</BUTTON>  
 ```  
  
     This method will create a button, labeled **HelloHTML**, that the user can click to display the `HelloHTML` message box.  
  
 You can now build and [test the modified DHTML control](../atl/testing-the-modified-atl-dhtml-control.md).  
  
## See Also  
 [Support for DHTML Control](../atl/atl-support-for-dhtml-controls.md)

