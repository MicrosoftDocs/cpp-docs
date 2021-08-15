---
description: "Learn more about: Adding a Property to the Control (ATL Tutorial, Part 3)"
title: "Adding a Property to the Control (ATL Tutorial, Part 3)"
ms.custom: "get-started-article"
ms.date: "09/26/2018"
ms.assetid: f775fe34-103b-4f07-9999-400e987ee030
---
# Adding a Property to the Control (ATL Tutorial, Part 3)

`IPolyCtl` is the interface that contains the control's custom methods and properties, and you will add a property to it.

### To add the property definitions to your project

1. In **Class View**, expand the `Polygon` branch.

1. Right-click `IPolyCtl`.

1. On the shortcut menu, click **Add**, and then click **Add Property**. The **Add Property** wizard will appear.

1. Type `Sides` as the **Property Name**.

1. In the drop-down list of **Property Type**, select **`short`**.

1. Click **OK** to finish adding the property.

1. From **Solution Explorer**, open Polygon.idl and replace the following lines at the end of the `IPolyCtl : IDispatch` interface:

    ```cpp
    short get_Sides();
    void set_Sides(short value);
    ```

    with

    ```cpp
    [propget, id(1), helpstring("property Sides")] HRESULT Sides([out, retval] short *pVal);
    [propput, id(1), helpstring("property Sides")] HRESULT Sides([in] short newVal);
    ```

1. From **Solution Explorer**, open PolyCtl.h and add the following lines after the definition of `m_clrFillColor`:

    [!code-cpp[NVC_ATL_Windowing#44](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_1.h)]

Although you now have skeleton functions to set and retrieve the property and a variable to store the property, you must implement the functions accordingly.

### To update the get and put methods

1. Set the default value of `m_nSides`. Make the default shape a triangle by adding a line to the constructor in PolyCtl.h:

    [!code-cpp[NVC_ATL_Windowing#45](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_2.h)]

1. Implement the `Get` and `Put` methods. The `get_Sides` and `put_Sides` function declarations have been added to PolyCtl.h. Now add the code for `get_Sides` and `put_Sides` to PolyCtl.cpp with the following:

    [!code-cpp[NVC_ATL_Windowing#46](../atl/codesnippet/cpp/adding-a-property-to-the-control-atl-tutorial-part-3_3.cpp)]

The `get_Sides` method returns the current value of the `Sides` property through the `pVal` pointer. In the `put_Sides` method, the code ensures the user is setting the `Sides` property to an acceptable value. The minimum must be 3, and because an array of points will be used for each side, 100 is a reasonable limit for a maximum value.

You now have a property called `Sides`. In the next step, you will change the drawing code to use it.

[Back to Step 2](../atl/adding-a-control-atl-tutorial-part-2.md) &#124; [On to Step 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md)

## See also

[Tutorial](../atl/active-template-library-atl-tutorial.md)
