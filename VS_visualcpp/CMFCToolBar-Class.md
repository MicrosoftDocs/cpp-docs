---
title: "CMFCToolBar Class"
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
ms.assetid: e7679c01-fb94-44c0-98c6-3af955292fb5
caps.latest.revision: 42
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
# CMFCToolBar Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>The <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class resembles <link xlink:href="e868da26-5e07-4607-9651-e2f863ad9059">CToolBar</link>, but provides additional support for user interface features. These include flat toolbars, toolbars with hot images, large icons, pager buttons, locked toolbars, rebar controls, text under images, background images, and tabbed toolbars. The <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class also contains built-in support for user customization of toolbars and menus, drag-and-drop between toolbars and menus, combo box buttons, edit box buttons, color pickers, and roll-up buttons.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CMFCToolBar : public CMFCBaseToolBar</legacySyntax>
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
                                    <para> <unmanagedCodeEntityReference>CMFCToolBar::CMFCToolBar</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Default constructor.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMFCToolBar::~CMFCToolBar</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destructor.</para>
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
                                    <para> <link xlink:href="#cmfctoolbar__addbasiccommand">CMFCToolBar::AddBasicCommand</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds a menu command to the list of commands that are always displayed when a user opens a menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__addcommandusage">CMFCToolBar::AddCommandUsage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Increments by one the counter that is associated with the given command.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__addtoolbarforimagecollection">CMFCToolBar::AddToolBarForImageCollection</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds images from the user interface resources to the collection of images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__adjustlayout">CMFCToolBar::AdjustLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Recalculates the size and position of a toolbar. (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__adjustlayout">CBasePane::AdjustLayout</link>).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__adjustsize">CMFCToolBar::AdjustSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Recalculates the size of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__allowchangetextlabels">CMFCToolBar::AllowChangeTextLabels</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether text labels can be shown under images on the toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__aretextlabels">CMFCToolBar::AreTextLabels</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether text labels under images are currently displayed on the toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__autograyinactiveimages">CMFCToolBar::AutoGrayInactiveImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enable or disables the automatic generation of inactive button images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__buttontoindex">CMFCToolBar::ButtonToIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of a specified <link xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd">CMFCToolBarButton</link> object in this toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__calcfixedlayout">CMFCToolBar::CalcFixedLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calculates the horizontal size of the toolbar. (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__calcfixedlayout">CBasePane::CalcFixedLayout</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__calcsize">CMFCToolBar::CalcSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework as part of the layout calculation process. (Overrides <link xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5#cpane__calcsize">CPane::CalcSize</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__canhandlesiblings">CMFCToolBar::CanHandleSiblings</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar and its sibling are positioned on the same pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__cleanupimages">CMFCToolBar::CleanUpImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Frees the system resources allocated for toolbar images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__cleanuplockedimages">CMFCToolBar::CleanUpLockedImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Frees the system resources allocated for locked toolbar images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__canbeclosed">CMFCToolBar::CanBeClosed</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether a user can close the toolbar. (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__canbeclosed">CBasePane::CanBeClosed</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__canberestored">CMFCToolBar::CanBeRestored</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the system can restore a toolbar to its original state after customization.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__canfocus">CMFCToolBar::CanFocus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the pane can receive focus. (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__canfocus">CBasePane::CanFocus</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__canhandlesiblings">CMFCToolBar::CanHandleSiblings</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar and its sibling are positioned on the same pane.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__commandtoindex">CMFCToolBar::CommandToIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of the button in the toolbar with a specified command ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__create">CMFCToolBar::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__createex">CMFCToolBar::CreateEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object that uses additional style options, such as large icons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__deactivate">CMFCToolBar::Deactivate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deactivates the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__enablecustomizebutton">CMFCToolBar::EnableCustomizeButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the <ui>Add or Remove Buttons </ui>button that appears on the end of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__enabledocking">CMFCToolBar::EnableDocking</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables docking of the pane to the main frame. (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__enabledocking">CBasePane::EnableDocking</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__enablelargeicons">CMFCToolBar::EnableLargeIcons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables large icons on toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__enablequickcustomization">CMFCToolBar::EnableQuickCustomization</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables the quick customization of toolbars so that the user can press the <ui>Alt</ui> key and drag a button to a new location.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__enablereflections">CMFCToolBar::EnableReflections</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables command reflection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__enabletextlabels">CMFCToolBar::EnableTextLabels</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables text labels under toolbar button images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__fromhandlepermanent">CMFCToolBar::FromHandlePermanent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object that contains the given window handle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getallbuttons">CMFCToolBar::GetAllButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a read-only list of buttons in a toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getalltoolbars">CMFCToolBar::GetAllToolbars</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a read-only list of all toolbars in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getbasiccommands">CMFCToolBar::GetBasicCommands</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a read-only list of the basic commands defined in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getbutton">CMFCToolBar::GetButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the <unmanagedCodeEntityReference>CMFCToolBarButton</unmanagedCodeEntityReference> object that has a specified toolbar button index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getbuttoninfo">CMFCToolBar::GetButtonInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the command ID, style, and image index of the button at a specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getbuttonsize">CMFCToolBar::GetButtonSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the dimensions of each button on the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getbuttonstyle">CMFCToolBar::GetButtonStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current style of the toolbar button that is located at the specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getbuttontext">CMFCToolBar::GetButtonText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the text label of a button that has a specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getcoldimages">CMFCToolBar::GetColdImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of cold toolbar button images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getcolumnwidth">CMFCToolBar::GetColumnWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the width of the toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getcommandbuttons">CMFCToolBar::GetCommandButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a list of buttons that have a specified command ID from all toolbars in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getcount">CMFCToolBar::GetCount</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the number of buttons and separators on the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getcustomizebutton">CMFCToolBar::GetCustomizeButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the <unmanagedCodeEntityReference>CMFCCustomizeButton</unmanagedCodeEntityReference> object that is associated with the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getdefaultimage">CMFCToolBar::GetDefaultImage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of the default image for a toolbar button with a specified command ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getdisabledimages">CMFCToolBar::GetDisabledImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of images that are used for disabled toolbar buttons in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getdisabledmenuimages">CMFCToolBar::GetDisabledMenuImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of images that are used for disabled menu buttons in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getdroppeddownmenu">CMFCToolBar::GetDroppedDownMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the menu button object that is currently displaying its sub-menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getgraydisabledbuttons">CMFCToolBar::GetGrayDisabledButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the images of disabled buttons are dimmed versions of the regular button images, or taken from the collection of disabled button images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__gethighlightedbutton">CMFCToolBar::GetHighlightedButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the toolbar button that is currently highlighted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__gethotborder">CMFCToolBar::GetHotBorder</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar buttons are hot-tracked.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__gethottextcolor">CMFCToolBar::GetHotTextColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the text color of the highlighted toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__gethwndlastfocus">CMFCToolBar::GetHwndLastFocus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a handle to the window that had the input focus just before the toolbar did.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getignoresettext">CMFCToolBar::GetIgnoreSetText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether calls to set button labels are ignored.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getimagesize">CMFCToolBar::GetImageSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current size of toolbar button images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getimages">CMFCToolBar::GetImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of default button images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getimagesoffset">CMFCToolBar::GetImagesOffset</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index offset used to find the toolbar button images for this toolbar in the global list of toolbar button images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getinvalidateitemrect">CMFCToolBar::GetInvalidateItemRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the region of the client area that must be redrawn for the button at the given index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getitemid">CMFCToolBar::GetItemID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the command ID of the toolbar button at a specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getitemrect">CMFCToolBar::GetItemRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the bounding rectangle of the button at a specified index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlargecoldimages">CMFCToolBar::GetLargeColdImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of large cold toolbar button images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlargedisabledimages">CMFCToolBar::GetLargeDisabledImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of large disabled toolbar button images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlargeimages">CMFCToolBar::GetLargeImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of large toolbar button images in the application. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlockedcoldimages">CMFCToolBar::GetLockedColdImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of locked cold images in the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlockeddisabledimages">CMFCToolBar::GetLockedDisabledImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of locked disabled images in the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlockedimages">CMFCToolBar::GetLockedImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of locked button images in the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlockedimagesize">CMFCToolBar::GetLockedImageSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the default size of locked toolbar images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getlockedmenuimages">CMFCToolBar::GetLockedMenuImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of locked toolbar menu images in the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getmenubuttonsize">CMFCToolBar::GetMenuButtonSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the size of menu buttons in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getmenuimagesize">CMFCToolBar::GetMenuImageSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the size of menu button images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getmenuimages">CMFCToolBar::GetMenuImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of menu button images in the application. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getorigbuttons">CMFCToolBar::GetOrigButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the collection of non-customized buttons of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getorigresetbuttons">CMFCToolBar::GetOrigResetButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the collection of non-customized reset buttons of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getresourceid">CMFCToolBar::GetResourceID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the resource ID of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getroutecommandsviaframe">CMFCToolBar::GetRouteCommandsViaFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines which object, the parent frame or the owner, sends commands to the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getrowheight">CMFCToolBar::GetRowHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the height of toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getshowtooltips">CMFCToolBar::GetShowTooltips</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether tool tips are displayed for toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getsiblingtoolbar">CMFCToolBar::GetSiblingToolBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the sibling of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__getuserimages">CMFCToolBar::GetUserImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the collection of user-defined toolbar button images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__hittest">CMFCToolBar::HitTest</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of the toolbar button that is located at the specified position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__insertbutton">CMFCToolBar::InsertButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a button into the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__insertseparator">CMFCToolBar::InsertSeparator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inserts a separator into the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__invalidatebutton">CMFCToolBar::InvalidateButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Invalidates the client area of the toolbar button that exists at the provided index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isaddremovequickcustomize">CMFCToolBar::IsAddRemoveQuickCustomize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a user can add or remove toolbar buttons by using the <ui>Customize</ui> menu option.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isaltcustomizemode">CMFCToolBar::IsAltCustomizeMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether <newTerm>quick customization</newTerm> is being used to drag a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isautograyinactiveimages">CMFCToolBar::IsAutoGrayInactiveImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the automatic generation of inactive (non-highlighted) button images is enabled.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isbasiccommand">CMFCToolBar::IsBasicCommand</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a command is on the list of basic commands.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isbuttonextrasizeavailable">CMFCToolBar::IsButtonExtraSizeAvailable</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar can display buttons that have extended borders.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isbuttonhighlighted">CMFCToolBar::IsButtonHighlighted</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a button on the toolbar is highlighted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__iscommandpermitted">CMFCToolBar::IsCommandPermitted</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a command is permitted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__iscommandrarelyused">CMFCToolBar::IsCommandRarelyUsed</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a command is rarely used (see <link xlink:href="#cmfctoolbar__setcommandusageoptions">SetCommandUsageOptions</link>).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__iscustomizemode">CMFCToolBar::IsCustomizeMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the toolbar framework is in customization mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isdragbutton">CMFCToolBar::IsDragButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether a toolbar button is being dragged.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isexistcustomizebutton">CMFCToolBar::IsExistCustomizeButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar contains the <ui>Customize</ui> button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isfloating">CMFCToolBar::IsFloating</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar is floating.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__islargeicons">CMFCToolBar::IsLargeIcons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether toolbars in the application currently display large icons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__islastcommandfrombutton">CMFCToolBar::IsLastCommandFromButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the most recently executed command was sent from the specified toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__islocked">CMFCToolBar::IsLocked</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar is locked.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isonerowwithsibling">CMFCToolBar::IsOneRowWithSibling</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar and its sibling toolbar are positioned on the same row.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__isuserdefined">CMFCToolBar::IsUserDefined</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the toolbar is user-defined.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__loadbitmap">CMFCToolBar::LoadBitmap</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads toolbar images from application resources.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__loadbitmapex">CMFCToolBar::LoadBitmapEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads toolbar images from application resources. Includes large images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__loadparameters">CMFCToolBar::LoadParameters</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads global toolbar options from the Windows registry.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__loadstate">CMFCToolBar::LoadState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads the toolbar state information from the Windows registry. (Overrides <link xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5#cpane__loadstate">CPane::LoadState</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__loadtoolbar">CMFCToolBar::LoadToolBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads the toolbar from application resources.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__loadtoolbarex">CMFCToolBar::LoadToolBarEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads the toolbar from application resources by using the <unmanagedCodeEntityReference>CMFCToolBarInfo</unmanagedCodeEntityReference> helper class to enable the application to use large images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__onchangehot">CMFCToolBar::OnChangeHot</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when a user selects a button on the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__onfillbackground">CMFCToolBar::OnFillBackground</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework from <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__dopaint">CBasePane::DoPaint</link> to fill the toolbar background.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__onreset">CMFCToolBar::OnReset</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Restores the toolbar to its original state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__onsetaccdata">CMFCToolBar::OnSetAccData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para> (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__onsetaccdata">CBasePane::OnSetAccData</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__onsetdefaultbuttontext">CMFCToolBar::OnSetDefaultButtonText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Restores the text of a toolbar button to its default state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMFCToolBar::OnUpdateCmdUI</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Used internally.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__removeallbuttons">CMFCToolBar::RemoveAllButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes all buttons from the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__removebutton">CMFCToolBar::RemoveButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Removes the button with the specified index from the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__removestatefromregistry">CMFCToolBar::RemoveStateFromRegistry</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes the state information for the toolbar from the Windows registry.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__replacebutton">CMFCToolBar::ReplaceButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces a toolbar button with another toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__resetall">CMFCToolBar::ResetAll</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Restores all toolbars to their original states.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__resetallimages">CMFCToolBar::ResetAllImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Clears all toolbar image collections in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__restoreoriginalstate">CMFCToolBar::RestoreOriginalstate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Restores the original state of a toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__savestate">CMFCToolBar::SaveState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Saves the state information for the toolbar in the Windows registry. (Overrides <link xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5#cpane__savestate">CPane::SaveState</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>CMFCToolBar::Serialize</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para> (Overrides <unmanagedCodeEntityReference>CBasePane::Serialize</unmanagedCodeEntityReference>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setbasiccommands">CMFCToolBar::SetBasicCommands</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the list of commands that are always displayed when a user opens a menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setbuttoninfo">CMFCToolBar::SetButtonInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the command ID, style, and image ID of a toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setbuttonstyle">CMFCToolBar::SetButtonStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the style of the toolbar button at the given index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setbuttontext">CMFCToolBar::SetButtonText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text label of a toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setbuttons">CMFCToolBar::SetButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the buttons for the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setcommandusageoptions">CMFCToolBar::SetCommandUsageOptions</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies when rarely used commands do not appear in the menu of the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setcustomizemode">CMFCToolBar::SetCustomizeMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables or disables customization mode for all toolbars in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setgraydisabledbuttons">CMFCToolBar::SetGrayDisabledButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the disabled buttons on the toolbar are dimmed or if disabled images are used for the disabled buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setheight">CMFCToolBar::SetHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the height of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__sethotborder">CMFCToolBar::SetHotBorder</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether toolbar buttons are hot-tracked.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__sethottextcolor">CMFCToolBar::SetHotTextColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text color for hot toolbar buttons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setlargeicons">CMFCToolBar::SetLargeIcons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether toolbar buttons display large icons.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setlockedsizes">CMFCToolBar::SetLockedSizes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the sizes of locked buttons and locked images on the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setmenusizes">CMFCToolBar::SetMenuSizes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the size of toolbar menu buttons and their images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setnonpermittedcommands">CMFCToolBar::SetNonPermittedCommands</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the list of commands that cannot be executed by the user.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setonerowwithsibling">CMFCToolBar::SetOneRowWithSibling</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Positions the toolbar and its sibling on the same row.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setpermament">CMFCToolBar::SetPermament</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether a user can close the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setroutecommandsviaframe">CMFCToolBar::SetRouteCommandsViaFrame</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the parent frame or the owner sends commands to the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setshowtooltips">CMFCToolBar::SetShowTooltips</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the framework displays tool tips.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the sibling of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setsizes">CMFCToolBar::SetSizes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the sizes of buttons and images on all toolbars.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__settoolbarbtntext">CMFCToolBar::SetToolBarBtnText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies properties of a button on the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__settworowswithsibling">CMFCToolBar::SetTwoRowsWithSibling</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Positions the toolbar and its sibling on separate rows.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__setuserimages">CMFCToolBar::SetUserImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the collection of user-defined images in the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__stretchpane">CMFCToolBar::StretchPane</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Stretches the toolbar vertically or horizontally. (Overrides <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__stretchpane">CBasePane::StretchPane</link>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__translatechar">CMFCToolBar::TranslateChar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Executes a button command if the specified key code corresponds to a valid keyboard shortcut.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__updatebutton">CMFCToolBar::UpdateButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Updates the state of the specified button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__wraptoolbar">CMFCToolBar::WrapToolBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Repositions toolbar buttons within the given dimensions.</para>
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
                                    <para> <link xlink:href="#cmfctoolbar__allowshowonlist">CMFCToolBar::AllowShowOnList</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the toolbar is displayed in the list on the <ui>Toolbars</ui> pane of the <ui>Customize</ui> dialog box.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__calcmaxbuttonheight">CMFCToolBar::CalcMaxButtonHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calculates the maximum height of a button in the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__dopaint">CMFCToolBar::DoPaint</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Repaints a toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__drawbutton">CMFCToolBar::DrawButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Repaints a toolbar button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__drawseparator">CMFCToolBar::DrawSeparator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Repaints a separator on a toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__onusertooltip">CMFCToolBar::OnUserToolTip</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework when the tooltip for a button is about to be displayed.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Data Members</title>
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
                                    <para> <link xlink:href="#cmfctoolbar__m_bdontscaleimages">CMFCToolBar::m_bDontScaleImages</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether to scale or not toolbar images in high DPI mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfctoolbar__m_dbllargeimageratio">CMFCToolBar::m_dblLargeImageRatio</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the ratio between the dimension (height or width) of large images and the dimension of regular images.</para>
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
            <para>To incorporate a <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object into your application, follow these steps:</para>
            <list class="ordered">
                <listItem>
                    <para>Add a <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object to the main frame window.</para>
                </listItem>
                <listItem>
                    <para>When you process the <unmanagedCodeEntityReference>WM_CREATE</unmanagedCodeEntityReference> message for the main frame window, call either <link xlink:href="#cmfctoolbar__create">CMFCToolBar::Create</link> or <link xlink:href="#cmfctoolbar__createex">CMFCToolBar::CreateEx</link> to create the toolbar and specify its style.</para>
                </listItem>
                <listItem>
                    <para>Call <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__enabledocking">CBasePane::EnableDocking</link> to specify the docking style.</para>
                </listItem>
            </list>
            <para>To insert a special button, such as a combo box or drop-down toolbar, reserve a dummy button in the parent resource, and replace the dummy button at runtime by using <link xlink:href="#cmfctoolbar__replacebutton">CMFCToolBar::ReplaceButton</link>. For more information, see <link xlink:href="8fc94bdf-0da7-45d9-8bc4-52b7b1edf205">How to Put Controls on Toolbars</link>.</para>
            <para> <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> is the base class for the MFC Library classes <link xlink:href="8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8">CMFCMenuBar</link>, <link xlink:href="4c93c459-7f70-4240-8c63-280bb811e374">CMFCPopupMenuBar</link>, and <link xlink:href="78818ec5-83ce-42fa-a0d4-2d9d5ecc8770">CMFCDropDownToolBar</link>.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <description>
            <content>
                <para>The following example demonstrates how to use various methods in the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class. The example shows how to set the text of the window label of the tool bar, set the borders, set the style of the pane, and enable the <ui>Add or Remove Buttons</ui> button that appears on the end of the toolbar. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">IE Demo sample</legacyLink>.</para>
            </content>
        </description>
        <codeReference>NVC_MFC_IEDemo#6,8</codeReference>
    </codeExample>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> afxtoolbar.h</para>
        </content>
    </requirements>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82">CBasePane</legacyLink>
            </para>
            <para> <legacyLink xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5">CPane</legacyLink>
            </para>
            <para> <legacyLink xlink:href="5d79206d-55e4-46f8-b1b8-042e34d7f9da">CMFCBaseToolBar</legacyLink>
            </para>
            <para> <legacyLink xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</legacyLink>
            </para>
        </content>
    </section>
    <section address="cmfctoolbar__addbasiccommand">
        <!--1a484ca0-4a4e-4795-af28-9235dbcb903c-->
        <title>CMFCToolBar::AddBasicCommand</title>
        <content>
            <para>Adds a menu command to the list of commands that are always displayed when a user opens a menu.</para>
            <legacySyntax>static void __stdcall AddBasicCommand( UINT uiCmd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command to add.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A basic command is always displayed when the menu is opened. This method is meaningful when the user chooses to view recently used commands.</para>
                    <para>Use the <link xlink:href="#cmfctoolbar__setbasiccommands">CMFCToolBar::SetBasicCommands</link> method to set the list of commands that are always displayed when a user opens a menu. Use the <link xlink:href="#cmfctoolbar__getbasiccommands">GetBasicCommands</link> method to retrieve the list of basic commands that is used by your application.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__addcommandusage">
        <!--7460e422-3008-49b6-8d12-1061c453b184-->
        <title>CMFCToolBar::AddCommandUsage</title>
        <content>
            <para>Increments by one the counter that is associated with the given command.</para>
            <legacySyntax>static void __stdcall AddCommandUsage( UINT uiCommand );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCommand</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command counter to increment.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when the user selects a menu item. </para>
                    <para>The framework uses command counters to display recently used menu items.</para>
                    <para>This method increments the command counter by using the <link xlink:href="9c33b783-37c0-43ea-9f31-3c75e246c841#cmfccmdusagecount__addcmd">CMFCCmdUsageCount::AddCmd</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__addtoolbarforimagecollection">
        <!--621861a2-fd87-4df2-a1f1-7e907537bea2-->
        <title>CMFCToolBar::AddToolBarForImageCollection</title>
        <content>
            <para>Adds images from the user interface resources to the collection of images in the application.</para>
            <legacySyntax>static BOOL __stdcall AddToolBarForImageCollection(
    UINT uiResID,
    UINT uiBmpResID=0,
    UINT uiColdResID=0,
    UINT uiMenuResID=0,
    UINT uiDisabledResID=0,
    UINT uiMenuDisabledResID=0 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of a toolbar with images to load.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiBmpResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of a bitmap with toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiColdResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of a bitmap with "cold" toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of a bitmap with menu images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiDisabledResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of a bitmap with disabled toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuDisabledResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of a bitmap with disabled menu images.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method succeeds; <languageKeyword>FALSE</languageKeyword> if <parameterReference>uiResID</parameterReference> or <parameterReference>uiBmpResID</parameterReference> do not specify valid resources, or another error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to load a bitmap with toolbar images and add it to the collection of toolbar images. This method creates a temporary toolbar object and calls <link xlink:href="#cmfctoolbar__loadtoolbar">CMFCToolBar::LoadToolBar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__adjustlayout">
        <!--ecaabce2-ff27-49e6-8343-26d1b642e4cf-->
        <title>CMFCToolBar::AdjustLayout</title>
        <content>
            <para>Recalculates the size and position of a toolbar.</para>
            <legacySyntax>virtual void AdjustLayout();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method when the toolbar has been created to recalculate its size and position.</para>
                    <para>The framework calls this method every time that the layout of the toolbar must be changed. For example, the layout must change when the user moves another control bar, resizes an application window, or customizes the toolbar.</para>
                    <para>Override this method to provide your own dynamic layout in classes that you derive from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__adjustsize">
        <!--0d157738-fe0d-4e90-b12a-c6cf7a0529fa-->
        <title>CMFCToolBar::AdjustSize</title>
        <content>
            <para>Recalculates the size of the toolbar.</para>
            <legacySyntax>void AdjustSize();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method makes sure that the toolbar fits in the bounds of the parent frame. This method does nothing if the toolbar has no parent frame.</para>
                    <para>The <link xlink:href="#cmfctoolbar__adjustlayout">CMFCToolBar::AdjustLayout</link> method calls this method to recalculate the size if the parent of the toolbar is not a <unmanagedCodeEntityReference>CMFCReBar</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__allowchangetextlabels">
        <!--7e5d0e7d-0428-46a0-ac3c-ce270724c390-->
        <title>CMFCToolBar::AllowChangeTextLabels</title>
        <content>
            <para>Specifies whether text labels can be shown under images on the toolbar buttons.</para>
            <legacySyntax>virtual BOOL AllowChangeTextLabels() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if it is allowed to display text labels below images; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is called by the customization dialog box to determine whether to enable a <ui>Show text labels</ui> check-box on the <ui>Toolbars</ui> page for the selected toolbar.</para>
                    <para>The default implementation returns <languageKeyword>TRUE</languageKeyword>.</para>
                    <para>Override this method in an object derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> and return <languageKeyword>FALSE</languageKeyword> when you do not want the user to decide whether text labels are displayed on toolbar buttons under the images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__allowshowonlist">
        <!--6e56df84-4881-4fc7-99b4-7c26b96517fb-->
        <title>CMFCToolBar::AllowShowOnList</title>
        <content>
            <para>Determines whether the toolbar is displayed in the list of toolbars on the <ui>Toolbars</ui> pane of the <ui>Customize</ui> dialog box.</para>
            <legacySyntax>virtual BOOL AllowShowOnList() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar object can be displayed in the list box on the toolbar customization page; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is called by the framework to determine whether the list on the toolbar customization page should include a particular object derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link>.</para>
                    <para>The default implementation always returns <languageKeyword>TRUE</languageKeyword>. Override this method when you do not want a toolbar to appear in the toolbars list in the customization dialog box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__aretextlabels">
        <!--926d2307-902a-48ea-82eb-0cb0dfce0c65-->
        <title>CMFCToolBar::AreTextLabels</title>
        <content>
            <para>Specifies whether text labels under images are currently displayed on the toolbar buttons.</para>
            <legacySyntax>BOOL AreTextLabels() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar buttons display text labels below images; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <link xlink:href="#cmfctoolbar__enabletextlabels">EnableTextLabels</link> to specify whether the text is displayed. The default value is <languageKeyword>FALSE</languageKeyword>. Call <link xlink:href="#cmfctoolbar__allowchangetextlabels">CMFCToolBar::AllowChangeTextLabels</link> to specify whether the user can change this setting in the customization dialog box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__autograyinactiveimages">
        <!--6ef05d1d-2dc1-48d9-bf15-2ebe92477952-->
        <title>CMFCToolBar::AutoGrayInactiveImages</title>
        <content>
            <para>Enable or disables the automatic generation of inactive button images.</para>
            <legacySyntax>static void AutoGrayInactiveImages(
    BOOL bEnable=TRUE,
    int nGrayImagePercentage=0,
    BOOL bRedrawAllToolbars=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether to dim inactive images. If this parameter is <languageKeyword>TRUE</languageKeyword>, inactive images are dimmed. Otherwise, inactive images are not dimmed.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nGrayImagePercentage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the luminance percentage for inactive images. If <parameterReference>bEnable</parameterReference> is <languageKeyword>FALSE</languageKeyword>, this value is ignored.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bRedrawAllToolbars</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether to redraw all toolbars in the application. If this parameter is <languageKeyword>TRUE</languageKeyword>, this method redraws all toolbars.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>bEnable</parameterReference> is <languageKeyword>TRUE</languageKeyword>, the framework uses <parameterReference>nGrayImagePercentage</parameterReference> to generate inactive images from the regular images. Otherwise, you must provide the set of inactive images by using the <link xlink:href="#cmfctoolbar__getcoldimages">CMFCToolBar::GetColdImages</link> method. By default, this option is disabled.</para>
                    <para>For more information about the <parameterReference>nGrayImagePercentage</parameterReference> parameter, see <link xlink:href="d4e50518-9ffc-406f-9996-f79e5cd38155#cmfctoolbarimages__grayimages">CMFCToolBarImages::GrayImages</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__buttontoindex">
        <!--15471f19-7a31-4144-9c6c-c8b54cf18bc2-->
        <title>CMFCToolBar::ButtonToIndex</title>
        <content>
            <para>Returns the index of a specified <link xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd">CMFCToolBarButton</link> object in this toolbar.</para>
            <legacySyntax>int ButtonToIndex( const CMFCToolBarButton* pButton ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the toolbar button object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Index of <parameterReference>pButton</parameterReference> in the internal list of toolbar buttons; or -1 if the specified button is not on this toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__calcfixedlayout">
        <!--3734d495-c9ec-4e3f-ae03-c9a55650dda3-->
        <title>CMFCToolBar::CalcFixedLayout</title>
        <content>
            <para>Calculates the horizontal size of the toolbar.</para>
            <legacySyntax>virtual CSize CalcFixedLayout(
    BOOL bStretch,
    BOOL bHorz );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bStretch</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to stretch the toolbar to the size of the parent frame.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bHorz</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to orient the toolbar horizontally; <languageKeyword>FALSE</languageKeyword> to orient the toolbar vertically.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object that specifies the size of the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method calculates the size of the toolbar by using the <unmanagedCodeEntityReference>CMFCToolBar::CalcLayout</unmanagedCodeEntityReference> method. It passes the <languageKeyword>LM_STRETCH</languageKeyword> flag for the <parameterReference>dwMode</parameterReference> parameter if <parameterReference>bStretch</parameterReference> is <languageKeyword>TRUE</languageKeyword>. It passes the <languageKeyword>LM_HORZ</languageKeyword> flag if <parameterReference>bHorz</parameterReference> is <languageKeyword>TRUE</languageKeyword>.</para>
                    <para>See the VisualStudioDemo sample for an example that uses this method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__calcmaxbuttonheight">
        <!--9f29b1e6-b218-49d4-9d0d-9b2980e4b81a-->
        <title>CMFCToolBar::CalcMaxButtonHeight</title>
        <content>
            <para>Calculates the maximum height of buttons in the toolbar.</para>
            <legacySyntax>virtual int CalcMaxButtonHeight();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The maximum height of buttons.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method calculates the maximum height among all toolbar buttons on the toolbar. The height may vary depending on factors such as the current toolbar docking state.</para>
                    <para>Override this method in a class derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> to provide your own height calculation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__calcsize">
        <!--9b3b732d-58ae-4c9f-a4b5-b0a7dbb6cd44-->
        <title>CMFCToolBar::CalcSize</title>
        <content>
            <para>Called by the framework as part of the layout calculation process.</para>
            <legacySyntax>virtual CSize CalcSize( BOOL bVertDock );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bVertDock</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to specify that the toolbar is docked vertically; <languageKeyword>FALSE</languageKeyword> to specify that the toolbar is docked horizontally.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object that specifies the overall size of the buttons on the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method considers the attributes that affect the size of each button, such as the area of the text label and the border size.</para>
                    <para>If the toolbar contains no buttons, this method returns the reserved size of a single button by using the <link xlink:href="#cmfctoolbar__getbuttonsize">CMFCToolBar::GetButtonSize</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__canbeclosed">
        <!--f2e642b1-57df-4476-9d00-b11da0044351-->
        <title>CMFCToolBar::CanBeClosed</title>
        <content>
            <para>Specifies whether a user can close the toolbar.</para>
            <legacySyntax>virtual BOOL CanBeClosed() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar can be closed by the user; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method to determine whether the user can close a toolbar. If the method returns <languageKeyword>TRUE</languageKeyword>, the framework enables the SC_CLOSE command in the system menu of the toolbar and the user can close the toolbar by using a check box in the list of toolbars in the customization dialog box.</para>
                    <para>The default implementation returns <languageKeyword>TRUE</languageKeyword>. Override this method in a class derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> to make toolbar objects that cannot be closed by the user.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__canberestored">
        <!--86b73e4f-c303-4a9c-90a9-573c2141ab18-->
        <title>CMFCToolBar::CanBeRestored</title>
        <content>
            <para>Determines whether the system can restore a toolbar to its original state after customization.</para>
            <legacySyntax>virtual BOOL CanBeRestored() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar can be restored from the application resources; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method to determine whether a toolbar can be returned to its original state after customization. The original state is loaded from the application resources.</para>
                    <para>If <unmanagedCodeEntityReference>CanBeRestored</unmanagedCodeEntityReference> returns <languageKeyword>TRUE</languageKeyword>, the <ui>Toolbars</ui> page of the customization dialog box enables the <ui>Reset</ui> button for the selected toolbar.</para>
                    <para>The default implementation returns <languageKeyword>TRUE</languageKeyword> if the original resource ID of the toolbar when it was loaded is non-zero. Usually, only user-defined toolbars cannot be restored.</para>
                    <para>You can override the <unmanagedCodeEntityReference>CanBeRestored</unmanagedCodeEntityReference> method to customize this behavior in derived classes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__canfocus">
        <!--f4bb22dd-d94d-409b-9da0-90493313f07e-->
        <title>CMFCToolBar::CanFocus</title>
        <content>
            <para>Specifies whether the pane can receive focus.</para>
            <legacySyntax>virtual BOOL CanFocus() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This method returns <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method overrides the base class implementation, <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__canfocus">CBasePane::CanFocus</link>, because toolbar objects cannot receive focus.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__canhandlesiblings">
        <!--be68cd37-07a3-4986-a5b5-f73f1238c7c7-->
        <title>CMFCToolBar::CanHandleSiblings</title>
        <content>
            <para>Determines whether the toolbar and its sibling are positioned on the same pane.</para>
            <legacySyntax>BOOL CanHandleSiblings();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar has a sibling and the toolbar and its sibling are positioned on the same pane; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The internal CMFCCustomizeButton::CreatePopupMenu method calls this method to determine how to show the <ui>Customize</ui> pop-up menu. If this method returns <languageKeyword>TRUE</languageKeyword>, the framework displays the <ui>Show Buttons on One Row</ui> or <ui>Show Buttons on Two Rows</ui> buttons. </para>
                    <para>You typically do not have to use this method. To enable the <ui>Customize</ui> button that appears on the toolbar, call the <link xlink:href="#cmfctoolbar__enablecustomizebutton">CMFCToolBar::EnableCustomizeButton</link> method. To enable the <ui>Show Buttons on One Row</ui> or <ui>Show Buttons on Two Rows</ui> buttons, call <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__cleanupimages">
        <!--cf1340f2-20cc-46c4-9544-171ed232467f-->
        <title>CMFCToolBar::CleanUpImages</title>
        <content>
            <para>Frees the system resources allocated for toolbar images.</para>
            <legacySyntax>static void CMFCToolBar::CleanUpImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when an application shuts down.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__cleanuplockedimages">
        <!--9675ae30-6f71-4d7f-b3bd-470807967cf4-->
        <title>CMFCToolBar::CleanUpLockedImages</title>
        <content>
            <para>Frees the system resources allocated for locked toolbar images.</para>
            <legacySyntax>void CleanUpLockedImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method when the visual style of your application changes. See the VisualStudioDemo sample for an example that uses this method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__commandtoindex">
        <!--3fa452c8-6af3-4992-bc08-6296de5e9b16-->
        <title>CMFCToolBar::CommandToIndex</title>
        <content>
            <para>Returns the index of the button in the toolbar with a specified command ID.</para>
            <legacySyntax>int CommandToIndex(
    UINT nIDFind,
    int iIndexFirst=0 
) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIDFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command ID.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>iIndexFirst</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the initial index to start from.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Zero-based index of the toolbar button if the method was successful; -1 if there is no button with the specified ID.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> object maintains an internal list of the buttons on the toolbar. Call this function to retrieve the index of a button in the list given the command ID of the button.</para>
                    <para>If <parameterReference>iIndex</parameterReference> is greater than 0, this method ignores any button on the toolbar that has an index less than <parameterReference>iIndex</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__create">
        <!--2998c9a3-5f27-4c1f-9bc6-4ff98d4a8b20-->
        <title>CMFCToolBar::Create</title>
        <content>
            <para>Creates a <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,
    UINT nID=AFX_IDW_TOOLBAR );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the parent window of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The toolbar style. See                                 <externalLink> <linkText>Toolbar Control and Button Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760439</linkUri>
                                </externalLink> in the <token>winSDK</token> for the list of styles.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of the child window of the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if this method succeeds; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method creates a control bar and attaches it to the toolbar. It creates the control bar with the <languageKeyword>TBSTYLE_FLAT</languageKeyword> style. Call <link xlink:href="#cmfctoolbar__createex">CreateEx</link> if you want a different control bar style.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__createex">
        <!--b348ea2e-68ae-47d2-8919-767c2b3f4749-->
        <title>CMFCToolBar::CreateEx</title>
        <content>
            <para>Creates a <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object that uses additional style options, such as large icons.</para>
            <legacySyntax>virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle=TBSTYLE_FLAT,
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,
    CRect rcBorders=CRect(1, 1, 1, 1),
    UINT nID=AFX_IDW_TOOLBAR );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the parent window of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwCtrlStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Additional styles for creating the embedded control bar object.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The toolbar style. See                                 <externalLink> <linkText>Toolbar Control and Button Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760439</linkUri>
                                </externalLink> for a list of appropriate styles.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>rcBorders</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that specifies the widths of the toolbar window borders.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The ID of the child window of the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if this method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method creates a control bar and attaches it to the toolbar.</para>
                    <para>Call this method instead of <link xlink:href="#cmfctoolbar__create">Create</link> when you want to provide specific styles. For example, set <parameterReference>dwCtrlStyle</parameterReference> to <languageKeyword>TBSTYLE_FLAT | TBSTYLE_TRANSPARENT</languageKeyword> to create a toolbar that resembles the toolbars that are used by Internet Explorer 4.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example demonstrates how to use the <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference> method of the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">IE Demo sample</legacyLink>.</para>
                    <codeReference>NVC_MFC_IEDemo#6,7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__deactivate">
        <!--f67994b3-9cf6-4185-96f7-6488b567d3ae-->
        <title>CMFCToolBar::Deactivate</title>
        <content>
            <para>Deactivates the toolbar.</para>
            <legacySyntax>virtual void Deactivate();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method deactivates the toolbar by removing the focus from the highlighted toolbar button. The framework calls this method when the toolbar loses focus or is destroyed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__dopaint">
        <!--96ffa004-fb8b-4b1d-b056-bc89620715de-->
        <title>CMFCToolBar::DoPaint</title>
        <content>
            <para>Repaints a toolbar.</para>
            <legacySyntax>virtual void DoPaint( CDC* pDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method is called by the framework when a part of the toolbar must be repainted.</para>
                    <para>Override this method to customize the appearance of an object derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__drawbutton">
        <!--737d0e63-377c-453c-b494-097919e109ea-->
        <title>CMFCToolBar::DrawButton</title>
        <content>
            <para>Repaints a toolbar button.</para>
            <legacySyntax>virtual BOOL DrawButton(
    CDC* pDC,
    CMFCToolBarButton* pButton,
    CMFCToolBarImages* pImages,
    BOOL bHighlighted,
    BOOL bDrawDisabledImages );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a button to draw.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pImages</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bHighlighted</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the button is highlighted; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bDrawDisabledImages</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if disabled buttons are dimmed; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the button was repainted; <languageKeyword>FALSE</languageKeyword> if the button is hidden.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <link xlink:href="#cmfctoolbar__drawbutton">DoPaint</link> method calls this method when a toolbar button must be repainted.</para>
                    <para>Override this method if you want to customize the appearance of buttons on your toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__drawseparator">
        <!--386c51a2-f073-41db-ab52-c09fd2585cd3-->
        <title>CMFCToolBar::DrawSeparator</title>
        <content>
            <para>Repaints a separator on a toolbar.</para>
            <legacySyntax>virtual void DrawSeparator(
    CDC* pDC,
    const CRect&amp; rect,
    BOOL bHorz );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The bounding rectangle of the location where the separator is drawn, in pixels.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bHorz</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if the separator is horizontal, <languageKeyword>FALSE</languageKeyword> if the separator is vertical.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <link xlink:href="#cmfctoolbar__dopaint">DoPaint</link> calls this method for each <link xlink:href="#cmfctoolbar__drawseparator">CMFCToolbarButton</link> object that has the <unmanagedCodeEntityReference>TBBS_SEPARATOR</unmanagedCodeEntityReference> style, instead of calling <link xlink:href="#cmfctoolbar__drawbutton">CMFCToolBar::DrawButton</link> for those buttons. </para>
                    <para>Override this method in a class derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> to customize the appearance of separators on the toolbar. The default implementation calls <link xlink:href="beed80f7-36a2-4d64-9f09-e807cfefc3fe#cmfcvisualmanager__ondrawseparator">CMFCVisualManager::OnDrawSeparator</link> to draw a separator whose appearance is determined by the current visual manager.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__enablecustomizebutton">
        <!--1ab6c056-55c5-4b02-a755-ae89feeca04b-->
        <title>CMFCToolBar::EnableCustomizeButton</title>
        <content>
            <para>Enables or disables the Customize button that appears on the toolbar.</para>
            <legacySyntax>void EnableCustomizeButton(
    BOOL bEnable,
    int iCustomizeCmd,
    const CString&amp; strCustomizeText,
    BOOL bQuickCustomize=TRUE );

void EnableCustomizeButton(
    BOOL bEnable,
    int iCustomizeCmd,
    UINT uiCustomizeTextResId,
    BOOL bQuickCustomize=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Enables or disables the Customize button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>iCustomizeCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the Customize button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>strCustomizeText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text label of the Customize button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiCustomizeTextResId</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource string ID of the Customize button label.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bQuickCustomize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Enables or disables the <ui>Add or Remove Buttons</ui> option on the menu that drops down from the button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>iCustomizeCmd</parameterReference> is -1, the framework displays the Customize button when multiple toolbar buttons do not fit in the toolbar area. The button displays a double left-pointing arrow, or chevron, which indicates that there are more buttons.</para>
                    <para>If <parameterReference>iCustomizeCmd</parameterReference> specifies a valid command ID, and <parameterReference>bEnable</parameterReference> is <languageKeyword>TRUE</languageKeyword>, the Customize button is always displayed. The button has a small down arrow and opens a menu that contains a command. This command uses the text label specified by <parameterReference>strCustomizeText</parameterReference>. If <parameterReference>bQuickCustomize</parameterReference> is also <languageKeyword>TRUE</languageKeyword>, the menu displays the <ui>Add or Remove Buttons</ui> option.</para>
                    <para>The framework dynamically adds to the menu any buttons that do not fit in the toolbar area before the item that is specified by <parameterReference>iCustomizeCmd</parameterReference>. The chevron is displayed next to the down arrow.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__enabledocking">
        <!--ea8adf4b-d0cd-418c-8f5f-5a981e8e7503-->
        <title>CMFCToolBar::EnableDocking</title>
        <content>
            <para>Enables docking of the pane to the main frame.</para>
            <legacySyntax>virtual void EnableDocking( DWORD dwAlignment );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>dwAlignment</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the docking alignment to enable.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method extends the base class implementation, <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__enabledocking">CBasePane::EnableDocking</link>, by setting the <unmanagedCodeEntityReference>CBasePane::m_dwControlBarStyle</unmanagedCodeEntityReference> data member to <languageKeyword>AFX_CBRS_FLOAT</languageKeyword>. This method then passes <parameterReference>dwAlignment</parameterReference> to the base class implementation.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__enablelargeicons">
        <!--20e074df-134e-41f6-9ac3-38b890f7429d-->
        <title>CMFCToolBar::EnableLargeIcons</title>
        <content>
            <para>Enables or disables large icons on toolbar buttons.</para>
            <legacySyntax>void EnableLargeIcons( BOOL bEnable );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to enable large icons, <languageKeyword>FALSE</languageKeyword> to disable large icons.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, large icons are enabled.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__enablequickcustomization">
        <!--4103520b-1f94-4325-a8cb-2a792ecfd6f9-->
        <title>CMFCToolBar::EnableQuickCustomization</title>
        <content>
            <para>Enables or disables the quick customization of toolbars so that the user can press the <ui>Alt</ui> key and drag a button to a new location.</para>
            <legacySyntax>static void EnableQuickCustomization(
    BOOL bEnable=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to enable quick customization, <languageKeyword>FALSE</languageKeyword> to disable quick customization.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__enablereflections">
        <!--963dbe1a-4387-4c4d-b656-7c70ed415150-->
        <title>CMFCToolBar::EnableReflections</title>
        <content>
            <para>Enables or disables command reflection.</para>
            <legacySyntax>void EnableReflections(
    BOOL bEnable = TRUE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to enable command reflection; <languageKeyword>FALSE </languageKeyword>to disable command reflection.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to enable command reflection for toolbar buttons that contain embedded controls, such as combo boxes.</para>
                    <para>For more information about command reflection, see <link xlink:href="53efb0ba-fcda-4fa0-a3c7-14e0b78fb494">TN062: Message Reflection for Windows Controls</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__enabletextlabels">
        <!--e0cfab66-8f9a-467e-92a6-7c198d9eede0-->
        <title>CMFCToolBar::EnableTextLabels</title>
        <content>
            <para>Enables or disables text labels under toolbar button images.</para>
            <legacySyntax>void EnableTextLabels(
    BOOL bEnable=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> if text labels appear under toolbar button images; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If text labels are enabled, all buttons on the toolbar are enlarged to provide space for the labels to be displayed under the images. The customization dialog box has a <ui>Show text label</ui> check-box on the <ui>Toolbars</ui> page. When the user selects a toolbar and checks this option, the framework calls <unmanagedCodeEntityReference>EnableTextLabels</unmanagedCodeEntityReference> for the selected toolbar. You can disable the check-box for an object derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> by returning <languageKeyword>FALSE</languageKeyword> from <link xlink:href="#cmfctoolbar__allowchangetextlabels">CMFCToolBar::AllowChangeTextLabels</link> .</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__fromhandlepermanent">
        <!--8781a8c1-60bb-4394-b09d-d12c8cb22fde-->
        <title>CMFCToolBar::FromHandlePermanent</title>
        <content>
            <para>Retrieves a pointer to the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object that contains the given window handle.</para>
            <legacySyntax>static CMFCToolBar* __stdcall FromHandlePermanent( HWND hwnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>hwnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The window handle to look for.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object that contains the given window handle, or <languageKeyword>NULL</languageKeyword> if no corresponding <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object exists.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This shared method examines each toolbar in the application for the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> object that contains the given window handle.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getallbuttons">
        <!--c047b205-990c-495f-92ba-ff8bb5cebe48-->
        <title>CMFCToolBar::GetAllButtons</title>
        <content>
            <para>Returns a read-only list of buttons in a toolbar.</para>
            <legacySyntax>const CObList&amp; GetAllButtons() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A constant reference to a <link xlink:href="80699c93-33d8-4f8b-b8cf-7b58aeab64ca">CObList</link> object, which contains a collection of <link xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd">CMFCToolbarButton</link> objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getalltoolbars">
        <!--5259b612-b8ed-49f1-84d5-77be3e7b275b-->
        <title>CMFCToolBar::GetAllToolbars</title>
        <content>
            <para>Returns a read-only list of all toolbars in the application.</para>
            <legacySyntax>static const CObList&amp; GetAllToolbars();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reference to a <link xlink:href="80699c93-33d8-4f8b-b8cf-7b58aeab64ca">CObList</link> object that contains a collection of <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolbar</link> objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getbasiccommands">
        <!--87577340-f396-42d0-bee0-2306bbe6f6e7-->
        <title>CMFCToolBar::GetBasicCommands</title>
        <content>
            <para>Returns a read-only list of the basic commands defined in the application.</para>
            <legacySyntax>static const CList&lt;UINT,UINT&gt;&amp; GetBasicCommands();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A const reference to a <link xlink:href="6f6273c3-c8f6-47f5-ac2a-0a950379ae5d">CList</link> object that contains a collection of basic commands.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Add basic commands by calling <link xlink:href="#cmfctoolbar__addbasiccommand">AddBasicCommand</link> or <link xlink:href="#cmfctoolbar__setbasiccommands">SetBasicCommand</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getbutton">
        <!--bd6cade9-e946-45d7-9483-635c88cf29b9-->
        <title>CMFCToolBar::GetButton</title>
        <content>
            <para>Returns a pointer to the <link xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd">CMFCToolBarButton</link> object at a specified index.</para>
            <legacySyntax>CMFCToolBarButton* GetButton( int iIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>iIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of the button to return.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the toolbar button if it exists; or <languageKeyword>NULL</languageKeyword> if there is no such button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getbuttoninfo">
        <!--792413fe-93cc-4e8f-9f3f-e5723ba7f4b0-->
        <title>CMFCToolBar::GetButtonInfo</title>
        <content>
            <para>Returns the command ID, style, and image index of the button at a specified index.</para>
            <legacySyntax>void GetButtonInfo(
    int nIndex,
    UINT&amp; nID,
    UINT&amp; nStyle,
    int&amp; iImage ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of the button in the list of buttons on the toolbar.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of a button.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>nStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The style of the button.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>iImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of the image for the button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>GetButtonInfo</unmanagedCodeEntityReference> method finds a toolbar button at the specified index and retrieves the command ID, style and image index of the button.</para>
                    <para>If the button at the specified index does not exist, the framework sets <parameterReference>nID</parameterReference> and <parameterReference>nStyle</parameterReference> to 0, and <parameterReference>iImage</parameterReference> to -1 when the method returns.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getbuttonsize">
        <!--f710a4b6-4aa7-4370-8e48-b7cd8ae1885b-->
        <title>CMFCToolBar::GetButtonSize</title>
        <content>
            <para>Returns the dimensions of each button on the toolbar.</para>
            <legacySyntax>CSize GetButtonSize() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <link xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</link> object that specifies the dimensions of each button on the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <link xlink:href="#cmfctoolbar__setsizes">SetSizes</link> or <link xlink:href="#cmfctoolbar__setlockedsizes">SetLockedSizes</link> to set the dimensions of each button on the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getbuttonstyle">
        <!--1ad59283-0020-4048-a347-8716df3e98b3-->
        <title>CMFCToolBar::GetButtonStyle</title>
        <content>
            <para>Returns the current style of the toolbar button that is located at the specified index.</para>
            <legacySyntax>UINT GetButtonStyle( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of a toolbar button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A value that specifies the style of the toolbar button. . See <link xlink:href="0f717eb9-fa32-4263-b852-809238863feb">ToolBar Control Styles</link> for a list of possible styles.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <link xlink:href="#cmfctoolbar__setbuttonstyle">SetButtonStyle</link> to set the style of a toolbar button</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getbuttontext">
        <!--553e172e-7ddc-4a13-ae59-bbf659ad0824-->
        <title>CMFCToolBar::GetButtonText</title>
        <content>
            <para>Returns the text label of a button that has a specified index.</para>
            <legacySyntax>CString GetButtonText(
    int nIndex ) const;
void GetButtonText(
    int nIndex,
    CString&amp; rString ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a toolbar button.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>rString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The label text of the toolbar button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The label text of the toolbar button.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <link xlink:href="#cmfctoolbar__setbuttontext">CMFCToolBar::SetButtonText</link> or <link xlink:href="#cmfctoolbar__settoolbarbtntext">CMFCToolBar::SetToolBarBtnText</link> to set the text label.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getcoldimages">
        <!--7f962f9a-cc95-458c-b073-67d5853fd5b6-->
        <title>CMFCToolBar::GetColdImages</title>
        <content>
            <para>Returns a pointer to the collection of cold toolbar button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetColdImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of cold toolbar button images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Cold images are the images that are used when the user is not interacting with the toolbar buttons. Call <link xlink:href="#cmfctoolbar__loadbitmapex">LoadBitmapEx</link> or <link xlink:href="#cmfctoolbar__loadbitmap">LoadBitmap</link> to load the cold images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getcolumnwidth">
        <!--9909b6bb-e6b0-4df7-9b5a-5a8a2cc4f657-->
        <title>CMFCToolBar::GetColumnWidth</title>
        <content>
            <para>Returns the width of the toolbar buttons.</para>
            <legacySyntax>virtual int GetColumnWidth() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A value that specifies the width of toolbar buttons.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method to calculate toolbar layout. Override this method in a derived class to specify a different column width for your toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getcommandbuttons">
        <!--0e5fd302-9008-4d8f-8680-f8c0cf9f6bef-->
        <title>CMFCToolBar::GetCommandButtons</title>
        <content>
            <para>Returns a list of buttons that have a specified command ID from all toolbars in the application.</para>
            <legacySyntax>static int GetCommandButtons(
    UINT uiCmd,
    CObList&amp; listButtons );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the buttons.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>listButtons</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <link xlink:href="80699c93-33d8-4f8b-b8cf-7b58aeab64ca">CObList</link> object that receives the list of toolbar buttons.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of buttons that have the specified command ID.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getcount">
        <!--b1a4826e-84ee-4bcd-94b8-ecff23acc78a-->
        <title>CMFCToolBar::GetCount</title>
        <content>
            <para>Returns the number of buttons and separators on the toolbar.</para>
            <legacySyntax>int GetCount() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of buttons and separators on the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getcustomizebutton">
        <!--1c37d1a4-90dd-41a8-85f8-b1f272e2d9b4-->
        <title>CMFCToolBar::GetCustomizeButton</title>
        <content>
            <para>Retrieves a pointer to the <unmanagedCodeEntityReference>CMFCCustomizeButton</unmanagedCodeEntityReference> object that is associated with the toolbar.</para>
            <legacySyntax>CMFCCustomizeButton* GetCustomizeButton();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <unmanagedCodeEntityReference>CMFCCustomizeButton</unmanagedCodeEntityReference> object that is associated with the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method retrieves the <ui>Customize</ui> button that appears at the end of the toolbar. Use the <link xlink:href="#cmfctoolbar__enablecustomizebutton">CMFCToolBar::EnableCustomizeButton</link> method to add the <ui>Customize</ui> button to your toolbar.</para>
                    <para>You can call the <link xlink:href="#cmfctoolbar__isexistcustomizebutton">CMFCToolBar::IsExistCustomizeButton</link> method to determine whether the toolbar contains a valid <unmanagedCodeEntityReference>CMFCCustomizeButton</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getdefaultimage">
        <!--b44f27ec-9cee-4c83-aed9-18c2bbf81b95-->
        <title>CMFCToolBar::GetDefaultImage</title>
        <content>
            <para>Returns the index of the default image for a toolbar button with a specified command ID.</para>
            <legacySyntax>static int GetDefaultImage( UINT uiID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command ID of the button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the toolbar image in the shared list of images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this shared method to retrieve the index of the default image for a toolbar button with the specified command ID. The return value is an index into the shared collection of toolbar button images for all toolbars in the application. Call the <link xlink:href="#cmfctoolbar__getimages">GetImages</link> method to obtain a pointer to this collection.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getdisabledimages">
        <!--a68adeaa-94c3-45f3-83a0-82dd6d8065a5-->
        <title>CMFCToolBar::GetDisabledImages</title>
        <content>
            <para>Returns a pointer to the collection of images that are used for disabled toolbar buttons in the application.</para>
            <legacySyntax>static CMFCToolBarImages* __stdcall GetDisabledImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of disabled toolbar button images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Load the disabled toolbar button images by using the <link xlink:href="b21d9b67-6bf7-4ca9-bd62-b237756e0ab3">LoadBitmapEx</link> and <link xlink:href="#cmfctoolbar__loadbitmap">LoadBitmap</link> methods.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getdisabledmenuimages">
        <!--3e57260e-2861-4ed6-9e6f-40b5829d6e0e-->
        <title>CMFCToolBar::GetDisabledMenuImages</title>
        <content>
            <para>Returns a pointer to the collection of images that are used for disabled menu buttons in the application.</para>
            <legacySyntax>static CMFCToolBarImages* __stdcall GetDisabledMenuImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of disabled menu images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Load the disabled images by using the <link xlink:href="b21d9b67-6bf7-4ca9-bd62-b237756e0ab3">LoadBitmapEx</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getdroppeddownmenu">
        <!--40d4d94f-9e14-4df3-b093-7dfeac33e497-->
        <title>CMFCToolBar::GetDroppedDownMenu</title>
        <content>
            <para>Retrieves a pointer to the menu button object that is currently displaying its sub-menu.</para>
            <legacySyntax>CMFCToolBarMenuButton* GetDroppedDownMenu(
    int* pIndex = NULL
) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[out] <parameterReference>pIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Receives the index of the button in the collection of toolbar buttons.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the menu button object that is displaying its sub-menu or <languageKeyword>NULL</languageKeyword> if no menu is displaying its sub-menu.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this method returns a non- <languageKeyword>NULL</languageKeyword> value and <parameterReference>pIndex</parameterReference> is not <languageKeyword>NULL</languageKeyword>, the value pointed to by <parameterReference>pIndex</parameterReference> is set to the index of the menu button in the collection of toolbar buttons.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getgraydisabledbuttons">
        <!--67a0805c-7e25-4b29-8614-722da84e9df0-->
        <title>CMFCToolBar::GetGrayDisabledButtons</title>
        <content>
            <para>Specifies whether the images of disabled buttons are dimmed versions of the regular button images, or taken from the collection of disabled button images.</para>
            <legacySyntax>BOOL GetGrayDisabledButtons() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> to dim the images of disabled buttons; <languageKeyword>FALSE</languageKeyword>to obtain images from the collection of disabled images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <link xlink:href="#cmfctoolbar__setgraydisabledbuttons">SetGrayDisabledButtons</link> to switch between dimmed images and the images from the collection of disabled images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__gethighlightedbutton">
        <!--cc5add69-7458-4e8b-ba88-5db5872511b2-->
        <title>CMFCToolBar::GetHighlightedButton</title>
        <content>
            <para>Returns a pointer to the toolbar button that is currently highlighted.</para>
            <legacySyntax>CMFCToolBarButton* GetHighlightedButton() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a toolbar button object; or <languageKeyword>NULL</languageKeyword> if no button is highlighted.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A toolbar button is highlighted if it has keyboard focus. A toolbar button is also highlighted if the toolbar buttons are hot-tracked in this application (for more information, see <link xlink:href="#cmfctoolbar__gethotborder">CMFCToolBar::GetHotBorder</link> and <link xlink:href="#cmfctoolbar__sethotborder">CMFCToolBar::SetHotBorder</link>) and the mouse is pointing at it when no toolbar button or menu item has keyboard focus.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__gethotborder">
        <!--54b31169-d878-4e62-9caf-ce2373f634ad-->
        <title>CMFCToolBar::GetHotBorder</title>
        <content>
            <para>Determines whether the toolbar buttons are <newTerm>hot-tracked</newTerm>. If a button is hot-tracked, it is highlighted when the mouse moves across it.</para>
            <legacySyntax>BOOL GetHotBorder() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar buttons are hot-tracked; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, toolbar buttons are hot-tracked.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__gethottextcolor">
        <!--fe76874a-d9d3-48e5-bd3b-b2c770b19d23-->
        <title>CMFCToolBar::GetHotTextColor</title>
        <content>
            <para>Returns the text color of the highlighted toolbar buttons.</para>
            <legacySyntax>static COLORREF GetHotTextColor();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A                         <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                        </externalLink> value that represent the current highlighted text color.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <link xlink:href="#cmfctoolbar__sethottextcolor">SetHotTextColor</link> to set a new text color for highlighted toolbar buttons.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__gethwndlastfocus">
        <!--0c13f194-b81f-47b0-ade8-a470bdd2ab3c-->
        <title>CMFCToolBar::GetHwndLastFocus</title>
        <content>
            <para>Returns a handle to the window that had the input focus just before the toolbar did.</para>
            <legacySyntax>HWND GetHwndLastFocus() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A handle to window that is not derived from <link xlink:href="5d79206d-55e4-46f8-b1b8-042e34d7f9da">CMFCBaseToolBar</link>, which previously had the input focus; or <languageKeyword>NULL</languageKeyword> if there is no such window.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When a <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> control receives the input focus, it stores a handle to the window that lost the focus so that it can restore it later.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getignoresettext">
        <!--675ca4ce-471b-40de-8240-8f12e4edef85-->
        <title>CMFCToolBar::GetIgnoreSetText</title>
        <content>
            <para>Specifies whether calls to set button labels are ignored.</para>
            <legacySyntax>BOOL GetIgnoreSetText() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if calls to set button labels are ignored; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getimages">
        <!--515b8334-9e62-4bed-8dab-2215fe37e593-->
        <title>CMFCToolBar::GetImages</title>
        <content>
            <para>Returns a pointer to the collection of default button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <link xlink:href="d4e50518-9ffc-406f-9996-f79e5cd38155">CMFCToolBarImages</link> object that contains the collection of default images for all toolbars in the application.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This shared method provides access to the collection of all default toolbar images for the application. Call the <link xlink:href="#cmfctoolbar__loadbitmap">LoadBitmap</link> method to add images to the collection.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getimagesize">
        <!--b6b1175e-e248-42c6-a4ae-69d26e7cf990-->
        <title>CMFCToolBar::GetImageSize</title>
        <content>
            <para>Returns the current size of toolbar button images.</para>
            <legacySyntax>CSize GetImageSize() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <link xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</link> object that represents the current size of toolbar button images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getimagesoffset">
        <!--07e275bd-35e5-4174-bfef-8b73986c58ac-->
        <title>CMFCToolBar::GetImagesOffset</title>
        <content>
            <para>Returns the index offset used to find the toolbar button images for this toolbar in the global list of toolbar button images.</para>
            <legacySyntax>int GetImagesOffset() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index offset of the toolbar images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>All toolbar default images are stored in the global <link xlink:href="d4e50518-9ffc-406f-9996-f79e5cd38155">CMFCToolBarImages</link> list. The images for each button in the toolbar are stored consecutively in that list. To compute the index of the image, add the index of the button in the toolbar to the offset of the beginning of the list of images for that toolbar button.</para>
                    <para>Call <link xlink:href="#cmfctoolbar__buttontoindex">CMFCToolBar::ButtonToIndex</link> to obtain the index of a toolbar button given a pointer to the button.</para>
                    <para>Call <link xlink:href="#cmfctoolbar__getimages">GetImages</link> to obtain a pointer to the collection of toolbar images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getinvalidateitemrect">
        <!--48a2eb26-edd5-43d9-ae75-eaec1b1f0fee-->
        <title>CMFCToolBar::GetInvalidateItemRect</title>
        <content>
            <para>Retrieves the region of the client area that must be redrawn for the button at the given index.</para>
            <legacySyntax>virtual void GetInvalidateItemRect(
    int nIndex,
    LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of the button for which to retrieve the client area.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> object that receives the region of the client area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>lpRect</parameterReference> parameter must not be <languageKeyword>NULL</languageKeyword>. If no button exists at the provided index, <parameterReference>lpRect</parameterReference> receives a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> object that is initialized to zero.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getitemid">
        <!--f661871e-c8fe-473c-b508-3acc1ecb57d4-->
        <title>CMFCToolBar::GetItemID</title>
        <content>
            <para>Returns the command ID of the toolbar button at a specified index.</para>
            <legacySyntax>UINT GetItemID( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of the toolbar button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The command ID of the toolbar button; or zero if the button with the specified index does not exist.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getitemrect">
        <!--71d49a09-dfaf-49d2-9c65-372018d575e8-->
        <title>CMFCToolBar::GetItemRect</title>
        <content>
            <para>Returns the bounding rectangle of the button at a specified index.</para>
            <legacySyntax>virtual void GetItemRect(
    int nIndex,
    LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of a toolbar button.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that receives the coordinates of the image bounding rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object to which <parameterReference>lpRect</parameterReference> points is set to 0 if a button at the specified index does not exist.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example demonstrates how to use the <unmanagedCodeEntityReference>GetItemRect</unmanagedCodeEntityReference> method of the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">IE Demo sample</legacyLink>.</para>
                    <codeReference>NVC_MFC_IEDemo#6,9</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlargecoldimages">
        <!--210d9070-f72f-4fac-b356-3fd6eb0efae8-->
        <title>CMFCToolBar::GetLargeColdImages</title>
        <content>
            <para>Returns a pointer to the collection of large cold toolbar button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetLargeColdImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of large cold images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Cold images are the images that are used when the user is not interacting with the toolbar buttons. Call <link xlink:href="#cmfctoolbar__loadbitmapex">LoadBitmapEx</link> to load the large cold images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlargedisabledimages">
        <!--94646734-bcce-4eba-b148-057d65b59be1-->
        <title>CMFCToolBar::GetLargeDisabledImages</title>
        <content>
            <para>Returns a pointer to the collection of large disabled toolbar button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetLargeDisabledImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of large disabled toolbar button images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Large images are large versions of the regular toolbar button images. Call <link xlink:href="#cmfctoolbar__loadbitmapex">LoadBitmapEx</link> or <link xlink:href="#cmfctoolbar__loadbitmap">LoadBitmap</link> to load the large images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlargeimages">
        <!--291e3ba8-c8f7-4445-8faa-b2185630cb2c-->
        <title>CMFCToolBar::GetLargeImages</title>
        <content>
            <para>Returns a pointer to the collection of large toolbar button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetLargeImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of large toolbar button images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Large images are large versions of the regular toolbar button images. Call <link xlink:href="#cmfctoolbar__loadbitmapex">LoadBitmapEx</link> to load the large images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlockedcoldimages">
        <!--c640a243-d215-4e03-b268-318a056e7c5a-->
        <title>CMFCToolBar::GetLockedColdImages</title>
        <content>
            <para>Returns a pointer to the collection of locked cold images in the toolbar.</para>
            <legacySyntax>CMFCToolBarImages* GetLockedColdImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of locked cold images, or <languageKeyword>NULL</languageKeyword> if the toolbar is not locked.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar. Cold images are the images that are used when the user is not interacting with the toolbar buttons.</para>
                    <para>This method returns <languageKeyword>NULL</languageKeyword> if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see <link xlink:href="#cmfctoolbar__islocked">CMFCToolBar::IsLocked</link>.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__loadbitmapex">CMFCToolBar::LoadBitmapEx</link> method to load the locked cold images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlockeddisabledimages">
        <!--bed1e0ee-5755-4769-b56f-de6325eb47c7-->
        <title>CMFCToolBar::GetLockedDisabledImages</title>
        <content>
            <para>Returns a pointer to the collection of locked disabled images in the toolbar.</para>
            <legacySyntax>CMFCToolBarImages* GetLockedDisabledImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of locked disabled images, or <languageKeyword>NULL</languageKeyword> if the toolbar is not locked.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar. Disabled images are the images that the framework uses when a button has the <languageKeyword>TBBS_DISABLED</languageKeyword> style.</para>
                    <para>This method returns <languageKeyword>NULL</languageKeyword> if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see <link xlink:href="#cmfctoolbar__islocked">CMFCToolBar::IsLocked</link>.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__loadbitmapex">CMFCToolBar::LoadBitmapEx</link> method to load the locked disabled images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlockedimages">
        <!--69fd359f-f4a2-43dd-83fc-d8d655c72bb1-->
        <title>CMFCToolBar::GetLockedImages</title>
        <content>
            <para>Returns a pointer to the collection of locked button images in the toolbar.</para>
            <legacySyntax>CMFCToolBarImages* GetLockedImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of locked toolbar button images, or <languageKeyword>NULL</languageKeyword> if the toolbar is not locked.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar.</para>
                    <para>This method returns <languageKeyword>NULL</languageKeyword> if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see <link xlink:href="#cmfctoolbar__islocked">CMFCToolBar::IsLocked</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlockedimagesize">
        <!--0193b7e2-777d-4a15-9b80-2e47ac0987b2-->
        <title>CMFCToolBar::GetLockedImageSize</title>
        <content>
            <para>Returns the default size of locked toolbar images.</para>
            <legacySyntax>CSize GetLockedImageSize() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> structure that specifies the size of locked toolbar images or an empty <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> structure if the toolbar is not locked.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Locked images are versions of the regular toolbar button images that the framework uses when the user cannot customize the toolbar.</para>
                    <para>This method returns a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> structure with zero width and zero height if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see <link xlink:href="#cmfctoolbar__islocked">CMFCToolBar::IsLocked</link>.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__setlockedsizes">CMFCToolBar::SetLockedSizes</link> method to specify the locked image size.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getlockedmenuimages">
        <!--3f7b6f57-bcd1-489f-9616-2f2eb6d866dc-->
        <title>CMFCToolBar::GetLockedMenuImages</title>
        <content>
            <para>Returns a pointer to the collection of locked toolbar menu images in the toolbar.</para>
            <legacySyntax>CMFCToolBarImages* GetLockedMenuImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of locked toolbar menu images, or <languageKeyword>NULL</languageKeyword> if the toolbar is not locked.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Locked images are versions of the regular toolbar menu images that the framework uses when the user cannot customize the toolbar.</para>
                    <para>This method returns <languageKeyword>NULL</languageKeyword> if the toolbar is not locked. This method also generates an assertion failure in Debug builds if the toolbar is not locked. For more information about locked toolbars, see <link xlink:href="#cmfctoolbar__islocked">CMFCToolBar::IsLocked</link>.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__loadbitmapex">CMFCToolBar::LoadBitmapEx</link> method to load the locked menu images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getmenubuttonsize">
        <!--efc2186d-d8d5-42d4-a48a-7556a167e530-->
        <title>CMFCToolBar::GetMenuButtonSize</title>
        <content>
            <para>Returns the size of menu buttons in the application.</para>
            <legacySyntax>static CSize GetMenuButtonSize();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object that represents the size of menu buttons, in pixels.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The size of menu buttons on toolbars is maintained as a global variable and can be retrieved by this static method.</para>
                    <para>Call <link xlink:href="#cmfctoolbar__setmenusizes">SetMenuSizes</link> to set this global variable.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getmenuimages">
        <!--640d596e-bc48-4801-9712-0a3da54e3e84-->
        <title>CMFCToolBar::GetMenuImages</title>
        <content>
            <para>Returns a pointer to the collection of menu button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetMenuImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of menu images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call the <link xlink:href="#cmfctoolbar__loadbitmapex">LoadBitmapEx</link> method to load the menu images.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__setmenusizes">CMFCToolBar::SetMenuSizes</link> method to set the size of buttons and their images.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getmenuimagesize">
        <!--4f131077-5201-42ab-b83b-43086a293dbd-->
        <title>CMFCToolBar::GetMenuImageSize</title>
        <content>
            <para>Returns the size of menu button images in the application.</para>
            <legacySyntax>static CSize GetMenuImageSize();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object that represents the size of menu images.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method returns the size of images on toolbar menu buttons that is maintained as a global variable. Call <link xlink:href="#cmfctoolbar__setmenusizes">SetMenuSizes</link> to set this global variable.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getorigbuttons">
        <!--76ccb57c-de94-4b2f-8079-b02faf9057ff-->
        <title>CMFCToolBar::GetOrigButtons</title>
        <content>
            <para>Retrieves the collection of non-customized buttons of the toolbar.</para>
            <legacySyntax>const CObList&amp; GetOrigButtons() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the list of non-customized buttons of the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework creates a copy of toolbar buttons before they are customized by the user. The <link xlink:href="#cmfctoolbar__setbuttons">CMFCToolBar::SetButtons</link> method adds a copy of each button in the provided array to the list of original buttons. The <link xlink:href="#cmfctoolbar__restoreoriginalstate">CMFCToolBar::RestoreOriginalstate</link> method restores the original state of the toolbar by loading it from the resource file.</para>
                    <para>To set the list of original buttons for your toolbar, call the <link xlink:href="#cmfctoolbar__setorigbuttons">CMFCToolBar::SetOrigButtons</link> method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getorigresetbuttons">
        <!--fa4eff78-3ac1-4fba-96e4-32c55cd255b8-->
        <title>CMFCToolBar::GetOrigResetButtons</title>
        <content>
            <para>Retrieves the collection of non-customized reset buttons of the toolbar.</para>
            <legacySyntax>const CObList&amp; GetOrigResetButtons() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the list of non-customized reset buttons of the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When the user clicks the <ui>Reset</ui> button during customization mode, the framework uses this method to restore buttons that were removed from the toolbar.</para>
                    <para>The <link xlink:href="#cmfctoolbar__setbuttons">CMFCToolBar::SetButtons</link> method adds a copy of each toolbar button to the list of original reset buttons after it calls the <link xlink:href="#cmfctoolbar__onreset">CMFCToolBar::OnReset</link> method. You can override the <link xlink:href="#cmfctoolbar__onreset">CMFCToolBar::OnReset</link> method to customize the appearance of buttons after the user presses the <ui>Reset</ui> button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getresourceid">
        <!--3d707a20-07ce-4f91-abd1-b30dc6e2c52a-->
        <title>CMFCToolBar::GetResourceID</title>
        <content>
            <para>Retrieves the resource ID of the toolbar.</para>
            <legacySyntax>UINT GetResourceID() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The resource ID of the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call the <link xlink:href="#cmfctoolbar__loadtoolbarex">CMFCToolBar::LoadToolBarEx</link> method to set the resource ID of the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getroutecommandsviaframe">
        <!--ba34151f-5370-42f2-8849-816190bc4957-->
        <title>CMFCToolBar::GetRouteCommandsViaFrame</title>
        <content>
            <para>Determines which object, the parent frame or the owner, sends commands to the toolbar.</para>
            <legacySyntax>BOOL GetRouteCommandsViaFrame();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the parent frame sends commands to the toolbar; 0 if the owner sends commands to the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, the parent frame sends commands to the toolbar. Call <link xlink:href="#cmfctoolbar__setroutecommandsviaframe">SetRouteCommandsViaFrame</link> to change this behavior.</para>
                    <para>If this method returns a nonzero value, you can retrieve a pointer to the parent frame object by using the <unmanagedCodeEntityReference>CMFCToolBar::GetCommandTarget</unmanagedCodeEntityReference> method. See the VisualStudioDemo sample for an example that uses this method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getrowheight">
        <!--cfd5dfb3-4e8c-4758-a8e0-cd9923d759ca-->
        <title>CMFCToolBar::GetRowHeight</title>
        <content>
            <para>Returns the height of toolbar buttons.</para>
            <legacySyntax>virtual int GetRowHeight() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The height of toolbar buttons, in pixels.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method to calculate toolbar layout. Override this method in a derived class to specify a different height for your toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getshowtooltips">
        <!--b7076943-a74d-4885-9642-6b9c83e0e03d-->
        <title>CMFCToolBar::GetShowTooltips</title>
        <content>
            <para>Specifies whether tool tips are displayed for toolbar buttons.</para>
            <legacySyntax>static BOOL GetShowTooltips();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if tool tips are shown for toolbar buttons; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default tool tips are shown. You can change this static flag by calling <link xlink:href="#cmfctoolbar__setshowtooltips">SetShowTooltips</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getsiblingtoolbar">
        <!--d0abbb21-d9fc-4753-b224-80edf819393a-->
        <title>CMFCToolBar::GetSiblingToolBar</title>
        <content>
            <para>Retrieves the sibling of the toolbar.</para>
            <legacySyntax>CMFCToolBar* GetSiblingToolBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the sibling toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information about how to enable the <ui>Show Buttons on One Row</ui> and <ui>Show Buttons on Two Rows</ui> buttons, see <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__getuserimages">
        <!--d91c7c85-64c2-4858-97fe-1a9771da9162-->
        <title>CMFCToolBar::GetUserImages</title>
        <content>
            <para>Returns a pointer to the collection of user-defined toolbar button images in the application.</para>
            <legacySyntax>static CMFCToolBarImages* GetUserImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the collection of user-defined toolbar button images for all toolbars in the application.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call the <link xlink:href="#cmfctoolbar__setuserimages">SetUserImages</link> method to set the collection of user-defined images in the application.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__hittest">
        <!--542a5a56-7ffb-45c3-850b-7bb1c4802501-->
        <title>CMFCToolBar::HitTest</title>
        <content>
            <para>Returns the index of the toolbar button that is located at the specified position.</para>
            <legacySyntax>virtual int HitTest( CPoint point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The point to be tested, in client coordinates.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the button that is located at the specified position, or -1 if there is no such button or the button is a separator.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__insertbutton">
        <!--c4736be1-a623-4045-8353-278255bfd1d0-->
        <title>CMFCToolBar::InsertButton</title>
        <content>
            <para>Inserts a button into the toolbar.</para>
            <legacySyntax>virtual int InsertButton(
    const CMFCToolBarButton&amp; button,
    INT_PTR iInsertAt=-1 );

virtual int InsertButton(
    CMFCToolBarButton* pButton,
    int iInsertAt=-1 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>button</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the button to insert.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>iInsertAt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based position to insert the button at.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The position at which the button was inserted or -1 if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>iInsertAt</parameterReference> is -1, this method adds the button to the end of the list of toolbar buttons.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__insertseparator">CMFCToolBar::InsertSeparator</link> method to insert a separator into the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__insertseparator">
        <!--3136f9f2-53e8-416f-8f08-225383a8678c-->
        <title>CMFCToolBar::InsertSeparator</title>
        <content>
            <para>Inserts a separator into the toolbar.</para>
            <legacySyntax>virtual int InsertSeparator( INT_PTR iInsertAt=-1 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>iInsertAt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based position to insert the separator at. This parameter must be larger than 0.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The position at which the separator was inserted or -1 if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to insert a separator between two existing buttons. If <parameterReference>iInsertAt</parameterReference> is -1, this method adds the separator to the end of the list of toolbar buttons.</para>
                    <para>You cannot use this method to add a separator to an empty toolbar.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__insertbutton">CMFCToolBar::InsertButton</link> method to insert a button into the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__invalidatebutton">
        <!--7ee50764-820d-42ee-a460-5f10ed7b53a2-->
        <title>CMFCToolBar::InvalidateButton</title>
        <content>
            <para>Invalidates the client area of the toolbar button that exists at the provided index.</para>
            <legacySyntax>CMFCToolBarButton* InvalidateButton( int nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based index of the button in the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <unmanagedCodeEntityReference>CMFCToolBarButton</unmanagedCodeEntityReference> object that exists at the provided index or <languageKeyword>NULL</languageKeyword> if no such object exists.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when it updates the client area that is associated with a toolbar button. It calls the <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__invalidaterect">CWnd::InvalidateRect</link> method with the client rectangle of the <unmanagedCodeEntityReference>CMFCToolBarButton</unmanagedCodeEntityReference> object that exists at the provided index.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isaddremovequickcustomize">
        <!--0943c64d-611f-418a-9e77-29b398465d83-->
        <title>CMFCToolBar::IsAddRemoveQuickCustomize</title>
        <content>
            <para>Determines whether a user can add or remove toolbar buttons by using the <ui>Customize</ui> menu option.</para>
            <legacySyntax>BOOL IsAddRemoveQuickCustomize();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if a user can use the <ui>Customize</ui> menu option to modify the toolbar; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para/>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isaltcustomizemode">
        <!--e926ed9b-1dd6-4f6a-a813-fa7f68970f91-->
        <title>CMFCToolBar::IsAltCustomizeMode</title>
        <content>
            <para>Specifies whether <newTerm>quick customization</newTerm> is being used to drag a button. When quick customization is enabled, a user can press and hold the Alt key and drag a button to a new location.</para>
            <legacySyntax>static BOOL __stdcall IsAltCustomizeMode();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if quick customization is being used to drag a button; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isautograyinactiveimages">
        <!--3033a845-30de-4be6-a079-c751ccf4c61f-->
        <title>CMFCToolBar::IsAutoGrayInactiveImages</title>
        <content>
            <para>Specifies whether the automatic generation of inactive (non-highlighted) button images is enabled.</para>
            <legacySyntax>static BOOL IsAutoGrayInactiveImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the option to automatically dim inactive images is enabled; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can enable or disable automatic dimming of inactive images by calling <link xlink:href="#cmfctoolbar__autograyinactiveimages">CMFCToolBar::AutoGrayInactiveImages</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isbasiccommand">
        <!--84ad9cc1-105a-4a4a-ac92-1ff819aeb623-->
        <title>CMFCToolBar::IsBasicCommand</title>
        <content>
            <para>Determines whether a command is on the list of basic commands.</para>
            <legacySyntax>static BOOL IsBasicCommand( UINT uiCmd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command to check.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the specified command belongs to the list of basic commands; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This static method determines whether the command specified by <parameterReference>uiCmd</parameterReference> belongs to the global list of basic commands. You can change the list of basic commands by calling <link xlink:href="#cmfctoolbar__addbasiccommand">AddBasicCommand</link> or <link xlink:href="#cmfctoolbar__setbasiccommands">SetBasicCommands</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isbuttonextrasizeavailable">
        <!--d7cfb09e-c674-4fa7-a97e-21c5a5bd3888-->
        <title>CMFCToolBar::IsButtonExtraSizeAvailable</title>
        <content>
            <para>Determines whether the toolbar can display buttons that have extended borders.</para>
            <legacySyntax>virtual BOOL IsButtonExtraSizeAvailable() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the bar can display buttons with the extra border size; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The toolbar object returns <languageKeyword>TRUE</languageKeyword> if it can display buttons that have extended borders. A toolbar button calls this method when it handles the <link xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd#cmfctoolbarbutton__onchangeparentwnd">CMFCToolBarButton::OnChangeParentWnd</link> notification and will set its internal extra border size flag accordingly. This internal flag may be retrieved later by calling <link xlink:href="8a6ecffb-86b0-4f5c-8211-a9146b463efd#cmfctoolbarbutton__isextrasize">CMFCToolBarButton::IsExtraSize</link>.</para>
                    <para>Override this method in a class derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> and return <languageKeyword>TRUE</languageKeyword> if your bar can display the toolbar buttons with the extra border size and return <languageKeyword>FALSE</languageKeyword> otherwise. The default implementation returns <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isbuttonhighlighted">
        <!--d708f49b-9c55-4438-8524-971a937616cc-->
        <title>CMFCToolBar::IsButtonHighlighted</title>
        <content>
            <para>Determines whether the specified button is highlighted.</para>
            <legacySyntax>BOOL IsButtonHighlighted( int iButton ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>iButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of a toolbar button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the specified button is highlighted; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__iscommandpermitted">
        <!--a475875e-b778-4d0c-a179-ee8da552f1be-->
        <title>CMFCToolBar::IsCommandPermitted</title>
        <content>
            <para>Determines whether a command is permitted.</para>
            <legacySyntax>static BOOL IsCommandPermitted( UINT uiCmd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command to check.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the specified command is permitted; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This static method determines whether the command specified by <parameterReference>uiCmd</parameterReference> belongs to the global list of non-permitted commands.</para>
                    <para>You can change the list of non-permitted commands by calling <link xlink:href="#cmfctoolbar__setnonpermittedcommands">SetNonPermittedCommands</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__iscommandrarelyused">
        <!--eb1ffd32-1956-461d-a7d9-0aa82eb1a4e3-->
        <title>CMFCToolBar::IsCommandRarelyUsed</title>
        <content>
            <para>Determines whether a command is rarely used.</para>
            <legacySyntax>static BOOL IsCommandRarelyUsed( UINT uiCmd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the command to check.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the specified command is rarely used; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>IsCommandRarelyUsed</unmanagedCodeEntityReference> method returns <languageKeyword>FALSE</languageKeyword> when one or more of the following conditions occur: </para>
                    <list class="bullet">
                        <listItem>
                            <para>The specified command belongs to the list of basic commands </para>
                        </listItem>
                        <listItem>
                            <para>The specified command is one of the standard commands </para>
                        </listItem>
                        <listItem>
                            <para>The framework is in customization mode </para>
                        </listItem>
                        <listItem>
                            <para>The list of basic commands is empty </para>
                        </listItem>
                        <listItem>
                            <para>More than 20% of command calls are calls to the specified command.</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__iscustomizemode">
        <!--01f909c9-637a-4fd5-be29-981185b1e1fc-->
        <title>CMFCToolBar::IsCustomizeMode</title>
        <content>
            <para>Specifies whether the toolbar framework is in customization mode.</para>
            <legacySyntax>static BOOL IsCustomizeMode();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the framework is in customization mode; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can toggle customization mode by calling <link xlink:href="#cmfctoolbar__setcustomizemode">SetCustomizeMode</link>.</para>
                    <para>The framework changes the mode when the user invokes the customization dialog box ( <link xlink:href="78e2cddd-4f13-4097-afc3-1ad646a113f1">CMFCToolBarsCustomizeDialog</link>).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isdragbutton">
        <!--474b05b8-ba5b-4d76-a21a-3206e96f96b5-->
        <title>CMFCToolBar::IsDragButton</title>
        <content>
            <para>Determines whether a toolbar button is being dragged.</para>
            <legacySyntax>BOOL IsDragButton( const CMFCToolBarButton* pButton ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a toolbar button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the specified button is being dragged; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isexistcustomizebutton">
        <!--9f518b89-e03d-4bc7-bea5-29a484c1a4fc-->
        <title>CMFCToolBar::IsExistCustomizeButton</title>
        <content>
            <para>Determines whether the toolbar contains the <ui>Customize</ui> button.</para>
            <legacySyntax>BOOL IsExistCustomizeButton();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar contains the <ui>Customize</ui> button; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If this method returns <languageKeyword>TRUE</languageKeyword>, the <link xlink:href="#cmfctoolbar__getcustomizebutton">CMFCToolBar::GetCustomizeButton</link> method returns a pointer to the <ui>Customize</ui> button that appears at the end of the toolbar.</para>
                    <para>Use the <link xlink:href="#cmfctoolbar__enablecustomizebutton">CMFCToolBar::EnableCustomizeButton</link> method to add the <ui>Customize</ui> button to your toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isfloating">
        <!--5320800d-c841-4af5-a736-2e71ec195761-->
        <title>CMFCToolBar::IsFloating</title>
        <content>
            <para>Determines whether the toolbar is floating.</para>
            <legacySyntax>virtual BOOL IsFloating() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar is floating; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__islargeicons">
        <!--ac335dc2-f1d8-4a5d-95dc-a21e57153c40-->
        <title>CMFCToolBar::IsLargeIcons</title>
        <content>
            <para>Specifies whether toolbars in the application currently display large icons.</para>
            <legacySyntax>static BOOL IsLargeIcons();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the application is using large icons; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call <link xlink:href="#cmfctoolbar__setlargeicons">SetLargeIcons</link> to toggle between large icons and regular icons.</para>
                    <para>The framework automatically changes the mode when the user toggles the <ui>Large icons</ui> check-box on the <ui>Options</ui> page of the <ui>Customization</ui> dialog box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__islastcommandfrombutton">
        <!--6f93f2ab-719d-4f0b-a5a7-b202e1b3a218-->
        <title>CMFCToolBar::IsLastCommandFromButton</title>
        <content>
            <para>Determines whether the most recently executed command was sent from the specified toolbar button.</para>
            <legacySyntax>static BOOL IsLastCommandFromButton( CMFCToolBarButton* pButton );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the last command was sent from the button that <parameterReference>pButton</parameterReference> specifies; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method obtains a pointer to a <link xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG Structure</link> by calling <unmanagedCodeEntityReference>CWnd::GetCurrentMessage</unmanagedCodeEntityReference>. It then compares the <unmanagedCodeEntityReference>HWND</unmanagedCodeEntityReference> of the button with the <unmanagedCodeEntityReference>MSG::lParam</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>MSG::hwnd</unmanagedCodeEntityReference> members to determine whether the button was the source of the command.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__islocked">
        <!--e16a9849-7355-41df-a970-dfa5d2425365-->
        <title>CMFCToolBar::IsLocked</title>
        <content>
            <para>Determines whether the toolbar is locked.</para>
            <legacySyntax>BOOL IsLocked() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar is locked; otherwise, <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method returns <languageKeyword>TRUE</languageKeyword> when the user cannot perform customization tasks such as repositioning toolbar buttons.</para>
                    <para>Locked toolbars use separate image lists. For more information about these image lists, see <link xlink:href="#cmfctoolbar__loadbitmapex">CMFCToolBar::LoadBitmapEx</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isonerowwithsibling">
        <!--63bc2fce-a22b-4a61-8ec7-afedabeea80b-->
        <title>CMFCToolBar::IsOneRowWithSibling</title>
        <content>
            <para>Determines whether the toolbar and its sibling toolbar are positioned on the same row.</para>
            <legacySyntax>BOOL IsOneRowWithSibling();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar and its sibling are positioned on the same row; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <link xlink:href="e501083e-f78e-4d8d-900c-40bd6e2bb7f8">CMFCCustomizeButton::CreatePopupMenu</link> method calls this method to determine how to show the <ui>Customize</ui> pop-up menu. If this method returns <languageKeyword>TRUE</languageKeyword>, the framework displays the <ui>Show Buttons on One Row</ui> button. Otherwise, the framework displays the <ui>Show Buttons on Two Rows</ui> button.</para>
                    <para>You typically do not have to use this method. To enable the <ui>Show Buttons on One Row</ui> or <ui>Show Buttons on Two Rows</ui> buttons, call <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isresourcechanged">
        <!--399137b0-2773-4918-9125-44edcb3f2548-->
        <title>CMFCToolBar::IsResourceChanged</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual BOOL IsResourceChanged() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__issibling">
        <!--476f6ff2-4a22-4068-8d36-ec60073267a9-->
        <title>CMFCToolBar::IsSibling</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>BOOL IsSibling();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__isuserdefined">
        <!--e130d3f8-bdca-49f9-9297-0bec6e4b8b28-->
        <title>CMFCToolBar::IsUserDefined</title>
        <content>
            <para>Specifies whether the toolbar is user-defined.</para>
            <legacySyntax>BOOL IsUserDefined() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the toolbar was created by the user; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadbitmap">
        <!--644659e0-dc98-4473-b771-309381ee392a-->
        <title>CMFCToolBar::LoadBitmap</title>
        <content>
            <para>Loads toolbar images from application resources.</para>
            <legacySyntax>virtual BOOL LoadBitmap(
    UINT uiResID,
    UINT uiColdResID=0,
    UINT uiMenuResID=0,
    BOOL bLocked=FALSE,
    UINT uiDisabledResID=0,
    UINT uiMenuDisabledResID=0 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the hot toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiColdResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the cold toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the regular menu images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bLocked</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> <languageKeyword>TRUE</languageKeyword> to lock the toolbar; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiDisabledResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the disabled toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuDisabledResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the disabled menu images.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <link xlink:href="#cmfctoolbar__loadtoolbarex">CMFCToolBar::LoadToolBarEx</link> method calls this method to load the images that are associated with the toolbar. Override this method to perform custom loading of image resources.</para>
                    <para>Call the <unmanagedCodeEntityReference>LoadBitmapEx</unmanagedCodeEntityReference> method to load additional images after you create the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadbitmapex">
        <!--cd26b214-e027-40db-a718-dd1d533d6374-->
        <title>CMFCToolBar::LoadBitmapEx</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual BOOL LoadBitmapEx(
    CMFCToolBarInfo&amp; params,
    BOOL bLocked = FALSE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>params</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bLocked</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadlargeiconsstate">
        <!--01408bca-6329-40bf-bb9a-dd6a132f94c9-->
        <title>CMFCToolBar::LoadLargeIconsState</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>static BOOL __stdcall LoadLargeIconsState(
    LPCTSTR lpszProfileName = NULL);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadparameters">
        <!--1366d1cf-0058-4b09-811b-571f0c5ea10a-->
        <title>CMFCToolBar::LoadParameters</title>
        <content>
            <para>Loads global toolbar options from the Windows registry.</para>
            <legacySyntax>static BOOL LoadParameters( LPCTSTR lpszProfileName=NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the relative path of the Windows registry key.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method loads global parameters such as the menu animation type, the menu shadow style, and whether to display large icons from the Windows registry.</para>
                    <para>The <link xlink:href="a3d3e053-3e22-463f-9444-c73abb1bb9d7#cwinappex__loadstate">CWinAppEx::LoadState</link> method calls this method as a part of the initialization process of the application.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadstate">
        <!--42480587-13fe-4a48-9ca1-4ec4d219046e-->
        <title>CMFCToolBar::LoadState</title>
        <content>
            <para>Loads the toolbar state information from the Windows registry.</para>
            <legacySyntax>virtual BOOL LoadState(
    LPCTSTR lpszProfileName=NULL,
    int nIndex=-1,
    UINT uiID=(UINT)-1 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the relative path of the Windows registry key.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the control ID of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the resource ID of the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method as a part of the initialization process of the application. For more information, see <link xlink:href="a3d3e053-3e22-463f-9444-c73abb1bb9d7#cwinappex__loadstate">CWinAppEx::LoadState</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadtoolbar">
        <!--44a42479-f6eb-4397-8369-42c2cd5c95f9-->
        <title>CMFCToolBar::LoadToolBar</title>
        <content>
            <para>Loads the toolbar from application resources.</para>
            <legacySyntax>virtual BOOL LoadToolBar(
    UINT uiResID,
    UINT uiColdResID=0,
    UINT uiMenuResID=0,
    BOOL bLocked=FALSE,
    UINT uiDisabledResID=0,
    UINT uiMenuDisabledResID=0,
    UINT uiHotResID=0 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiColdResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the cold toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the regular menu images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bLocked</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether the toolbar is locked or not. If this parameter is <languageKeyword>TRUE</languageKeyword>, the toolbar is locked. Otherwise, the toolbar is not locked.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiDisabledResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the disabled toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiMenuDisabledResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the disabled menu images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiHotResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the bitmap that refers to the hot toolbar images.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method during initialization to load the images that are associated with the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example demonstrates how to use the <unmanagedCodeEntityReference>LoadToolBar</unmanagedCodeEntityReference> method in the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">IE Demo sample</legacyLink>.</para>
                    <codeReference>NVC_MFC_IEDemo#6,7</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__loadtoolbarex">
        <!--0c3a57bf-b137-49b4-b1a2-b41a65994dfb-->
        <title>CMFCToolBar::LoadToolBarEx</title>
        <content>
            <para>Loads the toolbar from application resources by using the <unmanagedCodeEntityReference>CMFCToolBarInfo</unmanagedCodeEntityReference> helper class to enable the application to use large images.</para>
            <legacySyntax>virtual BOOL LoadToolBarEx(
    UINT uiToolbarResID,
    CMFCToolBarInfo&amp; params,
    BOOL bLocked=FALSE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiToolbarResID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>params</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <unmanagedCodeEntityReference>CMFCToolBarInfo</unmanagedCodeEntityReference> object that contains the resource IDs for the toolbar images.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bLocked</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether the toolbar is locked or not. If this parameter is <languageKeyword>TRUE</languageKeyword>, the toolbar is locked. Otherwise, the toolbar is not locked.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to load toolbar images from the application resources.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__m_dbllargeimageratio">
        <!--a336ecdb-e9be-4d3c-85c5-23670be87034-->
        <title>CMFCToolBar::m_dblLargeImageRatio</title>
        <content>
            <para>Specifies the ratio between the dimension (height or width) of large images and the dimension of regular images.</para>
            <legacySyntax>AFX_IMPORT_DATA static double m_dblLargeImageRatio;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default ratio is 2. You can change this value to make large toolbar images larger or smaller.</para>
                    <para>The framework uses this data member when you do not specify a set of large images. For example, if you provide only the set of small images with size 16x16 and want the large images to have the size 24x24, set this data member to 1.5.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__nextmenu">
        <!--758aa502-b690-4447-ae29-db72f76f8775-->
        <title>CMFCToolBar::NextMenu</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual BOOL NextMenu();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onbeforeremovebutton">
        <!--70983aee-073d-4485-81e3-db76057f11f6-->
        <title>CMFCToolBar::OnBeforeRemoveButton</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual BOOL OnBeforeRemoveButton(
    CMFCToolBarButton* pButton,
    DROPEFFECT dropEffect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Unused.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>dropEffect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Unused.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onchangehot">
        <!--578b9550-db41-4b19-a6fb-b5a2b8127efd-->
        <title>CMFCToolBar::OnChangeHot</title>
        <content>
            <para>Called by the framework when a user selects a button on the toolbar.</para>
            <legacySyntax>virtual void OnChangeHot( int iHot );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>iHot</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the index of the toolbar button that is selected; or -1 if no toolbar button is selected.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to process notifications that the user selected a button on a toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onchangevisualmanager">
        <!--e396d32f-1d81-4b60-a35d-ded9f20f6881-->
        <title>CMFCToolBar::OnChangeVisualManager</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual void OnChangeVisualManager();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onfillbackground">
        <!--9c745c81-4fcf-44e3-8b4a-5aa9b5f53261-->
        <title>CMFCToolBar::OnFillBackground</title>
        <content>
            <para>Called by the framework from <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82#cbasepane__dopaint">CBasePane::DoPaint</link> to fill the toolbar background.</para>
            <legacySyntax>virtual void OnFillBackground( CDC* pDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <link xlink:href="#cmfctoolbar__dopaint">DoPaint</link> calls this method when the background of a toolbar has been filled. The default implementation does nothing.</para>
                    <para>Override this method to draw custom background in derived classes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onglobalfontschanged">
        <!--11cf9774-bc5e-423a-94b0-94aa49404604-->
        <title>CMFCToolBar::OnGlobalFontsChanged</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual void OnGlobalFontsChanged();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onreset">
        <!--41593e7f-a345-4d84-8ad3-c24b327c969d-->
        <title>CMFCToolBar::OnReset</title>
        <content>
            <para>Restores the toolbar to its original state.</para>
            <legacySyntax>virtual void OnReset();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to handle notification about a toolbar reset.</para>
                    <para>The default implementation does nothing. Override <unmanagedCodeEntityReference>OnReset</unmanagedCodeEntityReference> in a class derived from <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link> when the toolbar has dummy buttons that must be replaced when the toolbar returns to its original state.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onsetaccdata">
        <!--5c073aec-aa07-4f81-9115-96da5ca7129d-->
        <title>CMFCToolBar::OnSetAccData</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual BOOL OnSetAccData( long lVal );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lVal</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onsetdefaultbuttontext">
        <!--595fff15-812d-46cd-be8a-07a06480cace-->
        <title>CMFCToolBar::OnSetDefaultButtonText</title>
        <content>
            <para>Restores the text of a toolbar button to its default state.</para>
            <legacySyntax>virtual BOOL OnSetDefaultButtonText( CMFCToolBarButton* pButton );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a button, whose text is being set.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> ifthe text was successfully restored; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this method to process notifications that the text of a toolbar button is being changed to its default.</para>
                    <para>The default implementation loads the text of a button from the application resources.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__onusertooltip">
        <!--bffb929a-d768-4b4d-94ed-776932045439-->
        <title>CMFCToolBar::OnUserToolTip</title>
        <content>
            <para>Called by the framework when the tooltip for a button is about to be displayed.</para>
            <legacySyntax>virtual BOOL OnUserToolTip(
    CMFCToolBarButton* pButton,
    CString&amp; strTTText ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a toolbar button for which a tooltip is to be displayed.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>strTTText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that receives the text of the tooltip.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if <parameterReference>strTTText</parameterReference> was populated with tooltip text; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when the tooltip for a toolbar button is about to be displayed. If <unmanagedCodeEntityReference>OnUserToolTip</unmanagedCodeEntityReference> returns <languageKeyword>TRUE</languageKeyword>, the framework displays a tooltip which contains the text returned by <unmanagedCodeEntityReference>OnUserToolTip</unmanagedCodeEntityReference> in <parameterReference>strTTText</parameterReference>. Otherwise, the tooltip contains the button text. </para>
                    <para>Override <unmanagedCodeEntityReference>OnUserToolTip</unmanagedCodeEntityReference> to customize tool tips of toolbar buttons. The default implementation calls <link xlink:href="#cmfctoolbar__onusertooltip">CFrameWndEx::GetToolbarButtonToolTipText</link> to obtain the tooltip text.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__prevmenu">
        <!--76d583e9-5057-499a-880d-7c6418e1d5b3-->
        <title>CMFCToolBar::PrevMenu</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual BOOL PrevMenu();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__processcommand">
        <!--b00af7c6-3112-4c17-861f-95c26efd1e71-->
        <title>CMFCToolBar::ProcessCommand</title>
        <content>
            <para>Posts a <languageKeyword>WM_COMMAND</languageKeyword> message to the window that owns the toolbar.</para>
            <legacySyntax>BOOL ProcessCommand( CMFCToolBarButton* pButton );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a button on the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This method should always return <languageKeyword>TRUE</languageKeyword>. MFC uses <languageKeyword>FALSE</languageKeyword> values internally.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method posts a <languageKeyword>WM_COMMAND</languageKeyword> message to the window that owns the toolbar by calling <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__postmessage">CWnd::PostMessage</link> and passing the command ID of the specified button as the <parameterReference>wParam</parameterReference> parameter.</para>
                    <para>Use the <link xlink:href="f24f8bda-2cf4-49d5-aa3d-6f2e6bb003f2">ON_COMMAND</link> macro to map the <languageKeyword>WM_COMMAND</languageKeyword> message to a member function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__removeallbuttons">
        <!--04bfab5e-3bb5-47be-a28e-2a9e942617cd-->
        <title>CMFCToolBar::RemoveAllButtons</title>
        <content>
            <para>Removes all buttons and separators from the toolbar.</para>
            <legacySyntax>virtual void RemoveAllButtons();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when it recreates or destroys a toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__removebutton">
        <!--4200d498-1c38-4321-b1ee-77e87823b174-->
        <title>CMFCToolBar::RemoveButton</title>
        <content>
            <para>Removes from the toolbar the button that has the specified index.</para>
            <legacySyntax>virtual BOOL RemoveButton( int iIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>iIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the button to remove.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method succeeds, or <languageKeyword>FALSE</languageKeyword> if the specified index is invalid or the index refers to the <ui>Customize</ui> button.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method updates additional toolbar attributes that are affected by the removal of the button. For example, this method removes nonessential separators from the toolbar and rebuilds the table of shortcut keys.</para>
                    <para>For more information about the <ui>Customize</ui> button, see <link xlink:href="#cmfctoolbar__enablecustomizebutton">EnableCustomizeButton</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__removestatefromregistry">
        <!--a4a7e5b0-63d4-41a6-a5da-b6b0229a8c3b-->
        <title>CMFCToolBar::RemoveStateFromRegistry</title>
        <content>
            <para>Deletes the state information for the toolbar from the Windows registry.</para>
            <legacySyntax>virtual BOOL RemoveStateFromRegistry(
    LPCTSTR lpszProfileName=NULL,
    int nIndex=-1,
    UINT uiID=(UINT)-1 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the registry key where the state information is located.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The control ID of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the toolbar. If this parameter is -1, this method uses the <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__getdlgctrlid">CWnd::GetDlgCtrlID</link> method to retrieve the resource ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when it deletes a user-defined toolbar.</para>
                    <para>Override this method if you store additional state information in the Windows registry.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__replacebutton">
        <!--830335e8-88fb-4800-913a-8b24a05a4380-->
        <title>CMFCToolBar::ReplaceButton</title>
        <content>
            <para>Replaces a toolbar button with another toolbar button.</para>
            <legacySyntax>int ReplaceButton(
    UINT uiCmd,
    const CMFCToolBarButton&amp; button,
    BOOL bAll=FALSE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>uiCmd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the button to replace.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>button</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to the <unmanagedCodeEntityReference>CMFCToolBarButton</unmanagedCodeEntityReference> to insert.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bAll</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether to replace all buttons that have the command ID specified by <parameterReference>uiCmd</parameterReference>. If this parameter is <languageKeyword>TRUE</languageKeyword>, all buttons that have the specified command ID are replaced. Otherwise, the first button is replaced.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of buttons that are replaced. This method returns 0 if a button with the specified command ID does not exist on the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method when you want to add toolbar buttons that cannot be loaded from resources. You can create a placeholder button at design-time and replace that button with a custom button when you initialize the toolbar. See the VisualStudioDemo sample for an example that uses this method.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following example demonstrates how to use the <unmanagedCodeEntityReference>ReplaceButton</unmanagedCodeEntityReference> method in the <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">IE Demo sample</legacyLink>.</para>
                    <codeReference>NVC_MFC_IEDemo#6,10</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__resetall">
        <!--0c03b7fb-0d43-4f0b-b233-1218ec9f3d12-->
        <title>CMFCToolBar::ResetAll</title>
        <content>
            <para>Restores all toolbars to their original states.</para>
            <legacySyntax>static void __stdcall ResetAll();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method calls the <link xlink:href="#cmfctoolbar__restoreoriginalstate">RestoreOriginalState</link> method on each toolbar in the application that can be restored. It uses the <link xlink:href="#cmfctoolbar__canberestored">CanBeRestored</link> method to determine whether a toolbar can be restored.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__resetallimages">
        <!--3ae2a056-0b55-4d42-9776-c2e8d3540528-->
        <title>CMFCToolBar::ResetAllImages</title>
        <content>
            <para>Clears all toolbar image collections in the application.</para>
            <legacySyntax>static void __stdcall ResetAllImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method clears the image collections that are initialized by the <link xlink:href="#cmfctoolbar__loadtoolbar">CMFCToolBar::LoadToolBar</link> and <link xlink:href="#cmfctoolbar__loadbitmap">CMFCToolBar::LoadBitmap</link> methods.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__resetimages">
        <!--1fd0d24c-8caa-425f-ba83-604803196fba-->
        <title>CMFCToolBar::ResetImages</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual void ResetImages();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__restorefocus">
        <!--425633c6-3dac-4699-b8c1-7a9594a39378-->
        <title>CMFCToolBar::RestoreFocus</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>virtual void RestoreFocus();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__restoreoriginalstate">
        <!--41eb2fea-890c-46fe-b393-c70e67ad1b88-->
        <title>CMFCToolBar::RestoreOriginalState</title>
        <content>
            <para>Restores the original state of a toolbar.</para>
            <legacySyntax>virtual BOOL RestoreOriginalState();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method succeeds, or <languageKeyword>FALSE</languageKeyword> if the method fails or the toolbar is user-defined.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method loads the toolbar from the resource file by using the <link xlink:href="#cmfctoolbar__loadtoolbar">LoadToolBar</link> method.</para>
                    <para>The framework calls this method when the user chooses the <ui>Reset All</ui> button on the <ui>Toolbars</ui> page of a customization dialog box.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__saveparameters">
        <!--2d63bae4-f488-4d6c-b36e-eaafa65ce046-->
        <title>CMFCToolBar::SaveParameters</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>static BOOL __stdcall SaveParameters(
    LPCTSTR lpszProfileName = NULL);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__savestate">
        <!--c37f210f-f90e-4f9e-863e-2e5981471c72-->
        <title>CMFCToolBar::SaveState</title>
        <content>
            <para>Saves the state information for the toolbar in the Windows registry.</para>
            <legacySyntax>virtual BOOL SaveState(
    LPCTSTR lpszProfileName=NULL,
    int nIndex=-1,
    UINT uiID=(UINT)-1 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpszProfileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the relative path of the Windows registry key.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The control ID of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>uiID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID of the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when it saves the application state to the registry. For more information, see <link xlink:href="a3d3e053-3e22-463f-9444-c73abb1bb9d7#cwinappex__savestate">CWinAppEx::SaveState</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setbasiccommands">
        <!--832a60c9-c6b4-42e9-9fff-fd43b5074b77-->
        <title>CMFCToolBar::SetBasicCommands</title>
        <content>
            <para>Sets the list of commands that are always displayed when a user opens a menu.</para>
            <legacySyntax>static void __stdcall SetBasicCommands(
    CList&lt;UINT,UINT&gt;&amp; lstCommands );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lstCommands</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <unmanagedCodeEntityReference>CList</unmanagedCodeEntityReference> object that contains a collection of commands.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A basic command is always displayed when the menu is opened. This method is meaningful when the user chooses to view recently used commands.</para>
                    <para>Use the <link xlink:href="#cmfctoolbar__addbasiccommand">AddBasicCommand</link> method to add a command to the list of basic commands. Use the <link xlink:href="#cmfctoolbar__getbasiccommands">GetBasicCommands</link> method to retrieve the list of basic commands that is used by your application.</para>
                    <para>See the Explorer sample for an example that uses this method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setbuttoninfo">
        <!--55342a85-6a4f-4214-b4a2-9e22fdeaa6fa-->
        <title>CMFCToolBar::SetButtonInfo</title>
        <content>
            <para>Sets the command ID, style, and image ID of a toolbar button.</para>
            <legacySyntax>void SetButtonInfo(
    int nIndex,
    UINT nID,
    UINT nStyle,
    int iImage );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based index of the button whose properties are set.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The command ID of the button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The style of the button. See <link xlink:href="0f717eb9-fa32-4263-b852-809238863feb">ToolBar Control Styles</link> for the list of available toolbar button styles.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>iImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based image index of the button (that is, the index in the collection of toolbar images).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to set the properties of a toolbar button.</para>
                    <para>In Debug builds, this method generates an assertion failure if the index that is specified by <parameterReference>nIndex</parameterReference> is invalid.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__setbuttonstyle">CMFCToolBar::SetButtonStyle</link> method to set only the style of the button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setbuttons">
        <!--08e97608-1652-4777-bd63-6dba16ec1597-->
        <title>CMFCToolBar::SetButtons</title>
        <content>
            <para>Sets the buttons for the toolbar.</para>
            <legacySyntax>virtual BOOL SetButtons(
    const UINT* lpIDArray,
    int nIDCount,
    BOOL bRemapImages=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lpIDArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the array of command IDs of the buttons to insert.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nIDCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of items in <parameterReference>lpIDArray</parameterReference>.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bRemapImages</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether to associate the existing button images with the inserted buttons. If this parameter is <languageKeyword>TRUE</languageKeyword>, the images are remapped.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to remove existing buttons from a toolbar and insert a collection of new buttons.</para>
                    <para>This method adds the <ui>Customize</ui> button to the toolbar and sends the <unmanagedCodeEntityReference>AFX_WM_RESETTOOLBAR</unmanagedCodeEntityReference> message to the parent window of the toolbar. For more information about the <ui>Customize</ui> button, see <link xlink:href="#cmfctoolbar__enablecustomizebutton">EnableCustomizeButton</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setbuttonstyle">
        <!--53cac229-e066-4e21-8dbd-c55d84f5df68-->
        <title>CMFCToolBar::SetButtonStyle</title>
        <content>
            <para>Sets the style of the toolbar button at the given index.</para>
            <legacySyntax>virtual void SetButtonStyle(
    int nIndex,
    UINT nStyle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based index of the toolbar button whose style is to be set.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The style of the button. See <link xlink:href="0f717eb9-fa32-4263-b852-809238863feb">ToolBar Control Styles</link> for the list of available toolbar button styles.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method removes the <unmanagedCodeEntityReference>TBBS_PRESSED</unmanagedCodeEntityReference> style if <parameterReference>nStyle</parameterReference> is <unmanagedCodeEntityReference>TBBS_DISABLED</unmanagedCodeEntityReference> because the user cannot click a disabled button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setbuttontext">
        <!--170e7792-4e6a-4933-b4b8-578d73f9bc78-->
        <title>CMFCToolBar::SetButtonText</title>
        <content>
            <para>Sets the text label of a toolbar button.</para>
            <legacySyntax>BOOL SetButtonText(
    int nIndex,
    LPCTSTR lpszText );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of the toolbar button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>lpszText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The text label of the toolbar button. Must be non- <languageKeyword>NULL</languageKeyword>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if the method succeeds; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method returns <languageKeyword>FALSE</languageKeyword> if the provided index does not refer to a valid toolbar button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setcommandusageoptions">
        <!--40bf7504-5dbb-4a5e-9db4-a02225b8072f-->
        <title>CMFCToolBar::SetCommandUsageOptions</title>
        <content>
            <para>Specifies when rarely used commands do not appear in the menu of the application.</para>
            <legacySyntax>static BOOL SetCommandUsageOptions(
    UINT nStartCount,
    UINT nMinUsagePercentage=5 );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nStartCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of times that commands must be executed before the framework shows only the basic and recently-used commands.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nMinUsagePercentage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The percentage of times that a command must be executed to be considered a recently-used command.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>FALSE</languageKeyword> if <parameterReference>nMinUsagePercentage</parameterReference> is equal to or larger than 100; otherwise <languageKeyword>TRUE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to customize the algorithm that the framework uses to determine how basic and recently used menu items appear. For more information about basic commands, see <link xlink:href="#cmfctoolbar__addbasiccommand">CMFCToolBar::AddBasicCommand</link>.</para>
                    <para>This class uses the <unmanagedCodeEntityReference>CMFCCmdUsageCount</unmanagedCodeEntityReference> class to track the usage count of commands. For more information about this class, see <link xlink:href="9c33b783-37c0-43ea-9f31-3c75e246c841">CMFCCmdUsageCount Class</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setcustomizemode">
        <!--79cf3cee-cb0b-4bc0-bcab-799ede9ae720-->
        <title>CMFCToolBar::SetCustomizeMode</title>
        <content>
            <para>Enables or disables customization mode for all toolbars in the application.</para>
            <legacySyntax>static BOOL __stdcall SetCustomizeMode( BOOL bSet=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bSet</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether to enable or disable customization mode. Set this parameter to <languageKeyword>TRUE</languageKeyword> to enable customization mode or <languageKeyword>FALSE</languageKeyword> to disable it.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>TRUE</languageKeyword> if calling this method changes the customization mode; otherwise <languageKeyword>FALSE</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method adjusts the layout of and redraws each toolbar in the application. Call the <link xlink:href="#cmfctoolbar__iscustomizemode">CMFCToolBar::IsCustomizeMode</link> method to determine whether the application is in customization mode,</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setgraydisabledbuttons">
        <!--c3020080-d916-4979-a2a0-24a5519ef3e3-->
        <title>CMFCToolBar::SetGrayDisabledButtons</title>
        <content>
            <para>Specifies whether unavailable buttons on the toolbar are dimmed, or whether button-unavailable images are used.</para>
            <legacySyntax>void SetGrayDisabledButtons( BOOL bGrayDisabledButtons );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bGrayDisabledButtons</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies how to display unavailable buttons. If this parameter is <languageKeyword>TRUE</languageKeyword>, the framework dims the buttons. Otherwise, the framework uses the collection of button-unavailable images.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, unavailable buttons are dimmed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setheight">
        <!--f5ca9e1b-d667-485f-8fd1-145bc43859d6-->
        <title>CMFCToolBar::SetHeight</title>
        <content>
            <para>Sets the height of the toolbar.</para>
            <legacySyntax>void SetHeight( int cyHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>cyHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The height of the toolbar, in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method redraws the toolbar after it sets the height.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__sethelpmode">
        <!--102ea442-da2d-4bdd-adcf-affeed49cbf9-->
        <title>CMFCToolBar::SetHelpMode</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>static void __stdcall SetHelpMode(
    BOOL bOn = TRUE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bOn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__sethot">
        <!--2de6fca2-aa03-4ee0-bbc3-bf967d5e27e3-->
        <title>CMFCToolBar::SetHot</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>BOOL SetHot( CMFCToolBarButton * pMenuButton );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMenuButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__sethotborder">
        <!--8a9ec3b3-04a9-4aec-b74a-2c5d04b73136-->
        <title>CMFCToolBar::SetHotBorder</title>
        <content>
            <para>Specifies whether toolbar buttons are hot-tracked.</para>
            <legacySyntax>void SetHotBorder( BOOL bShowHotBorder );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bShowHotBorder</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether to hot-track toolbar buttons. If this parameter is <languageKeyword>TRUE</languageKeyword>, the toolbar hot-tracks its buttons. Otherwise, the toolbar does not hot-track its buttons.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If a button is hot-tracked, the framework highlights the button when the mouse moves across it. By default, each toolbar hot-tracks its buttons.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__gethotborder">CMFCToolBar::GetHotBorder</link> method to determine whether the toolbar hot-tracks its buttons.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__sethottextcolor">
        <!--13d9e494-2235-49f1-ac90-088b304372d7-->
        <title>CMFCToolBar::SetHotTextColor</title>
        <content>
            <para>Sets the text color for hot toolbar buttons.</para>
            <legacySyntax>static void SetHotTextColor( COLORREF clrText );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>clrText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the text color for toolbar buttons that are hot-tracked.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information about hot-tracked toolbar buttons, see <link xlink:href="#cmfctoolbar__gethotborder">CMFCToolBar::GetHotBorder</link> and <link xlink:href="#cmfctoolbar__sethotborder">CMFCToolBar::SetHotBorder</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setignoresettext">
        <!--40467496-28d2-4a82-a27e-92b0ac63609d-->
        <title>CMFCToolBar::SetIgnoreSetText</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>void SetIgnoreSetText( BOOL bValue );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bValue</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setlargeicons">
        <!--5acbb98a-4ccc-4cab-939b-6b96bf92c198-->
        <title>CMFCToolBar::SetLargeIcons</title>
        <content>
            <para>Specifies whether toolbar buttons display large icons.</para>
            <legacySyntax>static void SetLargeIcons( BOOL bLargeIcons=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bLargeIcons</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies which icons to use. If this parameter is <languageKeyword>TRUE</languageKeyword>, the framework displays large icons. Otherwise, the framework displays regular icons.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when the user changes the state of the <ui>Large Icons</ui> check box in the <ui>Options</ui> tab of the <ui>Customize</ui> dialog box. This method resizes all toolbars in the application.</para>
                    <para>By default, the framework displays regular icons.</para>
                    <para>For more information about the <ui>Customize</ui> dialog box, see <link xlink:href="78e2cddd-4f13-4097-afc3-1ad646a113f1">CMFCToolBarsCustomizeDialog Class</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setlockedsizes">
        <!--dfe882ab-dc53-4051-b038-b5aedfdeda82-->
        <title>CMFCToolBar::SetLockedSizes</title>
        <content>
            <para>Sets the sizes of locked buttons and locked images on the toolbar.</para>
            <legacySyntax>void SetLockedSizes(
    SIZE sizeButton,
    SIZE sizeImage,
    BOOL bDontScale = FALSE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>sizeButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of locked toolbar buttons.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>sizeImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of locked toolbar images.</para>
                        </definition>
                        <definedTerm> <parameterReference>bDontScale</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to scale or not locked toolbar images in high DPI mode.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default size of locked buttons is 23x22 pixels. The default size of locked images is 16x15 pixels.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__getlockedimagesize">CMFCToolBar::GetLockedImageSize</link> method to retrieve the size of locked images. Call the <link xlink:href="#cmfctoolbar__getbuttonsize">CMFCToolBar::GetButtonSize</link> method to retrieve the size of locked toolbar buttons.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setmaskmode">
        <!--57d23f32-532b-4dc9-981a-9b64688ab39a-->
        <title>CMFCToolBar::SetMaskMode</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>void SetMaskMode( BOOL bMasked );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bMasked</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setmenusizes">
        <!--0b5434c1-3f48-4ea0-821d-b67ed20bab84-->
        <title>CMFCToolBar::SetMenuSizes</title>
        <content>
            <para>Sets the size of toolbar menu buttons and their images.</para>
            <legacySyntax>static void __stdcall SetMenuSizes(
    SIZE sizeButton,
    SIZE sizeImage );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>sizeButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of toolbar buttons, in pixels.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>sizeImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of toolbar images, in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, menu buttons and their images have an undefined size.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__getmenubuttonsize">CMFCToolBar::GetMenuButtonSize</link> method to determine the size of menu buttons and the <link xlink:href="#cmfctoolbar__getmenuimagesize">CMFCToolBar::GetMenuImageSize</link> method to determine the size of menu button images.</para>
                    <para>See the IEDemo and MSMoneyDemo samples for examples that use this method.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setnonpermittedcommands">
        <!--3e95179f-a7ca-4c09-aa87-b47d44e15ad1-->
        <title>CMFCToolBar::SetNonPermittedCommands</title>
        <content>
            <para>Sets the list of commands that cannot be executed by the user.</para>
            <legacySyntax>static void SetNonPermittedCommands(
    CList&lt;UINT,UINT&gt;&amp; lstCommands );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lstCommands</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <unmanagedCodeEntityReference>CList</unmanagedCodeEntityReference> object that contains the commands that cannot be executed by the user.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call this method to prevent the user from selecting certain commands. For example, you might want to prevent the user from selecting certain commands for security reasons. See the MDITabsDemo and MenuSubSet samples for examples that use this method.</para>
                    <para>This method clears the previous list of non-permitted commands. By default, the list of non-permitted commands is empty.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setonerowwithsibling">
        <!--81459d59-5e0d-4e8d-9030-57fd7db945b3-->
        <title>CMFCToolBar::SetOneRowWithSibling</title>
        <content>
            <para>Positions the toolbar and its sibling on the same row.</para>
            <legacySyntax>void SetOneRowWithSibling();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when the user clicks the <ui>Show Buttons on One Row</ui> button. </para>
                    <para>Call the <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link> method to enable the <ui>Show Buttons on One Row</ui> or <ui>Show Buttons on Two Rows</ui> buttons. If you call <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link> for this toolbar, the sibling toolbar is moved to the row of this toolbar. Otherwise, this toolbar is moved to the row of the sibling.</para>
                    <para>The framework calls the <link xlink:href="#cmfctoolbar__settworowswithsibling">CMFCToolBar::SetTwoRowsWithSibling</link> method when the user clicks the <ui>Show Buttons on Two Rows</ui> button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setorigbuttons">
        <!--9fec96c5-3091-42c3-bf1f-1f945160a8ca-->
        <title>CMFCToolBar::SetOrigButtons</title>
        <content>
            <para> <token>cpp_fp_under_construction</token>
            </para>
            <legacySyntax>void SetOrigButtons( const CObList&amp; lstOrigButtons );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>lstOrigButtons</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setpermament">
        <!--715dfe73-efb1-46cd-bc5f-82815709569c-->
        <title>CMFCToolBar::SetPermament</title>
        <content>
            <para>Specifies whether a user can close the toolbar.</para>
            <legacySyntax>void SetPermament( BOOL bPermament=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bPermament</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean value that specifies whether a user can close the toolbar. If this parameter is <languageKeyword>TRUE</languageKeyword>, a user cannot close the toolbar. Otherwise, a user can close the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, a user can close each toolbar.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__canbeclosed">CMFCToolBar::CanBeClosed</link> method to determine whether a user can close the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setroutecommandsviaframe">
        <!--62a8a2d1-8046-4395-aacd-171e71df76eb-->
        <title>CMFCToolBar::SetRouteCommandsViaFrame</title>
        <content>
            <para>Specifies whether the parent frame or the owner sends commands to the toolbar.</para>
            <legacySyntax>void SetRouteCommandsViaFrame( BOOL bValue );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bValue</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If this parameter is <languageKeyword>TRUE</languageKeyword>, the parent frame sends commands to the toolbar. Otherwise, the owner sends commands to the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, the parent frame sends commands to the toolbar. Call the <link xlink:href="#cmfctoolbar__getroutecommandsviaframe">CMFCToolBar::GetRouteCommandsViaFrame</link> method to determine whether the parent frame or the owner sends commands to the toolbar.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setshowtooltips">
        <!--971e764f-fbc8-47d8-9f9c-f3a8dc72a391-->
        <title>CMFCToolBar::SetShowTooltips</title>
        <content>
            <para>Specifies whether the framework displays tool tips.</para>
            <legacySyntax>static void SetShowTooltips( BOOL bValue );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bValue</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If this parameter is <languageKeyword>TRUE</languageKeyword>, the framework shows tool tips. Otherwise, the framework hides tool tips.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, the framework shows tool tips.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__getshowtooltips">CMFCToolBar::GetShowTooltips</link> method to determine whether the framework shows tool tips.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setsiblingtoolbar">
        <!--7ba869fb-f153-45cf-8505-c17becfa3743-->
        <title>CMFCToolBar::SetSiblingToolBar</title>
        <content>
            <para>Specifies the sibling of the toolbar. </para>
            <legacySyntax>void SetSiblingToolBar( CMFCToolBar* pBrotherToolbar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pBrotherToolbar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the sibling toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method enables the <ui>Show Buttons on One Row</ui> or <ui>Show Buttons on Two Rows</ui> buttons that are shown when the user displays the <ui>Customize</ui> pop-up menu. Call this method when you want to enable the user to specify whether related toolbars appear on the same row or on different rows.</para>
                    <para>Call this method after you enable the <ui>Customize</ui> button that appears on the toolbar. To enable the <ui>Customize</ui> button, call the <link xlink:href="#cmfctoolbar__enablecustomizebutton">CMFCToolBar::EnableCustomizeButton</link> method.</para>
                    <para>To retrieve the sibling of a toolbar, call <link xlink:href="#cmfctoolbar__getsiblingtoolbar">CMFCToolBar::GetSiblingToolBar</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setsizes">
        <!--46be0f44-a140-474d-bd8a-34b6847aaf5a-->
        <title>CMFCToolBar::SetSizes</title>
        <content>
            <para>Specifies the sizes of buttons and images on all toolbars.</para>
            <legacySyntax>static void __stdcall SetSizes(
    SIZE sizeButton,
    SIZE sizeImage );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>sizeButton</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size of toolbar buttons, in pixels.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>sizeImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size of toolbar button images, in pixels.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default size of toolbar buttons is 23x22 pixels. The default size of toolbar button images is 16x15 pixels.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__getimagesize">CMFCToolBar::GetImageSize</link> method to retrieve the size of toolbar button images. Call the <link xlink:href="#cmfctoolbar__getbuttonsize">CMFCToolBar::GetButtonSize</link> method to retrieve the size of toolbar buttons.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__settoolbarbtntext">
        <!--ac59f487-1db5-4502-b6df-5379903c6045-->
        <title>CMFCToolBar::SetToolBarBtnText</title>
        <content>
            <para>Specifies properties of a button on the toolbar.</para>
            <legacySyntax>void SetToolBarBtnText(
    UINT nBtnIndex,
    LPCTSTR szText=NULL,
    BOOL bShowText=TRUE,
    BOOL bShowImage=TRUE );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nBtnIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The zero-based index of the toolbar button in the list of toolbar buttons.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>szText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the text label of the toolbar button.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bShowText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If this parameter is <languageKeyword>TRUE</languageKeyword>, the framework shows the text label. Otherwise, the framework hides the text label.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bShowImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If this parameter is <languageKeyword>TRUE</languageKeyword>, the framework shows the toolbar button image. Otherwise, the framework hides the toolbar button image.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, the framework shows the images of toolbar buttons but does not show the text label of toolbar buttons.</para>
                    <para>In Debug builds, this method generates an assertion failure if <parameterReference>nBtnIndex</parameterReference> does not refer to a valid toolbar button or the toolbar button is a separator.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__settworowswithsibling">
        <!--264d889b-0c45-46d4-8800-a986e84e814a-->
        <title>CMFCToolBar::SetTwoRowsWithSibling</title>
        <content>
            <para>Positions the toolbar and its sibling on separate rows.</para>
            <legacySyntax>void SetTwoRowsWithSibling();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when the user clicks the <ui>Show Buttons on Two Rows</ui> button. </para>
                    <para>Call the <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link> method to enable the <ui>Show Buttons on One Row</ui> or <ui>Show Buttons on Two Rows</ui> buttons. If you call <link xlink:href="#cmfctoolbar__setsiblingtoolbar">CMFCToolBar::SetSiblingToolBar</link> for this toolbar, the sibling toolbar is moved to a separate row. Otherwise, this toolbar is moved to a separate row.</para>
                    <para>The framework calls the <link xlink:href="#cmfctoolbar__setonerowwithsibling">CMFCToolBar::SetOneRowWithSibling</link> method when the user clicks the <ui>Show Buttons on One Row</ui> button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__setuserimages">
        <!--6f24bff2-121d-4044-925f-4f45709fcc80-->
        <title>CMFCToolBar::SetUserImages</title>
        <content>
            <para>Sets the collection of user-defined images in the application.</para>
            <legacySyntax>static BOOL SetUserImages( CMFCToolBarImages* pUserImages );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pUserImages</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the collection of user-defined images.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the method succeeds; otherwise 0 if the specified <unmanagedCodeEntityReference>CMFCToolBarImages</unmanagedCodeEntityReference> object is not valid or has an image size that differs from the default image size of the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework uses user-defined images to draw toolbar buttons that are customized by the user. The image list specified by <parameterReference>pUserImages</parameterReference> is shared among all toolbars in the application.</para>
                    <para>This method generates an assertion failure in Debug builds if the specified <unmanagedCodeEntityReference>CMFCToolBarImages</unmanagedCodeEntityReference> object is not valid or has an image size that differs from the default image size of the toolbar.</para>
                    <para>The OutlookDemo, ToolTipDemo, and VisualStudioDemo samples use this method to set the global collection of user-defined images. They load the file that is named UserImages.bmp, which is located in the working directory of the application.</para>
                    <para>Call the <link xlink:href="#cmfctoolbar__getuserimages">CMFCToolBar::GetUserImages</link> method to retrieve the collection of user-defined images in the application.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__stretchpane">
        <!--9b0b359e-839b-47ca-b172-1ed37b952dfd-->
        <title>CMFCToolBar::StretchPane</title>
        <content>
            <para>Stretches the toolbar vertically or horizontally, and repositions the buttons if necessary.</para>
            <legacySyntax>virtual CSize StretchPane(
    int nLength,
    BOOL bVert );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nLength</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The amount, in pixels, by which to stretch the pane.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>bVert</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>If <languageKeyword>TRUE</languageKeyword>, stretches the pane vertically. If <languageKeyword>FALSE</languageKeyword>, stretches the pane horizontally.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object that specifies the size of the toolbar client area.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method calls <link xlink:href="#cmfctoolbar__wraptoolbar">CMFCToolBar::WrapToolBar</link> to reposition the buttons within the stretched toolbar.</para>
                    <para>The return value is determined by calling <link xlink:href="#cmfctoolbar__calcsize">CMFCToolBar::CalcSize</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__translatechar">
        <!--8e09a839-3607-4898-b11b-4e188e4cb54e-->
        <title>CMFCToolBar::TranslateChar</title>
        <content>
            <para>Executes a button command if the specified key code corresponds to a valid keyboard shortcut. </para>
            <legacySyntax>virtual BOOL TranslateChar( UINT nChar );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a virtual key code. For a list of standard virtual key codes, see Winuser.h</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>FALSE</languageKeyword> if the specified key code is either unprintable or does not correspond to a valid keyboard shortcut; <languageKeyword>TRUE</languageKeyword> if the specified key code corresponds to a drop-down menu option; otherwise, the return value from <link xlink:href="#cmfctoolbar__processcommand">CMFCToolBar::ProcessCommand</link>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework calls this method when a key is pressed together with the Alt key.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__updatebutton">
        <!--b4a742a0-4bf8-4cec-a0f7-efb99f3291c2-->
        <title>CMFCToolBar::UpdateButton</title>
        <content>
            <para>Updates the state of the specified button.</para>
            <legacySyntax>void UpdateButton( int nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the zero-based index of the button to update.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__wraptoolbar">
        <!--037ace4d-b57c-4402-9855-39d1f52110c0-->
        <title>CMFCToolBar::WrapToolBar</title>
        <content>
            <para>Repositions toolbar buttons within the given dimensions.</para>
            <legacySyntax>int WrapToolBar(
    int nWidth,
    int nHeight = 32767,
    CDC* pDC = NULL,
    int nColumnWidth = -1,
    int nRowHeight = -1);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Maximum width of the toolbar.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Maximum height of the toolbar. Not used if the toolbar is floating.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a device context. If NULL, the device context for the toolbar is used.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>nColumnWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Button width. If -1, the current width is used.</para>
                        </definition>
                        <definedTerm>[in] m <parameterReference>nRowHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Button height. If -1, the current height is used.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of rows of buttons on the toolbar.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method repositions buttons within the toolbar, wrapping buttons to additional rows if necessary.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfctoolbar__m_bdontscaleimages">
        <!--b5b799d9-de85-43fc-b124-d6e54fc2e072-->
        <title>CMFCToolBar::m_bDontScaleImages</title>
        <content>
            <para>Specifies whether or not to scale toolbar images in high DPI mode.</para>
            <legacySyntax>AFX_IMPORT_DATA static BOOL m_bDontScaleImages;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="7b6db805-a572-43fd-9046-0fa6e3663e63">Classes</link> <link xlink:href="8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8">CMFCMenuBar</link> <link xlink:href="4c93c459-7f70-4240-8c63-280bb811e374">CMFCPopupMenuBar</link> <link xlink:href="78818ec5-83ce-42fa-a0d4-2d9d5ecc8770">CMFCDropDownToolBar</link> <link xlink:href="8fc94bdf-0da7-45d9-8bc4-52b7b1edf205">How to Put Controls on Toolbars</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



