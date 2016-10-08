---
title: "COleControl Class"
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
ms.topic: reference
ms.assetid: 53e95299-38e8-447b-9c5f-a381d27f5123
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# COleControl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A powerful base class for developing OLE controls. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class COleControl : public CWnd</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__colecontrol">COleControl::COleControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientappearance">COleControl::AmbientAppearance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current appearance of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientbackcolor">COleControl::AmbientBackColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the ambient BackColor property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientdisplayname">COleControl::AmbientDisplayName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the name of the control as specified by the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientfont">COleControl::AmbientFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the ambient Font property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientforecolor">COleControl::AmbientForeColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the ambient ForeColor property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientlocaleid">COleControl::AmbientLocaleID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the container's locale ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientscaleunits">COleControl::AmbientScaleUnits</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the type of units used by the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientshowgrabhandles">COleControl::AmbientShowGrabHandles</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if grab handles should be displayed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientshowhatching">COleControl::AmbientShowHatching</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if hatching should be displayed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambienttextalign">COleControl::AmbientTextAlign</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the type of text alignment specified by the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientuidead">COleControl::AmbientUIDead</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the control should respond to user-interface actions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ambientusermode">COleControl::AmbientUserMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines the mode of the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__boundpropertychanged">COleControl::BoundPropertyChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the container that a bound property has been changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__boundpropertyrequestedit">COleControl::BoundPropertyRequestEdit</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Requests permission to edit the property value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__clienttoparent">COleControl::ClientToParent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Translates a point relative to the control's origin to a point relative to its container's origin.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__clipcaretrect">COleControl::ClipCaretRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adjusts a caret rectangle if it is overlapped by a control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__controlinfochanged">COleControl::ControlInfoChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Call this function after the set of mnemonics handled by the control has changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__displayerror">COleControl::DisplayError</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Displays stock Error events to the control's user.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__doclick">COleControl::DoClick</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Implementation of the stock <unmanagedCodeEntityReference>DoClick</unmanagedCodeEntityReference> method.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__dopropexchange">COleControl::DoPropExchange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes the properties of a <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__dosuperclasspaint">COleControl::DoSuperclassPaint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Redraws an OLE control that has been subclassed from a Windows control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__enablesimpleframe">COleControl::EnableSimpleFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables simple frame support for a control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__exchangeextent">COleControl::ExchangeExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes the control's width and height.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__exchangestockprops">COleControl::ExchangeStockProps</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes the control's stock properties.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__exchangeversion">COleControl::ExchangeVersion</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes the control's version number.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__fireclick">COleControl::FireClick</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>Click</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firedblclick">COleControl::FireDblClick</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>DblClick</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__fireerror">COleControl::FireError</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>Error</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__fireevent">COleControl::FireEvent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires a custom event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firekeydown">COleControl::FireKeyDown</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>KeyDown</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firekeypress">COleControl::FireKeyPress</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>KeyPress</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firekeyup">COleControl::FireKeyUp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>KeyUp</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firemousedown">COleControl::FireMouseDown</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>MouseDown</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firemousemove">COleControl::FireMouseMove</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>MouseMove</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firemouseup">COleControl::FireMouseUp</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires the stock <languageKeyword>MouseUp</languageKeyword> event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__firereadystatechange">COleControl::FireReadyStateChange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fires an event when the control's ready state changes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getactivationpolicy">COleControl::GetActivationPolicy</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Alters the default activation behavior of a control that supports the <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference> interface.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getambientproperty">COleControl::GetAmbientProperty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the specified ambient property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getappearance">COleControl::GetAppearance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock Appearance property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getbackcolor">COleControl::GetBackColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock BackColor property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getborderstyle">COleControl::GetBorderStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock BorderStyle property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getcapture">COleControl::GetCapture</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a windowless, activated control object has the mouse capture.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getclassid">COleControl::GetClassID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the OLE class ID of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getclientoffset">COleControl::GetClientOffset</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the difference between the upper left corner of the control's rectangular area and the upper left corner of its client area.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getclientrect">COleControl::GetClientRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the size of the control's client area.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getclientsite">COleControl::GetClientSite</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Queries an object for the pointer to its current client site within its container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getcontrolflags">COleControl::GetControlFlags</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the control flag settings.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getcontrolsize">COleControl::GetControlSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the position and size of the OLE control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getdc">COleControl::GetDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Provides a means for a windowless control to get a device context from its container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getenabled">COleControl::GetEnabled</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock Enabled property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getextendedcontrol">COleControl::GetExtendedControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to an extended control object belonging to the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getfocus">COleControl::GetFocus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the control has the focus.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getfont">COleControl::GetFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock Font property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getfonttextmetrics">COleControl::GetFontTextMetrics</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the metrics of a <unmanagedCodeEntityReference>CFontHolder</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getforecolor">COleControl::GetForeColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock ForeColor property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__gethwnd">COleControl::GetHwnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock hWnd property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getmessagestring">COleControl::GetMessageString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Provides status bar text for a menu item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getnotsupported">COleControl::GetNotSupported</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Prevents access to a control's property value by the user.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getreadystate">COleControl::GetReadyState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the control's readiness state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getrectincontainer">COleControl::GetRectInContainer</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the control's rectangle relative to its container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getstocktextmetrics">COleControl::GetStockTextMetrics</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the metrics of the stock Font property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__gettext">COleControl::GetText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value of the stock Text or Caption property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__getwindowlessdroptarget">COleControl::GetWindowlessDropTarget</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to allow a windowless control to be the target of drag and drop operations.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__initializeiids">COleControl::InitializeIIDs</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Informs the base class of the IIDs the control will use.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__internalgetfont">COleControl::InternalGetFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a <unmanagedCodeEntityReference>CFontHolder</unmanagedCodeEntityReference> object for the stock Font property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__internalgettext">COleControl::InternalGetText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the stock Caption or Text property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__internalsetreadystate">COleControl::InternalSetReadyState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the control's readiness state and fires the ready-state-change event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__invalidatecontrol">COleControl::InvalidateControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Invalidates an area of the displayed control, causing it to be redrawn.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__invalidatergn">COleControl::InvalidateRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Invalidates the container window's client area within the given region. Can be used to redraw windowless controls in the region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__isconvertingvbx">COleControl::IsConvertingVBX</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows specialized loading of an OLE control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ismodified">COleControl::IsModified</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the control state has changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__isoptimizeddraw">COleControl::IsOptimizedDraw</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the container supports optimized drawing for the current drawing operation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__issubclassedcontrol">COleControl::IsSubclassedControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called to determine if the control subclasses a Windows control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__load">COleControl::Load</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Resets any previous asynchronous data and initiates a new load of the control's asynchronous property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__lockinplaceactive">COleControl::LockInPlaceActive</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if your control can be deactivated by the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onambientpropertychange">COleControl::OnAmbientPropertyChange</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when an ambient property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onappearancechanged">COleControl::OnAppearanceChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock Appearance property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onbackcolorchanged">COleControl::OnBackColorChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock BackColor property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onborderstylechanged">COleControl::OnBorderStyleChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock BorderStyle property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onclick">COleControl::OnClick</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called to fire the stock Click event.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onclose">COleControl::OnClose</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the control that <unmanagedCodeEntityReference>IOleControl::Close</unmanagedCodeEntityReference> has been called.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ondoverb">COleControl::OnDoVerb</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after a control verb has been executed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ondraw">COleControl::OnDraw</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when a control is requested to redraw itself.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ondrawmetafile">COleControl::OnDrawMetafile</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the container when a control is requested to redraw itself using a metafile device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onedit">COleControl::OnEdit</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the container to UI Activate an OLE control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onenabledchanged">COleControl::OnEnabledChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock Enabled property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onenumverbs">COleControl::OnEnumVerbs</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the container to enumerate a control's verbs.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__oneventadvise">COleControl::OnEventAdvise</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when event handlers are connected or disconnected from a control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onfontchanged">COleControl::OnFontChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock Font property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onforecolorchanged">COleControl::OnForeColorChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock ForeColor property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onfreezeevents">COleControl::OnFreezeEvents</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when a control's events are frozen or unfrozen.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetcolorset">COleControl::OnGetColorSet</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the control that <unmanagedCodeEntityReference>IOleObject::GetColorSet</unmanagedCodeEntityReference> has been called.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetcontrolinfo">COleControl::OnGetControlInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Provides mnemonic information to the container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetdisplaystring">COleControl::OnGetDisplayString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called to obtain a string to represent a property value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetinplacemenu">COleControl::OnGetInPlaceMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Requests the handle of the control's menu that will be merged with the container menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetnaturalextent">COleControl::OnGetNaturalExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to retrieve the control's display size closest to the proposed size and extent mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetpredefinedstrings">COleControl::OnGetPredefinedStrings</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns strings representing possible values for a property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetpredefinedvalue">COleControl::OnGetPredefinedValue</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the value corresponding to a predefined string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetviewextent">COleControl::OnGetViewExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to retrieve the size of the control's display areas (can be used to enable two-pass drawing).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetviewrect">COleControl::OnGetViewRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to convert control's size into a rectangle starting at a specific position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ongetviewstatus">COleControl::OnGetViewStatus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to retrieve the control's view status.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onhidetoolbars">COleControl::OnHideToolBars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the container when the control is UI deactivated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__oninactivemousemove">COleControl::OnInactiveMouseMove</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to have the container for the inactive control under the mouse pointer dispatch <unmanagedCodeEntityReference>WM_MOUSEMOVE</unmanagedCodeEntityReference> messages to the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__oninactivesetcursor">COleControl::OnInactiveSetCursor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to have the container for the inactive control under the mouse pointer dispatch <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> messages to the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onkeydownevent">COleControl::OnKeyDownEvent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after the stock KeyDown event has been fired.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onkeypressevent">COleControl::OnKeyPressEvent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after the stock KeyPress event has been fired.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onkeyupevent">COleControl::OnKeyUpEvent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after the stock KeyUp event has been fired.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onmappropertytopage">COleControl::OnMapPropertyToPage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates which property page to use for editing a property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onmnemonic">COleControl::OnMnemonic</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when a mnemonic key of the control has been pressed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onproperties">COleControl::OnProperties</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the control's "Properties" verb has been invoked.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onqueryhitpoint">COleControl::OnQueryHitPoint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to query whether a control's display overlaps a given point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onqueryhitrect">COleControl::OnQueryHitRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to query whether a control's display overlaps any point in a given rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onrenderdata">COleControl::OnRenderData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to retrieve data in the specified format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onrenderfiledata">COleControl::OnRenderFileData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to retrieve data from a file in the specified format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onrenderglobaldata">COleControl::OnRenderGlobalData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to retrieve data from global memory in the specified format.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onresetstate">COleControl::OnResetState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Resets a control's properties to the default values.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onsetclientsite">COleControl::OnSetClientSite</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the control that <unmanagedCodeEntityReference>IOleControl::SetClientSite</unmanagedCodeEntityReference> has been called.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onsetdata">COleControl::OnSetData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces the control's data with another value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onsetextent">COleControl::OnSetExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after the control's extent has changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onsetobjectrects">COleControl::OnSetObjectRects</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called after the control's dimensions have been changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onshowtoolbars">COleControl::OnShowToolBars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the control has been UI activated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__ontextchanged">COleControl::OnTextChanged</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called when the stock Text or Caption property is changed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__onwindowlessmessage">COleControl::OnWindowlessMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Processes window messages (other than mouse and keyboard messages) for windowless controls.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__parenttoclient">COleControl::ParentToClient</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Translates a point relative to the container's origin to a point relative to the control's origin.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__postmodaldialog">COleControl::PostModalDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the container that a modal dialog box has been closed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__premodaldialog">COleControl::PreModalDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Notifies the container that a modal dialog box is about to be displayed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__recreatecontrolwindow">COleControl::RecreateControlWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys and re-creates the control's window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__refresh">COleControl::Refresh</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Forces a repaint of a control's appearance.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__releasecapture">COleControl::ReleaseCapture</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases mouse capture.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__releasedc">COleControl::ReleaseDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases the display device context of a container of a windowless control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__reparentcontrolwindow">COleControl::ReparentControlWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Resets the parent of the control window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__resetstockprops">COleControl::ResetStockProps</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Initializes <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> stock properties to their default values.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__resetversion">COleControl::ResetVersion</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Initializes the version number to a given value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__scrollwindow">COleControl::ScrollWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows a windowless control to scroll an area within its in-place active image on the display.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__selectfontobject">COleControl::SelectFontObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects a custom Font property into a device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__selectstockfont">COleControl::SelectStockFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects the stock Font property into a device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__serializeextent">COleControl::SerializeExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes or initializes the display space for the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__serializestockprops">COleControl::SerializeStockProps</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes or initializes the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> stock properties.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__serializeversion">COleControl::SerializeVersion</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Serializes or initializes the control's version information.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setappearance">COleControl::SetAppearance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock Appearance property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setbackcolor">COleControl::SetBackColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock BackColor property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setborderstyle">COleControl::SetBorderStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock BorderStyle property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setcapture">COleControl::SetCapture</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Causes the control's container window to take possession of the mouse capture on the control's behalf.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setcontrolsize">COleControl::SetControlSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the position and size of the OLE control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setenabled">COleControl::SetEnabled</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock Enabled property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setfocus">COleControl::SetFocus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Causes the control's container window to take possession of the input focus on the control's behalf.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setfont">COleControl::SetFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock Font property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setforecolor">COleControl::SetForeColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock ForeColor property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setinitialsize">COleControl::SetInitialSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the size of an OLE control when first displayed in a container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setmodifiedflag">COleControl::SetModifiedFlag</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the modified state of a control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setnotpermitted">COleControl::SetNotPermitted</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates that an edit request has failed.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setnotsupported">COleControl::SetNotSupported</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Prevents modification to a control's property value by the user.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setrectincontainer">COleControl::SetRectInContainer</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the control's rectangle relative to its container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__settext">COleControl::SetText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the value of the stock Text or Caption property.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__throwerror">COleControl::ThrowError</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Signals that an error has occurred in an OLE control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__transformcoords">COleControl::TransformCoords</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Transforms coordinate values between a container and the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__translatecolor">COleControl::TranslateColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts an <legacyBold>OLE_COLOR</legacyBold> value to a <legacyBold>COLORREF</legacyBold> value.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__willambientsbevalidduringload">COleControl::WillAmbientsBeValidDuringLoad</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether ambient properties will be available the next time the control is loaded.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__windowproc">COleControl::WindowProc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Provides a Windows procedure for a <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Protected Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__drawcontent">COleControl::DrawContent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the control's appearance needs to be updated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__drawmetafile">COleControl::DrawMetafile</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the metafile device context is being used.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__isinvokeallowed">COleControl::IsInvokeAllowed</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables automation method invocation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrol__setinitialdataformats">COleControl::SetInitialDataFormats</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to initialize the list of data formats supported by the control.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>Derived from <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>, this class inherits all the functionality of a Windows window object plus additional functionality specific to OLE, such as event firing and the ability to support methods and properties.</para>
            <para>OLE controls can be inserted into OLE container applications and communicate with the container by using a two-way system of event firing and exposing methods and properties to the container. Note that standard OLE containers only support the basic functionality of an OLE control. They are unable to support extended features of an OLE control. Event firing occurs when events are sent to the container as a result of certain actions taking place in the control. In turn, the container communicates with the control by using an exposed set of methods and properties analogous to the member functions and data members of a C++ class. This approach allows the developer to control the appearance of the control and notify the container when certain actions occur.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Windowless Controls</title>
        <content>
            <para>OLE controls can be used in-place active without a window. Windowless controls have significant advantages:  </para>
            <list class="bullet">
                <listItem>
                    <para>Windowless controls can be transparent and non-rectangular</para>
                </listItem>
                <listItem>
                    <para>Windowless controls reduce instance size and creation time of the object</para>
                </listItem>
            </list>
            <para>Controls do not need a window. Services that a window offers can easily be provided via a single shared window (usually the container's) and a bit of dispatching code. Having a window is mostly an unnecessary complication on the object.</para>
            <para>When windowless activation is used, the container (which does have a window) is responsible for providing services that would otherwise have been provided by the control's own window. For example, if your control needs to query the keyboard focus, query the mouse capture, or obtain a device context, these operations are managed by the container. The <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> <legacyLink xlink:href="e9e28f79-9a70-4ae4-a5aa-b3e92f1904df">windowless-operation member functions</legacyLink> invoke these operations on the container. </para>
            <para>When windowless activation is enabled, the container delegates input messages to the control's <unmanagedCodeEntityReference>IOleInPlaceObjectWindowless</unmanagedCodeEntityReference> interface (an extension of                 <externalLink> <linkText>IOleInPlaceObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms692646</linkUri>
                </externalLink> for windowless support). <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference>'s implementation of this interface will dispatch these messages through your control's message map, after adjusting the mouse coordinates appropriately. You can process these messages like ordinary window messages, by adding the corresponding entries to the message map.</para>
            <para>In a windowless control, you should always use the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> member functions instead of the corresponding <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> member functions or their related Windows API functions.</para>
            <para>OLE control objects can also create a window only when they become active, but the amount of work needed for the inactive-active transition goes up and the speed of the transition goes down. There are cases when this is a problem: as an example, consider a grid of text boxes. When cursoring up and down through the column, each control must be in-place activated and then deactivated. The speed of the inactive/active transition will directly affect the scrolling speed.</para>
            <para>For more information on developing an OLE control framework, see the articles <legacyLink xlink:href="c911fb74-3afc-4bf3-a0f5-7922b14d9a1b">MFC ActiveX Controls</legacyLink> and <legacyLink xlink:href="f19d698c-bdc3-4c74-af97-3d6ccb441b75">Overview: Creating an MFC ActiveX Control Program</legacyLink>. For information on optimizing OLE controls, including windowless and flicker-free controls, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">MFC ActiveX Controls: Optimization</legacyLink>. </para>
        </content>
    </section>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxctl.h</para>
        </content>
    </requirements>
    <section address="colecontrol__ambientbackcolor">
        <!--7fef2ec0-4697-406a-8451-5d31ef7c160b-->
        <title>COleControl::AmbientBackColor</title>
        <content>
            <para>Returns the value of the ambient BackColor property.</para>
            <legacySyntax>OLE_COLOR AmbientBackColor();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current value of the container's ambient BackColor property, if any. If the property is not supported, this function returns the system-defined Windows background color.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ambient BackColor property is available to all controls and is defined by the container. Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientdisplayname">
        <!--cc06acc4-c5a1-4e4b-96da-9cd783999cbc-->
        <title>COleControl::AmbientDisplayName</title>
        <content>
            <para>The name the container has assigned to the control can be used in error messages displayed to the user.</para>
            <legacySyntax>CString AmbientDisplayName();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The name of the OLE control. The default is a zero-length string.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientfont">
        <!--e8d9fa41-a153-454b-913a-44c8696c79a5-->
        <title>COleControl::AmbientFont</title>
        <content>
            <para>Returns the value of the ambient Font property.</para>
            <legacySyntax>LPFONTDISP AmbientFont();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the container's ambient Font dispatch interface. The default value is <legacyBold>NULL</legacyBold>. If the return is not equal to <legacyBold>NULL</legacyBold>, you are responsible for releasing the font by calling its                         <externalLink> <linkText>IUnknown::Release</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms682317</linkUri>
                        </externalLink> member function.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ambient Font property is defined by the container and available to all controls.Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientforecolor">
        <!--10eab1bd-220c-44b0-8e81-3a8efedd1865-->
        <title>COleControl::AmbientForeColor</title>
        <content>
            <para>Returns the value of the ambient ForeColor property.</para>
            <legacySyntax>OLE_COLOR AmbientForeColor();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current value of the container's ambient ForeColor property, if any. If not supported, this function returns the system-defined Windows text color.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ambient ForeColor property is available to all controls and is defined by the container. Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientlocaleid">
        <!--d8d3fc4b-1424-4d2b-be33-fb6440fa2afb-->
        <title>COleControl::AmbientLocaleID</title>
        <content>
            <para>Returns the container's locale ID.</para>
            <legacySyntax>LCID AmbientLocaleID();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The value of the container's LocaleID property, if any. If this property is not supported, this function returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control can use the LocaleID to adapt its user interface for specific locales. Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientappearance">
        <!--54ee38bb-0a7c-4a03-9577-215481ce0c12-->
        <title>COleControl::AmbientAppearance</title>
        <content>
            <para>Retrieves the current appearance setting for the control object.</para>
            <legacySyntax>short AmbientAppearance();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The appearance of the control:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>0</legacyBold>   Flat appearance</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>1</legacyBold>   3D appearance</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to retrieve the current value of the <legacyBold>DISPID_AMBIENT_APPEARANCE</legacyBold> property for the control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientscaleunits">
        <!--e4871dd8-41f6-4727-ad69-6b60e8d24185-->
        <title>COleControl::AmbientScaleUnits</title>
        <content>
            <para>Returns the type of units used by the container.</para>
            <legacySyntax>CString AmbientScaleUnits();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A string containing the ambient ScaleUnits of the container. If this property is not supported, this function returns a zero-length string.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The container's ambient ScaleUnits property can be used to display positions or dimensions, labeled with the chosen unit, such as twips or centimeters. Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientshowgrabhandles">
        <!--829d92c2-5f3f-440c-9a9b-9a72af967e5d-->
        <title>COleControl::AmbientShowGrabHandles</title>
        <content>
            <para>Determines whether the container allows the control to display grab handles for itself when active.</para>
            <legacySyntax>BOOL AmbientShowGrabHandles();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if grab handles should be displayed; otherwise 0. If this property is not supported, this function returns nonzero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientshowhatching">
        <!--077fcbc4-5979-4bf9-8cbe-5059c8ae0791-->
        <title>COleControl::AmbientShowHatching</title>
        <content>
            <para>Determines whether the container allows the control to display itself with a hatched pattern when UI active.</para>
            <legacySyntax>BOOL AmbientShowHatching();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the hatched pattern should be shown; otherwise 0. If this property is not supported, this function returns nonzero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambienttextalign">
        <!--3491d85b-60e9-49f9-b027-6a6d8a2b7e1d-->
        <title>COleControl::AmbientTextAlign</title>
        <content>
            <para>Determines the ambient text alignment preferred by the control container.</para>
            <legacySyntax>short AmbientTextAlign();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The status of the container's ambient TextAlign property. If this property is not supported, this function returns 0.</para>
                    <para>The following is a list of valid return values:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Return value</para>
                                </TD>
                                <TD>
                                    <para>Meaning</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>0</para>
                                </TD>
                                <TD>
                                    <para>General alignment (numbers to the right, text to the left).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>1</para>
                                </TD>
                                <TD>
                                    <para>Left justify</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>2</para>
                                </TD>
                                <TD>
                                    <para>Center</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>3</para>
                                </TD>
                                <TD>
                                    <para>Right justify</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This property is available to all embedded controls and is defined by the container. Note that the container is not required to support this property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientuidead">
        <!--8d797864-0150-431d-824b-9da87e906c49-->
        <title>COleControl::AmbientUIDead</title>
        <content>
            <para>Determines if the container wants the control to respond to user-interface actions.</para>
            <legacySyntax>BOOL AmbientUIDead();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control should respond to user-interface actions; otherwise 0. If this property is not supported, this function returns 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For example, a container might set this to <legacyBold>TRUE</legacyBold> in design mode.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ambientusermode">
        <!--bfbeac1c-91d9-4e0f-a56a-97cef31421d5-->
        <title>COleControl::AmbientUserMode</title>
        <content>
            <para>Determines if the container is in design mode or user mode.</para>
            <legacySyntax>BOOL AmbientUserMode();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the container is in user mode; otherwise 0 (in design mode). If this property is not supported, this function returns TRUE.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For example, a container might set this to <legacyBold>FALSE</legacyBold> in design mode.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__boundpropertychanged">
        <!--330bea4a-c138-4451-89bb-60365e5bb719-->
        <title>COleControl::BoundPropertyChanged</title>
        <content>
            <para>Signals that the bound property value has changed.</para>
            <legacySyntax>void BoundPropertyChanged( DISPID dispid );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of a bound property of the control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This must be called every time the value of the property changes, even in cases where the change was not made through the property Set method. Be particularly aware of bound properties that are mapped to member variables. Any time such a member variable changes, <unmanagedCodeEntityReference>BoundPropertyChanged</unmanagedCodeEntityReference> must be called.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__boundpropertyrequestedit">
        <!--1141ee71-f76a-4957-8f6c-df8a7e260ad3-->
        <title>COleControl::BoundPropertyRequestEdit</title>
        <content>
            <para>Requests permission from the <unmanagedCodeEntityReference>IPropertyNotifySink</unmanagedCodeEntityReference> interface to change a bound property value provided by the control.</para>
            <legacySyntax>BOOL BoundPropertyRequestEdit( DISPID dispid );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of a bound property of the control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the change is permitted; otherwise 0. The default value is nonzero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If permission is denied, the control must not let the value of the property change. This can be done by ignoring or failing the action that attempted to change the property value.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__clienttoparent">
        <!--2c7c891b-0dd7-4526-a4ef-60a0ff1813f7-->
        <title>COleControl::ClientToParent</title>
        <content>
            <para>Translates the coordinates of <parameterReference>pPoint</parameterReference> into parent coordinates.</para>
            <legacySyntax>virtual void ClientToParent(
    LPCRECT lprcBounds, LPPOINT pPoint ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lprcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the bounds of the OLE control within the container. Not the client area but the area of the entire control including borders and scroll bars. </para>
                        </definition>
                        <definedTerm> <parameterReference>pPoint</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the OLE client area point to be translated into the coordinates of the parent (container). </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>On input <parameterReference>pPoint</parameterReference> is relative to the origin of the client area of the OLE control (upper left corner of the client area of the control). On output <parameterReference>pPoint</parameterReference> is relative to the origin of the parent (upper left corner of the container).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__clipcaretrect">
        <!--6b7cda3e-e21f-4f46-ae9f-378ea3149b0f-->
        <title>COleControl::ClipCaretRect</title>
        <content>
            <para>Adjusts a caret rectangle if it is entirely or partially covered by overlapping, opaque objects.</para>
            <legacySyntax>BOOL ClipCaretRect( LPRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>On input, a pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that contains the caret area to be adjusted. On output, the adjusted caret area, or <legacyBold>NULL</legacyBold> if the caret rectangle is completely covered. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A caret is a flashing line, block, or bitmap that typically indicates where text or graphics will be inserted. </para>
                    <para>A windowless object cannot safely show a caret without first checking whether the caret is partially or totally hidden by overlapping objects. In order to make that possible, an object can use <unmanagedCodeEntityReference>ClipCaretRect</unmanagedCodeEntityReference> to get the caret adjusted (reduced) to ensure it fits in the clipping region. </para>
                    <para>Objects creating a caret should submit the caret rectangle to <unmanagedCodeEntityReference>ClipCaretRect</unmanagedCodeEntityReference> and use the adjusted rectangle for the caret. If the caret is entirely hidden, this method will return <legacyBold>FALSE</legacyBold> and the caret should not be shown at all in this case.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__colecontrol">
        <!--41225f09-8b3b-4da6-8707-6a892a92e221-->
        <title>COleControl::COleControl</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>COleControl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is normally not called directly. Instead the OLE control is usually created by its class factory.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__controlinfochanged">
        <!--775db140-ac89-4afd-84fc-54146e2b397c-->
        <title>COleControl::ControlInfoChanged</title>
        <content>
            <para>Call this function when the set of mnemonics supported by the control has changed.</para>
            <legacySyntax>void ControlInfoChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Upon receiving this notification, the control's container obtains the new set of mnemonics by making a call to                         <externalLink> <linkText>IOleControl::GetControlInfo</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms693730</linkUri>
                        </externalLink>. Note that the container is not required to respond to this notification.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__displayerror">
        <!--d25c5c06-7ecc-44ce-8989-875986e3d948-->
        <title>COleControl::DisplayError</title>
        <content>
            <para>Called by the framework after the stock Error event has been handled (unless the event handler has suppressed the display of the error).</para>
            <legacySyntax>virtual void DisplayError(
    SCODE scode,
    LPCTSTR lpszDescription,
    LPCTSTR lpszSource,
    LPCTSTR lpszHelpFile,
    UINT nHelpID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>scode</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The status code value to be reported. For a complete list of possible codes, see the article <legacyLink xlink:href="e9e34abb-8e2d-461e-bb9c-a1aec5dcecbd">ActiveX Controls: Advanced Topics</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszDescription</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The description of the error being reported.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpszSource</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The name of the module generating the error (typically, the name of the OLE control module).</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszHelpFile</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The name of the help file containing a description of the error.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHelpID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The Help Context ID of the error being reported.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default behavior displays a message box containing the description of the error, contained in <parameterReference>lpszDescription</parameterReference>.</para>
                    <para>Override this function to customize how errors are displayed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__doclick">
        <!--83b43640-e0ba-4c92-85fb-df18d9f7fb9c-->
        <title>COleControl::DoClick</title>
        <content>
            <para>Simulates a mouse click action on the control.</para>
            <legacySyntax>void DoClick();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The overridable <unmanagedCodeEntityReference>COleControl::OnClick</unmanagedCodeEntityReference> member function will be called, and a stock Click event will be fired, if supported by the control.</para>
                    <para>This function is supported by the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> base class as a stock method, called DoClick. For more information, see the article <legacyLink xlink:href="e20271de-6ffa-4ba0-848b-bafe6c9e510c">ActiveX Controls: Methods</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__dopropexchange">
        <!--8059a3ef-2692-49ae-bb3d-0ae37468f8f1-->
        <title>COleControl::DoPropExchange</title>
        <content>
            <para>Called by the framework when loading or storing a control from a persistent storage representation, such as a stream or property set.</para>
            <legacySyntax>virtual void DoPropExchange( CPropExchange* pPX );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pPX</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>CPropExchange</unmanagedCodeEntityReference> object. The framework supplies this object to establish the context of the property exchange, including its direction.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function normally makes calls to the <legacyBold>PX_</legacyBold> family of functions to load or store specific user-defined properties of an OLE control.</para>
                    <para>If Control Wizard has been used to create the OLE control project, the overridden version of this function will serialize the stock properties supported by <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> with a call to the base class function, <unmanagedCodeEntityReference>COleControl::DoPropExchange</unmanagedCodeEntityReference>. As you add user-defined properties to your OLE control you will need to modify this function to serialize your new properties. For more information on serialization, see the article <legacyLink xlink:href="9d57c290-dd8c-4853-b552-6f17f15ebedd">ActiveX Controls: Serializing</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__dosuperclasspaint">
        <!--2581232d-90d1-4d01-af9f-5fb75aa21e19-->
        <title>COleControl::DoSuperclassPaint</title>
        <content>
            <para>Redraws an OLE control that has been subclassed from a Windows control.</para>
            <legacySyntax>void DoSuperclassPaint(
    CDC* pDC,
    const CRect&amp; rcBounds );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the device context of the control container.</para>
                        </definition>
                        <definedTerm> <parameterReference>rcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The area in which the control is to be drawn.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to properly handle the painting of a nonactive OLE control. This function should only be used if the OLE control subclasses a Windows control and should be called in the <codeInline>OnDraw</codeInline> function of your control. </para>
                    <para>For more information on this function and subclassing a Windows control, see the article <legacyLink xlink:href="3236d4de-401f-49b7-918d-c84559ecc426">ActiveX Controls: Subclassing a Windows Control</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__drawcontent">
        <!--9fc9ec40-d2de-41ff-82c0-f9e7d069dd9f-->
        <title>COleControl::DrawContent</title>
        <content>
            <para>Called by the framework when the control's appearance needs to be updated.</para>
            <legacySyntax>void DrawContent(
    CDC* pDC,
    CRect&amp; rc );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>rc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Rectangular area to be drawn in.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function directly calls the overridable <unmanagedCodeEntityReference>OnDraw</unmanagedCodeEntityReference> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__drawmetafile">
        <!--3a90d025-2cea-46fc-a139-7e2eecb796b7-->
        <title>COleControl::DrawMetafile</title>
        <content>
            <para>Called by the framework when the metafile device context is being used.</para>
            <legacySyntax>void DrawMetafile(
    CDC* pDC,
    CRect&amp; rc );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the metafile device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>rc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Rectangular area to be drawn in.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__enablesimpleframe">
        <!--23bd09b5-28a1-44bf-a9d3-2a9c79b5fd09-->
        <title>COleControl::EnableSimpleFrame</title>
        <content>
            <para>Enables the simple frame characteristic for an OLE control.</para>
            <legacySyntax>void EnableSimpleFrame();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This characteristic allows a control to support visual containment of other controls, but not true OLE containment. An example would be a group box with several controls inside. These controls are not OLE contained, but they are in the same group box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__exchangeextent">
        <!--ac7255d3-8a49-46a1-85c6-efe02dc5e0ee-->
        <title>COleControl::ExchangeExtent</title>
        <content>
            <para>Serializes or initializes the state of the control's extent (its dimensions in <legacyBold>HIMETRIC</legacyBold> units).</para>
            <legacySyntax>BOOL ExchangeExtent( CPropExchange* pPX );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pPX</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="ed872180-e770-4942-892a-92139d501fab">CPropExchange</legacyLink> object. The framework supplies this object to establish the context of the property exchange, including its direction.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function succeeded; 0 otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is normally called by the default implementation of <unmanagedCodeEntityReference>COleControl::DoPropExchange</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__exchangestockprops">
        <!--0973f25d-aaf4-4d1c-87e5-1055ae40dbaa-->
        <title>COleControl::ExchangeStockProps</title>
        <content>
            <para>Serializes or initializes the state of the control's stock properties.</para>
            <legacySyntax>void ExchangeStockProps( CPropExchange* pPX );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pPX</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="ed872180-e770-4942-892a-92139d501fab">CPropExchange</legacyLink> object. The framework supplies this object to establish the context of the property exchange, including its direction.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is normally called by the default implementation of <unmanagedCodeEntityReference>COleControl::DoPropExchange</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__exchangeversion">
        <!--57812e57-e379-44a4-b842-27f66e5aed9c-->
        <title>COleControl::ExchangeVersion</title>
        <content>
            <para>Serializes or initializes the state of a control's version information.</para>
            <legacySyntax>BOOL ExchangeVersion(
    CPropExchange* pPX,
    DWORD dwVersionDefault,
    BOOL bConvert = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pPX</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>CPropExchange</unmanagedCodeEntityReference> object. The framework supplies this object to establish the context of the property exchange, including its direction.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwVersionDefault</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current version number of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>bConvert</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether persistent data should be converted to the latest format when saved, or maintained in the same format that was loaded.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero of the function succeeded; 0 otherwise.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Typically, this will be the first function called by a control's override of <unmanagedCodeEntityReference>COleControl::DoPropExchange</unmanagedCodeEntityReference>. When loading, this function reads the version number of the persistent data, and sets the version attribute of the <legacyLink xlink:href="ed872180-e770-4942-892a-92139d501fab">CPropExchange</legacyLink> object accordingly. When saving, this function writes the version number of the persistent data.</para>
                    <para>For more information on persistence and versioning, see the article <legacyLink xlink:href="9d57c290-dd8c-4853-b552-6f17f15ebedd">ActiveX Controls: Serializing</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__fireclick">
        <!--9f9e490d-eb6e-49c9-8ca7-b2f9a166a2ed-->
        <title>COleControl::FireClick</title>
        <content>
            <para>Called by the framework when the mouse is clicked over an active control.</para>
            <legacySyntax>void FireClick();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a Click event to occur, the control's Event map must have a stock Click event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firedblclick">
        <!--6608cb8c-1bde-4ea1-aa00-7c0ee20a4c79-->
        <title>COleControl::FireDblClick</title>
        <content>
            <para>Called by the framework when the mouse is double-clicked over an active control.</para>
            <legacySyntax>void FireDblClick();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a DblClick event to occur, the control's Event map must have a stock DblClick event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__fireerror">
        <!--9ad37e04-29d4-4b58-b081-a81549c75422-->
        <title>COleControl::FireError</title>
        <content>
            <para>Fires the stock Error event.</para>
            <legacySyntax>void FireError(
    SCODE scode,
    LPCTSTR lpszDescription,
    UINT nHelpID = 0 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>scode</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The status code value to be reported. For a complete list of possible codes, see the article <legacyLink xlink:href="e9e34abb-8e2d-461e-bb9c-a1aec5dcecbd">ActiveX Controls: Advanced Topics</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszDescription</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The description of the error being reported.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHelpID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The Help ID of the error being reported.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This event provides a way of signalling, at appropriate places in your code, that an error has occurred within your control. Unlike other stock events, such as Click or MouseMove, Error is never fired by the framework.</para>
                    <para>To report an error that occurs during a property get function, property set function, or automation method, call <legacyLink xlink:href="#colecontrol__throwerror">COleControl::ThrowError</legacyLink>.</para>
                    <para>The implementation of an OLE control's Stock Error event uses an <unmanagedCodeEntityReference>SCODE</unmanagedCodeEntityReference> value. If your control uses this event, and is intended to be used in Visual Basic 4.0, you will receive errors because the <unmanagedCodeEntityReference>SCODE</unmanagedCodeEntityReference> value is not supported in Visual Basic.</para>
                    <para>To fix this, manually change the <unmanagedCodeEntityReference>SCODE</unmanagedCodeEntityReference> parameter in the control's .ODL file to a <legacyBold>long</legacyBold>. In addition, any custom event, method, or property that uses an <unmanagedCodeEntityReference>SCODE</unmanagedCodeEntityReference> parameter also causes the same problem.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__fireevent">
        <!--2dad053d-8e96-43cb-94df-531b554553cc-->
        <title>COleControl::FireEvent</title>
        <content>
            <para>Fires a user-defined event from your control with any number of optional arguments,.</para>
            <legacySyntax>void AFX_CDECL FireEvent(
    DISPID dispid,
    BYTE* pbParams,
    ... );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of the event to be fired.</para>
                        </definition>
                        <definedTerm> <parameterReference>pbParams</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A descriptor for the event's parameter types.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Usually this function should not be called directly. Instead you will call the event-firing functions in the event map section of your control's class declaration.</para>
                    <para>The <parameterReference>pbParams</parameterReference> argument is a space-separated list of <legacyBold>VTS_</legacyBold>. One or more of these values, separated by spaces (not commas), specifies the function's parameter list. Possible values are as follows:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Symbol</para>
                                </TD>
                                <TD>
                                    <para>Parameter type</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_COLOR</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_COLOR</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_FONT</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>IFontDisp*</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_HANDLE</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>HWND</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_PICTURE</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>IPictureDisp*</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_OPTEXCLUSIVE</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_OPTEXCLUSIVE*</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_TRISTATE</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_TRISTATE</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_XPOS_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_XPOS_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_YPOS_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_YPOS_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_XPOS_PIXELS</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_XPOS_PIXELS</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_YPOS_PIXELS</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_YPOS_PIXELS</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_XSIZE_PIXELS</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_XSIZE_PIXELS</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_YSIZE_PIXELS</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_XSIZE_PIXELS</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_XSIZE_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_XSIZE_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>VTS_YSIZE_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>OLE_XSIZE_HIMETRIC</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                    <alert class="note">
                        <para>Additional variant constants have been defined for all variant types, with the exception of <legacyBold>VTS_FONT</legacyBold> and <legacyBold>VTS_PICTURE</legacyBold>, that provide a pointer to the variant data constant. These constants are named using the <legacyBold>VTS_P</legacyBold> <parameterReference>constantname</parameterReference> convention. For example, <legacyBold>VTS_PCOLOR</legacyBold> is a pointer to a <legacyBold>VTS_COLOR</legacyBold> constant.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firekeydown">
        <!--882a1781-3db6-4524-abc6-32f62f9b6b02-->
        <title>COleControl::FireKeyDown</title>
        <content>
            <para>Called by the framework when a key is pressed while the control is UI active.</para>
            <legacySyntax>void FireKeyDown(
    USHORT* pnChar,
    short nShiftState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pnChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the virtual key code value of the pressed key. For a list of of standard virtual key codes, see Winuser.h</para>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a KeyDown event to occur, the control's Event map must have a stock KeyDown event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firekeypress">
        <!--c132b7d5-2bab-45cf-a40c-e9c18aa52304-->
        <title>COleControl::FireKeyPress</title>
        <content>
            <para>Called by the framework when a key is pressed and released while the custom control is UI Active within the container.</para>
            <legacySyntax>void FireKeyPress( USHORT* pnChar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pnChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the character value of the key pressed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>The recipient of the event may modify <parameterReference>pnChar</parameterReference>, for example, convert all lowercase characters to uppercase. If you want to examine the modified character, override <unmanagedCodeEntityReference>OnKeyPressEvent</unmanagedCodeEntityReference>.</para>
                    <para>For automatic firing of a KeyPress event to occur, the control's Event map must have a stock KeyPress event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firekeyup">
        <!--5ce6cc02-d4fd-4609-8c1a-3b802ce3c424-->
        <title>COleControl::FireKeyUp</title>
        <content>
            <para>Called by the framework when a key is released while the custom control is UI Active within the container.</para>
            <legacySyntax>void FireKeyUp(
    USHORT* pnChar,
    short nShiftState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pnChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the virtual key code value of the released key. For a list of of standard virtual key codes, see Winuser.h</para>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a KeyUp event to occur, the control's Event map must have a stock KeyUp event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firemousedown">
        <!--9383f5b3-c606-4cc2-972c-78f537f8df15-->
        <title>COleControl::FireMouseDown</title>
        <content>
            <para>Called by the framework when a mouse button is pressed over an active custom control.</para>
            <legacySyntax>void FireMouseDown(
    short nButton,
    short nShiftState,
    OLE_XPOS_PIXELS x,
    OLE_YPOS_PIXELS y );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The numeric value of the mouse button pressed. It can contain one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>LEFT_BUTTON</legacyBold>   The left mouse button was pressed down.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>MIDDLE_BUTTON</legacyBold>   The middle mouse button was pressed down.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RIGHT_BUTTON</legacyBold>   The right mouse button was pressed down.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The x-coordinate of the cursor when a mouse button was pressed down. The coordinate is relative to the upper-left corner of the control window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The y-coordinate of the cursor when a mouse button was pressed down. The coordinate is relative to the upper-left corner of the control window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a MouseDown event to occur, the control's Event map must have a stock MouseDown event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firemousemove">
        <!--0c290cea-ba65-43b0-8bc7-34ebd625216a-->
        <title>COleControl::FireMouseMove</title>
        <content>
            <para>Called by the framework when the cursor is moved over an active custom control.</para>
            <legacySyntax>void FireMouseMove(
    short nButton,
    short nShiftState,
    OLE_XPOS_PIXELS x,
    OLE_YPOS_PIXELS y );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The numeric value of the mouse buttons pressed. Contains a combination of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>LEFT_BUTTON</legacyBold>   The left mouse button was pressed down during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>MIDDLE_BUTTON</legacyBold>   The middle mouse button was pressed down during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RIGHT_BUTTON</legacyBold>   The right mouse button was pressed down during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The x-coordinate of the cursor. The coordinate is relative to the upper-left corner of the control window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The y-coordinate of the cursor. The coordinate is relative to the upper-left corner of the control window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a MouseMove event to occur, the control's Event map must have a stock MouseMove event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firemouseup">
        <!--37763443-bb81-4353-9747-935a1c8240e3-->
        <title>COleControl::FireMouseUp</title>
        <content>
            <para>Called by the framework when a mouse button is released over an active custom control.</para>
            <legacySyntax>void FireMouseUp(
    short nButton,
    short nShiftState,
    OLE_XPOS_PIXELS x,
    OLE_YPOS_PIXELS y );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The numeric value of the mouse button released. It can have one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>LEFT_BUTTON</legacyBold>   The left mouse button was released.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>MIDDLE_BUTTON</legacyBold>   The middle mouse button was released.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RIGHT_BUTTON</legacyBold>   The right mouse button was released.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The x-coordinate of the cursor when a mouse button was released. The coordinate is relative to the upper-left corner of the control window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The y-coordinate of a cursor when a mouse button was released. The coordinate is relative to the upper-left corner of the control window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this event is defined as a custom event, you determine when the event is fired.</para>
                    <para>For automatic firing of a MouseUp event to occur, the control's Event map must have a stock MouseUp event defined.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__firereadystatechange">
        <!--c003aa5f-f871-48dd-a3d8-dfc0dae91047-->
        <title>COleControl::FireReadyStateChange</title>
        <content>
            <para>Fires an event with the current value of the ready state of control.</para>
            <legacySyntax>void FireReadyStateChange();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ready state can be one of the following values:  </para>
                    <definitionTable>
                        <definedTerm> <legacyBold>READYSTATE_UNINITIALIZED</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Default initialization state</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_LOADING</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control is currently loading its properties</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_LOADED</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control has been initialized</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_INTERACTIVE</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control has enough data to be interactive but not all asynchronous data is yet loaded</para>
                        </definition>
                        <definedTerm> <unmanagedCodeEntityReference>READYSTATE_COMPLETE</unmanagedCodeEntityReference>
                        </definedTerm>
                        <definition>
                            <para>Control has all its data</para>
                        </definition>
                    </definitionTable>
                    <para>Use <legacyLink xlink:href="#colecontrol__getreadystate">GetReadyState</legacyLink> to determine the control's current readiness. </para>
                    <para> <legacyLink xlink:href="#colecontrol__internalsetreadystate">InternalSetReadyState</legacyLink> changes the ready state to the value supplied, then calls <unmanagedCodeEntityReference>FireReadyStateChange</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getactivationpolicy">
        <!--e5a0a2ef-d582-47fb-a02b-b21c36f63c4d-->
        <title>COleControl::GetActivationPolicy</title>
        <content>
            <para>Alters the default activation behavior of a control that supports the <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference> interface.</para>
            <legacySyntax>virtual DWORD GetActivationPolicy();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A combination of flags from the <legacyBold>POINTERINACTIVE</legacyBold> enumeration. Possible flags are:  </para>
                    <definitionTable>
                        <definedTerm> <legacyBold>POINTERINACTIVE_ACTIVATEONENTRY</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>The object should be in-place activated when the mouse enters it during a mouse move operation.</para>
                        </definition>
                        <definedTerm> <legacyBold>POINTERINACTIVE_DEACTIVATEONLEAVE</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>The object should be deactivated when the mouse leaves the object during a mouse move operation.</para>
                        </definition>
                        <definedTerm> <legacyBold>POINTERINACTIVE_ACTIVATEONDRAG</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>The object should be in-place activated when the mouse is dragged over it during a drag and drop operation.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When the <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference> interface is enabled, the container will delegate <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>WM_MOUSEMOVE</unmanagedCodeEntityReference> messages to it. <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference>'s implementation of this interface will dispatch these messages through your control's message map, after adjusting the mouse coordinates appropriately.</para>
                    <para>Whenever the container receives a <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>WM_MOUSEMOVE</unmanagedCodeEntityReference> message with the mouse pointer over an inactive object supporting <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference>, it should call <unmanagedCodeEntityReference>GetActivationPolicy</unmanagedCodeEntityReference> on the interface and return flags from the <legacyBold>POINTERINACTIVE</legacyBold> enumeration. </para>
                    <para>You can process these messages just like ordinary window messages, by adding the corresponding entries to the message map. In your handlers, avoid using the <unmanagedCodeEntityReference>m_hWnd</unmanagedCodeEntityReference> member variable (or any member functions that uses it) without first checking that its value is non- <legacyBold>NULL</legacyBold>. </para>
                    <para>Any object intended to do more than set the mouse cursor and/or fire a mouse move event, such as give special visual feedback, should return the <legacyBold>POINTERINACTIVE_ACTIVATEONENTRY</legacyBold> flag and draw the feedback only when active. If the object returns this flag, the container should activate it in-place immediately and then forward it the same message that triggered the call to <unmanagedCodeEntityReference>GetActivationPolicy</unmanagedCodeEntityReference>.</para>
                    <para>If both the <legacyBold>POINTERINACTIVE_ACTIVATEONENTRY</legacyBold> and <legacyBold>POINTERINACTIVE_DEACTIVATEONLEAVE</legacyBold> flags are returned, then the object will only be activated when the mouse is over the object. If only the <legacyBold>POINTERINACTIVE_ACTIVATEONENTRY</legacyBold> flag is returned, then the object will only be activated once when the mouse first enters the object.</para>
                    <para>You may also want an inactive control to be the target of an OLE drag and drop operation. This requires activating the control at the moment the user drags an object over it, so that the control's window can be registered as a drop target. To cause activation to occur during a drag, return the <legacyBold>POINTERINACTIVE_ACTIVATEONDRAG</legacyBold> flag:</para>
                    <codeReference>NVC_MFCAxCtl#1</codeReference>
                    <para>The information communicated by <unmanagedCodeEntityReference>GetActivationPolicy</unmanagedCodeEntityReference> should not be cached by a container. Instead, this method should be called every time the mouse enters an inactive object.</para>
                    <para>If an inactive object does not request to be in-place activated when the mouse enters it, its container should dispatch subsequent <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> messages to this object by calling <legacyLink xlink:href="#colecontrol__oninactivesetcursor">OnInactiveSetCursor</legacyLink> as long as the mouse pointer stays over the object.</para>
                    <para>Enabling the <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference> interface typically means that you want the control to be capable of processing mouse messages at all times. To get this behaviour in a container that doesn't support the <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference> interface, you will need to have your control always activated when visible, which means the control should have the <legacyBold>OLEMISC_ACTIVATEWHENVISIBLE</legacyBold> flag among its miscellaneous flags. However, to prevent this flag from taking effect in a container that does support <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference>, you can also specify the <legacyBold>OLEMISC_IGNOREACTIVATEWHENVISIBLE</legacyBold> flag:</para>
                    <codeReference>NVC_MFCAxCtl#10</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getambientproperty">
        <!--b6a8c3b2-6f4f-48b0-9074-a3c86c4af025-->
        <title>COleControl::GetAmbientProperty</title>
        <content>
            <para>Gets the value of an ambient property of the container.</para>
            <legacySyntax>BOOL GetAmbientProperty(
    DISPID dispid,
    VARTYPE vtProp,
    void* pvProp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dwDispid</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of the desired ambient property.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A variant type tag that specifies the type of the value to be returned in <parameterReference>pvProp</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pvProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the address of the variable that will receive the property value or return value. The actual type of this pointer must match the type specified by <parameterReference>vtProp</parameterReference>.</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>vtProp</para>
                                        </TD>
                                        <TD>
                                            <para>Type of pvProp</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_BOOL</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>BOOL*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_BSTR</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>CString*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_I2</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>short*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_I4</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>long*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_R4</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>float*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_R8</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>double*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>VT_CY</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>CY*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>VT_COLOR</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>OLE_COLOR*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>VT_DISPATCH</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>LPDISPATCH*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>VT_FONT</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>LPFONTDISP*</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the ambient property is supported; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If you use <unmanagedCodeEntityReference>GetAmbientProperty</unmanagedCodeEntityReference> to retrieve the ambient DisplayName and ScaleUnits properties, set <parameterReference>vtProp</parameterReference> to <unmanagedCodeEntityReference>VT_BSTR</unmanagedCodeEntityReference> and <parameterReference>pvProp</parameterReference> to <legacyBold>CString*</legacyBold>. If you are retrieving the ambient Font property, set <parameterReference>vtProp</parameterReference> to <legacyBold>VT_FONT</legacyBold> and <parameterReference>pvProp</parameterReference> to <legacyBold>LPFONTDISP*</legacyBold>.</para>
                    <para>Note that functions have already been provided for common ambient properties, such as <legacyLink xlink:href="#colecontrol__ambientbackcolor">AmbientBackColor</legacyLink> and <legacyLink xlink:href="#colecontrol__ambientfont">AmbientFont</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getappearance">
        <!--f1d4c9b3-c257-4983-9527-dbfc3077f4cc-->
        <title>COleControl::GetAppearance</title>
        <content>
            <para>Implements the Get function of your control's stock Appearance property.</para>
            <legacySyntax>short GetAppearance ();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value specifies the current appearance setting as a <legacyBold>short</legacyBold> ( <unmanagedCodeEntityReference>VT_I2</unmanagedCodeEntityReference>) value, if successful. This value is zero if the control's appearance is flat and 1 if the control's appearance is 3D. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getbackcolor">
        <!--2dfdbb7d-047c-4e53-8ddc-0a8c388cdb71-->
        <title>COleControl::GetBackColor</title>
        <content>
            <para>Implements the Get function of your control's stock BackColor property.</para>
            <legacySyntax>OLE_COLOR GetBackColor();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value specifies the current background color as a <legacyBold>OLE_COLOR</legacyBold> value, if successful. This value can be translated to a <legacyBold>COLORREF</legacyBold> value with a call to <unmanagedCodeEntityReference>TranslateColor</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getborderstyle">
        <!--133ba827-57e6-4ab0-893c-c98a7b0d7590-->
        <title>COleControl::GetBorderStyle</title>
        <content>
            <para>Implements the Get function of your control's stock BorderStyle property.</para>
            <legacySyntax>short GetBorderStyle();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>1 if the control has a normal border; 0 if the control has no border.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getcapture">
        <!--0f8e63dc-db22-4be3-ada6-ea12e73186ac-->
        <title>COleControl::GetCapture</title>
        <content>
            <para>Determines whether the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object has the mouse capture.</para>
            <legacySyntax>CWnd* GetCapture();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the control is activated and windowless, returns <legacyBold>this</legacyBold> if the control currently has the mouse capture (as determined by the control's container), or <legacyBold>NULL</legacyBold> if it does not have the capture.</para>
                    <para>Otherwise, returns the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object that has the mouse capture (same as <unmanagedCodeEntityReference>CWnd::GetCapture</unmanagedCodeEntityReference>).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An activated windowless control receives the mouse capture when <legacyLink xlink:href="#colecontrol__setcapture">SetCapture</legacyLink> is called. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getclassid">
        <!--e86ab91f-88e8-4942-bb68-b25db31ac771-->
        <title>COleControl::GetClassID</title>
        <content>
            <para>Called by the framework to retrieve the OLE class ID of the control.</para>
            <legacySyntax>virtual HRESULT GetClassID( LPCLSID pclsid ) = 0;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pclsid</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the location of the class ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the call was not successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Usually implemented by the <legacyLink xlink:href="81446997-47a9-47f2-9d15-d50b505f8510">IMPLEMENT_OLECREATE_EX</legacyLink> macro.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getclientoffset">
        <!--4b52e200-7d08-49c7-8bae-b3f5db9c87cb-->
        <title>COleControl::GetClientOffset</title>
        <content>
            <para>Retrieves the difference between the upper left corner of the control's rectangular area and the upper left corner of its client area.</para>
            <legacySyntax>virtual void GetClientOffset(
    long* pdxOffset, long* pdyOffset ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pdxOffset</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the horizontal offset of the OLE control's client area.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pdyOffset</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the vertical offset of the OLE control's client area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The OLE control has a rectangular area within its container. The client area of the control is the control area excluding borders and scroll bars. The offset retrieved by <unmanagedCodeEntityReference>GetClientOffset</unmanagedCodeEntityReference> is the difference between the upper left corner of the control's rectangular area and the upper left corner of its client area. If your control has non-client elements other than the standard borders and scrollbars, override this member function to specify the offset.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getclientrect">
        <!--396a8c98-e63e-4245-8ef6-cd91e25952ec-->
        <title>COleControl::GetClientRect</title>
        <content>
            <para>Retrieves the size of the control's client area.</para>
            <legacySyntax>virtual void GetClientRect( LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure containing the dimensions of the windowless control's client area; that is, the control's size minus window borders, frames, scroll bars, and so on. The <parameterReference>lpRect</parameterReference> parameter indicates the size of the control's client rectangle, not its position.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getclientsite">
        <!--b1e1ed2b-b778-4fae-a899-93214d57b0ac-->
        <title>COleControl::GetClientSite</title>
        <content>
            <para>Queries an object for the pointer to its current client site within its container.</para>
            <legacySyntax>LPOLECLIENTSITE GetClientSite();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the control's current client site in its container.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The returned pointer points to an instance of <unmanagedCodeEntityReference>IOleClientSite</unmanagedCodeEntityReference>. The <unmanagedCodeEntityReference>IOleClientSite</unmanagedCodeEntityReference> interface, implemented by containers, is the object's view of its context: where it is anchored in the document, where it gets its storage, user interface, and other resources. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getcontrolflags">
        <!--4a469282-7229-47ac-b9ca-66f921c92490-->
        <title>COleControl::GetControlFlags</title>
        <content>
            <para>Retrieves the control flag settings.</para>
            <legacySyntax>virtual DWORD GetControlFlags();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An ORed combination of the flags in the ControlFlags enumeration:</para>
                    <para> <codeInline>enum ControlFlags {</codeInline>
                    </para>
                    <para> <codeInline>   fastBeginPaint = 0x0001,</codeInline>
                    </para>
                    <para> <codeInline>   clipPaintDC = 0x0002,</codeInline>
                    </para>
                    <para> <codeInline>   pointerInactive = 0x0004,</codeInline>
                    </para>
                    <para> <codeInline>   noFlickerActivate = 0x0008,</codeInline>
                    </para>
                    <para> <codeInline>   windowlessActivate = 0x0010,</codeInline>
                    </para>
                    <para> <codeInline>   canOptimizeDraw = 0x0020,</codeInline>
                    </para>
                    <para> <codeInline>};</codeInline>
                    </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, <unmanagedCodeEntityReference>GetControlFlags</unmanagedCodeEntityReference> returns <codeInline>fastBeginPaint | clipPaintDC</codeInline>.   </para>
                    <definitionTable>
                        <definedTerm> <codeInline>fastBeginPaint</codeInline>
                        </definedTerm>
                        <definition>
                            <para>If set, uses a begin-paint function tailored for OLE controls instead of the                                 <externalLink> <linkText>BeginPaint</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183362</linkUri>
                                </externalLink> API (set by default).</para>
                        </definition>
                        <definedTerm> <codeInline>clipPaintDC</codeInline>
                        </definedTerm>
                        <definition>
                            <para>If not set, disables the call to <unmanagedCodeEntityReference>IntersectClipRect</unmanagedCodeEntityReference> made by <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> and gains a small speed advantage. If you are using windowless activation, the flag has no effect.</para>
                        </definition>
                        <definedTerm> <codeInline>pointerInactive</codeInline>
                        </definedTerm>
                        <definition>
                            <para>If set, provides mouse interaction while your control is inactive by enabling <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference>'s implementation of the <unmanagedCodeEntityReference>IPointerInactive</unmanagedCodeEntityReference> interface, which is disabled by default. </para>
                        </definition>
                        <definedTerm> <codeInline>noFlickerActivate</codeInline>
                        </definedTerm>
                        <definition>
                            <para>If set, eliminates extra drawing operations and the accompanying visual flicker. Use when your control draws itself identically in the inactive and active states. If you are using windowless activation, the flag has no effect.</para>
                        </definition>
                        <definedTerm> <codeInline>windowlessActivate</codeInline>
                        </definedTerm>
                        <definition>
                            <para>If set, indicates your control uses windowless activation.</para>
                        </definition>
                        <definedTerm> <codeInline>canOptimizeDraw</codeInline>
                        </definedTerm>
                        <definition>
                            <para>If set, indicates that the control will perform optimized drawing, if the container supports it.</para>
                        </definition>
                    </definitionTable>
                    <para>For more information about <unmanagedCodeEntityReference>GetControlFlags</unmanagedCodeEntityReference> and other optimizations of OLE controls, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">ActiveX Controls: Optimization</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getcontrolsize">
        <!--2c21918a-e9ff-47a7-a5d0-6af4e1496d0a-->
        <title>COleControl::GetControlSize</title>
        <content>
            <para>Retrieves the size of the OLE control window.</para>
            <legacySyntax>void GetControlSize(
    int* pcx,
    int* pcy );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pcx</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width of the control in pixels.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pcy</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height of the control in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that all coordinates for control windows are relative to the upper-left corner of the control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getdc">
        <!--7b0cadeb-628e-43c3-9ae1-492392124d9f-->
        <title>COleControl::GetDC</title>
        <content>
            <para>Provides for a windowless object to get a screen (or compatible) device context from its container.</para>
            <legacySyntax>CDC* GetDC(
    LPCRECT lprcRect = NULL, DWORD dwFlags = OLEDC_PAINTBKGND );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lprcRect</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the rectangle the windowless control wants to redraw, in client coordinates of the control. <legacyBold>NULL</legacyBold> means the full object's extent.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Drawing attributes of the device context. Choices are:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>OLEDC_NODRAW</legacyBold>   Indicates that the object won't use the device context to perform any drawing but merely to get information about the display device. The container should simply pass the window's DC without further processing.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>OLEDC_PAINTBKGND</legacyBold>   Requests that the container paint the background before returning the DC. An object should use this flag if it is requesting a DC for redrawing an area with transparent background.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>OLEDC_OFFSCREEN</legacyBold>   Informs the container that the object wishes to render into an off-screen bitmap that should then be copied to the screen. An object should use this flag when the drawing operation it is about to perform generates a lot of flicker. The container is free to honor this request or not. However, if this flag is not set, the container must hand back an on-screen DC. This allows objects to perform direct screen operations such as showing a selection (via an <legacyBold>XOR</legacyBold> operation).</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the display device context for the container <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> client area if successful; otherwise, the return value is <legacyBold>NULL</legacyBold>. The display device context can be used in subsequent GDI functions to draw in the client area of the container's window. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <legacyLink xlink:href="#colecontrol__releasedc">ReleaseDC</legacyLink> member function must be called to release the context after painting. When calling <unmanagedCodeEntityReference>GetDC</unmanagedCodeEntityReference>, objects pass the rectangle they wish to draw into in their own client coordinates. <unmanagedCodeEntityReference>GetDC</unmanagedCodeEntityReference> translates these to coordinates of the container client area. The object should not request a desired drawing rectangle larger than its own client area rectangle, the size of which can be retrieved with <legacyLink xlink:href="#colecontrol__getclientrect">GetClientRect</legacyLink>. This prevents objects from inadvertently drawing where they are not supposed to. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getenabled">
        <!--e0d4f710-e0e4-40bc-bba8-3e602b203d97-->
        <title>COleControl::GetEnabled</title>
        <content>
            <para>Implements the Get function of your control's stock Enabled property.</para>
            <legacySyntax>BOOL GetEnabled();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control is enabled; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getextendedcontrol">
        <!--49d97456-2523-42ae-b491-d59d1858cfb0-->
        <title>COleControl::GetExtendedControl</title>
        <content>
            <para>Obtains a pointer to an object maintained by the container that represents the control with an extended set of properties.</para>
            <legacySyntax>LPDISPATCH GetExtendedControl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the container's extended control object. If there is no object available, the value is <legacyBold>NULL</legacyBold>.</para>
                    <para>This object may be manipulated through its <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface. You can also use <unmanagedCodeEntityReference>QueryInterface</unmanagedCodeEntityReference> to obtain other available interfaces provided by the object. However, the object is not required to support a specific set of interfaces. Note that relying on the specific features of a container's extended control object limits the portability of your control to other arbitrary containers.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function that calls this function is responsible for releasing the pointer when finished with the object. Note that the container is not required to support this object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getfocus">
        <!--e1c6772d-172a-4c03-9c2a-405661fbc96d-->
        <title>COleControl::GetFocus</title>
        <content>
            <para>Determines whether the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object has the focus.</para>
            <legacySyntax>CWnd* GetFocus();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the control is activated and windowless, returns <legacyBold>this</legacyBold> if the control currently has the keyboard focus (as determined by the control's container), or <legacyBold>NULL</legacyBold> if it does not have the focus.</para>
                    <para>Otherwise, returns the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object that has the focus (same as <unmanagedCodeEntityReference>CWnd::GetFocus</unmanagedCodeEntityReference>).</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An activated windowless control receives the focus when <legacyLink xlink:href="#colecontrol__setfocus">SetFocus</legacyLink> is called. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getfont">
        <!--c7cba46c-ae1a-4941-abd4-8ae24bda1e98-->
        <title>COleControl::GetFont</title>
        <content>
            <para>Implements the Get function of the stock Font property.</para>
            <legacySyntax>LPFONTDISP GetFont();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the font dispatch interface of the control's stock Font property.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the caller must release the object when finished. Within the implementation of the control, use <unmanagedCodeEntityReference>InternalGetFont</unmanagedCodeEntityReference> to access the control's stock Font object. For more information on using fonts in your control, see the article <legacyLink xlink:href="7c51d602-3f5a-481d-84d1-a5d8a3a71761">ActiveX Controls: Using Fonts in an ActiveX Control</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getfonttextmetrics">
        <!--7f45fe8f-d574-4356-a336-e629220254b2-->
        <title>COleControl::GetFontTextMetrics</title>
        <content>
            <para>Measures the text metrics for any <unmanagedCodeEntityReference>CFontHolder</unmanagedCodeEntityReference> object owned by the control.</para>
            <legacySyntax>void GetFontTextMetrics(
    LPTEXTMETRIC lptm,
    CFontHolder&amp; fontHolder );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lptm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>TEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145132</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>fontHolder</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to a <legacyLink xlink:href="728ab472-0c97-440d-889f-1324c6e1b6b8">CFontHolder</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Such a font can be selected with the <legacyLink xlink:href="#colecontrol__selectfontobject">COleControl::SelectFontObject</legacyLink> function. <unmanagedCodeEntityReference>GetFontTextMetrics</unmanagedCodeEntityReference> will initialize the <unmanagedCodeEntityReference>TEXTMETRIC</unmanagedCodeEntityReference> structure pointed to by <parameterReference>lptm</parameterReference> with valid metrics information about <parameterReference>fontHolder</parameterReference>'s font if successful, or fill the structure with zeros if not successful. You should use this function instead of                         <externalLink> <linkText>GetTextMetrics</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144941</linkUri>
                        </externalLink> when painting your control because controls, like any embedded OLE object, may be required to render themselves into a metafile.</para>
                    <para>The <unmanagedCodeEntityReference>TEXTMETRIC</unmanagedCodeEntityReference> structure for the default font is refreshed when the <legacyLink xlink:href="#colecontrol__selectfontobject">SelectFontObject</legacyLink> function is called. You should call <unmanagedCodeEntityReference>GetFontTextMetrics</unmanagedCodeEntityReference> only after selecting the stock Font property to assure the information it provides is valid.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getforecolor">
        <!--260dff7c-0c03-48a0-86e8-b820ba8b954e-->
        <title>COleControl::GetForeColor</title>
        <content>
            <para>Implements the Get function of the stock ForeColor property.</para>
            <legacySyntax>OLE_COLOR GetForeColor();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value specifies the current foreground color as a <legacyBold>OLE_COLOR</legacyBold> value, if successful. This value can be translated to a                         <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                        </externalLink> value with a call to <unmanagedCodeEntityReference>TranslateColor</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__gethwnd">
        <!--2b8910fa-89c4-49a4-9b90-0ac0af7b5820-->
        <title>COleControl::GetHwnd</title>
        <content>
            <para>Implements the Get function of the stock hWnd property.</para>
            <legacySyntax>OLE_HANDLE GetHwnd();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The OLE control's window handle, if any; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getmessagestring">
        <!--84dba6b7-fef9-488b-9f2c-95a24917352a-->
        <title>COleControl::GetMessageString</title>
        <content>
            <para>Called by the framework to obtain a short string that describes the purpose of the menu item identified by <parameterReference>nID</parameterReference>.</para>
            <legacySyntax>virtual void GetMessageString(
    UINT nID,
    CString&amp; rMessage ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A menu item ID.</para>
                        </definition>
                        <definedTerm> <parameterReference>rMessage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object through which a string will be returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This can be used to obtain a message for display in a status bar while the menu item is highlighted. The default implementation attempts to load a string resource identified by <parameterReference>nID</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getnotsupported">
        <!--c2dbc2d3-8f1c-4b12-b014-4262486af586-->
        <title>COleControl::GetNotSupported</title>
        <content>
            <para>Prevents access to a control's property value by the user.</para>
            <legacySyntax>void GetNotSupported();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function in place of the Get function of any property where retrieval of the property by the control's user is not supported. One example would be a property that is write only.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getreadystate">
        <!--601fd1bf-cfd9-45ac-bf5c-281b67134432-->
        <title>COleControl::GetReadyState</title>
        <content>
            <para>Returns the readiness state of the control.</para>
            <legacySyntax>long GetReadyState();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The readiness state of the control, one of the following values:  </para>
                    <definitionTable>
                        <definedTerm> <legacyBold>READYSTATE_UNINITIALIZED</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Default initialization state</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_LOADING</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control is currently loading its properties</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_LOADED</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control has been initialized</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_INTERACTIVE</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control has enough data to be interactive but not all asynchronous data is yet loaded</para>
                        </definition>
                        <definedTerm> <unmanagedCodeEntityReference>READYSTATE_COMPLETE</unmanagedCodeEntityReference>
                        </definedTerm>
                        <definition>
                            <para>Control has all its data</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Most simple controls never need to differentiate between <legacyBold>LOADED </legacyBold>and <unmanagedCodeEntityReference>INTERACTIVE</unmanagedCodeEntityReference>. However, controls that support data path properties may not be ready to be interactive until at least some data is received asynchronously. A control should attempt to become interactive as soon as possible.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getrectincontainer">
        <!--2164b6a7-ac2a-4d47-8bf2-b7d6b17dfaba-->
        <title>COleControl::GetRectInContainer</title>
        <content>
            <para>Obtains the coordinates of the control's rectangle relative to the container, expressed in device units.</para>
            <legacySyntax>BOOL GetRectInContainer( LPRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the rectangle structure into which the control's coordinates will be copied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control is in-place active; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The rectangle is only valid if the control is in-place active.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getstocktextmetrics">
        <!--f038f57b-cd7f-4f2c-8afa-3762ea9b5771-->
        <title>COleControl::GetStockTextMetrics</title>
        <content>
            <para>Measures the text metrics for the control's stock Font property, which can be selected with the <legacyLink xlink:href="#colecontrol__selectstockfont">SelectStockFont</legacyLink> function.</para>
            <legacySyntax>void GetStockTextMetrics( LPTEXTMETRIC lptm );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lptm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a                                 <externalLink> <linkText>TEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145132</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>GetStockTextMetrics</unmanagedCodeEntityReference> function will initialize the <unmanagedCodeEntityReference>TEXTMETRIC</unmanagedCodeEntityReference> structure pointed to by <parameterReference>lptm</parameterReference> with valid metrics information if successful, or fill the structure with zeros if not successful. Use this function instead of                         <externalLink> <linkText>GetTextMetrics</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144941</linkUri>
                        </externalLink> when painting your control because controls, like any embedded OLE object, may be required to render themselves into a metafile.</para>
                    <para>The <unmanagedCodeEntityReference>TEXTMETRIC</unmanagedCodeEntityReference> structure for the default font is refreshed when the <unmanagedCodeEntityReference>SelectStockFont</unmanagedCodeEntityReference> function is called. You should call this function only after selecting the stock font to assure the information it provides is valid.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__gettext">
        <!--585d8d5c-30bb-4361-9621-b8b5de63b3fa-->
        <title>COleControl::GetText</title>
        <content>
            <para>Implements the Get function of the stock Text or Caption property.</para>
            <legacySyntax>BSTR GetText();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current value of the control text string or a zero-length string if no string is present.</para>
                    <alert class="note">
                        <para>For more information on the <unmanagedCodeEntityReference>BSTR</unmanagedCodeEntityReference> data type, see <legacyLink xlink:href="8954848b-2c01-4a4f-abf5-ee55f6a05eeb">Data Types</legacyLink> in the Macros and Globals section.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the caller of this function must call <unmanagedCodeEntityReference>SysFreeString</unmanagedCodeEntityReference> on the string returned in order to free the resource. Within the implementation of the control, use <unmanagedCodeEntityReference>InternalGetText</unmanagedCodeEntityReference> to access the control's stock Text or Caption property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__getwindowlessdroptarget">
        <!--9c96a7b1-cfba-4220-97ed-91a09531d736-->
        <title>COleControl::GetWindowlessDropTarget</title>
        <content>
            <para>Override <unmanagedCodeEntityReference>GetWindowlessDropTarget</unmanagedCodeEntityReference> when you want a windowless control to be the target of an OLE drag and drop operation.</para>
            <legacySyntax>virtual IDropTarget* GetWindowlessDropTarget();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to the object's <unmanagedCodeEntityReference>IDropTarget</unmanagedCodeEntityReference> interface. Since it does not have a window, a windowless object cannot register an <unmanagedCodeEntityReference>IDropTarget</unmanagedCodeEntityReference> interface. However, to participate in drag and drop, a windowless object can still implement the interface and return it in <unmanagedCodeEntityReference>GetWindowlessDropTarget</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Normally, this would require that the control's window be registered as a drop target. But since the control has no window of its own, the container will use its own window as a drop target. The control simply needs to provide an implementation of the <unmanagedCodeEntityReference>IDropTarget</unmanagedCodeEntityReference> interface to which the container can delegate calls at the appropriate time. For example:</para>
                    <codeReference>NVC_MFCAxCtl#2</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__initializeiids">
        <!--04143089-1193-4120-bde0-2aa10452b7cc-->
        <title>COleControl::InitializeIIDs</title>
        <content>
            <para>Informs the base class of the IIDs the control will use.</para>
            <legacySyntax>void InitializeIIDs(
    const IID* piidPrimary, const IID* piidEvents );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>piidPrimary</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the interface ID of the control's primary dispatch interface.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>piidEvents</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the interface ID of the control's event interface.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function in the control's constructor to inform the base class of the interface IDs your control will be using.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__internalgetfont">
        <!--521a644d-3ea7-4a63-bde2-2fd1cf663d27-->
        <title>COleControl::InternalGetFont</title>
        <content>
            <para>Accesses the stock Font property of your control</para>
            <legacySyntax>CFontHolder&amp; InternalGetFont();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to a <legacyLink xlink:href="728ab472-0c97-440d-889f-1324c6e1b6b8">CFontHolder</legacyLink> object that contains the stock Font object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__internalgettext">
        <!--826515e3-4e17-4ab4-bc44-67a9a62605af-->
        <title>COleControl::InternalGetText</title>
        <content>
            <para>Accesses the stock Text or Caption property of your control.</para>
            <legacySyntax>const CString&amp; InternalGetText();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the control text string.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__internalsetreadystate">
        <!--7d8f85a9-ee2c-4f51-8418-3a2ae61fa26c-->
        <title>COleControl::InternalSetReadyState</title>
        <content>
            <para>Sets the readiness state of the control.</para>
            <legacySyntax>void InternalSetReadyState( long lNewReadyState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lNewReadyState</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The readiness state to set for the control, one of the following values:</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_UNINITIALIZED</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Default initialization state</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_LOADING</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control is currently loading its properties</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_LOADED</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control has been initialized</para>
                        </definition>
                        <definedTerm> <legacyBold>READYSTATE_INTERACTIVE</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Control has enough data to be interactive but not all asynchronous data is yet loaded</para>
                        </definition>
                        <definedTerm> <unmanagedCodeEntityReference>READYSTATE_COMPLETE</unmanagedCodeEntityReference>
                        </definedTerm>
                        <definition>
                            <para>Control has all its data</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Most simple controls never need to differentiate between <legacyBold>LOADED </legacyBold>and <unmanagedCodeEntityReference>INTERACTIVE</unmanagedCodeEntityReference>. However, controls that support data path properties may not be ready to be interactive until at least some data is received asynchronously. A control should attempt to become interactive as soon as possible.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__invalidatecontrol">
        <!--d89ca7ce-d71c-476a-99ab-f8c8c1bc4a3d-->
        <title>COleControl::InvalidateControl</title>
        <content>
            <para>Forces the control to redraw itself.</para>
            <legacySyntax>void InvalidateControl(
    LPCRECT lpRect = NULL,
    BOOL bErase = TRUE  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the region of the control to be invalidated.</para>
                        </definition>
                        <definedTerm> <parameterReference>bErase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the background within the update region is to be erased when the update region is processed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>lpRect</parameterReference> has a <legacyBold>NULL</legacyBold> value, the entire control will be redrawn. If <parameterReference>lpRect</parameterReference> is not <legacyBold>NULL</legacyBold>, this indicates the portion of the control's rectangle that is to be invalidated. In cases where the control has no window, or is currently not active, the rectangle is ignored, and a call is made to the client site's                         <externalLink> <linkText>IAdviseSink::OnViewChange</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms694337</linkUri>
                        </externalLink> member function. Use this function instead of <unmanagedCodeEntityReference>CWnd::InvalidateRect</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>InvalidateRect</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__invalidatergn">
        <!--5e19a401-8907-4828-95bc-9a3aa08b9561-->
        <title>COleControl::InvalidateRgn</title>
        <content>
            <para>Invalidates the container window's client area within the given region.</para>
            <legacySyntax>void InvalidateRgn(
    CRgn* pRgn, BOOL bErase = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="d904da84-76aa-481e-8780-b09485f49e64">CRgn</legacyLink> object that identifies the display region of the OLE object to invalidate, in client coordinates of the containing window. If this parameter is <legacyBold>NULL</legacyBold>, the extent is the entire object.</para>
                        </definition>
                        <definedTerm> <parameterReference>bErase</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the background within the invalidated region is to be erased. If <legacyBold>TRUE</legacyBold>, the background is erased. If <legacyBold>FALSE</legacyBold>, the background remains unchanged. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This can be used to redraw windowless controls within the container. The invalidated region, along with all other areas in the update region, is marked for painting when the next                         <externalLink> <linkText>WM_PAINT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145213</linkUri>
                        </externalLink> message is sent. </para>
                    <para>If <parameterReference>bErase</parameterReference> is <legacyBold>TRUE</legacyBold> for any part of the update region, the background in the entire region, not just in the given part, is erased. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__isconvertingvbx">
        <!--f2db71e6-be85-467d-8d00-622a9c9118b5-->
        <title>COleControl::IsConvertingVBX</title>
        <content>
            <para>Allows specialized loading of an OLE control.</para>
            <legacySyntax>BOOL IsConvertingVBX();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control is being converted; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When converting a form that uses VBX controls to one that uses OLE controls, special loading code for the OLE controls may be required. For example, if you are loading an instance of your OLE control, you might have a call to <legacyLink xlink:href="fbf919b7-c239-4e1e-8f26-634f859ffcfe">PX_Font</legacyLink> in your <unmanagedCodeEntityReference>DoPropExchange</unmanagedCodeEntityReference>:</para>
                    <codeReference>NVC_MFCAxCtl#3</codeReference>
                    <para>However, VBX controls did not have a Font object; each font property was saved individually. In this case, you would use <unmanagedCodeEntityReference>IsConvertingVBX</unmanagedCodeEntityReference> to distinguish between these two cases:</para>
                    <codeReference>NVC_MFCAxCtl#4</codeReference>
                    <para>Another case would be if your VBX control saved proprietary binary data (in its <legacyBold>VBM_SAVEPROPERTY</legacyBold> message handler), and your OLE control saves its binary data in a different format. If you want your OLE control to be backward-compatible with the VBX control, you could read both the old and new formats using the <unmanagedCodeEntityReference>IsConvertingVBX</unmanagedCodeEntityReference> function by distinguishing whether the VBX control or the OLE control was being loaded.</para>
                    <para>In your control's <unmanagedCodeEntityReference>DoPropExchange</unmanagedCodeEntityReference> function, you can check for this condition and if true, execute load code specific to this conversion (such as the previous examples). If the control is not being converted, you can execute normal load code. This ability is only applicable to controls being converted from VBX counterparts.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__isinvokeallowed">
        <!--c4747246-d411-4a7b-92c2-e0a9784089b2-->
        <title>COleControl::IsInvokeAllowed</title>
        <content>
            <para>Enables automation method invocation.</para>
            <legacySyntax>BOOL IsInvokeAllowed( DISPID dispid  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control has been initialized; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework's implementation of <legacyBold>IDispatch::Invoke</legacyBold> calls <legacyBold>IsInvokeAllowed </legacyBold>to determine if a given function (identified by <parameterReference>dispid</parameterReference>) may be invoked. The default behavior for an OLE control is to allow automation methods to be invoked only if the control has been initialized; however, <legacyBold>IsInvokeAllowed </legacyBold>is a virtual function and may be overridden if necessary (for example, when the control is being used as an automation server). For more information, see Knowledge Base article Q166472, "HOWTO: Use an OLE Control as an Automation Server." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at                         <externalLink> <linkText>http://support.microsoft.com</linkText> <linkUri>http://support.microsoft.com/</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ismodified">
        <!--6d1c701b-21cc-48f2-a172-17903531dfac-->
        <title>COleControl::IsModified</title>
        <content>
            <para>Determines if the control's state has been modified.</para>
            <legacySyntax>BOOL IsModified();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control's state has been modified since it was last saved; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The state of a control is modified when a property changes value.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__isoptimizeddraw">
        <!--cb09dc5c-b65f-4fa6-9117-2deff4bb31b6-->
        <title>COleControl::IsOptimizedDraw</title>
        <content>
            <para>Determines whether the container supports optimized drawing for the current drawing operation.</para>
            <legacySyntax>BOOL IsOptimizedDraw();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>TRUE</legacyBold> if the container supports optimized drawing for the current drawing operation; otherwise <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If optimized drawing is supported, then the control need not select old objects (pens, brushes, fonts, etc.) into the device context when drawing is finished.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__issubclassedcontrol">
        <!--d7bf7b1e-2aa2-46b0-a8fc-9504c17c9462-->
        <title>COleControl::IsSubclassedControl</title>
        <content>
            <para>Called by the framework to determine if the control subclasses a Windows control.</para>
            <legacySyntax>virtual BOOL IsSubclassedControl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control is subclassed; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You must override this function and return <legacyBold>TRUE</legacyBold> if your OLE control subclasses a Windows control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__load">
        <!--bcc9cd2e-3d4c-4938-a5b3-cc4ed09b1d3a-->
        <title>COleControl::Load</title>
        <content>
            <para>Resets any previous data loaded asynchronously and initiates a new loading of the control's asynchronous property.</para>
            <legacySyntax>void Load(
    LPCTSTR strNewPath, CDataPathProperty&amp; prop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>strNewPath</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a string containing the path that references the absolute location of the asynchronous control property.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>prop</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="1f96efdb-54e4-460b-862c-eba5d4103488">CDataPathProperty</legacyLink> object implementing an asynchronous control property.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__lockinplaceactive">
        <!--5be99786-c715-43c0-8634-a5d128226882-->
        <title>COleControl::LockInPlaceActive</title>
        <content>
            <para>Prevents the container from deactivating your control.</para>
            <legacySyntax>BOOL LockInPlaceActive( BOOL bLock );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bLock</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyBold>TRUE</legacyBold> if the in-place active state of the control is to be locked; <legacyBold>FALSE</legacyBold> if it is to be unlocked.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the lock was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that every locking of the control must be paired with an unlocking of the control when finished. You should only lock your control for short periods, such as while firing an event.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onambientpropertychange">
        <!--829a14b3-0aa3-4885-af6d-188b29a73747-->
        <title>COleControl::OnAmbientPropertyChange</title>
        <content>
            <para>Called by the framework when an ambient property of the container has changed value.</para>
            <legacySyntax>virtual void OnAmbientPropertyChange( DISPID dispid );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dispID</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of the ambient property that changed, or <legacyBold>DISPID_UNKNOWN</legacyBold> if multiple properties have changed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onappearancechanged">
        <!--2747d3f9-d02e-4c51-8f7e-5da6926b77cb-->
        <title>COleControl::OnAppearanceChanged</title>
        <content>
            <para>Called by the framework when the stock Appearance property value has changed.</para>
            <legacySyntax>virtual void OnAppearanceChanged ();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if you want notification after this property changes. The default implementation calls <unmanagedCodeEntityReference>InvalidateControl</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onbackcolorchanged">
        <!--40890ef1-d124-4e7e-a810-439c2cdf8b48-->
        <title>COleControl::OnBackColorChanged</title>
        <content>
            <para>Called by the framework when the stock BackColor property value has changed.</para>
            <legacySyntax>virtual void OnBackColorChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if you want notification after this property changes. The default implementation calls <unmanagedCodeEntityReference>InvalidateControl</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onborderstylechanged">
        <!--1024a22d-6467-4753-97de-9f322aabe952-->
        <title>COleControl::OnBorderStyleChanged</title>
        <content>
            <para>Called by the framework when the stock BorderStyle property value has changed.</para>
            <legacySyntax>virtual void OnBorderStyleChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls <unmanagedCodeEntityReference>InvalidateControl</unmanagedCodeEntityReference>.</para>
                    <para>Override this function if you want notification after this property changes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onclick">
        <!--90233892-4283-4d30-b59f-afcf5e821701-->
        <title>COleControl::OnClick</title>
        <content>
            <para>Called by the framework when a mouse button has been clicked or the DoClick stock method has been invoked.</para>
            <legacySyntax>virtual void OnClick( USHORT iButton );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>iButton</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Index of a mouse button. Can have one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>LEFT_BUTTON</legacyBold>   The left mouse button was clicked.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>MIDDLE_BUTTON</legacyBold>   The middle mouse button was clicked.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RIGHT_BUTTON</legacyBold>   The right mouse button was clicked.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls <unmanagedCodeEntityReference>COleControl::FireClick</unmanagedCodeEntityReference>.</para>
                    <para>Override this member function to modify or extend the default handling.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onclose">
        <!--1cf8a86c-2420-494d-a626-1e18815539cc-->
        <title>COleControl::OnClose</title>
        <content>
            <para>Called by the framework when the container has called the control's <legacyBold>IOleControl::Close</legacyBold> function.</para>
            <legacySyntax>virtual void OnClose( DWORD dwSaveOption );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwSaveOption</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flag that indicates whether the object should be saved before loading. Valid values are:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>OLECLOSE_SAVEIFDIRTY</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>OLECLOSE_NOSAVE</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>OLECLOSE_PROMPTSAVE</unmanagedCodeEntityReference>
                                    </para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, <unmanagedCodeEntityReference>OnClose</unmanagedCodeEntityReference> saves the control object if it has been modified and <parameterReference>dwSaveOption</parameterReference> is either <unmanagedCodeEntityReference>OLECLOSE_SAVEIFDIRTY</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>OLECLOSE_PROMPTSAVE</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ondoverb">
        <!--8b495eae-99aa-41cb-8f13-628f3f91c1cf-->
        <title>COleControl::OnDoVerb</title>
        <content>
            <para>Called by the framework when the container calls the <legacyBold>IOleObject::DoVerb</legacyBold> member function.</para>
            <legacySyntax>virtual BOOL OnDoVerb(
    LONG iVerb,
    LPMSG lpMsg,
    HWND hWndParent,
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iVerb</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of the control verb to be invoked.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the Windows message that caused the verb to be invoked.</para>
                        </definition>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The handle to the parent window of the control. If the execution of the verb creates a window (or windows), <parameterReference>hWndParent</parameterReference> should be used as the parent.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure into which the coordinates of the control, relative to the container, will be copied.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if call was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation uses the <unmanagedCodeEntityReference>ON_OLEVERB</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ON_STDOLEVERB</unmanagedCodeEntityReference> message map entries to determine the proper function to invoke.</para>
                    <para>Override this function to change the default handling of verb.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ondraw">
        <!--cfea3e9e-2abf-4142-91e0-a0b88e2f8ce0-->
        <title>COleControl::OnDraw</title>
        <content>
            <para>Called by the framework to draw the OLE control in the specified bounding rectangle using the specified device context.</para>
            <legacySyntax>virtual void OnDraw(
    CDC* pDC,
    const CRect&amp; rcBounds,
    const CRect&amp; rcInvalid );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The device context in which the drawing occurs.</para>
                        </definition>
                        <definedTerm> <parameterReference>rcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The rectangular area of the control, including the border.</para>
                        </definition>
                        <definedTerm> <parameterReference>rcInvalid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The rectangular area of the control that is invalid.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>OnDraw</unmanagedCodeEntityReference> is typically called for screen display, passing a screen device context as <parameterReference>pDC</parameterReference>. The <parameterReference>rcBounds</parameterReference> parameter identifies the rectangle in the target device context (relative to its current mapping mode). The <parameterReference>rcInvalid</parameterReference> parameter is the actual rectangle that is invalid. In some cases this will be a smaller area than <parameterReference>rcBounds</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ondrawmetafile">
        <!--e1345c9b-183c-4ce5-88b8-3b92202e3df1-->
        <title>COleControl::OnDrawMetafile</title>
        <content>
            <para>Called by the framework to draw the OLE control in the specified bounding rectangle using the specified metafile device context.</para>
            <legacySyntax>virtual void OnDrawMetafile(
    CDC* pDC,
    const CRect&amp; rcBounds );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The device context in which the drawing occurs.</para>
                        </definition>
                        <definedTerm> <parameterReference>rcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The rectangular area of the control, including the border.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls the <legacyLink xlink:href="#colecontrol__ondraw">OnDraw</legacyLink> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onedit">
        <!--e4631397-b23d-4dd4-b0a4-643eb2e4552b-->
        <title>COleControl::OnEdit</title>
        <content>
            <para>Causes the control to be UI activated.</para>
            <legacySyntax>virtual BOOL OnEdit(
    LPMSG lpMsg,
    HWND hWndParent,
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the Windows message that invoked the verb.</para>
                        </definition>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the parent window of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the rectangle used by the control in the container.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the call is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This has the same effect as invoking the control's <unmanagedCodeEntityReference>OLEIVERB_UIACTIVATE</unmanagedCodeEntityReference> verb.</para>
                    <para>This function is typically used as the handler function for an <unmanagedCodeEntityReference>ON_OLEVERB</unmanagedCodeEntityReference> message map entry. This makes an "Edit" verb available on the control's "Object" menu. For example:</para>
                    <codeReference>NVC_MFCAxCtl#5</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onenabledchanged">
        <!--2d54297b-8fc4-497e-a935-36d921be5997-->
        <title>COleControl::OnEnabledChanged</title>
        <content>
            <para>Called by the framework when the stock Enabled property value has changed.</para>
            <legacySyntax>virtual void OnEnabledChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if you want notification after this property changes. The default implementation calls <legacyLink xlink:href="#colecontrol__invalidatecontrol">InvalidateControl</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onenumverbs">
        <!--d2c5abbc-2ab3-4fd4-8643-11e917a5f685-->
        <title>COleControl::OnEnumVerbs</title>
        <content>
            <para>Called by the framework when the container calls the <legacyBold>IOleObject::EnumVerbs</legacyBold> member function.</para>
            <legacySyntax>virtual BOOL OnEnumVerbs( LPENUMOLEVERB* ppenumOleVerb );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>ppenumOleVerb</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the <legacyBold>IEnumOLEVERB</legacyBold> object that enumerates the control's verbs.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if verbs are available; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation enumerates the <unmanagedCodeEntityReference>ON_OLEVERB</unmanagedCodeEntityReference> entries in the message map.</para>
                    <para>Override this function to change the default way of enumerating verbs.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__oneventadvise">
        <!--ebb1331e-919b-4b2c-9e46-0f32e2d5fa9a-->
        <title>COleControl::OnEventAdvise</title>
        <content>
            <para>Called by the framework when an event handler is connected to or disconnected from an OLE control.</para>
            <legacySyntax>virtual void OnEventAdvise( BOOL bAdvise );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bAdvise</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyBold>TRUE</legacyBold> indicates that an event handler has been connected to the control. <legacyBold>FALSE</legacyBold> indicates that an event handler has been disconnected from the control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onfontchanged">
        <!--91a5fda5-d04f-48fd-bb6d-f0d0cb2d732d-->
        <title>COleControl::OnFontChanged</title>
        <content>
            <para>Called by the framework when the stock Font property value has changed.</para>
            <legacySyntax>virtual void OnFontChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls <unmanagedCodeEntityReference>COleControl::InvalidateControl</unmanagedCodeEntityReference>. If the control is subclassing a Windows control, the default implementation also sends a <legacyBold>WM_SETFONT</legacyBold> message to the control's window.</para>
                    <para>Override this function if you want notification after this property changes.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCAxCtl#6</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onforecolorchanged">
        <!--85e96d59-f5af-4a35-87df-12ccd78debf6-->
        <title>COleControl::OnForeColorChanged</title>
        <content>
            <para>Called by the framework when the stock ForeColor property value has changed.</para>
            <legacySyntax>virtual void OnForeColorChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls <unmanagedCodeEntityReference>InvalidateControl</unmanagedCodeEntityReference>.</para>
                    <para>Override this function if you want notification after this property changes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onfreezeevents">
        <!--459a3116-a55e-4707-b691-3575126fbb8d-->
        <title>COleControl::OnFreezeEvents</title>
        <content>
            <para>Called by the framework after the container calls <legacyBold>IOleControl::FreezeEvents</legacyBold>.</para>
            <legacySyntax>virtual void OnFreezeEvents( BOOL bFreeze );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bFreeze</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyBold>TRUE</legacyBold> if the control's event handling is frozen; otherwise <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation does nothing.</para>
                    <para>Override this function if you want additional behavior when event handling is frozen or unfrozen.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetcolorset">
        <!--28de0465-e5a7-4898-acbb-e070895ede31-->
        <title>COleControl::OnGetColorSet</title>
        <content>
            <para>Called by the framework when the container calls the <legacyBold>IViewObject::GetColorSet</legacyBold> member function.</para>
            <legacySyntax>virtual BOOL OnGetColorSet(
    DVTARGETDEVICE* ptd,
    HDC hicTargetDev,
    LPLOGPALETTE* ppColorSet );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>ptd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the target device for which the picture should be rendered. If this value is <legacyBold>NULL</legacyBold>, the picture should be rendered for a default target device, usually a display device.</para>
                        </definition>
                        <definedTerm> <parameterReference>hicTargetDev</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the information context on the target device indicated by <parameterReference>ptd</parameterReference>. This parameter can be a device context, but is not one necessarily. If <parameterReference>ptd</parameterReference> is <legacyBold>NULL</legacyBold>, <parameterReference>hicTargetDev</parameterReference> should also be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>ppColorSet</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the location into which the set of colors that would be used should be copied. If the function does not return the color set, <legacyBold>NULL</legacyBold> is returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a valid color set is returned; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The container calls this function to obtain all the colors needed to draw the OLE control. The container can use the color sets obtained in conjunction with the colors it needs to set the overall color palette. The default implementation returns <legacyBold>FALSE</legacyBold>.</para>
                    <para>Override this function to do any special processing of this request.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetcontrolinfo">
        <!--c8f337c6-d698-4d6b-8307-2e69f0561f5e-->
        <title>COleControl::OnGetControlInfo</title>
        <content>
            <para>Called by the framework when the control's container has requested information about the control.</para>
            <legacySyntax>virtual void OnGetControlInfo( LPCONTROLINFO pControlInfo );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pControlInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>CONTROLINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680734</linkUri>
                                </externalLink> structure to be filled in.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This information consists primarily of a description of the control's mnemonic keys. The default implementation fills <parameterReference>pControlInfo</parameterReference> with default information.</para>
                    <para>Override this function if your control needs to process mnemonic keys.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetdisplaystring">
        <!--405f6f9d-b28b-4908-abc5-4e104219f513-->
        <title>COleControl::OnGetDisplayString</title>
        <content>
            <para>Called by the framework to obtain a string that represents the current value of the property identified by <parameterReference>dispid</parameterReference>.</para>
            <legacySyntax>virtual BOOL OnGetDisplayString(
    DISPID dispid,
    CString&amp; strValue );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of a property of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>strValue</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object through which a string will be returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a string has been returned in                         <legacyItalic>strValue;</legacyItalic> otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your control has a property whose value cannot be directly converted to a string and you want the property's value to be displayed in a container-supplied property browser.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetinplacemenu">
        <!--2eae9775-5a52-4dc5-a8d6-99b320fae9ec-->
        <title>COleControl::OnGetInPlaceMenu</title>
        <content>
            <para>Called by the framework when the control is UI activated to obtain the menu to be merged into the container's existing menu.</para>
            <legacySyntax>virtual HMENU OnGetInPlaceMenu();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The handle of the control's menu, or <legacyBold>NULL</legacyBold> if the control has none. The default implementation returns <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information on merging OLE resources, see the article <legacyLink xlink:href="52bfa086-7d3d-466f-94c7-c7061f3bdb3a">Menus and Resources (OLE)</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetnaturalextent">
        <!--7242a771-e788-4af9-b39d-260878e28722-->
        <title>COleControl::OnGetNaturalExtent</title>
        <content>
            <para>Called by the framework in response to a container's <legacyBold>IViewObjectEx::GetNaturalExtent</legacyBold> request.</para>
            <legacySyntax>virtual BOOL OnGetNaturalExtent(
    DWORD dwAspect, LONG lindex, DVTARGETDEVICE* ptd, HDC hicTargetDev, DVEXTENTINFO* pExtentInfo, LPSIZEL psizel );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwAspect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how the object is to be represented. Representations include content, an icon, a thumbnail, or a printed document. Valid values are taken from the enumeration                                 <externalLink> <linkText>DVASPECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690318</linkUri>
                                </externalLink> or <legacyBold>DVASPECT2</legacyBold>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lindex</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The portion of the object that is of interest. Currently only -1 is valid.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>DVTARGETDEVICE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686613</linkUri>
                                </externalLink> structure defining the target device for which the object's size should be returned. </para>
                        </definition>
                        <definedTerm> <parameterReference>hicTargetDev</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the information context for the target device indicated by the <parameterReference>ptd</parameterReference> parameter from which the object can extract device metrics and test the device's capabilities. If <parameterReference>ptd</parameterReference> is <legacyBold>NULL</legacyBold>, the object should ignore the value in the <parameterReference>hicTargetDev</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pExtentInfo</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to the <legacyBold>DVEXTENTINFO</legacyBold> structure that specifies sizing data. The <legacyBold>DVEXTENTINFO</legacyBold> structure is:  </para>
                            <para> <codeInline>typedef struct  tagExtentInfo</codeInline>
                            </para>
                            <para> <codeInline>    {</codeInline>
                            </para>
                            <para> <codeInline>    UINT cb;</codeInline>
                            </para>
                            <para> <codeInline>    DWORD dwExtentMode;</codeInline>
                            </para>
                            <para> <codeInline>    SIZEL sizelProposed;</codeInline>
                            </para>
                            <para> <codeInline>    }   DVEXTENTINFO;</codeInline>
                            </para>
                            <para>The structure member <codeInline>dwExtentMode</codeInline> can take one of two values:    </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DVEXTENT_CONTENT</legacyBold>   Inquire how big the control should be to exactly fit content (snap-to-size)</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DVEXTENT_INTEGRAL</legacyBold>   When resizing, pass proposed size to control</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>psizel</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to sizing data returned by control. The returned sizing data is set to -1 for any dimension that was not adjusted. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if it successfully returns or adjusts the size; otherwise 0. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to return the object's display size closest to the proposed size and extent mode in the <legacyBold>DVEXTENTINFO</legacyBold> structure. The default implementation returns <legacyBold>FALSE</legacyBold> and makes no adjustments to the size.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetpredefinedstrings">
        <!--8008159e-ba55-4583-855e-b7f2dedf7d47-->
        <title>COleControl::OnGetPredefinedStrings</title>
        <content>
            <para>Called by the framework to obtain a set of predefined strings representing the possible values for a property.</para>
            <legacySyntax>virtual BOOL OnGetPredefinedStrings(
    DISPID dispid,
    CStringArray* pStringArray,
    CDWordArray* pCookieArray );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of a property of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>pStringArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A string array to be filled in with return values.</para>
                        </definition>
                        <definedTerm> <parameterReference>pCookieArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>DWORD</unmanagedCodeEntityReference> array to be filled in with return values.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if elements have been added to <parameterReference>pStringArray</parameterReference> and <parameterReference>pCookieArray</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your control has a property with a set of possible values that can be represented by strings. For each element added to <parameterReference>pStringArray</parameterReference>, you should add a corresponding "cookie" element to                         <legacyItalic>pCookieArray.</legacyItalic> These "cookie" values may later be passed by the framework to the <unmanagedCodeEntityReference>COleControl::OnGetPredefinedValue</unmanagedCodeEntityReference> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetpredefinedvalue">
        <!--7ee4f41f-36f4-4a2c-9ad9-bcb4655535a4-->
        <title>COleControl::OnGetPredefinedValue</title>
        <content>
            <para>Called by the framework to obtain the value corresponding to one of the predefined strings previously returned by an override of <unmanagedCodeEntityReference>COleControl::OnGetPredefinedStrings</unmanagedCodeEntityReference>.</para>
            <legacySyntax>virtual BOOL OnGetPredefinedValue(
    DISPID dispid,
    DWORD dwCookie,
    VARIANT* lpvarOut );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of a property of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwCookie</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A cookie value previously returned by an override of <unmanagedCodeEntityReference>COleControl::OnGetPredefinedStrings</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpvarOut</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>VARIANT</legacyBold> structure through which a property value will be returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a value has been returned in <parameterReference>lpvarOut</parameterReference>; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetviewextent">
        <!--70414333-fb27-49a9-9473-08c41304e644-->
        <title>COleControl::OnGetViewExtent</title>
        <content>
            <para>Called by the framework in response to a container's                 <externalLink> <linkText>IViewObject2::GetExtent</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms684032</linkUri>
                </externalLink> request.</para>
            <legacySyntax>virtual BOOL OnGetViewExtent(
    DWORD dwDrawAspect, LONG lindex, DVTARGETDEVICE* ptd, LPSIZEL lpsizel );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dwDrawAspect</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para> <unmanagedCodeEntityReference>DWORD</unmanagedCodeEntityReference> describing which form, or aspect, of an object is to be displayed. Valid values are taken from the enumeration                                 <externalLink> <linkText>DVASPECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690318</linkUri>
                                </externalLink> or <legacyBold>DVASPECT2</legacyBold>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lindex</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The portion of the object that is of interest. Currently only –1 is valid.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>DVTARGETDEVICE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686613</linkUri>
                                </externalLink> structure defining the target device for which the object's size should be returned. </para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpsizel</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to the location where the object's size is returned. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if extent information is successfully returned; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your control uses two-pass drawing, and its opaque and transparent parts have different dimensions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetviewrect">
        <!--b8f3e5c2-ada9-439d-807b-6625d5ac2778-->
        <title>COleControl::OnGetViewRect</title>
        <content>
            <para>Called by the framework in response to a container's <legacyBold>IViewObjectEx::GetRect</legacyBold> request.</para>
            <legacySyntax>virtual BOOL OnGetViewRect(
    DWORD dwAspect, LPRECTL pRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwAspect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <unmanagedCodeEntityReference>DWORD</unmanagedCodeEntityReference> describing which form, or aspect, of an object is to be displayed. Valid values are taken from the enumeration                                 <externalLink> <linkText>DVASPECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690318</linkUri>
                                </externalLink> or <legacyBold>DVASPECT2</legacyBold>: </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>DVASPECT_CONTENT</unmanagedCodeEntityReference>   Bounding rectangle of the whole object. Top-left corner at the object's origin and size equal to the extent returned by <legacyBold>GetViewExtent</legacyBold>
                                        <legacyItalic>.</legacyItalic>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DVASPECT_OPAQUE</legacyBold>   Objects with a rectangular opaque region return that rectangle. Others fail.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DVASPECT_TRANSPARENT</legacyBold>   Rectangle covering all transparent or irregular parts.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>pRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>RECTL</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162907</linkUri>
                                </externalLink> structure specifying the rectangle in which the object should be drawn. This parameter controls the positioning and stretching of the object. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the rectangle sized to the object is successfully returned; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The object's size is converted by <unmanagedCodeEntityReference>OnGetViewRect</unmanagedCodeEntityReference> into a rectangle starting at a specific position (the default is the upper left corner of the display). Override this function if your control uses two-pass drawing, and its opaque and transparent parts have different dimensions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ongetviewstatus">
        <!--36eb5169-41b3-49ad-bafb-e2fbbc74ad6a-->
        <title>COleControl::OnGetViewStatus</title>
        <content>
            <para>Called by the framework in response to a container's <legacyBold>IViewObjectEx::GetViewStatus</legacyBold> request.</para>
            <legacySyntax>virtual DWORD OnGetViewStatus();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>One of the values of the <legacyBold>VIEWSTATUS</legacyBold> enumeration if successful; otherwise 0. Possible values are any combination of the following:  </para>
                    <definitionTable>
                        <definedTerm> <legacyBold>VIEWSTATUS_OPAQUE</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Object is completely opaque. If this bit is not set, the object contains transparent parts. This bit applies only to content-related aspects and not to <unmanagedCodeEntityReference>DVASPECT_ICON</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>DVASPECT_DOCPRINT</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <legacyBold>VIEWSTATUS_SOLIDBKGND</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Object has a solid background (consisting in a solid color, not a brush pattern). This bit is meaningful only if <legacyBold>VIEWSTATUS_OPAQUE</legacyBold> is set and applies only to content-related aspects and not to <unmanagedCodeEntityReference>DVASPECT_ICON</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>DVASPECT_DOCPRINT</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <legacyBold>VIEWSTATUS_DVASPECTOPAQUE</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Object supports <legacyBold>DVASPECT_OPAQUE</legacyBold>. All <legacyBold>IViewObjectEx</legacyBold> methods that take a drawing aspect as a parameter can be called with this aspect.</para>
                        </definition>
                        <definedTerm> <legacyBold>VIEWSTATUS_DVASPECTTRANSPARENT</legacyBold>
                        </definedTerm>
                        <definition>
                            <para>Object supports <legacyBold>DVASPECT_TRANSPARENT</legacyBold>. All <legacyBold>IViewObjectEx</legacyBold> methods that take a drawing aspect as a parameter can be called with this aspect.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your control uses two-pass drawing. The default implementation returns <legacyBold>VIEWSTATUS_OPAQUE</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onhidetoolbars">
        <!--20a4007f-74ec-4aff-ba74-1253d56b83c2-->
        <title>COleControl::OnHideToolBars</title>
        <content>
            <para>Called by the framework when the control is UI deactivated.</para>
            <legacySyntax>virtual void OnHideToolBars();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The implementation should hide all toolbars displayed by <unmanagedCodeEntityReference>OnShowToolbars</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__oninactivemousemove">
        <!--f8ca7554-3158-47b0-82ae-3aad25cb074b-->
        <title>COleControl::OnInactiveMouseMove</title>
        <content>
            <para>Called by the container for the inactive object under the mouse pointer on receipt of a <unmanagedCodeEntityReference>WM_MOUSEMOVE</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual void OnInactiveMouseMove(
    LPCRECT lprcBounds, long x, long y, DWORD dwKeyState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lprcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The object bounding rectangle, in client coordinates of the containing window. Tells the object its exact position and size on the screen when the <unmanagedCodeEntityReference>WM_MOUSEMOVE</unmanagedCodeEntityReference> message was received.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The x coordinate of the mouse location in client coordinates of the containing window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The y coordinate of the mouse location in client coordinates of the containing window.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwKeyState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the current state of the keyboard modifier keys on the keyboard. Valid values can be a combination of any of the flags <legacyBold>MK_CONTROL</legacyBold>, <legacyBold>MK_SHIFT</legacyBold>, <legacyBold>MK_ALT</legacyBold>, <legacyBold>MK_BUTTON</legacyBold>, <legacyBold>MK_LBUTTON</legacyBold>, <legacyBold>MK_MBUTTON</legacyBold>, and <legacyBold>MK_RBUTTON</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that window client coordinates (pixels) are used to pass the mouse cursor position. This is made possible by also passing the bounding rectangle of the object in the same coordinate system.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__oninactivesetcursor">
        <!--430ee37d-614b-468a-8335-e8fe683e66a6-->
        <title>COleControl::OnInactiveSetCursor</title>
        <content>
            <para>Called by the container for the inactive object under the mouse pointer on receipt of a <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> message.</para>
            <legacySyntax>virtual BOOL OnInactiveSetCursor(
    LPCRECT lprcBounds, long x, long y, DWORD dwMouseMsg, BOOL bSetAlways );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lprcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The object bounding rectangle, in client coordinates of the containing window. Tells the object its exact position and size on the screen when the <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> message was received.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The x coordinate of the mouse location in client coordinates of the containing window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The y coordinate of the mouse location in client coordinates of the containing window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dwMouseMsg</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The identifier of the mouse message for which a <unmanagedCodeEntityReference>WM_SETCURSOR</unmanagedCodeEntityReference> occurred.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bSetAlways</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether or not the object must set the cursor. If <legacyBold>TRUE</legacyBold>, the object must set the cursor; if <legacyBold>FALSE</legacyBold>, the cursor is not obligated to set the cursor, and should return <legacyBold>S_FALSE</legacyBold> in that case. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that window client coordinates (pixels) are used to pass the mouse cursor position. This is made possible by also passing the bounding rectangle of the object in the same coordinate system.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onkeydownevent">
        <!--674bb3e7-9ccf-447a-956a-415e532d90fc-->
        <title>COleControl::OnKeyDownEvent</title>
        <content>
            <para>Called by the framework after a stock KeyDown event has been processed.</para>
            <legacySyntax>virtual void OnKeyDownEvent(
    USHORT nChar,
    USHORT nShiftState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The virtual key code value of the pressed key. For a list of standard virtual key codes, see Winuser.h</para>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your control needs access to the key information after the event has been fired.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onkeypressevent">
        <!--3366347f-e792-4c2a-87c3-7c56041aeb72-->
        <title>COleControl::OnKeyPressEvent</title>
        <content>
            <para>Called by the framework after the stock KeyPress event has been fired.</para>
            <legacySyntax>virtual void OnKeyPressEvent( USHORT nChar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains the virtual key code value of the key pressed. For a list of standard virtual key codes, see Winuser.h</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the <parameterReference>nChar</parameterReference> value may have been modified by the container.</para>
                    <para>Override this function if you want notification after this event occurs.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onkeyupevent">
        <!--c454cbd1-4f1a-437d-89a2-f930b1352f87-->
        <title>COleControl::OnKeyUpEvent</title>
        <content>
            <para>Called by the framework after a stock KeyDown event has been processed.</para>
            <legacySyntax>virtual void OnKeyUpEvent(
    USHORT nChar,
    USHORT nShiftState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The virtual key code value of the pressed key. For a list of standard virtual key codes, see Winuser.h</para>
                        </definition>
                        <definedTerm> <parameterReference>nShiftState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a combination of the following flags:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SHIFT_MASK</legacyBold>   The SHIFT key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CTRL_MASK</legacyBold>   The CTRL key was pressed during the action.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ALT_MASK</legacyBold>   The ALT key was pressed during the action.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function if your control needs access to the key information after the event has been fired.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onmappropertytopage">
        <!--1a42df07-37c6-4c6c-b2c4-86a288c001f4-->
        <title>COleControl::OnMapPropertyToPage</title>
        <content>
            <para>Called by the framework to obtain the class ID of a property page that implements editing of the specified property.</para>
            <legacySyntax>virtual BOOL OnMapPropertyToPage(
    DISPID dispid,
    LPCLSID lpclsid,
    BOOL* pbPageOptional );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dispid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The dispatch ID of a property of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpclsid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>CLSID</legacyBold> structure through which a class ID will be returned.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pbPageOptional</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Returns an indicator of whether use of the specified property page is optional.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a class ID has been returned in <parameterReference>lpclsid</parameterReference>; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to provide a way to invoke your control's property pages from the container's property browser.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onmnemonic">
        <!--95d7d12b-0109-48e9-9505-8e6c989ab4f0-->
        <title>COleControl::OnMnemonic</title>
        <content>
            <para>Called by the framework when the container has detected that a mnemonic key of the OLE control has been pressed.</para>
            <legacySyntax>virtual void OnMnemonic( LPMSG pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the Windows message generated by a mnemonic key press.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onproperties">
        <!--4b4d4151-2433-4642-8583-64fead777f66-->
        <title>COleControl::OnProperties</title>
        <content>
            <para>Called by the framework when the control's properties verb has been invoked by the container.</para>
            <legacySyntax>virtual BOOL OnProperties(
    LPMSG lpMsg,
    HWND hWndParent,
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the Windows message that invoked the verb.</para>
                        </definition>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to the parent window of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the rectangle used by the control in the container.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the call is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation displays a modal property dialog box.</para>
                    <para>You can also use this function to cause the display of your control's property pages. Make a call to the <unmanagedCodeEntityReference>OnProperties</unmanagedCodeEntityReference> function, passing the handle of your control's parent in the <parameterReference>hWndParent</parameterReference> parameter. In this case, the values of the <parameterReference>lpMsg</parameterReference> and <parameterReference>lpRect</parameterReference> parameters are ignored.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onqueryhitpoint">
        <!--65c8f921-f7ee-4fce-a091-66c04741d3b4-->
        <title>COleControl::OnQueryHitPoint</title>
        <content>
            <para>Called by the framework in response to a container's <legacyBold>IViewObjectEx::QueryHitPoint</legacyBold> request.</para>
            <legacySyntax>virtual BOOL OnQueryHitPoint(
    DWORD dwAspect, LPCRECT pRectBounds, POINT ptlLoc, LONG lCloseHint, DWORD* pHitResult );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwAspect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how the object is represented. Valid values are taken from the enumeration                                 <externalLink> <linkText>DVASPECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690318</linkUri>
                                </externalLink> or <legacyBold>DVASPECT2</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pRectBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure specifying the bounding rectangle of the OLE control client area. </para>
                        </definition>
                        <definedTerm> <parameterReference>ptlLoc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the <legacyBold>POINT</legacyBold> structure specifying the point to be checked for a hit. The point is specified in OLE client area coordinates.</para>
                        </definition>
                        <definedTerm> <parameterReference>lCloseHint</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The distance that defines "close" to the point checked for a hit. </para>
                        </definition>
                        <definedTerm> <parameterReference>pHitResult</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the result of the hit query. One of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>HITRESULT_OUTSIDE</legacyBold> <parameterReference>ptlLoc</parameterReference> is outside the OLE object and not close.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>HITRESULT_TRANSPARENT</legacyBold>                                           <legacyItalic>ptlLoc </legacyItalic>is within the bounds of the OLE object, but not close to the image. For example, a point in the middle of a transparent circle could be <legacyBold>HITRESULT_TRANSPARENT</legacyBold>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>HITRESULT_CLOSE</legacyBold> <parameterReference>ptlLoc</parameterReference> is inside or outside the OLE object but close enough to the object to be considered inside. Small, thin, or detailed objects may use this value. Even if a point is outside the bounding rectangle of an object it may still be close (this is needed for hitting small objects).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>HITRESULT_HIT</legacyBold> <parameterReference>ptlLoc</parameterReference> is within the image of the object.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a hit result is successfully returned; otherwise 0. A hit is an overlap with the OLE control display area.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Queries whether an object's display rectangle overlaps the given point (hits the point). <unmanagedCodeEntityReference>QueryHitPoint</unmanagedCodeEntityReference> can be overridden to test hits for non-rectangular objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onqueryhitrect">
        <!--7c638d1e-96a4-40a4-9c2c-8d976a9439f2-->
        <title>COleControl::OnQueryHitRect</title>
        <content>
            <para>Called by the framework in response to a container's <legacyBold>IViewObjectEx::QueryHitRect</legacyBold> request.</para>
            <legacySyntax>virtual BOOL OnQueryHitRect(
    DWORD dwAspect,
    LPCRECT pRectBounds,
    LPCRECT prcLoc,
    LONG lCloseHint,
    DWORD* pHitResult );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwAspect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how the object is to be represented. Valid values are taken from the enumeration                                 <externalLink> <linkText>DVASPECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690318</linkUri>
                                </externalLink> or <legacyBold>DVASPECT2</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pRectBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure specifying the bounding rectangle of the OLE control client area. </para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>prcLoc</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure specifying the rectangle to be checked for a hit (overlap with the object rectangle), relative to the upper left corner of the object. </para>
                        </definition>
                        <definedTerm> <parameterReference>lCloseHint</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Not used. </para>
                        </definition>
                        <definedTerm> <parameterReference>pHitResult</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the result of the hit query. One of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>HITRESULT_OUTSIDE</legacyBold>   no point in the rectangle is hit by the OLE object.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>HITRESULT_HIT</legacyBold>   at least one point in the rectangle would be a hit on the object.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if a hit result is successfully returned; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Queries whether an object's display rectangle overlaps any point in the given rectangle (hits the rectangle). <unmanagedCodeEntityReference>QueryHitRect</unmanagedCodeEntityReference> can be overridden to test hits for non-rectangular objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onrenderdata">
        <!--6317b550-deff-4c35-9c76-d48b8f550e80-->
        <title>COleControl::OnRenderData</title>
        <content>
            <para>Called by the framework to retrieve data in the specified format.</para>
            <legacySyntax>virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,
    LPSTGMEDIUM lpStgMedium );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpFormatEtc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>FORMATETC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms682177</linkUri>
                                </externalLink> structure specifying the format in which information is requested.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpStgMedium</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>STGMEDIUM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms683812</linkUri>
                                </externalLink> structure in which the data is to be returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The specified format is one previously placed in the control object using the <legacyLink xlink:href="02c8ee7d-8e10-4463-8613-bb2a0305ca69#coledatasource__delayrenderdata">DelayRenderData</legacyLink> or <legacyLink xlink:href="02c8ee7d-8e10-4463-8613-bb2a0305ca69#coledatasource__delayrenderfiledata">DelayRenderFileData</legacyLink> member functions for delayed rendering. The default implementation of this function calls <unmanagedCodeEntityReference>OnRenderFileData</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>OnRenderGlobalData</unmanagedCodeEntityReference>, respectively, if the supplied storage medium is either a file or memory. If the requested format is <unmanagedCodeEntityReference>CF_METAFILEPICT</unmanagedCodeEntityReference> or the persistent property set format, the default implementation renders the appropriate data and returns nonzero. Otherwise, it returns 0 and does nothing.</para>
                    <para>If                         <legacyItalic>lpStgMedium-&gt;tymed</legacyItalic> is <legacyBold>TYMED_NULL</legacyBold>, the <legacyBold>STGMEDIUM</legacyBold> should be allocated and filled as specified by                         <legacyItalic>lpFormatEtc-&gt;tymed</legacyItalic>. If not <legacyBold>TYMED_NULL</legacyBold>, the <legacyBold>STGMEDIUM</legacyBold> should be filled in place with the data.</para>
                    <para>Override this function to provide your data in the requested format and medium. Depending on your data, you may want to override one of the other versions of this function instead. If your data is small and fixed in size, override <unmanagedCodeEntityReference>OnRenderGlobalData</unmanagedCodeEntityReference>. If your data is in a file, or is of variable size, override <unmanagedCodeEntityReference>OnRenderFileData</unmanagedCodeEntityReference>.</para>
                    <para>For more information, see the <legacyBold>FORMATETC</legacyBold> and <legacyBold>STGMEDIUM</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onrenderfiledata">
        <!--651b67c2-dfca-4ff1-bd47-2cbaba570626-->
        <title>COleControl::OnRenderFileData</title>
        <content>
            <para>Called by the framework to retrieve data in the specified format when the storage medium is a file.</para>
            <legacySyntax>virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,
    CFile* pFile );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpFormatEtc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>FORMATETC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms682177</linkUri>
                                </externalLink> structure specifying the format in which information is requested.</para>
                        </definition>
                        <definedTerm> <parameterReference>pFile</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="b2eb5757-d499-4e67-b044-dd7d1abaa0f8">CFile</legacyLink> object in which the data is to be rendered.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The specified format is one previously placed in the control object using the <legacyLink xlink:href="02c8ee7d-8e10-4463-8613-bb2a0305ca69#coledatasource__delayrenderdata">DelayRenderData</legacyLink> member function for delayed rendering. The default implementation of this function simply returns <legacyBold>FALSE</legacyBold>.</para>
                    <para>Override this function to provide your data in the requested format and medium. Depending on your data, you might want to override one of the other versions of this function instead. If you want to handle multiple storage mediums, override <unmanagedCodeEntityReference>OnRenderData</unmanagedCodeEntityReference>. If your data is in a file, or is of variable size, override <unmanagedCodeEntityReference>OnRenderFileData</unmanagedCodeEntityReference>.</para>
                    <para>For more information, see the <legacyBold>FORMATETC</legacyBold> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onrenderglobaldata">
        <!--aaf8f4c4-584c-48db-8360-a0119125c9f3-->
        <title>COleControl::OnRenderGlobalData</title>
        <content>
            <para>Called by the framework to retrieve data in the specified format when the specified storage medium is global memory.</para>
            <legacySyntax>virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,
    HGLOBAL* phGlobal );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpFormatEtc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>FORMATETC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms682177</linkUri>
                                </externalLink> structure specifying the format in which information is requested.</para>
                        </definition>
                        <definedTerm> <parameterReference>phGlobal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a handle to global memory in which the data is to be returned. If no memory has been allocated, this parameter can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The specified format is one previously placed in the control object using the <legacyLink xlink:href="02c8ee7d-8e10-4463-8613-bb2a0305ca69#coledatasource__delayrenderdata">DelayRenderData</legacyLink> member function for delayed rendering. The default implementation of this function simply returns <legacyBold>FALSE</legacyBold>.</para>
                    <para>If <parameterReference>phGlobal</parameterReference> is <legacyBold>NULL</legacyBold>, then a new <unmanagedCodeEntityReference>HGLOBAL</unmanagedCodeEntityReference> should be allocated and returned in <parameterReference>phGlobal</parameterReference>. Otherwise, the <unmanagedCodeEntityReference>HGLOBAL</unmanagedCodeEntityReference> specified by <parameterReference>phGlobal</parameterReference> should be filled with the data. The amount of data placed in the <unmanagedCodeEntityReference>HGLOBAL</unmanagedCodeEntityReference> must not exceed the current size of the memory block. Also, the block cannot be reallocated to a larger size.</para>
                    <para>Override this function to provide your data in the requested format and medium. Depending on your data, you may want to override one of the other versions of this function instead. If you want to handle multiple storage mediums, override <unmanagedCodeEntityReference>OnRenderData</unmanagedCodeEntityReference>. If your data is in a file, or is of variable size, override <unmanagedCodeEntityReference>OnRenderFileData</unmanagedCodeEntityReference>.</para>
                    <para>For more information, see the <legacyBold>FORMATETC</legacyBold> structure in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onresetstate">
        <!--8f5df748-2deb-4419-820b-d7e8e02d73a3-->
        <title>COleControl::OnResetState</title>
        <content>
            <para>Called by the framework when the control's properties should be set to their default values.</para>
            <legacySyntax>virtual void OnResetState();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls <legacyLink xlink:href="#colecontrol__dopropexchange">DoPropExchange</legacyLink>, passing a <unmanagedCodeEntityReference>CPropExchange</unmanagedCodeEntityReference> object that causes properties to be set to their default values.</para>
                    <para>The control writer can insert initialization code for the OLE control in this overridable. This function is called when                         <externalLink> <linkText>IPersistStream::Load</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680568</linkUri>
                        </externalLink> or                         <externalLink> <linkText>IPersistStorage::Load</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680557</linkUri>
                        </externalLink> fails, or                         <externalLink> <linkText>IPersistStreamInit::InitNew</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms690234</linkUri>
                        </externalLink> or                         <externalLink> <linkText>IPersistStorage::InitNew</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms687194</linkUri>
                        </externalLink> is called, without first calling either <legacyBold>IPersistStream::Load</legacyBold> or <legacyBold>IPersistStorage::Load</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onsetclientsite">
        <!--f7634662-4750-48a5-a52b-02708a68a683-->
        <title>COleControl::OnSetClientSite</title>
        <content>
            <para>Called by the framework when the container has called the control's <legacyBold>IOleControl::SetClientSite</legacyBold> function.</para>
            <legacySyntax>virtual void OnSetClientSite();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, <unmanagedCodeEntityReference>OnSetClientSite</unmanagedCodeEntityReference> checks whether data path properties are loaded and, if they are, calls <codeInline>DoDataPathPropExchange</codeInline>.</para>
                    <para>Override this function to do any special processing of this notification. In particular, overrides of this function should call the base class.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onsetdata">
        <!--8abb9911-24b5-40b3-b74b-03cd51c2e8dc-->
        <title>COleControl::OnSetData</title>
        <content>
            <para>Called by the framework to replace the control's data with the specified data.</para>
            <legacySyntax>virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc, LPSTGMEDIUM lpStgMedium, BOOL bRelease );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpFormatEtc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>FORMATETC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms682177</linkUri>
                                </externalLink> structure specifying the format of the data.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpStgMedium</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>STGMEDIUM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms683812</linkUri>
                                </externalLink> structure in which the data resides.</para>
                        </definition>
                        <definedTerm> <parameterReference>bRelease</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyBold>TRUE</legacyBold> if the control should free the storage medium; <legacyBold>FALSE</legacyBold> if the control should not free the storage medium.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the data is in the persistent property set format, the default implementation modifies the control's state accordingly. Otherwise, the default implementation does nothing. If <parameterReference>bRelease</parameterReference> is <legacyBold>TRUE</legacyBold>, then a call to <legacyBold>ReleaseStgMedium</legacyBold> is made; otherwise not.</para>
                    <para>Override this function to replace the control's data with the specified data.</para>
                    <para>For more information, see the <legacyBold>FORMATETC</legacyBold> and <legacyBold>STGMEDIUM</legacyBold> structures in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onsetextent">
        <!--0f75031d-b127-4fcc-812b-babf9055df4e-->
        <title>COleControl::OnSetExtent</title>
        <content>
            <para>Called by the framework when the control's extent needs to be changed, as a result of a call to                 <externalLink> <linkText>IOleObject::SetExtent</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms694330</linkUri>
                </externalLink>.</para>
            <legacySyntax>virtual BOOL OnSetExtent( LPSIZEL lpSizeL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpSizeL</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A pointer to the <legacyBold>SIZEL</legacyBold> structure that uses long integers to represent the width and height of the control, expressed in <legacyBold>HIMETRIC</legacyBold> units.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the size change was accepted; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation handles the resizing of the control's extent. If the control is in-place active, a call to the container's <legacyBold>OnPosRectChanged</legacyBold> is then made.</para>
                    <para>Override this function to alter the default resizing of your control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onsetobjectrects">
        <!--19a57b88-aa17-4e43-a7f5-aed4c226939a-->
        <title>COleControl::OnSetObjectRects</title>
        <content>
            <para>Called by the framework to implement a call to                 <externalLink> <linkText>IOleInPlaceObject::SetObjectRects</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms683767</linkUri>
                </externalLink>.</para>
            <legacySyntax>virtual BOOL OnSetObjectRects(
    LPCRECT lpRectPos,
    LPCRECT lpRectClip );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpRectPos</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure indicating the control's new position and size relative to the container.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRectClip</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure indicating a rectangular area to which the control is to be clipped.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the repositioning was accepted; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation automatically handles the repositioning and resizing of the control window and returns <legacyBold>TRUE</legacyBold>.</para>
                    <para>Override this function to alter the default behavior of this function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onshowtoolbars">
        <!--57760299-0083-4d34-b49f-1cf285d662a4-->
        <title>COleControl::OnShowToolBars</title>
        <content>
            <para>Called by the framework when the control has been UI activated.</para>
            <legacySyntax>virtual void OnShowToolBars();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation does nothing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__ontextchanged">
        <!--535e43da-e65a-4d38-adf7-e7af60c5abd3-->
        <title>COleControl::OnTextChanged</title>
        <content>
            <para>Called by the framework when the stock Caption or Text property value has changed.</para>
            <legacySyntax>virtual void OnTextChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation calls <unmanagedCodeEntityReference>InvalidateControl</unmanagedCodeEntityReference>.</para>
                    <para>Override this function if you want notification after this property changes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__onwindowlessmessage">
        <!--29e355e9-b6cd-4fdf-a5d4-9c922b6fad9c-->
        <title>COleControl::OnWindowlessMessage</title>
        <content>
            <para>Called by the framework in response to a container's <legacyBold>IOleInPlaceObjectWindowless::OnWindowMessage</legacyBold> request.</para>
            <legacySyntax>virtual BOOL OnWindowlessMessage(
    UINT msg, WPARAM wParam, LPARAM lParam, LRESULT* plResult );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>msg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Message identifier as passed by Windows.</para>
                        </definition>
                        <definedTerm> <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>As passed by Windows. Specifies additional message-specific information. The contents of this parameter depend on the value of the <parameterReference>msg</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>As passed by Windows. Specifies additional message-specific information. The contents of this parameter depend on the value of the <parameterReference>msg</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>plResult</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Windows result code. Specifies the result of the message processing and depends on the message sent. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Processes window messages for windowless controls. <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference>'s <unmanagedCodeEntityReference>OnWindowlessMessage</unmanagedCodeEntityReference> should be used for window messages other than mouse messages and keyboard messages. <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> provides <legacyLink xlink:href="#colecontrol__setcapture">SetCapture</legacyLink> and <legacyLink xlink:href="#colecontrol__setfocus">SetFocus</legacyLink> specifically to get mouse capture and keyboard focus for windowless OLE objects. </para>
                    <para>Because windowless objects do not have a window, they need a mechanism to let the container dispatch messages to them. A windowless OLE object gets messages from its container, through the <unmanagedCodeEntityReference>OnWindowMessage</unmanagedCodeEntityReference> method on the <unmanagedCodeEntityReference>IOleInPlaceObjectWindowless</unmanagedCodeEntityReference> interface (an extension of                         <externalLink> <linkText>IOleInPlaceObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms692646</linkUri>
                        </externalLink> for windowless support). <unmanagedCodeEntityReference>OnWindowMessage</unmanagedCodeEntityReference> does not take an <unmanagedCodeEntityReference>HWND</unmanagedCodeEntityReference> parameter.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__parenttoclient">
        <!--b6c04fd9-9586-4ffb-8cdd-6bf716e5d05a-->
        <title>COleControl::ParentToClient</title>
        <content>
            <para>Translates the coordinates of <parameterReference>pPoint</parameterReference> into client coordinates.</para>
            <legacySyntax>virtual UINT ParentToClient(
    LPCRECT lprcBounds, LPPOINT pPoint, BOOL bHitTest = FALSE ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lprcBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the bounds of the OLE control within the container. Not the client area but the area of the entire control including borders and scroll bars. </para>
                        </definition>
                        <definedTerm> <parameterReference>pPoint</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the parent (container) point to be translated into the coordinates of the client area of the control. </para>
                        </definition>
                        <definedTerm> <parameterReference>bHitTest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether or not hit testing is to be done on the point.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If <parameterReference>bHitTest</parameterReference> is <legacyBold>FALSE</legacyBold>, returns <legacyBold>HTNOWHERE</legacyBold>. If <parameterReference>bHitTest</parameterReference> is <legacyBold>TRUE</legacyBold>, returns the location in which the parent (container) point landed in the client area of the OLE control and is one of the following mouse hit-test values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>HTBORDER</legacyBold>   In the border of a window that does not have a sizing border.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTBOTTOM</legacyBold>   In the lower horizontal border of the window.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTBOTTOMLEFT</legacyBold>   In the lower-left corner of the window border.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTBOTTOMRIGHT</legacyBold>   In the lower-right corner of the window border.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTCAPTION</legacyBold>   In a title-bar area.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTCLIENT</legacyBold>   In a client area.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTERROR</legacyBold>   On the screen background or on a dividing line between windows (same as <legacyBold>HTNOWHERE</legacyBold> except that the <legacyBold>DefWndProc</legacyBold> Windows function produces a system beep to indicate an error).</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTGROWBOX</legacyBold>   In a size box.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTHSCROLL</legacyBold>   In the horizontal scroll bar.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTLEFT</legacyBold>   In the left border of the window.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTMAXBUTTON</legacyBold>   In a Maximize button.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTMENU</legacyBold>   In a menu area.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTMINBUTTON</legacyBold>   In a Minimize button.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTNOWHERE</legacyBold>   On the screen background or on a dividing line between windows.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTREDUCE</legacyBold>   In a Minimize button.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTRIGHT</legacyBold>   In the right border of the window.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTSIZE</legacyBold>   In a size box (same as <legacyBold>HTGROWBOX</legacyBold>).</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTSYSMENU</legacyBold>   In a Control menu or in a Close button in a child window.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTTOP</legacyBold>   In the upper horizontal border of the window.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTTOPLEFT</legacyBold>   In the upper-left corner of the window border.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTTOPRIGHT</legacyBold>   In the upper-right corner of the window border.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTTRANSPARENT</legacyBold>   In a window currently covered by another window.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTVSCROLL</legacyBold>   In the vertical scroll bar.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>HTZOOM</legacyBold>   In a Maximize button.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>On input <parameterReference>pPoint</parameterReference> is relative to the origin of the parent (upper left corner of the container). On output <parameterReference>pPoint</parameterReference> is relative to the origin of the client area of the OLE control (upper left corner of the client area of the control).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__postmodaldialog">
        <!--641de8d1-4a75-4dd6-9a64-914c35402d90-->
        <title>COleControl::PostModalDialog</title>
        <content>
            <para>Notifies the container that a modal dialog box has been closed.</para>
            <legacySyntax>void PostModalDialog( HWND hWndParent = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the parent window of the modal dialog box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function after displaying any modal dialog box. You must call this function so that the container can enable any top-level windows disabled by <unmanagedCodeEntityReference>PreModalDialog</unmanagedCodeEntityReference>. This function should be paired with a call to <unmanagedCodeEntityReference>PreModalDialog</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__premodaldialog">
        <!--ba73629e-a4a9-41fd-a9e6-89ae37ee19dd-->
        <title>COleControl::PreModalDialog</title>
        <content>
            <para>Notifies the container that a modal dialog box is about to be displayed.</para>
            <legacySyntax>void PreModalDialog( HWND hWndParent = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Handle to the parent window of the modal dialog box.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function before displaying any modal dialog box. You must call this function so that the container can disable all its top-level windows. After the modal dialog box has been displayed, you must then call <unmanagedCodeEntityReference>PostModalDialog</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__recreatecontrolwindow">
        <!--1bb075c3-0d42-4ba4-b39f-9ddfaa912b9f-->
        <title>COleControl::RecreateControlWindow</title>
        <content>
            <para>Destroys and re-creates the control's window.</para>
            <legacySyntax>void RecreateControlWindow();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This may be necessary if you need to change the window's style bits.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__refresh">
        <!--67603f47-89c5-4d68-9ff9-dcf3f60348f8-->
        <title>COleControl::Refresh</title>
        <content>
            <para>Forces a repaint of the OLE control.</para>
            <legacySyntax>void Refresh();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is supported by the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> base class as a stock method, called Refresh. This allows users of your OLE control to repaint the control at a specific time. For more information on this method, see the article <legacyLink xlink:href="e20271de-6ffa-4ba0-848b-bafe6c9e510c">ActiveX Controls: Methods</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__releasecapture">
        <!--57555bc0-6a01-43f2-9932-ac1e164e1967-->
        <title>COleControl::ReleaseCapture</title>
        <content>
            <para>Releases mouse capture.</para>
            <legacySyntax>BOOL ReleaseCapture();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the control currently has the mouse capture, the capture is released. Otherwise, this function has no effect. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__releasedc">
        <!--68f39ac5-cb0a-4760-9dac-36a46966b37e-->
        <title>COleControl::ReleaseDC</title>
        <content>
            <para>Releases the display device context of a container of a windowless control, freeing the device context for use by other applications.</para>
            <legacySyntax>int ReleaseDC( CDC* pDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the container device context to be released. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The application must call <unmanagedCodeEntityReference>ReleaseDC</unmanagedCodeEntityReference> for each call to <legacyLink xlink:href="#colecontrol__getdc">GetDC</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__reparentcontrolwindow">
        <!--6eb4e7fc-c9ba-4e39-a2d5-74c901e1c8d9-->
        <title>COleControl::ReparentControlWindow</title>
        <content>
            <para>Sets the parent of the control.</para>
            <legacySyntax>virtual void ReparentControlWindow(
    HWND hWndOuter,
    HWND hWndParent );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>hWndOuter</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The handle of the control window.</para>
                        </definition>
                        <definedTerm> <parameterReference>hWndParent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The handle of the new parent window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to reset the parent of the control window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__resetstockprops">
        <!--8cf24674-5011-4d66-82e8-44bdaeb8b36b-->
        <title>COleControl::ResetStockProps</title>
        <content>
            <para>Initializes the state of the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> stock properties to their default values.</para>
            <legacySyntax>void ResetStockProps();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The properties are: Appearance, BackColor, BorderStyle, Caption, Enabled, Font, ForeColor, hWnd, and Text. For a description of stock properties, see <legacyLink xlink:href="8b98c8c5-5b69-4366-87bf-0e61e6668ecb">ActiveX Controls: Adding Stock Properties</legacyLink>. </para>
                    <para>You can improve a control's binary initialization performance by using <unmanagedCodeEntityReference>ResetStockProps</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ResetVersion</unmanagedCodeEntityReference> to override <unmanagedCodeEntityReference>COleControl::OnResetState</unmanagedCodeEntityReference>. See the example below. For further information on optimizing initialization, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">ActiveX Controls: Optimization</legacyLink>. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCAxCtl#7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__resetversion">
        <!--e77b74e4-c963-4b6b-a992-7e99957cb55a-->
        <title>COleControl::ResetVersion</title>
        <content>
            <para>Initializes the version number to specified value.</para>
            <legacySyntax>void ResetVersion( DWORD dwVersionDefault );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwVersionDefault</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The version number to be assigned to the control. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can improve a control's binary initialization performance by using <unmanagedCodeEntityReference>ResetVersion</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ResetStockProps</unmanagedCodeEntityReference> to override <unmanagedCodeEntityReference>COleControl::OnResetState</unmanagedCodeEntityReference>. See the example at <legacyLink xlink:href="#colecontrol__resetstockprops">ResetStockProps</legacyLink>. For further information on optimizing initialization, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">ActiveX Controls: Optimization</legacyLink>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__scrollwindow">
        <!--6544ecfc-88eb-4087-9ac5-04adf8fe50aa-->
        <title>COleControl::ScrollWindow</title>
        <content>
            <para>Allows a windowless OLE object to scroll an area within its in-place active image on the screen.</para>
            <legacySyntax>void ScrollWindow(
    int xAmount, int yAmount, LPCRECT lpRect = NULL, LPCRECT lpClipRect = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>xAmount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount, in device units, of horizontal scrolling. This parameter must be a negative value to scroll to the left.</para>
                        </definition>
                        <definedTerm> <parameterReference>yAmount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount, in device units, of vertical scrolling. This parameter must be a negative value to scroll upward.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that specifies the portion of the OLE object's client area to scroll, in client coordinates of the containing window. If <parameterReference>lpRect</parameterReference> is <legacyBold>NULL</legacyBold>, the entire OLE object's client area is scrolled. </para>
                        </definition>
                        <definedTerm> <parameterReference>lpClipRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure that specifies the rectangle to clip to. Only pixels inside the rectangle are scrolled. Bits outside the rectangle are not affected even if they are in the <parameterReference>lpRect</parameterReference> rectangle. If <parameterReference>lpClipRect</parameterReference> is <legacyBold>NULL</legacyBold>, no clipping is performed on the scroll rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__selectfontobject">
        <!--6efb627a-b791-4a09-9056-1c9cc98533cd-->
        <title>COleControl::SelectFontObject</title>
        <content>
            <para>Selects a font into a device context.</para>
            <legacySyntax>CFont* SelectFontObject(
    CDC* pDC,
    CFontHolder&amp; fontHolder );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a device context object.</para>
                        </definition>
                        <definedTerm> <parameterReference>fontHolder</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to the <legacyLink xlink:href="728ab472-0c97-440d-889f-1324c6e1b6b8">CFontHolder</legacyLink> object representing the font to be selected.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the previously selected font. When the caller has finished all drawing operations that use                         <legacyItalic>fontHolder,</legacyItalic> it should reselect the previously selected font by passing it as a parameter to <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2#cdc__selectobject">CDC::SelectObject</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__selectstockfont">
        <!--2e1fbe3d-db30-4491-a52e-4deff0a70c7f-->
        <title>COleControl::SelectStockFont</title>
        <content>
            <para>Selects the stock Font property into a device context.</para>
            <legacySyntax>CFont* SelectStockFont( CDC* pDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The device context into which the font will be selected.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the previously selected <unmanagedCodeEntityReference>CFont</unmanagedCodeEntityReference> object. You should use <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2#cdc__selectobject">CDC::SelectObject</legacyLink> to select this font back into the device context when you are finished.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__serializeextent">
        <!--4573e344-4f90-4f50-9470-85534213481c-->
        <title>COleControl::SerializeExtent</title>
        <content>
            <para>Serializes or initializes the state of the display space allotted to the control.</para>
            <legacySyntax>void SerializeExtent( CArchive&amp; ar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>ar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object to serialize to or from.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can improve a control's binary persistence performance by using <unmanagedCodeEntityReference>SerializeExtent</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>SerializeStockProps</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>SerializeVersion</unmanagedCodeEntityReference> to override <legacyBold>COleControl::Serialize</legacyBold>. See the example below. For further information on optimizing initialization, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">ActiveX Controls: Optimization</legacyLink>. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCAxCtl#8</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__serializestockprops">
        <!--96dd06e4-6f41-42d7-ac24-0c1a06a22ab1-->
        <title>COleControl::SerializeStockProps</title>
        <content>
            <para>Serializes or initializes the state of the <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> stock properties: Appearance, BackColor, BorderStyle, Caption, Enabled, Font, ForeColor, and Text.</para>
            <legacySyntax>void SerializeStockProps( CArchive&amp; ar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>ar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object to serialize to or from. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For a description of stock properties, see <legacyLink xlink:href="8b98c8c5-5b69-4366-87bf-0e61e6668ecb">ActiveX Controls: Adding Stock Properties</legacyLink>. </para>
                    <para>You can improve a control's binary persistence performance by using <unmanagedCodeEntityReference>SerializeStockProps</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>SerializeExtent</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>SerializeVersion</unmanagedCodeEntityReference> to override <legacyBold>COleControl::Serialize</legacyBold>. For an example, see the code at <legacyLink xlink:href="#colecontrol__serializeextent">SerializeExtent</legacyLink>. For further information on optimizing initialization, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">ActiveX Controls: Optimization</legacyLink>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__serializeversion">
        <!--184a7e14-f022-45a4-bb8f-d7b5a96a8e88-->
        <title>COleControl::SerializeVersion</title>
        <content>
            <para>Serializes or initializes the state of a control's version information.</para>
            <legacySyntax>DWORD SerializeVersion(
    CArchive&amp; ar, DWORD dwVersionDefault, BOOL bConvert = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>ar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CArchive</unmanagedCodeEntityReference> object to serialize to or from.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwVersionDefault</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The current version number of the control. </para>
                        </definition>
                        <definedTerm> <parameterReference>bConvert</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether persistent data should be converted to the latest format when it is saved, or maintained in the same format it had when it was loaded. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The version number of the control. If the specified archive is loading, <unmanagedCodeEntityReference>SerializeVersion</unmanagedCodeEntityReference> returns the version loaded from that archive. Otherwise, it returns the currently loaded version.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can improve a control's binary persistence performance by using <unmanagedCodeEntityReference>SerializeVersion</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>SerializeExtent</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>SerializeStockProps</unmanagedCodeEntityReference> to override <legacyBold>COleControl::Serialize</legacyBold>. For an example, see the code at <legacyLink xlink:href="#colecontrol__serializeextent">SerializeExtent</legacyLink>. For further information on optimizing initialization, see <legacyLink xlink:href="8b11f26a-190d-469b-b594-5336094a0109">ActiveX Controls: Optimization</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setappearance">
        <!--68c9c2d0-0972-44e0-95fd-53efc2a7b905-->
        <title>COleControl::SetAppearance</title>
        <content>
            <para>Sets the stock Appearance property value of your control.</para>
            <legacySyntax>void SetAppearance ( short sAppearance );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>sAppearance</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A <legacyBold>short</legacyBold> ( <unmanagedCodeEntityReference>VT_I2</unmanagedCodeEntityReference>) value to be used for the appearance of your control. A value of zero sets the control's appearance to flat and a value of 1 sets the control's appearance to 3D.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more about stock properties, see <legacyLink xlink:href="b678a53c-0d9e-476f-8aa0-23b80baaba46">ActiveX Controls: Properties</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setbackcolor">
        <!--0a3cb201-1af1-46e1-878e-91b3654a558f-->
        <title>COleControl::SetBackColor</title>
        <content>
            <para>Sets the stock BackColor property value of your control.</para>
            <legacySyntax>void SetBackColor( OLE_COLOR dwBackColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dwBackColor</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>An <legacyBold>OLE_COLOR</legacyBold> value to be used for background drawing of your control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information on using this property and other related properties, see the article <legacyLink xlink:href="b678a53c-0d9e-476f-8aa0-23b80baaba46">ActiveX Controls: Properties</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setborderstyle">
        <!--fd21609b-5a4f-4c31-be0e-8442f6bd0c0c-->
        <title>COleControl::SetBorderStyle</title>
        <content>
            <para>Sets the stock BorderStyle property value of your control.</para>
            <legacySyntax>void SetBorderStyle( short sBorderStyle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>sBorderStyle</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new border style for the control; 0 indicates no border and 1 indicates a normal border.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control window will then be re-created and <unmanagedCodeEntityReference>OnBorderStyleChanged</unmanagedCodeEntityReference> called.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setcapture">
        <!--f5f27828-82b7-44e6-99ec-b715afa7f765-->
        <title>COleControl::SetCapture</title>
        <content>
            <para>Causes the control's container window to take possession of the mouse capture on the control's behalf.</para>
            <legacySyntax>CWnd* SetCapture();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <legacyBold>CWnd </legacyBold>window object that previously received mouse input. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the control is activated and windowless, this function causes the control's container window to take possession of the mouse capture, on the control's behalf. Otherwise, this function causes the control itself to take possession of the mouse capture (same as <unmanagedCodeEntityReference>CWnd::SetCapture</unmanagedCodeEntityReference>).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setcontrolsize">
        <!--87b0b3bc-12dd-4c10-98fa-32c67c7bcfa7-->
        <title>COleControl::SetControlSize</title>
        <content>
            <para>Sets the size of the OLE control window and notifies the container that the control site is changing.</para>
            <legacySyntax>BOOL SetControlSize(
    int cx, int cy );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new width of the control in pixels.</para>
                        </definition>
                        <definedTerm> <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new height of the control in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the call was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function should not be used in your control's constructor.</para>
                    <para>Note that all coordinates for control windows are relative to the upper-left corner of the control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setenabled">
        <!--32006327-c927-44b0-83cb-95f43e34dbd6-->
        <title>COleControl::SetEnabled</title>
        <content>
            <para>Sets the stock Enabled property value of your control.</para>
            <legacySyntax>void SetEnabled( BOOL bEnabled );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEnabled</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <legacyBold>TRUE</legacyBold> if the control is to be enabled; otherwise <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After setting this property, <legacyBold>OnEnabledChange</legacyBold> is called.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setfocus">
        <!--53088ba1-b7ba-497c-a199-65ccdf8f6875-->
        <title>COleControl::SetFocus</title>
        <content>
            <para>Causes the control's container window to take possession of the input focus on the control's behalf.</para>
            <legacySyntax>CWnd* SetFocus();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <legacyBold>CWnd </legacyBold>window object that previously had the input focus, or <legacyBold>NULL</legacyBold> if there is no such window.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the control is activated and windowless, this function causes the control's container window to take possession of the input focus, on the control's behalf. The input focus directs keyboard input to the container's window, and the container dispatches all subsequent keyboard messages to the OLE object that calls <unmanagedCodeEntityReference>SetFocus</unmanagedCodeEntityReference>. Any window that previously had the input focus loses it. </para>
                    <para>If the control is not windowless, this function causes the control itself to take possession of the input focus (same as <unmanagedCodeEntityReference>CWnd::SetFocus</unmanagedCodeEntityReference>). </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setfont">
        <!--b0994010-0ba1-4667-b7b9-82f542d1f3fa-->
        <title>COleControl::SetFont</title>
        <content>
            <para>Sets the stock Font property of your control.</para>
            <legacySyntax>void SetFont( LPFONTDISP pFontDisp );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pFontDisp</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a Font dispatch interface.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setforecolor">
        <!--9986049d-ef74-415c-ba36-4623ba8a6fd9-->
        <title>COleControl::SetForeColor</title>
        <content>
            <para>Sets the stock ForeColor property value of your control.</para>
            <legacySyntax>void SetForeColor( OLE_COLOR dwForeColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dwForeColor</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>An <legacyBold>OLE_COLOR</legacyBold> value to be used for foreground drawing of your control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information on using this property and other related properties, see the article <legacyLink xlink:href="b678a53c-0d9e-476f-8aa0-23b80baaba46">ActiveX Controls: Properties</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setinitialdataformats">
        <!--58488a91-8966-4c10-928c-190c370426ca-->
        <title>COleControl::SetInitialDataFormats</title>
        <content>
            <para>Called by the framework to initialize the list of data formats supported by the control.</para>
            <legacySyntax>virtual void SetInitialDataFormats();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation specifies two formats: <unmanagedCodeEntityReference>CF_METAFILEPICT</unmanagedCodeEntityReference> and the persistent property set.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setinitialsize">
        <!--167fa13f-4ae3-43b7-b7bc-a6b69965cf3f-->
        <title>COleControl::SetInitialSize</title>
        <content>
            <para>Sets the size of an OLE control when first displayed in a container.</para>
            <legacySyntax>void SetInitialSize(
    int cx,
    int cy );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initial width of the OLE control in pixels.</para>
                        </definition>
                        <definedTerm> <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The initial height of the OLE control in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function in your constructor to set the initial size of your control. The initial size is measured in device units, or pixels. It is recommended that this call be made in your control's constructor.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setmodifiedflag">
        <!--b7cb244f-921e-4650-87d2-3864bef3e681-->
        <title>COleControl::SetModifiedFlag</title>
        <content>
            <para>Changes the modified state of a control.</para>
            <legacySyntax>void SetModifiedFlag( BOOL bModified = TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bModified</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new value for the control's modified flag. <legacyBold>TRUE</legacyBold> indicates that the control's state has been modified; <legacyBold>FALSE</legacyBold> indicates that the control's state has just been saved.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function whenever a change occurs that would affect your control's persistent state. For example, if the value of a persistent property changes, call this function with <parameterReference>bModified</parameterReference> <legacyBold>TRUE</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setnotpermitted">
        <!--eb440f17-cee6-4f72-ab3f-edfb9a685075-->
        <title>COleControl::SetNotPermitted</title>
        <content>
            <para>Indicates that an edit request has failed.</para>
            <legacySyntax>void SetNotPermitted();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function when <unmanagedCodeEntityReference>BoundPropertyRequestEdit</unmanagedCodeEntityReference> fails. This function throws an exception of type <legacyBold>COleDispScodeException</legacyBold> to indicate that the set operation was not permitted.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setnotsupported">
        <!--910ecffb-d7d6-4d5a-b809-716d4ed1a1ee-->
        <title>COleControl::SetNotSupported</title>
        <content>
            <para>Prevents modification to a control's property value by the user.</para>
            <legacySyntax>void SetNotSupported();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function in place of the Set function of any property where modification of the property value by the control's user is not supported. One example would be a property that is read only.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__setrectincontainer">
        <!--443f3114-b5c8-4279-9baf-cb3735bd8ee2-->
        <title>COleControl::SetRectInContainer</title>
        <content>
            <para>Sets the coordinates of the control's rectangle relative to the container, expressed in device units.</para>
            <legacySyntax>BOOL SetRectInContainer( LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a rectangle containing the control's new coordinates relative to the container.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the call was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the control is open, it is resized; otherwise the container's <legacyBold>OnPosRectChanged</legacyBold> function is called.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__settext">
        <!--a1c7ecee-a274-435d-b967-ca4d5d2388c3-->
        <title>COleControl::SetText</title>
        <content>
            <para>Sets the value of your control's stock Caption or Text property.</para>
            <legacySyntax>void SetText( LPCTSTR pszText );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pszText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a character string.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Note that the stock Caption and Text properties are both mapped to the same value. This means that any changes made to either property will automatically change both properties. In general, a control should support either the stock Caption or Text property, but not both.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__throwerror">
        <!--5177e2a8-a065-414f-92db-55fdad35875a-->
        <title>COleControl::ThrowError</title>
        <content>
            <para>Signals the occurrence of an error in your control.</para>
            <legacySyntax>void ThrowError(
    SCODE sc,
    UINT nDescriptionID,
    UINT nHelpID = -1 );

void ThrowError(
    SCODE sc,
    LPCTSTR pszDescription = NULL,
    UINT nHelpID = 0 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>sc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The status code value to be reported. For a complete list of possible codes, see the article <legacyLink xlink:href="e9e34abb-8e2d-461e-bb9c-a1aec5dcecbd">ActiveX Controls: Advanced Topics</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nDescriptionID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The string resource ID of the exception to be reported.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHelpID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The help ID of the topic to be reported on.</para>
                        </definition>
                        <definedTerm> <parameterReference>pszDescription</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A string containing an explanation of the exception to be reported.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function should only be called from within a Get or Set function for an OLE property, or the implementation of an OLE automation method. If you need to signal errors that occur at other times, you should fire the stock Error event.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__transformcoords">
        <!--c7c162e5-ca40-494c-9cc2-5a85c272385a-->
        <title>COleControl::TransformCoords</title>
        <content>
            <para>Transforms coordinate values between <legacyBold>HIMETRIC</legacyBold> units and the container's native units.</para>
            <legacySyntax>void TransformCoords(
    POINTL* lpptlHimetric,
    POINTF* lpptfContainer,
    DWORD flags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpptlHimetric</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>POINTL</legacyBold> structure containing coordinates in <legacyBold>HIMETRIC</legacyBold> units.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpptfContainer</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>POINTF</legacyBold> structure containing coordinates in the container's unit size.</para>
                        </definition>
                        <definedTerm> <parameterReference>flags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A combination of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>XFORMCOORDS_POSITION</legacyBold>   A position in the container.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>XFORMCOORDS_SIZE</legacyBold>   A size in the container.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>XFORMCOORDS_HIMETRICTOCONTAINER</legacyBold>   Transform <legacyBold>HIMETRIC</legacyBold> units to the container's units.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>XFORMCOORDS_CONTAINERTOHIMETRIC</legacyBold>   Transform the container's units to <legacyBold>HIMETRIC</legacyBold> units.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The first two flags, <legacyBold>XFORMCOORDS_POSITION</legacyBold> and <legacyBold>XFORMCOORDS_SIZE</legacyBold>, indicate whether the coordinates should be treated as a position or a size. The remaining two flags indicate the direction of transformation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__translatecolor">
        <!--d798ac45-0a6f-454f-a5b0-d686cac3bb96-->
        <title>COleControl::TranslateColor</title>
        <content>
            <para>Converts a color value from the <legacyBold>OLE_COLOR</legacyBold> data type to the                 <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                </externalLink> data type.</para>
            <legacySyntax>COLORREF TranslateColor(
    OLE_COLOR clrColor,
    HPALETTE hpal = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>clrColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyBold>OLE_COLOR</legacyBold> data type. For more information, see the Windows                                 <externalLink> <linkText>OleTranslateColor</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms694353</linkUri>
                                </externalLink> function.</para>
                        </definition>
                        <definedTerm> <parameterReference>hpal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to an optional palette; can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An RGB (red, green, blue) 32-bit color value that defines the solid color closest to the <parameterReference>clrColor</parameterReference> value that the device can represent.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is useful to translate the stock ForeColor and BackColor properties to <legacyBold>COLORREF</legacyBold> types used by <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> member functions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__willambientsbevalidduringload">
        <!--5c820021-428e-44e7-946e-5f7538dc6912-->
        <title>COleControl::WillAmbientsBeValidDuringLoad</title>
        <content>
            <para>Determines whether your control should use the values of ambient properties as default values, when it is subsequently loaded from its persistent state.</para>
            <legacySyntax>BOOL WillAmbientsBeValidDuringLoad();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero indicates that ambient properties will be valid; otherwise ambient properties will not be valid.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In some containers, your control may not have access to its ambient properties during the initial call to the override of <unmanagedCodeEntityReference>COleControl::DoPropExchange</unmanagedCodeEntityReference>. This is the case if the container calls                         <externalLink> <linkText>IPersistStreamInit::Load</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680730</linkUri>
                        </externalLink> or                         <externalLink> <linkText>IPersistStorage::Load</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680557</linkUri>
                        </externalLink> prior to calling                         <externalLink> <linkText>IOleObject::SetClientSite</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms684013</linkUri>
                        </externalLink> (that is, if it does not honor the <legacyBold>OLEMISC_SETCLIENTSITEFIRST</legacyBold> status bit).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrol__windowproc">
        <!--6483f351-d6a6-42b6-8482-a33d4fdb7fb5-->
        <title>COleControl::WindowProc</title>
        <content>
            <para>Provides a Windows procedure for a <unmanagedCodeEntityReference>COleControl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual LRESULT WindowProc(
    UINT message,
    WPARAM wParam,
    LPARAM lParam );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>message</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the Windows message to be processed. </para>
                        </definition>
                        <definedTerm> <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Provides additional information used in processing the message. The parameter value depends on the message.</para>
                        </definition>
                        <definedTerm> <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Provides additional information used in processing the message. The parameter value depends on the message.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value of the message dispatched.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this function to dispatch specific messages through the control's message map.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample CIRC3</legacyLink> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample TESTHELP</legacyLink> <link xlink:href="e9972872-8e6b-4550-905e-d36a274d64dc">COlePropertyPage</link> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="728ab472-0c97-440d-889f-1324c6e1b6b8">CFontHolder</link> <link xlink:href="a4f59775-704a-41dd-b5bd-2e531c95127a">CPictureHolder</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



