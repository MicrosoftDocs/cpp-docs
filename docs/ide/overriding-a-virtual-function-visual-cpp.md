---
description: "Learn more about: Override a virtual function"
title: "Override a virtual function"
ms.date: "11/12/2018"
f1_keywords: ["vc.codewiz.virtualfunc.override"]
helpviewer_keywords: ["virtual functions, overriding", "base classes, overriding virtual functions defined in", "Properties window, overriding virtual functions in"]
ms.assetid: 2d8c76f2-7a6b-4c9c-8de5-4282ce7755b6
---
# Override a virtual function

You can override virtual functions defined in a base class from the Visual Studio [Properties window](/visualstudio/ide/reference/properties-window).

**To override a virtual function in the Properties window:**

1. In Class View, select the class.

1. In the Properties window, select the **Overrides** button.

   > [!NOTE]
   > The **Overrides** button is available when you select either the class name in Class View or when you select within the source window.

   The left column lists the virtual functions. If the name of a virtual function also appears in the right column, then an override has already been implemented.

1. If the function has no override, then select the cell in the right column in the Properties window to display the suggested name of the function override as \<add>*FuncName*.

1. Select the suggested name to add stub code for the function.

1. To edit an overriding function, double-click the name of the function in Class View and edit the code in the source window.

To remove an override, select the override function name in the right column and select \<delete>*FuncName*. The function's code is commented out.
