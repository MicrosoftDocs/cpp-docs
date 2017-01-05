---
title: "Changing the Drawing Code (ATL Tutorial, Part 4) | Microsoft Docs"
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
helpviewer_keywords: 
  - "_ATL_MIN_CRT macro"
ms.assetid: 08ff14e8-aa49-4139-a110-5d071939cf1e
caps.latest.revision: 18
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
# Changing the Drawing Code (ATL Tutorial, Part 4)
By default, the control's drawing code displays a square and the text **PolyCtl**. In this step, you will change the code to display something more interesting. The following tasks are involved:  
  
-   Modifying the Header File  
  
-   Modifying the `OnDraw` Function  
  
-   Adding a Method to Calculate the Polygon Points  
  
-   Initializing the Fill Color  
  
## Modifying the Header File  
 Start by adding support for the math functions `sin` and `cos`, which will be used calculate the polygon points, and by creating an array to store positions.  
  
#### To modify the header file  
  
1.  Add the line `#include <math.h>` to the top of PolyCtl.h. The top of the file should look like this:  
  
     [!code-cpp[NVC_ATL_Windowing#47](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_1.cpp)]  
  
2.  Once the polygon points are calculated, they will be stored in an array of type `POINT`, so add the array after the definition of `m_nSides` in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#48](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_2.h)]  
  
## Modifying the OnDraw Method  
 Now you should modify the `OnDraw` method in PolyCtl.h. The code you will add creates a new pen and brush with which to draw your polygon, and then calls the `Ellipse` and `Polygon` Win32 API functions to perform the actual drawing.  
  
#### To modify the OnDraw function  
  
1.  Replace the existing `OnDraw` method in PolyCtl.h with the following code:  
  
     [!code-cpp[NVC_ATL_Windowing#49](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_3.cpp)]  
  
## Adding a Method to Calculate the Polygon Points  
 Add a method, called `CalcPoints`, that will calculate the coordinates of the points that make up the perimeter of the polygon. These calculations will be based on the RECT variable that is passed into the function.  
  
#### To add the CalcPoints method  
  
1.  Add the declaration of `CalcPoints` to the `IPolyCtl` public section of the `CPolyCtl` class in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#50](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_4.h)]  
  
     The last part of the public section of the `CPolyCtl` class will look like this:  
  
     [!code-cpp[NVC_ATL_Windowing#51](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_5.h)]  
  
2.  Add this implementation of the `CalcPoints` function to the end of PolyCtl.cpp:  
  
     [!code-cpp[NVC_ATL_Windowing#52](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_6.cpp)]  
  
## Initializing the Fill Color  
 Initialize `m_clrFillColor` with a default color.  
  
#### To initialize the fill color  
  
1.  Use green as the default color by adding this line to the `CPolyCtl` constructor in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#53](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_7.h)]  
  
 The constructor now looks like this:  
  
 [!code-cpp[NVC_ATL_Windowing#54](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_8.h)]  
  
## Building and Testing the Control  
 Rebuild the control. Make sure the PolyCtl.htm file is closed if it is still open, and then click **Build Polygon** on the **Build** menu. You could view the control once again from the PolyCtl.htm page, but this time use the ActiveX Control Test Container.  
  
#### To use the ActiveX Control Test Container  
  
1.  Build and start the ActiveX Control Test Container. For more information, see [TSTCON Sample: ActiveX Control Test Container](../visual-cpp-samples.md).  
  
2.  In Test Container, on the **Edit** menu, click **Insert New Control**.  
  
3.  Locate your control, which will be called `PolyCtl Class`, and click **OK**. You will see a green triangle within a circle.  
  
 Try changing the number of sides by following the next procedure. To modify properties on a dual interface from within Test Container, use **Invoke Methods**.  
  
#### To modify a control's property from within the Test Container  
  
1.  In Test Container, click **Invoke Methods** on the **Control** menu.  
  
     The **Invoke Method** dialog box is displayed.  
  
2.  Select the **PropPut** version of the **Sides** property from the **Method Name** drop-down list box.  
  
3.  Type `5` in the **Parameter Value** box, click **Set Value**, and click **Invoke**.  
  
 Note that the control does not change. Although you changed the number of sides internally by setting the `m_nSides` variable, this did not cause the control to repaint. If you switch to another application and then switch back to Test Container, you will find that the control has repainted and has the correct number of sides.  
  
 To correct this problem, add a call to the `FireViewChange` function, defined in `IViewObjectExImpl`, after you set the number of sides. If the control is running in its own window, `FireViewChange` will call the `InvalidateRect` method directly. If the control is running windowless, the `InvalidateRect` method will be called on the container's site interface. This forces the control to repaint itself.  
  
#### To add a call to FireViewChange  
  
1.  Update PolyCtl.cpp by adding the call to `FireViewChange` to the `put_Sides` method. When you have finished, the `put_Sides` method should look like this:  
  
     [!code-cpp[NVC_ATL_Windowing#55](../atl/codesnippet/cpp/changing-the-drawing-code-atl-tutorial-part-4_9.cpp)]  
  
 After adding `FireViewChange`, rebuild and try the control again in the ActiveX Control Test Container. This time when you change the number of sides and click `Invoke`, you should see the control change immediately.  
  
 In the next step, you will add an event.  
  
 [Back to Step 3](../atl/adding-a-property-to-the-control-atl-tutorial-part-3.md) &#124; [On to Step 5](../atl/adding-an-event-atl-tutorial-part-5.md)  
  
## See Also  
 [Tutorial](../atl/active-template-library-atl-tutorial.md)   
 [Testing Properties and Events with Test Container](../mfc/testing-properties-and-events-with-test-container.md)

