---
title: "CAnimateCtrl Class"
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
ms.assetid: 5e8eb1bd-96b7-47b8-8de2-6bcbb3cc299b
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
# CAnimateCtrl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the functionality of the Windows common animation control. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CAnimateCtrl : public CWnd</legacySyntax>
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
                                    <para> <link xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#canimatectrl__close">CAnimateCtrl::Close</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes the AVI clip.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__create">CAnimateCtrl::Create</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates an animation control and attaches it to a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__createex">CAnimateCtrl::CreateEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates an animation control with the specified Windows extended styles and attaches it to a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__isplaying">CAnimateCtrl::IsPlaying</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether an Audio-Video Interleaved (AVI) clip is playing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__open">CAnimateCtrl::Open</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Opens an AVI clip from a file or resource and displays the first frame. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__play">CAnimateCtrl::Play</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Plays the AVI clip without sound.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__seek">CAnimateCtrl::Seek</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Displays a selected single frame of the AVI clip.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#canimatectrl__stop">CAnimateCtrl::Stop</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Stops playing the AVI clip.</para>
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
            <para>This control (and therefore the <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> class) is available only to programs running under Windows 95, Windows 98, and Windows NT version 3.51 and later. </para>
            <para>An animation control is a rectangular window that displays a clip in AVI (Audio Video Interleaved) format— the standard Windows video/audio format. An AVI clip is a series of bitmap frames, like a movie.</para>
            <para>Animation controls can play only simple AVI clips. Specifically, the clips to be played by an animation control must meet the following requirements:  </para>
            <list class="bullet">
                <listItem>
                    <para>There must be exactly one video stream and it must have at least one frame.</para>
                </listItem>
                <listItem>
                    <para>There can be at most two streams in the file (typically the other stream, if present, is an audio stream, although the animation control ignores audio information).</para>
                </listItem>
                <listItem>
                    <para>The clip must either be uncompressed or compressed with RLE8 compression.</para>
                </listItem>
                <listItem>
                    <para>No palette changes are allowed in the video stream.</para>
                </listItem>
            </list>
            <para>You can add the AVI clip to your application as an AVI resource, or it can accompany your application as a separate AVI file. </para>
            <para>Because your thread continues executing while the AVI clip is displayed, one common use for an animation control is to indicate system activity during a lengthy operation. For example, the Find dialog box of File Explorer displays a moving magnifying glass as the system searches for a file.</para>
            <para>If you create a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object within a dialog box or from a dialog resource using the dialog editor, it will be automatically destroyed when the user closes the dialog box.</para>
            <para>If you create a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object within a window, you may need to destroy it. If you create the <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object on the stack, it is destroyed automatically. If you create the <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object on the heap by using the <legacyBold>new</legacyBold> function, you must call <legacyBold>delete</legacyBold> on the object to destroy it. If you derive a new class from <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> and allocate any memory in that class, override the <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> destructor to dispose of the allocations.</para>
            <para>For more information on using <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference>, see <legacyLink xlink:href="b2842884-6435-4b8f-933b-21671bf8af95">Controls</legacyLink> and <legacyLink xlink:href="696c0805-bef0-4e2e-a9e7-b37b9215b7f0">Using CAnimateCtrl</legacyLink>.</para>
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
            <para> <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxcmn.h</para>
        </content>
    </requirements>
    <section address="canimatectrl__canimatectrl">
        <!--ca34b182-89f5-46bd-a85f-a9b9dae43a53-->
        <title>CAnimateCtrl::CAnimateCtrl</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CAnimateCtrl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You must call the <legacyLink xlink:href="#canimatectrl__create">Create</legacyLink> member function before you can perform any other operations on the object you create.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCControlLadenDialog#56</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__close">
        <!--3c19c6c4-9403-43bc-90fc-51c9964d8652-->
        <title>CAnimateCtrl::Close</title>
        <content>
            <para>Closes the AVI clip that was previously opened in the animation control (if any) and removes it from memory.</para>
            <legacySyntax>BOOL Close();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__create">
        <!--52cdcfeb-06bf-4b61-ac59-1a44aa55f7d1-->
        <title>CAnimateCtrl::Create</title>
        <content>
            <para>Creates an animation control and attaches it to a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
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
                            <para>Specifies the animation control's style. Apply any combination of the windows styles described in the Remarks section below and the animation control styles described in                                 <externalLink> <linkText>Animation Control Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761886</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the animation control's position and size. It can be either a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object or a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the animation control's parent window, usually a <unmanagedCodeEntityReference>CDialog</unmanagedCodeEntityReference>. It must not be <legacyBold>NULL.</legacyBold>
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the animation control's ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You construct a <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> in two steps. First, call the constructor, and then call <legacyBold>Create</legacyBold>, which creates the animation control and attaches it to the <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
                    <para>Apply the following <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">window styles</legacyLink> to an animation control.   </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>WS_CHILD</legacyBold>   Always</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_VISIBLE</legacyBold>   Usually</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_DISABLED</legacyBold>   Rarely</para>
                        </listItem>
                    </list>
                    <para>If you want to use extended windows styles with your animation control, call <legacyLink xlink:href="#canimatectrl__createex">CreateEx</legacyLink> instead of <legacyBold>Create</legacyBold>.</para>
                    <para>In addition to the window styles listed above, you may want to apply one or more of the animation control styles to an animation control. See the <token>winSDK</token> for more information on                         <externalLink> <linkText>animation control styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761886</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__createex">
        <!--ae2aae3d-6582-4410-92fa-692163ca3460-->
        <title>CAnimateCtrl::CreateEx</title>
        <content>
            <para>Creates a control (a child window) and associates it with the <unmanagedCodeEntityReference>CAnimateCtrl</unmanagedCodeEntityReference> object.</para>
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
                            <para>Specifies the animation control's style. Apply any combination of the window and animation control styles described in                                 <externalLink> <linkText>Animation Control Styles</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761886</linkUri>
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
                    <para>Use <unmanagedCodeEntityReference>CreateEx</unmanagedCodeEntityReference> instead of <legacyLink xlink:href="#canimatectrl__create">Create</legacyLink> to apply extended Windows styles, specified by the Windows extended style preface <legacyBold>WS_EX_</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__isplaying">
        <!--752e7558-26e1-48da-8386-7fdd46511e06-->
        <title>CAnimateCtrl::IsPlaying</title>
        <content>
            <para>Indicates whether an Audio-Video Interleaved (AVI) clip is playing.</para>
            <legacySyntax>BOOL IsPlaying() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <codeInline>true</codeInline> if an AVI clip is playing; otherwise, <codeInline>false</codeInline>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method sends the                         <externalLink> <linkText>ACM_ISPLAYING</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/bb761895</linkUri>
                        </externalLink> message, which is described in the <token>winSDK</token>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__open">
        <!--450952ba-c691-4d7a-ab0c-cea7905b08db-->
        <title>CAnimateCtrl::Open</title>
        <content>
            <para>Call this function to open an AVI clip and display its first frame.</para>
            <legacySyntax>BOOL Open( LPCTSTR lpszFileName );

BOOL Open( UINT nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszFileName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object or a pointer to a null-terminated string that contains either the name of the AVI file or the name of an AVI resource. If this parameter is <legacyBold>NULL</legacyBold>, the system closes the AVI clip that was previously opened for the animation control, if any.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The AVI resource identifier. If this parameter is <legacyBold>NULL</legacyBold>, the system closes the AVI clip that was previously opened for the animation control, if any.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The AVI resource is loaded from the module that created the animation control.</para>
                    <para> <legacyBold>Open</legacyBold> does not support sound in an AVI clip; you can open only silent AVI clips.</para>
                    <para>If the animation control has the <unmanagedCodeEntityReference>ACS_AUTOPLAY</unmanagedCodeEntityReference> style, the animation control will automatically start playing the clip immediately after it opens it. It will continue to play the clip in the background while your thread continues executing. When the clip is done playing, it will automatically be repeated.</para>
                    <para>If the animation control has the <unmanagedCodeEntityReference>ACS_CENTER</unmanagedCodeEntityReference> style, the AVI clip will be centered in the control and the size of the control will not change. If the animation control does not have the <unmanagedCodeEntityReference>ACS_CENTER</unmanagedCodeEntityReference> style, the control will be resized when the AVI clip is opened to the size of the images in the AVI clip. The position of the top left corner of the control will not change, only the size of the control.</para>
                    <para>If the animation control has the <unmanagedCodeEntityReference>ACS_TRANSPARENT</unmanagedCodeEntityReference> style, the first frame will be drawn using a transparent background rather than the background color specified in the animation clip.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__play">
        <!--e1fc008e-0d6d-4219-9a5e-22a28c4d6be4-->
        <title>CAnimateCtrl::Play</title>
        <content>
            <para>Call this function to play an AVI clip in an animation control.</para>
            <legacySyntax>BOOL Play(
    UINT nFrom,
    UINT nTo,
    UINT nRep );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFrom</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the frame where playing begins. Value must be less than 65,536. A value of 0 means begin with the first frame in the AVI clip.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the frame where playing ends. Value must be less than 65,536. A value of – 1 means end with the last frame in the AVI clip.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nRep</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Number of times to replay the AVI clip. A value of – 1 means replay the file indefinitely.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The animation control will play the clip in the background while your thread continues executing. If the animation control has <unmanagedCodeEntityReference>ACS_TRANSPARENT</unmanagedCodeEntityReference> style, the AVI clip will be played using a transparent background rather than the background color specified in the animation clip.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__seek">
        <!--dcb8782d-90fa-495d-adca-c8634bc7b5f9-->
        <title>CAnimateCtrl::Seek</title>
        <content>
            <para>Call this function to statically display a single frame of your AVI clip.</para>
            <legacySyntax>BOOL Seek( UINT nTo );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nTo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Zero-based index of the frame to display. Value must be less than 65,536. A value of 0 means display the first frame in the AVI clip. A value of –1 means display the last frame in the AVI clip.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the animation control has <unmanagedCodeEntityReference>ACS_TRANSPARENT</unmanagedCodeEntityReference> style, the AVI clip will be drawn using a transparent background rather than the background color specified in the animation clip.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="canimatectrl__stop">
        <!--27e4128d-6e58-4392-ab01-e5eb591d318b-->
        <title>CAnimateCtrl::Stop</title>
        <content>
            <para>Call this function to stop playing an AVI clip in an animation control.</para>
            <legacySyntax>BOOL Stop();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#canimatectrl__canimatectrl">CAnimateCtrl::CAnimateCtrl</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="#canimatectrl__create">Animation Control Styles in CAnimateCtrl::Create</link> <link xlink:href="2cb7ebdf-296b-4606-b191-3449835003db">ON_CONTROL</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



