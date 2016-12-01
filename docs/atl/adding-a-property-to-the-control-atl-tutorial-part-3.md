---
title: "Adding a Property to the Control (ATL Tutorial, Part 3) | Microsoft Docs"
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
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
caps.latest.revision: 15
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
# Adding a Property to the Control (ATL Tutorial, Part 3)
`IPolyCtl` is the interface that contains the control's custom methods and properties, and you will add a property to it.  
  
### To add a property using the Add Property Wizard  
  
1.  In Class View, expand the Polygon branch.  
  
2.  Right-click IPolyCtl.  
  
3.  On the shortcut menu, click **Add**, and then click **Add Property**.  
  
     The Add Property Wizard will appear.  
  
4.  In the drop-down list of property types, select `SHORT`.  
  
5.  Type `Sides` as the **Property name.**  
  
6.  Click **Finish** to finish adding the property.  
  
 When you add the property to the interface, MIDL (the program that compiles .idl files) defines a `Get` method for retrieving its value and a `Put` method for setting a new value. The methods are named by prepending `put_` and `get_` to the property name.  
  
 The Add Property Wizard adds the necessary lines to the .idl file. It also adds the `Get` and `Put` function prototypes to the class definition in PolyCtl.h and adds an empty implementation to PolyCtl.cpp. You can check this by opening PolyCtl.cpp and looking for the functions `get_Sides` and `put_Sides`.  
  
 Although you now have skeleton functions to set and retrieve the property, it needs a place to be stored. You will create a variable to store the property and update the functions accordingly.  
  
#### To create a variable to store the property, and update the put and get methods  
  
1.  From Solution Explorer, open PolyCtl.h and add the following line after the definition of `m_clrFillColor`:  
  
     [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]  
  
2.  Set the default value of `m_nSides`. Make the default shape a triangle by adding a line to the constructor in PolyCtl.h:  
  
     [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]  
  
3.  Implement the `Get` and `Put` methods. The `get_Sides` and `put_Sides` function declarations have been added to PolyCtl.h. Replace the code in PolyCtl.cpp for `get_Sides` and `put_Sides` with the following code:  
  
     [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]  
  
 The `get_Sides` method returns the current value of the `Sides` property through the `pVal` pointer. In the `put_Sides` method, the code ensures the user is setting the `Sides` property to an acceptable value. The minimum must be 2, and because an array of points will be used for each side, 100 is a reasonable limit for a maximum value.  
  
 You now have a property called `Sides`. In the next step, you will change the drawing code to use it.  
  
 [Back to Step 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; [On to Step 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)  
  
## See Also  
 [Tutorial](../atl/active-template-library-atl-tutorial.md)

