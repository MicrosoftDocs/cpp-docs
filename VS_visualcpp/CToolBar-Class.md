---
title: "CToolBar Class"
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
ms.assetid: e868da26-5e07-4607-9651-e2f863ad9059
caps.latest.revision: 19
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
# CToolBar Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Control bars that have a row of bitmapped buttons and optional separators. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CToolBar : public CControlBar</legacySyntax>
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
                                    <para> <link xlink:href="#ctoolbar__ctoolbar">CToolBar::CToolBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#ctoolbar__commandtoindex">CToolBar::CommandToIndex</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the index of a button with the given command ID.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__create">CToolBar::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates the Windows toolbar and attaches it to the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__createex">CToolBar::CreateEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object with additional styles for the embedded <unmanagedCodeEntityReference>CToolBarCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__getbuttoninfo">CToolBar::GetButtonInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the ID, style, and image number of a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__getbuttonstyle">CToolBar::GetButtonStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the style for a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__getbuttontext">CToolBar::GetButtonText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the text that will appear on a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__getitemid">CToolBar::GetItemID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the command ID of a button or separator at the given index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__getitemrect">CToolBar::GetItemRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the display rectangle for the item at the given index.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__gettoolbarctrl">CToolBar::GetToolBarCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows direct access to the underlying common control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__loadbitmap">CToolBar::LoadBitmap</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads the bitmap containing bitmap-button images.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__loadtoolbar">CToolBar::LoadToolBar</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Loads a toolbar resource created with the resource editor.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setbitmap">CToolBar::SetBitmap</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a bitmapped image.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setbuttoninfo">CToolBar::SetButtonInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the ID, style, and image number of a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setbuttons">CToolBar::SetButtons</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets button styles and an index of button images within the bitmap.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setbuttonstyle">CToolBar::SetButtonStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the style for a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setbuttontext">CToolBar::SetButtonText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text that will appear on a button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setheight">CToolBar::SetHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the height of the toolbar.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#ctoolbar__setsizes">CToolBar::SetSizes</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the sizes of buttons and their bitmaps.</para>
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
            <para>The buttons can act like pushbuttons, check-box buttons, or radio buttons. <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> objects are usually embedded members of frame-window objects derived from the class <legacyLink xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CFrameWnd</legacyLink> or <legacyLink xlink:href="fa8736e6-511b-4c51-8b4d-eba78378aeb9">CMDIFrameWnd</legacyLink>.</para>
            <para> <legacyLink xlink:href="#ctoolbar__gettoolbarctrl">CToolBar::GetToolBarCtrl</legacyLink>, a member function new to MFC 4.0, allows you to take advantage of the Windows common control's support for toolbar customization and additional functionality. <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> member functions give you most of the functionality of the Windows common controls; however, when you call <unmanagedCodeEntityReference>GetToolBarCtrl</unmanagedCodeEntityReference>, you can give your toolbars even more of the characteristics of Windows 95/98 toolbars. When you call <unmanagedCodeEntityReference>GetToolBarCtrl</unmanagedCodeEntityReference>, it will return a reference to a <unmanagedCodeEntityReference>CToolBarCtrl</unmanagedCodeEntityReference> object. See <legacyLink xlink:href="8f2f8ad2-05d7-4975-8715-3f2eed795248">CToolBarCtrl</legacyLink> for more information about designing toolbars using Windows common controls. For more general information about common controls, see                 <externalLink> <linkText>Common Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775493</linkUri>
                </externalLink> in the <token>winSDK</token>.</para>
            <para>Visual C++ provides you with two methods to create a toolbar. To create a toolbar resource using the Resource Editor, follow these steps:  </para>
            <list class="ordered">
                <listItem>
                    <para>Create a toolbar resource.</para>
                </listItem>
                <listItem>
                    <para>Construct the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
                </listItem>
                <listItem>
                    <para>Call the <legacyLink xlink:href="#ctoolbar__create">Create</legacyLink> (or <legacyLink xlink:href="#ctoolbar__createex">CreateEx</legacyLink>) function to create the Windows toolbar and attach it to the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
                </listItem>
                <listItem>
                    <para>Call <legacyLink xlink:href="#ctoolbar__loadtoolbar">LoadToolBar</legacyLink> to load the toolbar resource.</para>
                </listItem>
            </list>
            <para>Otherwise, follow these steps:  </para>
            <list class="ordered">
                <listItem>
                    <para>Construct the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
                </listItem>
                <listItem>
                    <para>Call the <legacyLink xlink:href="#ctoolbar__create">Create</legacyLink> (or <legacyLink xlink:href="#ctoolbar__createex">CreateEx</legacyLink>) function to create the Windows toolbar and attach it to the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
                </listItem>
                <listItem>
                    <para>Call <legacyLink xlink:href="#ctoolbar__loadbitmap">LoadBitmap</legacyLink> to load the bitmap that contains the toolbar button images.</para>
                </listItem>
                <listItem>
                    <para>Call <legacyLink xlink:href="#ctoolbar__setbuttons">SetButtons</legacyLink> to set the button style and associate each button with an image in the bitmap.</para>
                </listItem>
            </list>
            <para>All the button images in the toolbar are taken from one bitmap, which must contain one image for each button. All images must be the same size; the default is 16 pixels wide and 15 pixels high. Images must be side by side in the bitmap.</para>
            <para>The <unmanagedCodeEntityReference>SetButtons</unmanagedCodeEntityReference> function takes a pointer to an array of control IDs and an integer that specifies the number of elements in the array. The function sets each button's ID to the value of the corresponding element of the array and assigns each button an image index, which specifies the position of the button's image in the bitmap. If an array element has the value <legacyBold>ID_SEPARATOR</legacyBold>, no image index is assigned.</para>
            <para>The order of the images in the bitmap is typically the order in which they are drawn on the screen, but you can use the <legacyLink xlink:href="#ctoolbar__setbuttoninfo">SetButtonInfo</legacyLink> function to change the relationship between image order and drawing order.</para>
            <para>All buttons in a toolbar are the same size. The default is 24 x 22 pixels, in accordance with                 <legacyItalic>Windows Interface Guidelines for Software Design</legacyItalic>. Any additional space between the image and button dimensions is used to form a border around the image.</para>
            <para>Each button has one image. The various button states and styles (pressed, up, down, disabled, disabled down, and indeterminate) are generated from that one image. Although bitmaps can be any color, you can achieve the best results with images in black and shades of gray.</para>
            <alert class="warning">
                <para> <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> supports bitmaps with a maximum of 16 colors. When you load an image into a toolbar editor, Visual Studio automatically converts the image to a 16-color bitmap, if necessary, and displays a warning message if the image was converted. If you use an image with more than 16 colors (using an external editor to edit the image), the application might behave unexpectedly.</para>
            </alert>
            <para>Toolbar buttons imitate pushbuttons by default. However, toolbar buttons can also imitate check-box buttons or radio buttons. Check-box buttons have three states: checked, cleared, and indeterminate. Radio buttons have only two states: checked and cleared.</para>
            <para>To set an individual button or separator style without pointing to an array, call <legacyLink xlink:href="#ctoolbar__getbuttonstyle">GetButtonStyle</legacyLink> to retrieve the style, and then call <legacyLink xlink:href="#ctoolbar__setbuttonstyle">SetButtonStyle</legacyLink> instead of <unmanagedCodeEntityReference>SetButtons</unmanagedCodeEntityReference>. <unmanagedCodeEntityReference>SetButtonStyle</unmanagedCodeEntityReference> is most useful when you want to change a button's style at run time.</para>
            <para>To assign text to appear on a button, call <legacyLink xlink:href="#ctoolbar__getbuttontext">GetButtonText</legacyLink> to retrieve the text to appear on the button, and then call <legacyLink xlink:href="#ctoolbar__setbuttontext">SetButtonText</legacyLink> to set the text. </para>
            <para>To create a check-box button, assign it the style <legacyBold>TBBS_CHECKBOX</legacyBold> or use a <unmanagedCodeEntityReference>CCmdUI</unmanagedCodeEntityReference> object's <unmanagedCodeEntityReference>SetCheck</unmanagedCodeEntityReference> member function in an <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handler. Calling <unmanagedCodeEntityReference>SetCheck</unmanagedCodeEntityReference> turns a pushbutton into a check-box button. Pass <unmanagedCodeEntityReference>SetCheck</unmanagedCodeEntityReference> an argument of 0 for unchecked, 1 for checked, or 2 for indeterminate.</para>
            <para>To create a radio button, call a <legacyLink xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766">CCmdUI</legacyLink> object's <legacyLink xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766#ccmdui__setradio">SetRadio</legacyLink> member function from an <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handler. Pass <unmanagedCodeEntityReference>SetRadio</unmanagedCodeEntityReference> an argument of 0 for unchecked or nonzero for checked. In order to provide a radio group's mutually exclusive behavior, you must have <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handlers for all of the buttons in the group.</para>
            <para>For more information on using <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference>, see the article <legacyLink xlink:href="af3319ad-c430-4f90-8361-e6a2c06fd084">MFC Toolbar Implementation</legacyLink> and <legacyLink xlink:href="8cb895c0-40ea-40ef-90ee-1dd29f34cfd1">Technical Note 31: Control Bars</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <legacyLink xlink:href="4d668c55-9b42-4838-97ac-cf2b3000b82c">CControlBar</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxext.h</para>
        </content>
    </requirements>
    <section address="ctoolbar__commandtoindex">
        <!--5eedd98f-0431-41f6-ab0f-3606a4c8fc8c-->
        <title>CToolBar::CommandToIndex</title>
        <content>
            <para>This member function returns the index of the first toolbar button, starting at position 0, whose command ID matches <parameterReference>nIDFind</parameterReference>.</para>
            <legacySyntax>int CommandToIndex( UINT nIDFind ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIDFind</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Command ID of a toolbar button.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The index of the button, or –1 if no button has the given command ID.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__create">
        <!--b2d46cc4-38ab-47bf-b0a2-840e2eb736e2-->
        <title>CToolBar::Create</title>
        <content>
            <para>This member function creates a Windows toolbar (a child window) and associates it with the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    CWnd* pParentWnd,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_TOP,
    UINT nID = AFX_IDW_TOOLBAR );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the window that is the toolbar's parent.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The toolbar style. Additional toolbar styles supported are:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_TOP</unmanagedCodeEntityReference>   Control bar is at top of the frame window.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_BOTTOM</unmanagedCodeEntityReference>   Control bar is at bottom of the frame window.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_NOALIGN</unmanagedCodeEntityReference>   Control bar is not repositioned when the parent is resized.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_TOOLTIPS</unmanagedCodeEntityReference>   Control bar displays tool tips.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CBRS_SIZE_DYNAMIC</legacyBold>   Control bar is dynamic.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CBRS_SIZE_FIXED</legacyBold>   Control bar is fixed.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CBRS_FLOATING</legacyBold>   Control bar is floating.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>CBRS_FLYBY</unmanagedCodeEntityReference>   Status bar displays information about the button. </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>CBRS_HIDE_INPLACE</legacyBold>   Control bar is not displayed to the user.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The toolbar's child-window ID.</para>
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
                    <para>It also sets the toolbar height to a default value.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#179</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__createex">
        <!--e4ee8f3a-a8dc-4577-a4fe-ac932c794c7b-->
        <title>CToolBar::CreateEx</title>
        <content>
            <para>Call this function to create a Windows toolbar (a child window) and associate it with the <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL CreateEx(
    CWnd* pParentWnd,
    DWORD dwCtrlStyle = TBSTYLE_FLAT,
    DWORD dwStyle = WS_CHILD | WS_VISIBLE | CBRS_ALIGN_TOP,
    CRect rcBorders = CRect(
    0,
    0,
    0,
    0 ),
    UINT nID = AFX_IDW_TOOLBAR );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the window that is the toolbar's parent.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwCtrlStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Additional styles for the creation of the embedded <legacyLink xlink:href="8f2f8ad2-05d7-4975-8715-3f2eed795248">CToolBarCtrl</legacyLink> object. By default, this value is set to <legacyBold>TBSTYLE_FLAT</legacyBold>. For a complete list of toolbar styles, see <parameterReference>dwStyle</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The toolbar style. See                                 <externalLink> <linkText>Toolbar Control and Button Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760439</linkUri>
                                </externalLink> in the <token>winSDK</token> for a list of appropriate styles.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>rcBorders</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that defines the widths of the toolbar window borders. These borders are set to 0,0,0,0 by default, thereby resulting in a toolbar window with no borders.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The toolbar's child-window ID.</para>
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
                    <para>It also sets the toolbar height to a default value.</para>
                    <para>Use <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference>, instead of <legacyLink xlink:href="#ctoolbar__create">Create</legacyLink>, when certain styles need to be present during the creation of the embedded tool bar control. For example, set <parameterReference>dwCtrlStyle</parameterReference> to <legacyBold>TBSTYLE_FLAT | TBSTYLE_TRANSPARENT</legacyBold> to create a toolbar that resembles the Internet Explorer 4 toolbars.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#180</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__ctoolbar">
        <!--f095829f-f1c2-47af-af6c-1bc40f09e4c7-->
        <title>CToolBar::CToolBar</title>
        <content>
            <para>This member function constructs a <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> object and sets the default sizes.</para>
            <legacySyntax>CToolBar();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call the <legacyLink xlink:href="#ctoolbar__create">Create</legacyLink> member function to create the toolbar window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__getbuttoninfo">
        <!--a2ad9fdd-adb9-4964-a79e-72fbca24d240-->
        <title>CToolBar::GetButtonInfo</title>
        <content>
            <para>This member function retrieves the control ID, style, and image index of the toolbar button or separator at the location specified by                 <legacyItalic>nIndex.</legacyItalic>
            </para>
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
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index of the toolbar button or separator whose information is to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to a <legacyBold>UINT</legacyBold> that is set to the command ID of the button.</para>
                        </definition>
                        <definedTerm> <parameterReference>nStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to a <legacyBold>UINT</legacyBold> that is set to the style of the button.</para>
                        </definition>
                        <definedTerm> <parameterReference>iImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to an integer that is set to the index of the button's image within the bitmap.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Those values are assigned to the variables referenced by <parameterReference>nID</parameterReference>, <parameterReference>nStyle</parameterReference>, and <parameterReference>iImage</parameterReference>. The image index is the position of the image within the bitmap that contains images for all the toolbar buttons. The first image is at position 0.</para>
                    <para>If <parameterReference>nIndex</parameterReference> specifies a separator, <parameterReference>iImage</parameterReference> is set to the separator width in pixels.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__getbuttonstyle">
        <!--795fc425-442a-4940-b2a1-ce9594bf2665-->
        <title>CToolBar::GetButtonStyle</title>
        <content>
            <para>Call this member function to retrieve the style of a button or separator on the toolbar.</para>
            <legacySyntax>UINT GetButtonStyle( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of the toolbar button or separator style to be retrieved.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The style of the button or separator specified by <parameterReference>nIndex</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A button's style determines how the button appears and how it responds to user input. See <legacyLink xlink:href="#ctoolbar__setbuttonstyle">SetButtonStyle</legacyLink> for examples of button styles.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__getbuttontext">
        <!--d6526674-0ee4-4e24-8321-daff3c023480-->
        <title>CToolBar::GetButtonText</title>
        <content>
            <para>Call this member function to retrieve the text that appears on a button.</para>
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
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index of the text to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>rString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object that will contain the text to be retrieved.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object containing the button text. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The second form of this member function fills a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object with the string text.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__getitemid">
        <!--1330b82f-9ea1-4978-a247-4d6e68c58dbb-->
        <title>CToolBar::GetItemID</title>
        <content>
            <para>This member function returns the command ID of the button or separator specified by <parameterReference>nIndex</parameterReference>.</para>
            <legacySyntax>UINT GetItemID( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index of the item whose ID is to be retrieved.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The command ID of the button or separator specified by <parameterReference>nIndex</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Separators return <legacyBold>ID_SEPARATOR</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__getitemrect">
        <!--865bed6a-3520-47b9-8902-da9daa7f5df9-->
        <title>CToolBar::GetItemRect</title>
        <content>
            <para>This member function fills the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure whose address is contained in <parameterReference>lpRect</parameterReference> with the coordinates of the button or separator specified by <parameterReference>nIndex</parameterReference>.</para>
            <legacySyntax>virtual void GetItemRect(
    int nIndex,
    LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index of the item (button or separator) whose rectangle coordinates are to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Address of the <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that will contain the item's coordinates.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Coordinates are in pixels relative to the upper-left corner of the toolbar.</para>
                    <para>Use <unmanagedCodeEntityReference>GetItemRect</unmanagedCodeEntityReference> to get the coordinates of a separator you want to replace with a combo box or other control.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ctoolbar__setsizes">CToolBar::SetSizes</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__gettoolbarctrl">
        <!--34cea1c6-ffcd-4dbc-b072-a3faaf0beeaa-->
        <title>CToolBar::GetToolBarCtrl</title>
        <content>
            <para>This member function allows direct access to the underlying common control.</para>
            <legacySyntax>CToolBarCtrl&amp; GetToolBarCtrl() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to a <unmanagedCodeEntityReference>CToolBarCtrl</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <unmanagedCodeEntityReference>GetToolBarCtrl</unmanagedCodeEntityReference> to take advantage of the functionality of the Windows toolbar common control, and to take advantage of the support <legacyLink xlink:href="8f2f8ad2-05d7-4975-8715-3f2eed795248">CToolBarCtrl</legacyLink> provides for toolbar customization. </para>
                    <para>For more information about using common controls, see the article <legacyLink xlink:href="b2842884-6435-4b8f-933b-21671bf8af95">Controls</legacyLink> and                         <externalLink> <linkText>Common Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775493</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocViewSDI#15</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__loadbitmap">
        <!--1bcda32b-58a6-4be6-8857-3e1797a1d4d0-->
        <title>CToolBar::LoadBitmap</title>
        <content>
            <para>Call this member function to load the bitmap specified by <parameterReference>lpszResourceName</parameterReference> or <parameterReference>nIDResource</parameterReference>.</para>
            <legacySyntax>BOOL LoadBitmap( LPCTSTR lpszResourceName );

BOOL LoadBitmap( UINT nIDResource );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszResourceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the resource name of the bitmap to be loaded.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of the bitmap to be loaded.</para>
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
                    <para>The bitmap should contain one image for each toolbar button. If the images are not of the standard size (16 pixels wide and 15 pixels high), call <legacyLink xlink:href="#ctoolbar__setsizes">SetSizes</legacyLink> to set the button sizes and their images.</para>
                    <alert class="warning">
                        <para> <unmanagedCodeEntityReference>CToolBar</unmanagedCodeEntityReference> supports bitmaps with a maximum of 16 colors. When you load an image into a toolbar editor, Visual Studio automatically converts the image to a 16-color bitmap, if necessary, and displays a warning message if the image was converted. If you use an image with more than 16 colors (using an external editor to edit the image), the application might behave unexpectedly.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__loadtoolbar">
        <!--fa05c955-f1bf-4d0d-bccb-955085f589c6-->
        <title>CToolBar::LoadToolBar</title>
        <content>
            <para>Call this member function to load the toolbar specified by <parameterReference>lpszResourceName</parameterReference> or <parameterReference>nIDResource</parameterReference>.</para>
            <legacySyntax>BOOL LoadToolBar( LPCTSTR lpszResourceName );

BOOL LoadToolBar( UINT nIDResource );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszResourceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the resource name of the toolbar to be loaded.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIDResource</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Resource ID of the toolbar to be loaded.</para>
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
                    <para>See <legacyLink xlink:href="aa9f0adf-60f6-4f79-ab05-bc330f15ec43">toolbar editor</legacyLink> in for more information about creating a toolbar resource.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ctoolbar__createex">CToolBar::CreateEx</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setbitmap">
        <!--8517e61d-d7ae-4f50-bf7c-5702aa191409-->
        <title>CToolBar::SetBitmap</title>
        <content>
            <para>Call this member function to set the bitmap image for the toolbar.</para>
            <legacySyntax>BOOL SetBitmap( HBITMAP hbmImageWell );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>hbmImageWell</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Handle of a bitmap image that is associated with a toolbar.</para>
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
                    <para>For example, call <unmanagedCodeEntityReference>SetBitmap</unmanagedCodeEntityReference> to change the bitmapped image after the user takes an action on a document that changes the action of a button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setbuttoninfo">
        <!--5bbaa92b-62f7-4bbd-9fbf-c6d5c513ca8a-->
        <title>CToolBar::SetButtonInfo</title>
        <content>
            <para>Call this member function to set the button's command ID, style, and image number.</para>
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
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the button or separator for which information is to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value to which the button's command ID is set.</para>
                        </definition>
                        <definedTerm> <parameterReference>nStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new button style. The following button styles are supported:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>TBBS_BUTTON</legacyBold>   Standard pushbutton (default)</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_SEPARATOR</legacyBold>   Separator</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_CHECKBOX</legacyBold>   Auto check-box button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_GROUP</legacyBold>   Marks the start of a group of buttons</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_CHECKGROUP</legacyBold>   Marks the start of a group of check-box buttons</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_DROPDOWN   </legacyBold>Creates a drop-down list button. </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_AUTOSIZE   </legacyBold>The button's width will be calculated based on the text of the button, not on the size of the image.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_NOPREFIX   </legacyBold>The button text will not have an accelerator prefix associated with it.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>iImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>New index for the button's image within the bitmap.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For separators, which have the style <legacyBold>TBBS_SEPARATOR</legacyBold>, this function sets the separator's width in pixels to the value stored in <parameterReference>iImage</parameterReference>.</para>
                    <alert class="note">
                        <para>You can also set button states using the <parameterReference>nStyle</parameterReference> parameter; however, because button states are controlled by the <legacyLink xlink:href="c4de3c21-2d2e-4b89-a4ce-d0c0e2d9edc4">ON_UPDATE_COMMAND_UI</legacyLink> handler, any state you set using <unmanagedCodeEntityReference>SetButtonInfo</unmanagedCodeEntityReference> will be lost during the next idle processing. See <legacyLink xlink:href="82f09773-c978-427b-b321-05a6143b7369">How to Update User-Interface Objects</legacyLink> and <legacyLink xlink:href="8cb895c0-40ea-40ef-90ee-1dd29f34cfd1">TN031: Control Bars</legacyLink> for more information.</para>
                    </alert>
                    <para>For information on bitmap images and buttons, see the <legacyLink xlink:href="e868da26-5e07-4607-9651-e2f863ad9059">CToolBar</legacyLink> Overview and <legacyLink xlink:href="#ctoolbar__loadbitmap">CToolBar::LoadBitmap</legacyLink>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setbuttons">
        <!--59a15aba-7b98-4653-a7af-a77d2c325f36-->
        <title>CToolBar::SetButtons</title>
        <content>
            <para>This member function sets each toolbar button's command ID to the value specified by the corresponding element of the array <parameterReference>lpIDArray</parameterReference>.</para>
            <legacySyntax>BOOL SetButtons(
    const UINT* lpIDArray,
    int nIDCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpIDArray</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an array of command Ids. It can be <legacyBold>NULL </legacyBold>to allocate empty buttons.</para>
                        </definition>
                        <definedTerm> <parameterReference>nIDCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Number of elements in the array pointed to by <parameterReference>lpIDArray</parameterReference>.</para>
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
                    <para>If an element of the array has the value <legacyBold>ID_SEPARATOR</legacyBold>, a separator is created in the corresponding position of the toolbar. This function also sets each button's style to <legacyBold>TBBS_BUTTON</legacyBold> and each separator's style to <legacyBold>TBBS_SEPARATOR</legacyBold>, and assigns an image index to each button. The image index specifies the position of the button's image within the bitmap.</para>
                    <para>You do not need to account for separators in the bitmap because this function does not assign image indexes for separators. If your toolbar has buttons at positions 0, 1, and 3 and a separator at position 2, the images at positions 0, 1, and 2 in your bitmap are assigned to the buttons at positions 0, 1, and 3, respectively.</para>
                    <para>If <parameterReference>lpIDArray</parameterReference> is <legacyBold>NULL</legacyBold>, this function allocates space for the number of items specified by <parameterReference>nIDCount</parameterReference>. Use <legacyLink xlink:href="#ctoolbar__setbuttoninfo">SetButtonInfo</legacyLink> to set each item's attributes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setbuttonstyle">
        <!--05b3f897-7aad-45e2-9a10-e1a12e416e2e-->
        <title>CToolBar::SetButtonStyle</title>
        <content>
            <para>Call this member function to set the style of a button or separator, or to group buttons.</para>
            <legacySyntax>void SetButtonStyle(
    int nIndex,
    UINT nStyle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index of the button or separator whose information is to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>nStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The button style. The following button styles are supported:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>TBBS_BUTTON</legacyBold>   Standard pushbutton (default)</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_SEPARATOR</legacyBold>   Separator</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_CHECKBOX</legacyBold>   Auto check-box button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_GROUP</legacyBold>   Marks the start of a group of buttons</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_CHECKGROUP</legacyBold>   Marks the start of a group of check-box buttons</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_DROPDOWN</legacyBold>   Creates a drop-down list button </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_AUTOSIZE</legacyBold>   The button's width will be calculated based on the text of the button, not on the size of the image </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TBBS_NOPREFIX</legacyBold>   The button text will not have an accelerator prefix associated with it</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A button's style determines how the button appears and how it responds to user input.</para>
                    <para>Before calling <unmanagedCodeEntityReference>SetButtonStyle</unmanagedCodeEntityReference>, call the <legacyLink xlink:href="#ctoolbar__getbuttonstyle">GetButtonStyle</legacyLink> member function to retrieve the button or separator style.</para>
                    <alert class="note">
                        <para>You can also set button states using the <parameterReference>nStyle</parameterReference> parameter; however, because button states are controlled by the <legacyLink xlink:href="c4de3c21-2d2e-4b89-a4ce-d0c0e2d9edc4">ON_UPDATE_COMMAND_UI</legacyLink> handler, any state you set using <unmanagedCodeEntityReference>SetButtonStyle</unmanagedCodeEntityReference> will be lost during the next idle processing. See <legacyLink xlink:href="82f09773-c978-427b-b321-05a6143b7369">How to Update User-Interface Objects</legacyLink> and <legacyLink xlink:href="8cb895c0-40ea-40ef-90ee-1dd29f34cfd1">TN031: Control Bars</legacyLink> for more information.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setbuttontext">
        <!--891b8476-5aea-44a5-8170-372b5d7484eb-->
        <title>CToolBar::SetButtonText</title>
        <content>
            <para>Call this function to set the text on a button.</para>
            <legacySyntax>BOOL SetButtonText(
    int nIndex,
    LPCTSTR lpszText );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Index of the button whose text is to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the text to be set on a button.</para>
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
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#ctoolbar__gettoolbarctrl">CToolBar::GetToolBarCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setheight">
        <!--c824092b-3647-41c3-b275-c2e1144eee6a-->
        <title>CToolBar::SetHeight</title>
        <content>
            <para>This member function sets the toolbar's height to the value, in pixels, specified in <parameterReference>cyHeight</parameterReference>.</para>
            <legacySyntax>void SetHeight( int cyHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cyHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The height in pixels of the toolbar.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After calling <legacyLink xlink:href="#ctoolbar__setsizes">SetSizes</legacyLink>, use this member function to override the standard toolbar height. If the height is too small, the buttons will be clipped at the bottom.</para>
                    <para>If this function is not called, the framework uses the size of the button to determine the toolbar height.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="ctoolbar__setsizes">
        <!--b3bb2116-005d-4f34-a99c-5d051a0901d3-->
        <title>CToolBar::SetSizes</title>
        <content>
            <para>Call this member function to set the toolbar's buttons to the size, in pixels, specified in                 <legacyItalic>sizeButton</legacyItalic>.</para>
            <legacySyntax>void SetSizes(
    SIZE sizeButton,
    SIZE sizeImage );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>sizeButton</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The size in pixels of each button.</para>
                        </definition>
                        <definedTerm> <parameterReference>sizeImage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The size in pixels of each image.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>sizeImage</parameterReference> parameter must contain the size, in pixels, of the images in the toolbar's bitmap. The dimensions in                         <legacyItalic>sizeButton</legacyItalic> must be sufficient to hold the image plus 7 pixels extra in width and 6 pixels extra in height. This function also sets the toolbar height to fit the buttons.</para>
                    <para>Call this member function only for toolbars that do not follow                         <legacyItalic>Windows Interface Guidelines for Software Design</legacyItalic> recommendations for button and image sizes.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCListView#8</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample CTRLBARS</legacyLink> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample DLGCBR32</legacyLink> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample DOCKTOOL</legacyLink> <link xlink:href="4d668c55-9b42-4838-97ac-cf2b3000b82c">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="8f2f8ad2-05d7-4975-8715-3f2eed795248">CToolBarCtrl</link> <link xlink:href="4d668c55-9b42-4838-97ac-cf2b3000b82c">CControlBar</link> <link xlink:href="#ctoolbar__create">CToolBar::Create</link> <link xlink:href="#ctoolbar__loadbitmap">CToolBar::LoadBitmap</link> <link xlink:href="#ctoolbar__setbuttons">CToolBar::SetButtons</link> <link xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766#ccmdui__setcheck">CCmdUI::SetCheck</link> <link xlink:href="04eaaaf5-f510-48ab-b425-94665ba24766#ccmdui__setradio">CCmdUI::SetRadio</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



