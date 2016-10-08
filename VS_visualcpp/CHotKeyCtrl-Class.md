---
title: "CHotKeyCtrl Class"
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
ms.assetid: 896f9766-0718-4f58-aab2-20325e118ca6
caps.latest.revision: 17
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
# CHotKeyCtrl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of the Windows common hot key control. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CHotKeyCtrl : public CWnd</legacySyntax>
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
                                    <para> <link xlink:href="#chotkeyctrl__chotkeyctrl">CHotKeyCtrl::CHotKeyCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#chotkeyctrl__create">CHotKeyCtrl::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a hot key control and attaches it to a <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#chotkeyctrl__createex">CHotKeyCtrl::CreateEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a hot key control with the specified Windows extended styles and attaches it to a <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#chotkeyctrl__gethotkey">CHotKeyCtrl::GetHotKey</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the virtual key code and modifier flags of a hot key from a hot key control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#chotkeyctrl__gethotkeyname">CHotKeyCtrl::GetHotKeyName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the key name, in the local character set, assigned to a hot key.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#chotkeyctrl__getkeyname">CHotKeyCtrl::GetKeyName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the key name, in the local character set, assigned to the specified virtual key code.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#chotkeyctrl__sethotkey">CHotKeyCtrl::SetHotKey</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the hot key combination for a hot key control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#chotkeyctrl__setrules">CHotKeyCtrl::SetRules</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Defines the invalid combinations and the default modifier combination for a hot key control.</para>
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
            <para>A "hot key control" is a window that enables the user to create a hot key. A "hot key" is a key combination that the user can press to perform an action quickly. (For example, a user can create a hot key that activates a given window and brings it to the top of the Z order.) The hot key control displays the user's choices and ensures that the user selects a valid key combination.</para>
            <para>This control (and therefore the <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> class) is available only to programs running under Windows 95/98 and Windows NT version 3.51 and later.</para>
            <para>When the user has chosen a key combination, the application can retrieve the specified key combination from the control and use the <legacyBold>WM_SETHOTKEY</legacyBold> message to set up the hot key in the system. Whenever the user presses the hot key thereafter, from any part of the system, the window specified in the <legacyBold>WM_SETHOTKEY</legacyBold> message receives a <unmanagedCodeEntityReference>WM_SYSCOMMAND</unmanagedCodeEntityReference> message specifying <legacyBold>SC_HOTKEY</legacyBold>. This message activates the window that receives it. The hot key remains valid until the application that called <legacyBold>WM_SETHOTKEY</legacyBold> exits.</para>
            <para>This mechanism is different from the hot key support that depends on the <legacyBold>WM_HOTKEY</legacyBold> message and the Windows                 <externalLink> <linkText>RegisterHotKey</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646309</linkUri>
                </externalLink> and                 <externalLink> <linkText>UnregisterHotKey</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646327</linkUri>
                </externalLink> functions.</para>
            <para>For more information on using <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference>, see <legacyLink xlink:href="b2842884-6435-4b8f-933b-21671bf8af95">Controls</legacyLink> and <legacyLink xlink:href="9b207117-d848-4224-8888-c3d197bb0c95">Using CHotKeyCtrl</legacyLink>.</para>
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
            <para> <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxcmn.h</para>
        </content>
    </requirements>
    <section address="chotkeyctrl__chotkeyctrl">
        <!--dae506f5-c953-434d-8cdb-4cf0f3c7c2d4-->
        <title>CHotKeyCtrl::CHotKeyCtrl</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CHotKeyCtrl();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="chotkeyctrl__create">
        <!--6e08916c-a0bd-4905-9ddd-9c90d768e30e-->
        <title>CHotKeyCtrl::Create</title>
        <content>
            <para>Creates a hot key control and attaches it to a <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL Create(
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the hot key control's style. Apply any combination of control styles. See                                 <externalLink> <linkText>Common Control Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775498</linkUri>
                                </externalLink> in the <token>winSDK</token> for more information.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the hot key control's size and position. It can be either a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the hot key control's parent window, usually a <legacyLink xlink:href="ca64b77e-2cd2-47e3-8eff-c2645ad578f9">CDialog</legacyLink>. It must not be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the hot key control's ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero, if initialization was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You construct a <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object in two steps. First, call the constructor and then call <legacyBold>Create</legacyBold>, which creates the hot key control and attaches it to the <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>If you want to use extended windows styles with your control, call <legacyLink xlink:href="#chotkeyctrl__createex">CreateEx</legacyLink> instead of <legacyBold>Create</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="chotkeyctrl__createex">
        <!--8d1844cd-39c9-454a-94db-a0caadb5a028-->
        <title>CHotKeyCtrl::CreateEx</title>
        <content>
            <para>Call this function to create a control (a child window) and associate it with the <unmanagedCodeEntityReference>CHotKeyCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL CreateEx(
    DWORD dwExStyle,
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwExStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the extended style of the control being created. For a list of extended Windows styles, see the <parameterReference>dwExStyle</parameterReference> parameter for                                 <externalLink> <linkText>CreateWindowEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632680</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the hot key control's style. Apply any combination of control styles. For more information, see                                 <externalLink> <linkText>Common Control Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb775498</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a                                 <externalLink> <linkText>RECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162897</linkUri>
                                </externalLink> structure describing the size and position of the window to be created, in client coordinates of <parameterReference>pParentWnd</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the window that is the control's parent.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The control's child-window ID.</para>
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
                    <para>Use <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference> instead of <legacyLink xlink:href="#chotkeyctrl__create">Create</legacyLink> to apply extended Windows styles, specified by the Windows extended style preface <legacyBold>WS_EX_</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="chotkeyctrl__gethotkey">
        <!--e8ce71d6-18fc-4ba1-b62b-2e84e1c6944c-->
        <title>CHotKeyCtrl::GetHotKey</title>
        <content>
            <para>Retrieves the virtual key code and modifier flags of a keyboard shortcut from a hot key control.</para>
            <legacySyntax>DWORD GetHotKey() const;
void GetHotKey(
    WORD &amp; wVirtualKeyCode,
    WORD &amp; wModifiers ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[out] <parameterReference>wVirtualKeyCode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Virtual key code of the keyboard shortcut. For a list of standard virtual key codes, see Winuser.h.</para>
                        </definition>
                        <definedTerm>[out] <parameterReference>wModifiers</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bitwise combination (OR) of flags that indicate the modifier keys in the keyboard shortcut.</para>
                            <para>The modifier flags are as follows:</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Flag</para>
                                        </TD>
                                        <TD>
                                            <para>Corresponding Key</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_ALT</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>ALT key</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_CONTROL</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>CTRL key</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_EXT</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Extended key</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_SHIFT</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>SHIFT key</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                            <para/>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>In the first overloaded method, a <languageKeyword>DWORD</languageKeyword> that contains the virtual key code and modifier flags. The low-order byte of the low-order word contains the virtual key code, the high-order byte of the low-order word contains the modifier flags, and the high-order word is zero. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The virtual key code and the modifier keys together define the keyboard shortcut.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="chotkeyctrl__gethotkeyname">
        <!--2c71c77c-28f0-4c77-ae08-38c2ac663b71-->
        <title>CHotKeyCtrl::GetHotKeyName</title>
        <content>
            <para>Call this member function to get the localized name of the hot key.</para>
            <legacySyntax>CString GetHotKeyName() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The localized name of the currently selected hot key. If there is no selected hot key, <unmanagedCodeEntityReference>GetHotKeyName</unmanagedCodeEntityReference> returns an empty string. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The name that this member function returns comes from the keyboard driver. You can install a non-localized keyboard driver in a localized version of Windows, and vice versa.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="chotkeyctrl__getkeyname">
        <!--0ba2503c-d893-4a92-9711-5e760aad0dc2-->
        <title>CHotKeyCtrl::GetKeyName</title>
        <content>
            <para>Call this member function to get the localized name of the key assigned to a specified virtual key code.</para>
            <legacySyntax>static CString GetKeyName(
    UINT vk,
    BOOL fExtended );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>vk</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The virtual key code.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>fExtended</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>If the virtual key code is an extended key, <legacyBold>TRUE</legacyBold>; otherwise <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The localized name of the key specified by the <parameterReference>vk</parameterReference> parameter. If the key has no mapped name, <unmanagedCodeEntityReference>GetKeyName</unmanagedCodeEntityReference> returns an empty string. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The key name that this function returns comes from the keyboard driver, so you can install a non-localized keyboard driver in a localized version of Windows, and vice versa.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <codeReference>NVC_MFCControlLadenDialog#69</codeReference>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="chotkeyctrl__sethotkey">
        <!--5d719775-be11-4e58-be87-a8522120aa4b-->
        <title>CHotKeyCtrl::SetHotKey</title>
        <content>
            <para>Sets the keyboard shortcut for a hot key control.</para>
            <legacySyntax>void SetHotKey(
    WORD wVirtualKeyCode,
    WORD wModifiers );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>[in] <parameterReference>wVirtualKeyCode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Virtual key code of the keyboard shortcut. For a list of standard virtual key codes, see Winuser.h.</para>
                        </definition>
                        <definedTerm>[in] <parameterReference>wModifiers</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A bitwise combination (OR) of flags that indicate the modifier keys in the keyboard shortcut.</para>
                            <para>The modifier flags are as follows:</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Flag</para>
                                        </TD>
                                        <TD>
                                            <para>Corresponding Key</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_ALT</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>ALT key</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_CONTROL</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>CTRL key</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_EXT</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Extended key</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <codeInline>HOTKEYF_SHIFT</codeInline>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>SHIFT key</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                            <para/>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The virtual key code and the modifier keys together define the keyboard shortcut.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="chotkeyctrl__setrules">
        <!--26f5be4e-b3be-4f5c-b384-8fe567984876-->
        <title>CHotKeyCtrl::SetRules</title>
        <content>
            <para>Call this function to define the invalid combinations and the default modifier combination for a hot key control.</para>
            <legacySyntax>void SetRules(
    WORD wInvalidComb,
    WORD wModifiers );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>wInvalidComb</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Array of flags that specifies invalid key combinations. It can be a combination of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_A</unmanagedCodeEntityReference>   ALT</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_C</unmanagedCodeEntityReference>   CTRL</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_CA</unmanagedCodeEntityReference>   CTRL+ALT</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_NONE</unmanagedCodeEntityReference>   Unmodified keys</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_S</unmanagedCodeEntityReference>   SHIFT</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_SA</unmanagedCodeEntityReference>   SHIFT+ALT</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_SC</unmanagedCodeEntityReference>   SHIFT+CTRL</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>HKCOMB_SCA</unmanagedCodeEntityReference>   SHIFT+CTRL+ALT</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>wModifiers</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Array of flags that specifies the key combination to use when the user enters an invalid combination. For more information on the modifier flags, see <legacyLink xlink:href="#chotkeyctrl__gethotkey">GetHotKey</legacyLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When a user enters an invalid key combination, as defined by flags specified in <parameterReference>wInvalidComb</parameterReference>, the system uses the OR operator to combine the keys entered by the user with the flags specified in <parameterReference>wModifiers</parameterReference>. The resulting key combination is converted into a string and then displayed in the hot key control.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



