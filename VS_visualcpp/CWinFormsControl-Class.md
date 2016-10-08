---
title: "CWinFormsControl Class"
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
ms.assetid: 6406dd7b-fb89-4a18-ac3a-c010d6b6289a
caps.latest.revision: 21
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
# CWinFormsControl Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides the basic functionality for hosting of a Windows Forms control.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>template&lt;class TManagedControl&gt;
class CWinFormsControl : public CWnd</legacySyntax>
    </syntaxSection>
    <parameters>
        <content>
            <definitionTable>
                <definedTerm> <parameterReference>TManagedControl</parameterReference>
                </definedTerm>
                <definition>
                    <para>A .NET Framework Windows Forms control to be displayed in the MFC application.</para>
                </definition>
            </definitionTable>
        </content>
    </parameters>
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
                                    <para> <link xlink:href="#cwinformscontrol__cwinformscontrol">CWinFormsControl::CWinFormsControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs an MFC Windows Forms control wrapper object.</para>
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
                                    <para> <link xlink:href="#cwinformscontrol__createmanagedcontrol">CWinFormsControl::CreateManagedControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a Windows Forms control in an MFC container.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinformscontrol__getcontrol">CWinFormsControl::GetControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the Windows Forms control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinformscontrol__getcontrolhandle">CWinFormsControl::GetControlHandle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a handle to the Windows Forms control.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Operators</title>
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
                                    <para> <link xlink:href="#cwinformscontrol__operator_-_gt_">CWinFormsControl::operator -&gt;</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Replaces <link xlink:href="#cwinformscontrol__getcontrol">GetControl</link> in expressions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinformscontrol__operator_tmanagedcontrol^">CWinFormsControl::operator TManagedControl^</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Casts a type as a pointer to a Windows Forms control.</para>
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
            <para>The <unmanagedCodeEntityReference>CWinFormsControl</unmanagedCodeEntityReference> class provides the basic functionality for hosting of a Windows Forms control.</para>
            <para>For more information on using Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using Windows Forms in MFC</link>.</para>
            <para>Your MFC code should not cache Window handles (usually stored in <unmanagedCodeEntityReference>m_hWnd</unmanagedCodeEntityReference>). Some Windows Forms control properties require that the underlying Win32 <unmanagedCodeEntityReference>Window</unmanagedCodeEntityReference> be destroyed and recreated using <unmanagedCodeEntityReference>DestroyWindow</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>CreateWindow</unmanagedCodeEntityReference>. The MFC Windows Forms implementation handles the <unmanagedCodeEntityReference>Destroy</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>Create</unmanagedCodeEntityReference> events of the controls to update the <unmanagedCodeEntityReference>m_hWnd</unmanagedCodeEntityReference> member.</para>
            <alert class="note">
                <para>MFC Windows Forms integration works only in projects which link dynamically with MFC (in which AFXDLL is defined).</para>
            </alert>
        </content>
    </languageReferenceRemarks>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> afxwinforms.h</para>
        </content>
    </requirements>
    <section address="cwinformscontrol__createmanagedcontrol">
        <!--066d3e8d-d912-45c7-b36b-f7a48dd75ce7-->
        <title>CWinFormsControl::CreateManagedControl</title>
        <content>
            <para>Creates a Windows Forms control in an MFC container.</para>
            <legacySyntax>inline BOOL CreateManagedControl(
    System::Type^ pType,
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    int nID )
inline BOOL CreateManagedControl(
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    int nID );

inline BOOL CreateManagedControl(
    DWORD dwStyle,
    int nPlaceHolderID,
    CWnd* pParentWnd );

inline BOOL CreateManagedControl(
    typename TManagedControl^ pControl,
    DWORD dwStyle,
    const RECT&amp; rect,
    CWnd* pParentWnd,
    int nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The data type of the control to be created. Must be a <codeEntityReference qualifyHint="true" autoUpgrade="true">T:System.Type</codeEntityReference> data type.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The window style to apply to the control. Specify a combination of <link xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">Window Styles</link>. Currently, only the following styles are supported: WS_TABSTOP, WS_VISIBLE, WS_DISABLED and WS_GROUP.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <link xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT Structure</link> that defines the coordinates of the upper-left and lower-right corners of the control (first overload only).</para>
                        </definition>
                        <definedTerm> <parameterReference>nPlaceHolderID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The handle of the static place holder control placed in the Resource Editor. The newly created Windows Forms control replaces the static control, assuming its position, z-order, and styles (second overload only).</para>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the parent window.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The resource ID number to be assigned to the newly created control.</para>
                        </definition>
                        <definedTerm> <parameterReference>pControl</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>An instance of a Windows Forms control to be associated with the <link xlink:href="6406dd7b-fb89-4a18-ac3a-c010d6b6289a">CWinFormsControl</link> object (fourth overload only).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, returns a nonzero value. If unsuccessful, returns zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method instantiates a .NET Framework Windows Forms control in an MFC container.</para>
                    <para>The first overload of the method accepts a .NET Framework data type <parameterReference>pType</parameterReference> so that MFC can instantiate a new object of this type. <parameterReference>pType</parameterReference> must be a <codeEntityReference qualifyHint="true" autoUpgrade="true">T:System.Type</codeEntityReference> data type.</para>
                    <para>The second overload of the method creates a Windows Forms control based on the <parameterReference>TManagedControl</parameterReference> template parameter of the <unmanagedCodeEntityReference>CWinFormsControl</unmanagedCodeEntityReference> class. The size and position of the control is based on the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure passed to the method. Only <parameterReference>dwStyle</parameterReference> matters for the styles.</para>
                    <para>The third overload of the method creates a Windows Forms control that replaces a static control, destroying it and assuming its position, z-order, and styles. The static control serves only as a placeholder for the Windows Forms control. When creating the control, this overload combines the styles from <parameterReference>dwStyle</parameterReference> with the static control's resource styles.</para>
                    <para>The fourth overload of the method allows you to pass in an already instantiated Windows Forms control <parameterReference>pControl</parameterReference> that MFC will wrap. It must be of the same type as the <parameterReference>TManagedControl</parameterReference> template parameter of the <unmanagedCodeEntityReference>CWinFormsControl</unmanagedCodeEntityReference> class.</para>
                    <para>See <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using a Windows Form User Control in MFC</link> for samples on using Windows Form controls.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinformscontrol__cwinformscontrol">
        <!--8b303689-8c0d-4b4d-8dad-7760a1c6cdcd-->
        <title>CWinFormsControl::CWinFormsControl</title>
        <content>
            <para>Constructs an MFC Windows Forms control wrapper object.</para>
            <legacySyntax>CWinFormsControl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The Windows Forms control is instantiated when you call <link xlink:href="#cwinformscontrol__createmanagedcontrol">CreateManagedControl</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinformscontrol__getcontrol">
        <!--dd18a507-15fc-4121-a347-e554dd7da292-->
        <title>CWinFormsControl::GetControl</title>
        <content>
            <para>Retrieves a pointer to the Windows Forms control.</para>
            <legacySyntax>inline TManagedControl^ GetControl() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a pointer to the Windows Forms control.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See <link xlink:href="#cwinformscontrol__createmanagedcontrol">CWinFormsControl::CreateManagedControl</link>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinformscontrol__getcontrolhandle">
        <!--eed8e67d-6cd1-46cc-a3a2-a492edfa06d3-->
        <title>CWinFormsControl::GetControlHandle</title>
        <content>
            <para>Retrieves a handle to the Windows Forms control.</para>
            <legacySyntax>inline HWND GetControlHandle() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a handle to the Windows Forms control.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>GetControlHandle</unmanagedCodeEntityReference> is a helper method that returns the window handle stored in the .NET Framework control properties. The window handle value is copied to <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__m_hwnd">CWnd::m_hWnd</link> during the call to <link xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__attach">CWnd::Attach</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinformscontrol__operator_-_gt_">
        <!--ebfb9f52-121c-4e29-9b4a-5dac5aa0de8b-->
        <title>CWinFormsControl::operator -&amp;gt;</title>
        <content>
            <para>Replaces <link xlink:href="#cwinformscontrol__getcontrol">GetControl</link> in expressions.</para>
            <legacySyntax>inline TManagedControl^ operator-&gt;() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This operator provides a convenient syntax that replaces <unmanagedCodeEntityReference>GetControl</unmanagedCodeEntityReference> in expressions.</para>
                    <para>For more information on Windows Forms, see <link xlink:href="63fb099b-1dff-469c-9e34-dab52e122fcd">Using a Windows Form User Control in MFC</link>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinformscontrol__operator_tmanagedcontrol_xor">
        <!--5256564b-7ba8-43b4-95c8-6b199be75ac2-->
        <title>CWinFormsControl::operator TManagedControl^</title>
        <content>
            <para>Casts a type as a pointer to a Windows Forms control.</para>
            <legacySyntax>inline operator TManagedControl^() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This operator passes <languageKeyword>CWinFormsControl&lt;</languageKeyword> <parameterReference>TManagedControl</parameterReference> <languageKeyword>&gt;</languageKeyword> to functions that accept a pointer to a Windows Forms control.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="e3cec000-a578-448e-b06a-8af256312f61">CWinFormsDialog Class</link> <link xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView Class</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



