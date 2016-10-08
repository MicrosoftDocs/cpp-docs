---
title: "CMFCMenuButton Class"
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
ms.assetid: 53d3d459-1e5a-47c5-8b7f-2e61f6af5187
caps.latest.revision: 25
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# CMFCMenuButton Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>A button that displays a pop-up menu and reports on the user's menu selections.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CMFCMenuButton : public CMFCButton</legacySyntax>
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
                                    <para> <link xlink:href="#cmfcmenubutton__cmfcmenubutton">CMFCMenuButton::CMFCMenuButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CMFCMenuButton</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#cmfcmenubutton__pretranslatemessage">CMFCMenuButton::PreTranslateMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to translate window messages before they are dispatched. (Overrides <unmanagedCodeEntityReference>CMFCButton::PreTranslateMessage</unmanagedCodeEntityReference>.)</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfcmenubutton__sizetocontent">CMFCMenuButton::SizeToContent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the size of the button according to its text and image size.</para>
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
                                    <para> <link xlink:href="#cmfcmenubutton__m_bosmenu">CMFCMenuButton::m_bOSMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether to display the default system pop-up menu or to use <link xlink:href="1de20640-243c-47e1-85de-1baa4153bc83#ccontextmenumanager__trackpopupmenu">CContextMenuManager::TrackPopupMenu</link>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfcmenubutton__m_brightarrow">CMFCMenuButton::m_bRightArrow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the pop-up menu will appear underneath or to the right of the button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfcmenubutton__m_bstaypressed">CMFCMenuButton::m_bStayPressed</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the menu button changes its state after the user releases the button.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfcmenubutton__m_hmenu">CMFCMenuButton::m_hMenu</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A handle to the attached Windows menu.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cmfcmenubutton__m_nmenuresult">CMFCMenuButton::m_nMenuResult</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>An identifier that indicates which item the user selected from the pop-up menu.</para>
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
            <para>The <unmanagedCodeEntityReference>CMFCMenuButton</unmanagedCodeEntityReference> class is derived from the <link xlink:href="4b32f57c-7a53-4734-afb9-d47e3359f62e">CMFCButton Class</link> which is, in turn, derived from the <link xlink:href="cdc76d5b-31da-43c5-bc43-fde4cb39de5b">CButton Class</link>. Therefore, you can use <unmanagedCodeEntityReference>CMFCMenuButton</unmanagedCodeEntityReference> in your code the same way you would use <unmanagedCodeEntityReference>CButton</unmanagedCodeEntityReference>.</para>
            <para>When you create a <unmanagedCodeEntityReference>CMFCMenuButton</unmanagedCodeEntityReference>, you must pass in a handle to the associated pop-up menu. Next, call the function <unmanagedCodeEntityReference>CMFCMenuButton::SizeToContent</unmanagedCodeEntityReference>. <unmanagedCodeEntityReference>CMFCMenuButton::SizeToContent</unmanagedCodeEntityReference> checks that the button size is sufficient to include an arrow that points to the location where the pop-up window will appear - namely, underneath or to the right of the button.</para>
        </content>
    </languageReferenceRemarks>
    <codeExample>
        <description>
            <content>
                <para>The following example demonstrates how to set the handle of the menu attached to the button, resize the button according to its text and image size, and set the pop-up menu that is displayed by the framework. This code snippet is part of the <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">New Controls sample</legacyLink>.</para>
            </content>
        </description>
        <codeReference>NVC_MFC_NewControls#38,39</codeReference>
    </codeExample>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</legacyLink>
            </para>
            <para> <legacyLink xlink:href="cdc76d5b-31da-43c5-bc43-fde4cb39de5b">CButton</legacyLink>
            </para>
            <para> <legacyLink xlink:href="4b32f57c-7a53-4734-afb9-d47e3359f62e">CMFCButton</legacyLink>
            </para>
            <para> <legacyLink xlink:href="53d3d459-1e5a-47c5-8b7f-2e61f6af5187">CMFCMenuButton</legacyLink>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> afxmenubutton.h</para>
        </content>
    </requirements>
    <section address="cmfcmenubutton__cmfcmenubutton">
        <!--60a586fc-dc03-4b21-bcec-cfbbab13791d-->
        <title>CMFCMenuButton::CMFCMenuButton</title>
        <content>
            <para>Constructs a new <legacyLink xlink:href="53d3d459-1e5a-47c5-8b7f-2e61f6af5187">CMFCMenuButton</legacyLink> object.</para>
            <legacySyntax>CMFCMenuButton();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cmfcmenubutton__m_bosmenu">
        <!--2183385c-df94-46a2-a7df-8673a78a9ed9-->
        <title>CMFCMenuButton::m_bOSMenu</title>
        <content>
            <para>A Boolean member variable that indicates which pop-up menu the framework displays.</para>
            <legacySyntax>BOOL m_bOSMenu;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <unmanagedCodeEntityReference>m_bOSMenu</unmanagedCodeEntityReference> is <languageKeyword>TRUE</languageKeyword>, the framework calls the inherited <unmanagedCodeEntityReference>TrackPopupMenu</unmanagedCodeEntityReference> method for this object. Otherwise, the framework calls <link xlink:href="1de20640-243c-47e1-85de-1baa4153bc83#ccontextmenumanager__trackpopupmenu">CContextMenuManager::TrackPopupMenu</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfcmenubutton__m_brightarrow">
        <!--7059e326-a3fc-4e2d-a5cf-041640c086c7-->
        <title>CMFCMenuButton::m_bRightArrow</title>
        <content>
            <para>A Boolean member variable that indicates the location of the pop-up menu.</para>
            <legacySyntax>BOOL m_bRightArrow;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When the user presses the menu button, the application shows a pop-up menu. The framework will display the pop-up menu either under the button or to the right of the button. The button also has a small arrow that indicates where the pop-up menu will appear. If <unmanagedCodeEntityReference>m_bRightArrow</unmanagedCodeEntityReference> is <languageKeyword>TRUE</languageKeyword>, the framework displays the pop-up menu to the right of the button. Otherwise, it displays the pop-up menu under the button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfcmenubutton__m_bstaypressed">
        <!--736b6ddd-0c97-4234-8bce-27e062678ab2-->
        <title>CMFCMenuButton::m_bStayPressed</title>
        <content>
            <para>A Boolean member variable that indicates whether the menu button appears pressed while the user makes a selection from the pop-up menu.</para>
            <legacySyntax>BOOL m_bStayPressed;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the <unmanagedCodeEntityReference>m_bStayPressed</unmanagedCodeEntityReference> member is <languageKeyword>FALSE</languageKeyword>, the menu button does not become pressed when the uses clicks the button. In this case, the framework displays only the pop-up menu.</para>
                    <para>If the <unmanagedCodeEntityReference>m_bStayPressed</unmanagedCodeEntityReference> member is <languageKeyword>TRUE</languageKeyword>, the menu button becomes pressed when the user clicks the button. It stays pressed until after the user closes the pop-up menu, either by making a selection or canceling.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfcmenubutton__m_hmenu">
        <!--7dac4777-7709-41b3-9be9-35cd6719c3e5-->
        <title>CMFCMenuButton::m_hMenu</title>
        <content>
            <para>The handle to the attached menu.</para>
            <legacySyntax>HMENU m_hMenu;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The framework displays the menu indicated by this member variable when the user clicks the menu button.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfcmenubutton__m_nmenuresult">
        <!--4e6a4f33-2769-4e28-8532-4f0de42a2af5-->
        <title>CMFCMenuButton::m_nMenuResult</title>
        <content>
            <para>An integer that indicates which item the user selects from the pop-up menu.</para>
            <legacySyntax>int m_nMenuResult;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The value of this member variable is zero if the user cancels the menu without making a selection or if an error occurs.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cmfcmenubutton__pretranslatemessage">
        <!--c7eca654-67c7-458f-afa7-a6217fdaaf70-->
        <title>CMFCMenuButton::PreTranslateMessage</title>
        <content>
            <para>Called by the framework to translate window messages before they are dispatched.</para>
            <legacySyntax>virtual BOOL PreTranslateMessage( MSG* pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <link xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG</link> structure that contains the message to process.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the message was translated and should not be dispatched; 0 if the message was not translated and should be dispatched.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="cmfcmenubutton__sizetocontent">
        <!--d5da7a2c-918c-45e7-b088-cbafce973acf-->
        <title>CMFCMenuButton::SizeToContent</title>
        <content>
            <para>Changes the size of the button according to its text size and image size.</para>
            <legacySyntax>virtual CSize SizeToContent(
    BOOL bCalcOnly = FALSE);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>bCalcOnly</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Boolean parameter that indicates whether this method resizes the button .</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object that specifies the new size for the button.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If you call this function and <parameterReference>bCalcOnly</parameterReference> is <languageKeyword>TRUE</languageKeyword>, <unmanagedCodeEntityReference>SizeToContent</unmanagedCodeEntityReference> will calculate only the new size of the button.</para>
                    <para>The new size of the button is calculated to fit the button text, image, and arrow. The framework also adds in predefined margins of 10 pixels for the horizontal edge and 5 pixels for the vertical edge.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="7b6db805-a572-43fd-9046-0fa6e3663e63">Classes</link> <link xlink:href="4b32f57c-7a53-4734-afb9-d47e3359f62e">CMFCButton Class</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



