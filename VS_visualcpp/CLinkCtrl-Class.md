---
title: "CLinkCtrl Class"
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
ms.assetid: d1cd876a-ecca-42db-8ac4-9cd327df0cd4
caps.latest.revision: 16
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
# CLinkCtrl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of the Windows common SysLink control. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CLinkCtrl : public CWnd</legacySyntax>
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
                                    <para> <link xlink:href="#clinkctrl__clinkctrl">CLinkCtrl::CLinkCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#clinkctrl__create">CLinkCtrl::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a link control and attaches it to a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__createex">CLinkCtrl::CreateEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a link control with extended styles and attaches it to a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__getidealheight">CLinkCtrl::GetIdealHeight</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the ideal height of the link control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__getidealsize">CLinkCtrl::GetIdealSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Calculates the preferred height of the link text for the current link control, depending on the specified width of the link.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__getitem">CLinkCtrl::GetItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the states and attributes of a link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__getitemid">CLinkCtrl::GetItemID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the ID of a link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__getitemstate">CLinkCtrl::GetItemState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the state of the link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__getitemurl">CLinkCtrl::GetItemUrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the URL represented by the link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__hittest">CLinkCtrl::HitTest</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the user clicked the specified link.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__setitem">CLinkCtrl::SetItem</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the states and attributes of a link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__setitemid">CLinkCtrl::SetItemID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the ID of a link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__setitemstate">CLinkCtrl::SetItemState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the state of the link control item.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#clinkctrl__setitemurl">CLinkCtrl::SetItemUrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the URL represented by the link control item.</para>
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
            <para>A "link control" provides a convenient way to embed hypertext links in a window. The actual control is a window that renders marked-up text and launches appropriate applications when the user clicks an embedded link. Multiple links are supported within one control and can be accessed by a zero-based index.</para>
            <para>This control (and therefore the <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> class) is available only to programs running under Windows XP and later.</para>
            <para>For more information, see                 <externalLink> <linkText>SysLink Control</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760706</linkUri>
                </externalLink> in the <token>winSDK</token>.</para>
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
            <para> <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header:</legacyBold> afxcmn.h</para>
        </content>
    </requirements>
    <section address="clinkctrl__clinkctrl">
        <!--02823f24-884e-4982-acdc-65f474670cab-->
        <title>CLinkCtrl::CLinkCtrl</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CLinkCtrl();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="clinkctrl__create">
        <!--156ec0f3-bdd7-4198-92da-194f0fc5a6cc-->
        <title>CLinkCtrl::Create</title>
        <content>
            <para>Creates a link control and attaches it to a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    LPCTSTR lpszLinkMarkup, 
    DWORD dwStyle, 
    const RECT&amp; rect, 
    CWnd* pParentWnd, 
    UINT nID );

virtual BOOL Create( DWORD dwStyle,    const RECT&amp; rect,    CWnd* pParentWnd,    UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszLinkMarkup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a zero-terminated string that contains the marked up text to display. For more information, see the section "Markup and Link Access" in the topic                                 <externalLink> <linkText>Overview of SysLink Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760706</linkUri>
                                </externalLink> in the                                 <externalLink> <linkText>MSDN Library</linkText> <linkUri>http://go.microsoft.com/fwlink/?linkid=556</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's style. Apply any combination of control styles. See                                 <externalLink> <linkText>Common Control Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775498</linkUri>
                                </externalLink> in the <unmanagedCodeEntityReference>Windows SDK</unmanagedCodeEntityReference> for more information.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's size and position. It can be either a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's parent window. It must not be <codeInline>NULL</codeInline>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>true</codeInline> if initialization was successful; otherwise <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You construct a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object in two steps. First, call the constructor and then call <unmanagedCodeEntityReference>Create</unmanagedCodeEntityReference>, which creates the link control and attaches it to the <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object. If you want to use extended windows styles with your control, call <link xlink:href="#clinkctrl__createex">CLinkCtrl::CreateEx</link> instead of <unmanagedCodeEntityReference>Create</unmanagedCodeEntityReference>.</para>
                    <para>The second form of the <unmanagedCodeEntityReference>Create</unmanagedCodeEntityReference> method is deprecated. Use the first form that specifies the <parameterReference>lpszLinkMarkup</parameterReference> parameter. </para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following code example defines two variables, named <codeInline>m_Link1</codeInline> and <codeInline>m_Link2</codeInline>, that are used to access two link controls.</para>
                    <codeReference>NVC_MFC_CLinkCtrl_s1#2</codeReference>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>The following code example creates one link control based on the location of another link control. The resource loader creates the first link control when your application starts. When your application enters the OnInitDialog method, you create the second link control relative to the position of the first link control. Then you resize the second link control to fit the text that it displays.</para>
                    <codeReference>NVC_MFC_CLinkCtrl_s1#1</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__createex">
        <!--22b553e3-342a-4c6d-9043-c6e67bb57277-->
        <title>CLinkCtrl::CreateEx</title>
        <content>
            <para>Creates a link control with extended styles and attaches it to a <unmanagedCodeEntityReference>CLinkCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL CreateEx(
    LPCTSTR lpszLinkMarkup, 
    DWORD dwExStyle,
    DWORD dwStyle, 
    const RECT&amp; rect, 
    CWnd* pParentWnd, 
    UINT nID );

virtual BOOL CreateEx( <legacyBold/>DWORD <legacyBold/> dwExStyle, <legacyBold/>DWORD <legacyBold/> dwStyle, <legacyBold/>const RECT&amp; <legacyBold/> rect, <legacyBold/>CWnd* <legacyBold/> pParentWnd, <legacyBold/>UINT <legacyBold/> nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszLinkMarkup</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a zero-terminated string that contains the marked up text to display. For more information, see the section "Markup and Link Access" in the topic                                 <externalLink> <linkText>Overview of SysLink Controls</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760706</linkUri>
                                </externalLink> in the                                 <externalLink> <linkText>MSDN Library</linkText> <linkUri>http://go.microsoft.com/fwlink/?linkid=556</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwExStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the extended style of the link control. For a list of extended Windows styles, see the <parameterReference>dwExStyle</parameterReference> parameter for                                 <externalLink> <linkText>CreateWindowEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632680</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's style. Apply any combination of control styles. For more information, see                                 <externalLink> <linkText>Common Control Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775498</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's size and position. It can be either a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's parent window. It must not be <codeInline>NULL</codeInline>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the link control's ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>true</codeInline> if initialization was successful; otherwise <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference> instead of <legacyLink xlink:href="#clinkctrl__create">Create</legacyLink> to apply extended Windows style constants.</para>
                    <para>The second form of the <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference> method is deprecated. Use the first form that specifies the <parameterReference>lpszLinkMarkup</parameterReference> parameter. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__getidealheight">
        <!--1d9955fa-a401-4dc4-8da7-2eb35899098c-->
        <title>CLinkCtrl::GetIdealHeight</title>
        <content>
            <para>Retrieves the ideal height of the link control.</para>
            <legacySyntax>int GetIdealHeight() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The ideal height of the control, in pixels.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function implements the behavior of the Win32 message                         <externalLink> <linkText>LM_GETIDEALHEIGHT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760716</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__getidealsize">
        <!--3a025230-a9dc-4aae-962e-51a111e4aae9-->
        <title>CLinkCtrl::GetIdealSize</title>
        <content>
            <para>Calculates the preferred height of the link text for the current link control, depending on the specified width of the link.</para>
            <legacySyntax>int GetIdealSize(
    int cxMaxWidth, 
    SIZE* pSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Parameter</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para>[in] <parameterReference>cxMaxWidth</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The maximum width of the link, in pixels.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para>[out] * <parameterReference>pSize</parameterReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to a Windows                                         <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                        </externalLink> structure. When this method returns, the <codeInline>cy</codeInline> member of the <unmanagedCodeEntityReference>SIZE</unmanagedCodeEntityReference> structure contains the ideal link text height for the link text width that is specified by <parameterReference>cxMaxWidth</parameterReference>. The <codeInline>cx</codeInline> member of the structure contains the link text width that is actually needed.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The preferred height of the link text, in pixels. The return value is the same as the value of the <codeInline>cy</codeInline> member of the <unmanagedCodeEntityReference>SIZE</unmanagedCodeEntityReference> structure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For an example of the <unmanagedCodeEntityReference>GetIdealSize</unmanagedCodeEntityReference> method, see the example in <link xlink:href="#clinkctrl__create">CLinkCtrl::Create</link>.</para>
                    <para>This method sends the                         <externalLink> <linkText>LM_GETIDEALSIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760718</linkUri>
                        </externalLink> message, which is described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__getitem">
        <!--d4cb6fef-e9a9-4764-9ba0-cb814e94e1bc-->
        <title>CLinkCtrl::GetItem</title>
        <content>
            <para>Retrieves the states and attributes of a link control item.</para>
            <legacySyntax>BOOL GetItem( PLITEM pItem ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a                                 <externalLink> <linkText>LITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760710</linkUri>
                                </externalLink> structure to receive item information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function implements the behavior of the Win32 message                         <externalLink> <linkText>LM_GETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760720</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__getitemid">
        <!--df597f09-62ef-4189-bbe0-2ada8c486bd3-->
        <title>CLinkCtrl::GetItemID</title>
        <content>
            <para>Retrieves the ID of a link control item.</para>
            <legacySyntax>BOOL GetItemID(
    int iLink,
    CString&amp; strID ) const;

BOOL GetItemID(
    int iLink,
    LPWSTR szID,
    UINT cchID ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iLink</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a link control item.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>strID</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CStringT</legacyLink> object containing the ID of the specified item.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>szID</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A null-terminated string containing the ID of the specified item.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>cchID</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The size in characters of the                                 <legacyItalic>szID</legacyItalic> buffer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                    <alert class="note">
                        <para>This function also returns <legacyBold>FALSE</legacyBold> if the buffer of                             <legacyItalic>szID or strID</legacyItalic> is smaller than <legacyBold>MAX_LINKID_TEXT</legacyBold>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Retrieves the ID of a specific link control item. For more information, see the Win32 message                         <externalLink> <linkText>LM_GETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760720</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__getitemstate">
        <!--7da02236-fbfc-470c-aeab-d113a0463339-->
        <title>CLinkCtrl::GetItemState</title>
        <content>
            <para>Retrieves the state of the link control item.</para>
            <legacySyntax>BOOL GetItemState(
    int iLink,
    UINT * pnState,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED  ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iLink</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a link control item.</para>
                        </definition>
                        <definedTerm> <parameterReference>pnState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the specified state item.</para>
                        </definition>
                        <definedTerm> <parameterReference>stateMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Combination of flags describing which state item to get. For a list of values, see the description of the <legacyBold>state</legacyBold> member in the                                 <externalLink> <linkText>LITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760710</linkUri>
                                </externalLink> structure. Allowable items are identical to those allowed in <legacyBold>state</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Retrieves the value of the specified state item of a specific link control item. For more information, see the Win32 message                         <externalLink> <linkText>LM_GETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760720</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__getitemurl">
        <!--a1dc236e-afc3-4dd3-a47e-42ad4a680318-->
        <title>CLinkCtrl::GetItemUrl</title>
        <content>
            <para>Retrieves the URL represented by the link control item.</para>
            <legacySyntax>BOOL GetItemUrl(
    int iLink,
    CString&amp; strUrl ) const;

BOOL GetItemUrl(
    int iLink,
    LPWSTR szUrl,
    UINT cchUrl ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iLink</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a link control item.</para>
                        </definition>
                        <definedTerm> <parameterReference>strUrl</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CStringT</legacyLink> object containing the URL represented by the specified item</para>
                        </definition>
                        <definedTerm> <parameterReference>szUrl</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A null-terminated string containing the URL represented by the specified item</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>cchUrl</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The size in characters of the                                 <legacyItalic>szURL</legacyItalic> buffer.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                    <alert class="note">
                        <para>This function also returns <legacyBold>FALSE</legacyBold> if the buffer of                             <legacyItalic>szUrl or strUrl</legacyItalic> is smaller than <legacyBold>MAX_LINKID_TEXT</legacyBold>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Retrieves the URL represented by the specified link control item. For more information, see the Win32 message                         <externalLink> <linkText>LM_GETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760720</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__hittest">
        <!--b70c23f0-d41f-45e3-9b4b-baeed979cc7b-->
        <title>CLinkCtrl::HitTest</title>
        <content>
            <para>Determines if the user clicked the specified link.</para>
            <legacySyntax>BOOL HitTest( PLHITTESTINFO phti ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>phti</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>LHITTESTINFO</legacyBold> structure containing any information about the link the user clicked.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function implements the behavior of the Win32 message                         <externalLink> <linkText>LM_HITTEST</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760722</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__setitem">
        <!--f7bc3b0b-f2d4-4925-afce-f14666faf19a-->
        <title>CLinkCtrl::SetItem</title>
        <content>
            <para>Sets the states and attributes of a link control item.</para>
            <legacySyntax>BOOL SetItem( PLITEM pItem );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pItem</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a                                 <externalLink> <linkText>LITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760710</linkUri>
                                </externalLink> structure containing the information to set.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function implements the behavior of the Win32 message                         <externalLink> <linkText>LM_SETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760724</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__setitemid">
        <!--e1747f43-985d-4636-a019-c59364c51c3f-->
        <title>CLinkCtrl::SetItemID</title>
        <content>
            <para>Retrieves the ID of a link control item.</para>
            <legacySyntax>BOOL SetItemID(
    int iLink,
    LPCWSTR szID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iLink</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a link control item.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>szID</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A null-terminated string containing the ID of the specified item.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Sets the ID of a specific link control item. For more information, see the Win32 message                         <externalLink> <linkText>LM_SETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760724</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__setitemstate">
        <!--392eb272-f092-4623-9b11-c8a33403dd4c-->
        <title>CLinkCtrl::SetItemState</title>
        <content>
            <para>Retrieves the state of the link control item.</para>
            <legacySyntax>BOOL SetItemState(
    int iLink,
    UINT state,
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iLink</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a link control item.</para>
                        </definition>
                        <definedTerm> <parameterReference>pnState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The value of the specified state item being set.</para>
                        </definition>
                        <definedTerm> <parameterReference>stateMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Combination of flags describing the state item being set. For a list of values, see the description of the <legacyBold>state</legacyBold> member in the                                 <externalLink> <linkText>LITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760710</linkUri>
                                </externalLink> structure. Allowable items are identical to those allowed in <legacyBold>state</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Sets the value of the specified state item of a specific link control item. For more information, see the Win32 message                         <externalLink> <linkText>LM_SETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760724</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="clinkctrl__setitemurl">
        <!--18279215-e4ea-4da1-b1b2-d83f426320f9-->
        <title>CLinkCtrl::SetItemUrl</title>
        <content>
            <para>Sets the URL represented by the link control item.</para>
            <legacySyntax>BOOL SetItemUrl(
    int iLink,
    LPCWSTR szUrl );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iLink</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The index of a link control item.</para>
                        </definition>
                        <definedTerm> <parameterReference>szUrl</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A null-terminated string containing the URL represented by the specified item</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <legacyBold>TRUE</legacyBold> on success, <legacyBold>FALSE</legacyBold> on failure.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Sets the URL represented by the specified link control item. For more information, see the Win32 message                         <externalLink> <linkText>LM_SETITEM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb760724</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">CWnd</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



