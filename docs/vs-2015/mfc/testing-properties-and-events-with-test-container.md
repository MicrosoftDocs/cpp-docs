---
title: "Testing Properties and Events with Test Container | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "testing, test containers"
  - "tstcon32.exe"
  - "debugging ActiveX controls"
  - "test container"
  - "ActiveX Control Test Container"
  - "ActiveX controls [C++], testing"
  - "properties [MFC], testing"
ms.assetid: 626867cf-fe53-4c30-8973-55bb93ef3917
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Testing Properties and Events with Test Container
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Testing Properties and Events with Test Container](https://docs.microsoft.com/cpp/mfc/testing-properties-and-events-with-test-container).  
  
  
The Test Container application, shipped in Visual C++, is an ActiveX control container for testing and debugging ActiveX controls. Test Container allows the control developer to test the control's functionality by changing its properties, invoking its methods, and firing its events. Test Container can display logs of data-binding notifications and also provides facilities for testing an ActiveX control's persistence functionality: you can save properties to a stream or to substorage, reload them, and examine the stored stream data. This section describes how to use the basic features of Test Container. For additional information, select the **Help** menu while running Test Container.  
  
### To access the ActiveX Control Test Container  
  
1.  Build the [TSTCON Sample: ActiveX Control Test Container](../top/visual-cpp-samples.md).  
  
### To test your ActiveX control  
  
1.  On the **Edit** menu of Test Container, click **Insert New Control**.  
  
2.  In the **Insert Control** box, select the desired control and click **OK**. The control will appear in the control container.  
  
    > [!NOTE]
    >  If your control is not listed in the **Insert Control** dialog box, make sure you have registered it with the **Register Controls** command from the **File** menu of Test Container.  
  
 At this point you can test your control's properties or events.  
  
#### To test properties  
  
1.  On the **Control** menu, click **Invoke Methods**.  
  
2.  In the **Method Name** drop-down list, select the PropPut method for the property you want to test.  
  
3.  Modify the **Parameter Value** or **Parameter Type** and click on the **Set Value** button.  
  
4.  Click **Invoke** to apply the new value to the object.  
  
     The property now contains the new value.  
  
#### To test events and specify the destination of event information.  
  
1.  On the **Options** menu, click **Logging**.  
  
2.  Specify the destination of event information.  
  
## See Also  
 [MFC ActiveX Controls](../mfc/mfc-activex-controls.md)   
 [How to: Debug an ActiveX Control](http://msdn.microsoft.com/library/bbc02cf7-a7e6-44fe-99af-87a43e1d7251)





