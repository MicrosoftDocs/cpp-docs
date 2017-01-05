---
title: "Adding an Event (ATL Tutorial, Part 5) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
ms.assetid: 2de12022-3148-4ce3-8606-8a9d4274f0e9
caps.latest.revision: 13
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
# Adding an Event (ATL Tutorial, Part 5)
In this step, you will add a `ClickIn` and a `ClickOut` event to your ATL control. You will fire the `ClickIn` event if the user clicks within the polygon and fire `ClickOut` if the user clicks outside. The tasks to add an event are as follows:  
  
-   Adding the `ClickIn` and `ClickOut` methods  
  
-   Generating the Type Library  
  
-   Implementing the Connection Point Interfaces  
  
## Adding the ClickIn and ClickOut Methods  
 When you created the ATL control in step 2, you selected the **Connection points** check box. This created the `_IPolyCtlEvents` interface in the Polygon.idl file. Note that the interface name starts with an underscore. This is a convention to indicate that the interface is an internal interface. Thus, programs that allow you to browse COM objects can choose not to display the interface to the user. Also note that selecting **Connection points** added the following line in the Polygon.idl file to indicate that `_IPolyCtlEvents` is the default source interface:  
  
 `[default, source] dispinterface _IPolyCtlEvents;`  
  
 The source attribute indicates that the control is the source of the notifications, so it will call this interface on the container.  
  
 Now add the `ClickIn` and `ClickOut` methods to the `_IPolyCtlEvents` interface.  
  
#### To add the ClickIn and ClickOut methods  
  
1.  In Class View, expand Polygon and PolygonLib to display _IPolyCtlEvents.  
  
2.  Right-click _IPolyCtlEvents. On the shortcut menu, click **Add**, and then click **Add Method**.  
  
3.  Select a **Return Type** of `void`.  
  
4.  Enter `ClickIn` in the **Method name** box.  
  
5.  Under **Parameter attributes**, select the **in** box.  
  
6.  Select a **Parameter type** of `LONG`.  
  
7.  Type `x` as the **Parameter name**, and click **Add**.  
  
8.  Repeat steps 5 through 7, this time for a **Parameter name** of `y`.  
  
9. Click **Next**.  
  
10. Type `method ClickIn` as the **helpstring**.  
  
11. Click **Finish**.  
  
12. Repeat the steps above to define a `ClickOut` method with the same `LONG` parameters `x` and `y`, the same **Parameter attributes** and the same `void` return type.  
  
 Check the Polygon.idl file to see that the code was added to the `_IPolyCtlEvents` dispinterface.  
  
 The `_IPolyCtlEvents` dispinterface in your Polygon.idl file should now look like this:  
  
 [!code-cpp[NVC_ATL_Windowing#56](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_1.idl)]  
  
 The `ClickIn` and `ClickOut` methods take the x and y coordinates of the clicked point as parameters.  
  
## Generating the Type Library  
 Generate the type library at this point, because the Connection Point Wizard will use it to obtain the information it needs to construct a connection point interface and a connection point container interface for your control.  
  
#### To generate the type library  
  
1.  Rebuild your project.  
  
     -or-  
  
2.  Right-click the Polygon.idl file in Solution Explorer and click **Compile** on the shortcut menu.  
  
 This will create the Polygon.tlb file, which is your type library. The Polygon.tlb file is not visible from Solution Explorer, because it is a binary file and cannot be viewed or edited directly.  
  
## Implementing the Connection Point Interfaces  
 Implement a connection point interface and a connection point container interface for your control. In COM, events are implemented through the mechanism of connection points. To receive events from a COM object, a container establishes an advisory connection to the connection point that the COM object implements. Because a COM object can have multiple connection points, the COM object also implements a connection point container interface. Through this interface, the container can determine which connection points are supported.  
  
 The interface that implements a connection point is called `IConnectionPoint`, and the interface that implements a connection point container is called `IConnectionPointContainer`.  
  
 To help implement `IConnectionPoint`, you will use the Implement Connection Point Wizard. This wizard generates the `IConnectionPoint` interface by reading your type library and implementing a function for each event that can be fired.  
  
#### To use the Implement Connection Point Wizard  
  
1.  In Class View, right-click your control's implementation class `CPolyCtl`.  
  
2.  On the shortcut menu, click **Add**, and then click **Add Connection Point**.  
  
3.  Select `_IPolyCtlEvents` from the **Source Interfaces** list and double-click it to add it to the **Implement connection points** column. Click **Finish**. A proxy class for the connection point will be generated, in this case,  `CProxy_IPolyCtlEvents`.  
  
 If you look at the generated _IPolyCtlEvents_CP.h file in Solution Explorer, you will see that it has a class called `CProxy_IPolyCtlEvents` that derives from `IConnectionPointImpl`. _IPolyCtlEvents_CP.h also defines the two methods `Fire_ClickIn` and `Fire_ClickOut`, which take the two coordinate parameters. You call these methods when you want to fire an event from your control.  
  
 The wizard also added `CProxy_PolyEvents` and `IConnectionPointContainerImpl` to your control's multiple inheritance list. The wizard also exposed `IConnectionPointContainer` for you by adding appropriate entries to the COM map.  
  
 You are finished implementing the code to support events. Now, add some code to fire the events at the appropriate moment. Remember, you are going to fire a `ClickIn` or `ClickOut` event when the user clicks the left mouse button in the control. To find out when the user clicks the button, add a handler for the `WM_LBUTTONDOWN` message.  
  
#### To add a handler for the WM_LBUTTONDOWN message  
  
1.  In Class View, right-click the CPolyCtl class and click **Properties** on the shortcut menu.  
  
2.  In the **Properties** window, click the **Messages** icon and then click `WM_LBUTTONDOWN` from the list on the left.  
  
3.  From the drop-down list that appears, click **\<Add> OnLButtonDown**. The `OnLButtonDown` handler declaration will be added to PolyCtl.h, and the handler implementation will be added to PolyCtl.cpp.  
  
 Next, modify the handler.  
  
#### To modify the OnLButtonDown method  
  
1.  Change the code which comprises the `OnLButtonDown` method in PolyCtl.cpp (deleting any code placed by the wizard) so that it looks like this:  
  
     [!code-cpp[NVC_ATL_Windowing#57](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_2.cpp)]  
  
 This code makes use of the points calculated in the `OnDraw` function to create a region that detects the user's mouse clicks with the call to `PtInRegion`.  
  
 The `uMsg` parameter is the ID of the Windows message being handled. This allows you to have one function that handles a range of messages. The `wParam` and the `lParam` parameters are the standard values for the message being handled. The parameter bHandled allows you to specify whether the function handled the message or not. By default, the value is set to `TRUE` to indicate that the function handled the message, but you can set it to `FALSE`. This will cause ATL to continue looking for another message handler function to send the message to.  
  
## Building and Testing the Control  
 Now try out your events. Build the control and start the ActiveX Control Test Container again. This time, view the event log window. To route events to the output window, click **Logging** from the **Options** menu and select **Log to output window**. Insert the control and try clicking in the window. Note that `ClickIn` is fired if you click within the filled polygon, and `ClickOut` is fired when you click outside of it.  
  
 Next, you will add a property page.  
  
 [Back to Step 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md) &#124; [On to Step 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)  
  
## See Also  
 [Tutorial](../atl/active-template-library-atl-tutorial.md)

