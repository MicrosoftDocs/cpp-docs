---
description: "Learn more about: Adding an Event (ATL Tutorial, Part 5)"
title: "Adding an Event (ATL Tutorial, Part 5)"
ms.custom: "get-started-article"
ms.date: "09/27/2018"
ms.assetid: 2de12022-3148-4ce3-8606-8a9d4274f0e9
---
# Adding an Event (ATL Tutorial, Part 5)

In this step, you will add a `ClickIn` and a `ClickOut` event to your ATL control. You will fire the `ClickIn` event if the user clicks within the polygon and fire `ClickOut` if the user clicks outside. The tasks to add an event are as follows:

- Adding the `ClickIn` and `ClickOut` methods

- Generating the Type Library

- Implementing the Connection Point Interfaces

## Adding the ClickIn and ClickOut methods

When you created the ATL control in step 2, you selected the **Connection points** check box. This created the `_IPolyCtlEvents` interface in the Polygon.idl file. Note that the interface name starts with an underscore. This is a convention to indicate that the interface is an internal interface. Thus, programs that allow you to browse COM objects can choose not to display the interface to the user. Also note that selecting **Connection points** added the following line in the Polygon.idl file to indicate that `_IPolyCtlEvents` is the default source interface:

`[default, source] dispinterface _IPolyCtlEvents;`

The source attribute indicates that the control is the source of the notifications, so it will call this interface on the container.

Now add the `ClickIn` and `ClickOut` methods to the `_IPolyCtlEvents` interface.

### To add the ClickIn and ClickOut methods

1. In **Solution Explorer**, open Polygon.idl and add the following code under `methods:` in the `dispInterface_IPolyCtlEvents` declaration of the PolygonLib library:

    ```cpp
   [id(1), helpstring("method ClickIn")] void ClickIn([in] LONG x,[in] LONG y);
   [id(2), helpstring("method ClickOut")] void ClickOut([in] LONG x,[in] LONG y);
    ```

The `ClickIn` and `ClickOut` methods take the x and y coordinates of the clicked point as parameters.

## Generating the Type Library

Generate the type library at this point, because the project will use it to obtain the information it needs to construct a connection point interface and a connection point container interface for your control.

### To generate the type library

1. Rebuild your project.

     -or-

1. Right-click the Polygon.idl file in **Solution Explorer** and click **Compile** on the shortcut menu.

This will create the Polygon.tlb file, which is your type library. The Polygon.tlb file is not visible from **Solution Explorer**, because it is a binary file and cannot be viewed or edited directly.

## Implementing the Connection Point Interfaces

Implement a connection point interface and a connection point container interface for your control. In COM, events are implemented through the mechanism of connection points. To receive events from a COM object, a container establishes an advisory connection to the connection point that the COM object implements. Because a COM object can have multiple connection points, the COM object also implements a connection point container interface. Through this interface, the container can determine which connection points are supported.

The interface that implements a connection point is called `IConnectionPoint`, and the interface that implements a connection point container is called `IConnectionPointContainer`.

To help implement `IConnectionPoint`, you will use the Implement Connection Point Wizard. This wizard generates the `IConnectionPoint` interface by reading your type library and implementing a function for each event that can be fired.

### To implement the connection points

1. In **Solution Explorer**, open _IPolyCtlEvents_CP.h and add the following code under the `public:` statement in the `CProxy_IPolyCtlEvents` class:

    ```cpp
    VOID Fire_ClickIn(LONG x, LONG y)
    {
        T* pT = static_cast<T*>(this);
        int nConnectionIndex;
        CComVariant* pvars = new CComVariant[2];
        int nConnections = m_vec.GetSize();

        for (nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++)
        {
            pT->Lock();
            CComPtr<IUnknown> sp = m_vec.GetAt(nConnectionIndex);
            pT->Unlock();
            IDispatch* pDispatch = reinterpret_cast<IDispatch*>(sp.p);
            if (pDispatch != NULL)
            {
                pvars[1].vt = VT_I4;
                pvars[1].lVal = x;
                pvars[0].vt = VT_I4;
                pvars[0].lVal = y;
                DISPPARAMS disp = { pvars, NULL, 2, 0 };
                pDispatch->Invoke(0x1, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, NULL, NULL, NULL);
            }
        }
        delete[] pvars;

    }
    VOID Fire_ClickOut(LONG x, LONG y)
    {
        T* pT = static_cast<T*>(this);
        int nConnectionIndex;
        CComVariant* pvars = new CComVariant[2];
        int nConnections = m_vec.GetSize();

        for (nConnectionIndex = 0; nConnectionIndex < nConnections; nConnectionIndex++)
        {
            pT->Lock();
            CComPtr<IUnknown> sp = m_vec.GetAt(nConnectionIndex);
            pT->Unlock();
            IDispatch* pDispatch = reinterpret_cast<IDispatch*>(sp.p);
            if (pDispatch != NULL)
            {
                pvars[1].vt = VT_I4;
                pvars[1].lVal = x;
                pvars[0].vt = VT_I4;
                pvars[0].lVal = y;
                DISPPARAMS disp = { pvars, NULL, 2, 0 };
                pDispatch->Invoke(0x2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, NULL, NULL, NULL);
            }
        }
        delete[] pvars;

    }
    ```

You will see that this file has a class called `CProxy_IPolyCtlEvents` that derives from `IConnectionPointImpl`. _IPolyCtlEvents_CP.h now defines the two methods `Fire_ClickIn` and `Fire_ClickOut`, which take the two coordinate parameters. You call these methods when you want to fire an event from your control.

By creating the control with **Connection points** option selected, the _IPolyCtlEvents_CP.h file was generated for you. It also added `CProxy_PolyEvents` and `IConnectionPointContainerImpl` to your control's multiple inheritance list and exposed `IConnectionPointContainer` for you by adding appropriate entries to the COM map.

You are finished implementing the code to support events. Now, add some code to fire the events at the appropriate moment. Remember, you are going to fire a `ClickIn` or `ClickOut` event when the user clicks the left mouse button in the control. To find out when the user clicks the button, add a handler for the `WM_LBUTTONDOWN` message.

### To add a handler for the WM_LBUTTONDOWN message

1. In **Class View**, right-click the `CPolyCtl` class and click **Properties** on the shortcut menu.

1. In the **Properties** window, click the **Messages** icon and then click `WM_LBUTTONDOWN` from the list on the left.

1. From the drop-down list that appears, click **\<Add> OnLButtonDown**. The `OnLButtonDown` handler declaration will be added to PolyCtl.h, and the handler implementation will be added to PolyCtl.cpp.

Next, modify the handler.

### To modify the OnLButtonDown method

1. Change the code which comprises the `OnLButtonDown` method in PolyCtl.cpp (deleting any code placed by the wizard) so that it looks like this:

    [!code-cpp[NVC_ATL_Windowing#57](../atl/codesnippet/cpp/adding-an-event-atl-tutorial-part-5_2.cpp)]

This code makes use of the points calculated in the `OnDraw` function to create a region that detects the user's mouse clicks with the call to `PtInRegion`.

The *uMsg* parameter is the ID of the Windows message being handled. This allows you to have one function that handles a range of messages. The *wParam* and the *lParam* parameters are the standard values for the message being handled. The parameter *bHandled* allows you to specify whether the function handled the message or not. By default, the value is set to TRUE to indicate that the function handled the message, but you can set it to FALSE. This will cause ATL to continue looking for another message handler function to send the message to.

## Building and Testing the Control

Now try out your events. Build the control and start the ActiveX Control Test Container again. This time, view the event log window. To route events to the output window, click **Logging** from the **Options** menu and select **Log to output window**. Insert the control and try clicking in the window. Note that `ClickIn` is fired if you click within the filled polygon, and `ClickOut` is fired when you click outside of it.

Next, you will add a property page.

[Back to Step 4](../atl/changing-the-drawing-code-atl-tutorial-part-4.md) &#124; [On to Step 6](../atl/adding-a-property-page-atl-tutorial-part-6.md)

## See also

[Tutorial](../atl/active-template-library-atl-tutorial.md)
