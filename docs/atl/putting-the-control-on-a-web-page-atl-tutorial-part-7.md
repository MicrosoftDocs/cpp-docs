---
description: "Learn more about: Putting the Control on a Web Page (ATL Tutorial, Part 7)"
title: "Putting the Control on a Web Page (ATL Tutorial, Part 7)"
ms.custom: "get-started-article"
ms.date: "05/06/2019"
ms.assetid: 50dc4c95-c95b-4006-b88a-9826f7bdb222
---
# Putting the Control on a Web Page (ATL Tutorial, Part 7)

Your control is now finished. To see your control work in a real-world situation, put it on a Web page. An HTML file that contains the control was created when you defined your control. Open the PolyCtl.htm file from **Solution Explorer**, and you can see your control on a Web page.

In this step, you add functionality to the control and script the Web page to respond to events. You'll also modify the control to let Internet Explorer know the control is safe for scripting.

## Adding new functionality

### To add control features

1. Open PolyCtl.cpp and replace the following code:

    ```cpp
    if (PtInRegion(hRgn, xPos, yPos))
        Fire_ClickIn(xPos, yPos);
    else
        Fire_ClickOut(xPos, yPos);
    ```

    with

    ```cpp
    short temp = m_nSides;
    if (PtInRegion(hRgn, xPos, yPos))
    {
        Fire_ClickIn(xPos, yPos);
        put_Sides(++temp);
    }
    else
    {
        Fire_ClickOut(xPos, yPos);
        put_Sides(--temp);
    }
    ```

The shape will now add or remove sides depending on where you click.

## Scripting the Web Page

The control doesn't do anything yet, so change the Web page to respond to the events that you send.

### To script the Web page

1. Open PolyCtl.htm and select HTML view. Add the following lines to the HTML code. They should be added after `</OBJECT>` but before `</BODY>`.

    ```html
    <SCRIPT LANGUAGE="VBScript">
    <!--
        Sub PolyCtl_ClickIn(x, y)
            MsgBox("Clicked (" & x & ", " & y & ") - adding side")
        End Sub
        Sub PolyCtl_ClickOut(x, y)
            MsgBox("Clicked (" & x & ", " & y & ") - removing side")
        End Sub
    -->
    </SCRIPT>
    ```

1. Save the HTM file.

You've added some VBScript code that gets the Sides property from the control. It increases the number of sides by one if you click inside the control. If you click outside the control, you reduce the number of sides by one.

## Indicating that the Control Is Safe for Scripting

You can view the Web page with the control in Internet Explorer only. Other browsers no longer support ActiveX controls because of security weaknesses.

> [!NOTE]
> If the control isn't visible, know that some browsers require settings adjustments to run ActiveX controls. Refer to the browser's documentation on how to enable ActiveX controls.

Based on your current Internet Explorer security settings, you may receive a Security Alert dialog box. It states that the control may not be safe to script and could potentially do damage. For example, if you had a control that displayed a file but also had a `Delete` method that deleted a file, it would be safe if you just viewed it on a page. It would be not safe to script, however, because someone could call the `Delete` method.

> [!IMPORTANT]
> For this tutorial, you can change your security settings in Internet Explorer to run ActiveX controls that are not marked as safe. In Control Panel, click **Internet Properties** and click **Security** to change the appropriate settings. When you have completed the tutorial, change your security settings back to their original state.

You can programmatically alert Internet Explorer that it doesn't need to display the Security Alert dialog box for this particular control. You can do it by using the `IObjectSafety` interface. ATL supplies an implementation of this interface in the class [IObjectSafetyImpl](../atl/reference/iobjectsafetyimpl-class.md). To add the interface to your control, add `IObjectSafetyImpl` to your list of inherited classes, and add an entry for it in your COM map.

### To add IObjectSafetyImpl to the control

1. Add the following line to the end of the list of inherited classes in PolyCtl.h and add a comma to the previous line:

    [!code-cpp[NVC_ATL_Windowing#62](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_1.h)]

1. Add the following line to the COM map in PolyCtl.h:

    [!code-cpp[NVC_ATL_Windowing#63](../atl/codesnippet/cpp/putting-the-control-on-a-web-page-atl-tutorial-part-7_2.h)]

## Building and Testing the Control

Build the control. Once the build has finished, open PolyCtl.htm in browser view again. This time, the Web page should be displayed directly without the **Safety Alert** dialog box. If you click inside the polygon, the number of sides increases by one. Click outside the polygon to reduce the number of sides.

[Back to Step 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)

## Next Steps

This step concludes the ATL tutorial. For links to more information about ATL, see the [ATL start page](../atl/active-template-library-atl-concepts.md).

## See also

[Tutorial](../atl/active-template-library-atl-tutorial.md)
