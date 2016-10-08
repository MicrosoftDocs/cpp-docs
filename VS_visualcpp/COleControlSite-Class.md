---
title: "COleControlSite Class"
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
ms.assetid: 43970644-5eab-434a-8ba6-56d144ff1e3f
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
# COleControlSite Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Provides support for custom client-side control interfaces. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class COleControlSite : public CCmdTarget</legacySyntax>
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
                                    <para> <link xlink:href="#colecontrolsite__colecontrolsite">COleControlSite::COleControlSite</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#colecontrolsite__binddefaultproperty">COleControlSite::BindDefaultProperty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Binds the default property of the hosted control to a data source.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__bindproperty">COleControlSite::BindProperty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Binds a property of the hosted control to a data source.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__createcontrol">COleControlSite::CreateControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a hosted ActiveX control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__destroycontrol">COleControlSite::DestroyControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__doverb">COleControlSite::DoVerb</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Executes a specific verb of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__enabledsc">COleControlSite::EnableDSC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables data sourcing for a control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__enablewindow">COleControlSite::EnableWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enables the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__freezeevents">COleControlSite::FreezeEvents</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies if the control site is accepting events.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__getdefbtncode">COleControlSite::GetDefBtnCode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the default button code for the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__getdlgctrlid">COleControlSite::GetDlgCtrlID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the identifier of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__geteventiid">COleControlSite::GetEventIID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the ID of an event interface for a hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__getexstyle">COleControlSite::GetExStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the extended styles of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__getproperty">COleControlSite::GetProperty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a specific property of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__getstyle">COleControlSite::GetStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the styles of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__getwindowtext">COleControlSite::GetWindowText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the text of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__invokehelper">COleControlSite::InvokeHelper</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Invoke a specific method of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__invokehelperv">COleControlSite::InvokeHelperV</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Invoke a specific method of the hosted control with a variable list of arguments.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__isdefaultbutton">COleControlSite::IsDefaultButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the control is the default button in the window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__iswindowenabled">COleControlSite::IsWindowEnabled</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks the visible state of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__modifystyle">COleControlSite::ModifyStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies the current extended styles of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__modifystyleex">COleControlSite::ModifyStyleEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies the current styles of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__movewindow">COleControlSite::MoveWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the position of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__quickactivate">COleControlSite::QuickActivate</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Quick activates the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__safesetproperty">COleControlSite::SafeSetProperty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a property or method of the control without chance of throwing an exception.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setdefaultbutton">COleControlSite::SetDefaultButton</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the default button in the window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setdlgctrlid">COleControlSite::SetDlgCtrlID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the identifier of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setfocus">COleControlSite::SetFocus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the focus to the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setproperty">COleControlSite::SetProperty</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a specific property of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setpropertyv">COleControlSite::SetPropertyV</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a specific property of the hosted control with a variable list of arguments.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setwindowpos">COleControlSite::SetWindowPos</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the position of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__setwindowtext">COleControlSite::SetWindowText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__showwindow">COleControlSite::ShowWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Shows or hides the control site.</para>
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
                                    <para> <link xlink:href="#colecontrolsite__getcontrolinfo">COleControlSite::GetControlInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves keyboard information and mnemonics for the hosted control.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Data Members</title>
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
                                    <para> <link xlink:href="#colecontrolsite__m_biswindowless">COleControlSite::m_bIsWindowless</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines if the hosted control is a windowless control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_ctlinfo">COleControlSite::m_ctlInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Contains information on keyboard handling for the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_dweventsink">COleControlSite::m_dwEventSink</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The cookie of the control's connection point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_dwmiscstatus">COleControlSite::m_dwMiscStatus</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The miscellaneous states for the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_dwpropnotifysink">COleControlSite::m_dwPropNotifySink</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The <unmanagedCodeEntityReference>IPropertyNotifySink</unmanagedCodeEntityReference> cookie of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_dwstyle">COleControlSite::m_dwStyle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The styles of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_hwnd">COleControlSite::m_hWnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The handle of the control site.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_iidevents">COleControlSite::m_iidEvents</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The ID of the event interface for the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_nid">COleControlSite::m_nID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The ID of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_pactiveobject">COleControlSite::m_pActiveObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to the <unmanagedCodeEntityReference>IOleInPlaceActiveObject</unmanagedCodeEntityReference> object of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_pctrlcont">COleControlSite::m_pCtrlCont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The container of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_pinplaceobject">COleControlSite::m_pInPlaceObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to the <unmanagedCodeEntityReference>IOleInPlaceObject</unmanagedCodeEntityReference> object of the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_pobject">COleControlSite::m_pObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to the <unmanagedCodeEntityReference>IOleObjectInterface</unmanagedCodeEntityReference> interface of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_pwindowlessobject">COleControlSite::m_pWindowlessObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to the <unmanagedCodeEntityReference>IOleInPlaceObjectWindowless</unmanagedCodeEntityReference> interface of the control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_pwndctrl">COleControlSite::m_pWndCtrl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A pointer to the window object for the hosted control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#colecontrolsite__m_rect">COleControlSite::m_rect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The dimensions of the control site.</para>
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
            <para>This support is the primary means by which an embedded ActiveX control obtains information about the location and extent of its display site, its moniker, its user interface, its ambient properties, and other resources provided by its container. <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference> fully implements the                 <externalLink> <linkText>IOleControlSite</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms688502</linkUri>
                </externalLink>,                 <externalLink> <linkText>IOleInPlaceSite</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686586</linkUri>
                </externalLink>,                 <externalLink> <linkText>IOleClientSite</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms693706</linkUri>
                </externalLink>,                 <externalLink> <linkText>IPropertyNotifySink</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms692638</linkUri>
                </externalLink>, <legacyBold>IBoundObjectSite</legacyBold>, <legacyBold>INotifyDBEvents</legacyBold>,                 <externalLink> <linkText>IRowSetNotify</linkText> <linkUri>https://msdn.microsoft.com/en-us/library/ms712959.aspx</linkUri>
                </externalLink> interfaces. In addition, the IDispatch interface (providing support for ambient properties and event sinks) is also implemented.</para>
            <para>To create an ActiveX control site using <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference>, derive a class from <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference>. In your <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>-derived class for the container (for instance, your dialog box) override the <legacyBold>CWnd::CreateControlSite</legacyBold> function.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header:</legacyBold> afxocc.h</para>
        </content>
    </requirements>
    <section address="colecontrolsite__binddefaultproperty">
        <!--c63f1373-b54c-4393-a2d6-a5eed60a7adf-->
        <title>COleControlSite::BindDefaultProperty</title>
        <content>
            <para>Binds the calling object's default simple bound property, as marked in the type library, to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of the data-source control.</para>
            <legacySyntax>virtual void BindDefaultProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    LPCTSTR szFieldName,
    CWnd* pDSCWnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the <legacyBold>DISPID</legacyBold> of a property on a data-bound control that is to be bound to a data-source control.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of the property to be bound — for example, <unmanagedCodeEntityReference>VT_BSTR</unmanagedCodeEntityReference>, <legacyBold>VT_VARIANT</legacyBold>, and so on.</para>
                        </definition>
                        <definedTerm> <parameterReference>szFieldName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the name of the column, in the cursor provided by the data-source control, to which the property will be bound.</para>
                        </definition>
                        <definedTerm> <parameterReference>pDSCWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>-derived object that hosts the data-source control to which the property will be bound.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object on which you call this function must be a data-bound control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__bindproperty">
        <!--2f29a3fa-6dfb-4f37-b9ac-df61d4703a7d-->
        <title>COleControlSite::BindProperty</title>
        <content>
            <para>Binds the calling object's simple bound property, as marked in the type library, to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of the data-source control.</para>
            <legacySyntax>virtual void BindProperty(
    DISPID dwDispId,
    CWnd* pWndDSC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>dwDispId</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the <legacyBold>DISPID</legacyBold> of a property on a data-bound control that is to be bound to a data-source control.</para>
                        </definition>
                        <definedTerm> <parameterReference>pWndDSC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>-derived object that hosts the data-source control to which the property will be bound.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object on which you call this function must be a data-bound control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__colecontrolsite">
        <!--25b63af5-36d1-4569-af9d-c21577df6bfa-->
        <title>COleControlSite::COleControlSite</title>
        <content>
            <para>Constructs a new <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>explicit COleControlSite( COleControlContainer* pCtrlCont );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pCtrlCont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the control's container (which represents the window that hosts the AtiveX control).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is called by the <legacyLink xlink:href="7d47aeed-d1ab-48e3-b4cf-d429718e370a#coccmanager__createcontainer">COccManager::CreateContainer</legacyLink> function. For more information on customizing the creation of containers, see <legacyLink xlink:href="7d47aeed-d1ab-48e3-b4cf-d429718e370a#coccmanager__createsite">COccManager::CreateSite</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__createcontrol">
        <!--d62654ab-eec1-4e55-b13c-a103400de5f1-->
        <title>COleControlSite::CreateControl</title>
        <content>
            <para>Creates an ActiveX control, hosted by the <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual HRESULT CreateControl(
    CWnd* pWndCtrl,
    REFCLSID clsid,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT&amp; rect,
    UINT nID,
    CFile* pPersist = NULL,
    BOOL bStorage = FALSE,
    BSTR bstrLicKey = NULL  );

virtual HRESULT CreateControl(
    CWnd* pWndCtrl,
    REFCLSID clsid,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const POINT* ppt,
    const SIZE* psize,
    UINT nID,
    CFile* pPersist = NULL,
    BOOL bStorage = FALSE,
    BSTR bstrLicKey = NULL  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pWndCtrl</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the window object representing the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>clsid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The unique class ID of the control.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszWindowName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the text to be displayed in the control. Sets the value of the winodw's Caption or Text property (if any).</para>
                        </definition>
                        <definedTerm> <parameterReference>dwStyle</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Windows styles. The available styles are listed under the <legacyBold>Remarks</legacyBold> section.</para>
                        </definition>
                        <definedTerm> <parameterReference>rect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the control's size and position. It can be either a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the control's child window ID.</para>
                        </definition>
                        <definedTerm> <parameterReference>pPersist</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <unmanagedCodeEntityReference>CFile</unmanagedCodeEntityReference> containing the persistent state for the control. The default value is <legacyBold>NULL</legacyBold>, indicating that the control initializes itself without restoring its state from any persistent storage. If not <legacyBold>NULL</legacyBold>, it should be a pointer to a <unmanagedCodeEntityReference>CFile</unmanagedCodeEntityReference>-derived object that contains the control's persistent data, in the form of either a stream or a storage. This data could have been saved in a previous activation of the client. The <unmanagedCodeEntityReference>CFile</unmanagedCodeEntityReference> can contain other data, but must have its read-write pointer set to the first byte of persistent data at the time of the call to <unmanagedCodeEntityReference>CreateControl</unmanagedCodeEntityReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>bStorage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates whether the data in <parameterReference>pPersist</parameterReference> should be interpreted as <unmanagedCodeEntityReference>IStorage</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>IStream</unmanagedCodeEntityReference> data. If the data in <parameterReference>pPersist</parameterReference> is a storage, <parameterReference>bStorage</parameterReference> should be <legacyBold>TRUE</legacyBold>. If the data in <parameterReference>pPersist</parameterReference> is a stream, <parameterReference>bStorage</parameterReference> should be <legacyBold>FALSE</legacyBold>. The default value is <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>bstrLicKey</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Optional license key data. This data is needed only for creating controls that require a run-time license key. If the control supports licensing, you must provide a license key for the creation of the control to succeed. The default value is <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>ppt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyBold>POINT</legacyBold> structure that contains the upper-left corner of the control. The size of the control is determined by the value of                                 <legacyItalic>psize</legacyItalic>. The <parameterReference>ppt</parameterReference> and                                 <legacyItalic>psize</legacyItalic> values are an optional method of specifying the size and position opf the control.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>psize</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyBold>SIZE</legacyBold> structure that contains the size of the control. The upper-left corner is determined by the value of <parameterReference>ppt</parameterReference>. The <parameterReference>ppt</parameterReference> and                                 <legacyItalic>psize</legacyItalic> values are an optional method of specifying the size and position opf the control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A standard <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Only a subset of the Windows <parameterReference>dwStyle</parameterReference> flags are supported by <unmanagedCodeEntityReference>CreateControl</unmanagedCodeEntityReference>:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>WS_VISIBLE</legacyBold>   Creates a window that is initially visible. Required if you want the control to be visible immediately, like ordinary windows.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_DISABLED</legacyBold>   Creates a window that is initially disabled. A disabled window cannot receive input from the user. Can be set if the control has an Enabled property.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>WS_BORDER</unmanagedCodeEntityReference>   Creates a window with a thin-line border. Can be set if control has a BorderStyle property.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_GROUP</legacyBold>   Specifies the first control of a group of controls. The user can change the keyboard focus from one control in the group to the next by using the direction keys. All controls defined with the <legacyBold>WS_GROUP</legacyBold> style after the first control belong to the same group. The next control with the <legacyBold>WS_GROUP</legacyBold> style ends the group and starts the next group.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>WS_TABSTOP</legacyBold>   Specifies a control that can receive the keyboard focus when the user presses the TAB key. Pressing the TAB key changes the keyboard focus to the next control of the <legacyBold>WS_TABSTOP</legacyBold> style.</para>
                        </listItem>
                    </list>
                    <para>Use the second overload to create default-sized controls.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__destroycontrol">
        <!--98164bb1-b779-44ed-be34-035fd1bacfa2-->
        <title>COleControlSite::DestroyControl</title>
        <content>
            <para>Destroys the <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>virtual BOOL DestroyControl();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful, otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Once completed, the object is freed from memory and any pointers to the object are no longer valid.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__doverb">
        <!--21a71d47-5efb-4005-95fc-a2fa832c7ec0-->
        <title>COleControlSite::DoVerb</title>
        <content>
            <para>Executes the specified verb.</para>
            <legacySyntax>virtual HRESULT DoVerb(
    LONG nVerb,
    LPMSG lpMsg = NULL  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nVerb</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the verb to execute. It can include one of the following:</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Value</para>
                                        </TD>
                                        <TD>
                                            <para>Meaning</para>
                                        </TD>
                                        <TD>
                                            <para>Symbol</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para>0</para>
                                        </TD>
                                        <TD>
                                            <para>Primary verb</para>
                                        </TD>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>OLEIVERB_PRIMARY</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>-1</para>
                                        </TD>
                                        <TD>
                                            <para>Secondary verb</para>
                                        </TD>
                                        <TD>
                                            <para>(None)</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>1</para>
                                        </TD>
                                        <TD>
                                            <para>Displays the object for editing.</para>
                                        </TD>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>OLEIVERB_SHOW</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>-2</para>
                                        </TD>
                                        <TD>
                                            <para>Edits the item in a separate window.</para>
                                        </TD>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>OLEIVERB_OPEN</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>-3</para>
                                        </TD>
                                        <TD>
                                            <para>Hides the object.</para>
                                        </TD>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>OLEIVERB_HIDE</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>-4</para>
                                        </TD>
                                        <TD>
                                            <para>Activates a control in-place.</para>
                                        </TD>
                                        <TD>
                                            <para> <unmanagedCodeEntityReference>OLEIVERB_UIACTIVATE</unmanagedCodeEntityReference>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>-5</para>
                                        </TD>
                                        <TD>
                                            <para>Activates a control in-place, without additional user interface elements.</para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>OLEIVERB_INPLACEACTIVATE</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>-7</para>
                                        </TD>
                                        <TD>
                                            <para>Display the control's properties.</para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>OLEIVERB_PROPERTIES</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                        </definition>
                        <definedTerm> <parameterReference>lpMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the message that caused the item to be activated.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A standard <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function directly calls through the control's <unmanagedCodeEntityReference>IOleObject</unmanagedCodeEntityReference> interface to execute the specified verb. If an exception is thrown as a result of this function call, an <unmanagedCodeEntityReference>HRESULT</unmanagedCodeEntityReference> error code is returned.</para>
                    <para>For more information, see                         <externalLink> <linkText>IOleObject::DoVerb</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms694508</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__enabledsc">
        <!--724abf12-ecab-4603-8c58-c89fbbf1c4b2-->
        <title>COleControlSite::EnableDSC</title>
        <content>
            <para>Enables data sourcing for the control site.</para>
            <legacySyntax>virtual void EnableDSC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Called by the framework to enable and initialize data sourcing for the control site. Override this function to provide customized behavior.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__enablewindow">
        <!--b17adc34-0883-4d31-ab8b-9a5d486919ce-->
        <title>COleControlSite::EnableWindow</title>
        <content>
            <para>Enables or disables mouse and keyboard input to the control site.</para>
            <legacySyntax>virtual BOOL EnableWindow( BOOL bEnable );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bEnable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether to enable or disable the window: <legacyBold>TRUE</legacyBold> if window input is to be enabled, otherwise <legacyBold>FALSE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the window was previously disabled, otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__freezeevents">
        <!--2b97e604-0943-4045-ae65-212ef27aa4eb-->
        <title>COleControlSite::FreezeEvents</title>
        <content>
            <para>Specifies whether the control site will handle or ignore events fired from a control.</para>
            <legacySyntax>void FreezeEvents( BOOL bFreeze );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bFreeze</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the control site wishes to stop accepting events. Nonzero if the control is not accepting events; otherwise zero.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>bFreeze</parameterReference> is <legacyBold>TRUE</legacyBold>, the control site requests the control to stop fring events. If <parameterReference>bFreeze</parameterReference> is <legacyBold>FALSE</legacyBold>, the control site requests the control to continue firing events.</para>
                    <alert class="note">
                        <para>The control is not required to stop firing events if requested by the control site. It can continue firing but all subsequent events will be ignored by the control site.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getcontrolinfo">
        <!--de28ba3c-04b4-4dc9-95fd-f6f5dd1faa26-->
        <title>COleControlSite::GetControlInfo</title>
        <content>
            <para>Retrieves information about a control's keyboard mnemonics and keyboard behavior.</para>
            <legacySyntax>void GetControlInfo();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The information is stored in <legacyLink xlink:href="#colecontrolsite__m_ctlinfo">COleControlSite::m_ctlInfo</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getdefbtncode">
        <!--5bb96925-6146-4bb9-9bbc-2e11fdbf482f-->
        <title>COleControlSite::GetDefBtnCode</title>
        <content>
            <para>Determines if the control is a default push button.</para>
            <legacySyntax>DWORD GetDefBtnCode();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Can be one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>DLGC_DEFPUSHBUTTON </legacyBold>Control is the default button in the dialog.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DLGC_UNDEFPUSHBUTTON </legacyBold>Control is not the default button in the dialog.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>0 </legacyBold>Control is not a button.</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getdlgctrlid">
        <!--e60c1413-0d0a-480a-975b-fd4cb2ba6d3c-->
        <title>COleControlSite::GetDlgCtrlID</title>
        <content>
            <para>Retrieves the identifier of the control.</para>
            <legacySyntax>virtual int GetDlgCtrlID() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dialog item identifier of the control.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__geteventiid">
        <!--306558fb-3a10-4f29-9d18-b7b73dec1266-->
        <title>COleControlSite::GetEventIID</title>
        <content>
            <para>Retrieves a pointer to the control's default event interface.</para>
            <legacySyntax>BOOL GetEventIID( IID* piid );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>piid</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an interface ID.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful, otherwise 0. If successful, <parameterReference>piid</parameterReference> contains the interface ID for the control's default event interface.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getexstyle">
        <!--5cbafdb0-4a37-4efc-8ab3-5f2d9b0b9df0-->
        <title>COleControlSite::GetExStyle</title>
        <content>
            <para>Retrieves the window's extended styles.</para>
            <legacySyntax>virtual DWORD GetExStyle() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The control window's extended styles.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To retrieve the regular styles, call <legacyLink xlink:href="#colecontrolsite__getstyle">COleControlSite::GetStyle</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getproperty">
        <!--ad7359d1-cecb-429a-90d1-0248d62f737e-->
        <title>COleControlSite::GetProperty</title>
        <content>
            <para>Gets the control property specified by <parameterReference>dwDispID</parameterReference>.</para>
            <legacySyntax>virtual void GetProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    void* pvProp ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the dispatch ID of the property, found on the control's default <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of the property to be retrieved. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pvProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Address of the variable that will receive the property value. It must match the type specified by <parameterReference>vtProp</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The value is returned through <parameterReference>pvProp</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getstyle">
        <!--18d36cc4-97d1-4b66-93d5-ec6c1bcc47c0-->
        <title>COleControlSite::GetStyle</title>
        <content>
            <para>Retrieves the styles of the control site.</para>
            <legacySyntax>virtual DWORD GetStyle() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The window's styles.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For a list of possible values, see <legacyLink xlink:href="c85ffbe4-f4ff-4227-917a-48ec4a411842">Windows Styles</legacyLink>. To retrieve the extended styles of the control site, call <legacyLink xlink:href="#colecontrolsite__getexstyle">COleControlSite::GetExStyle</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__getwindowtext">
        <!--be4b9f00-b3cd-4277-a150-228998623e52-->
        <title>COleControlSite::GetWindowText</title>
        <content>
            <para>Retrieves the current text of the control.</para>
            <legacySyntax>virtual void GetWindowText( CString&amp; str ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A reference to a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the current text of the control.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the control supports the Caption stock property, this value is returned. If the Caption stock property is not supported, the value for the Text property is returned.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__invokehelper">
        <!--12919494-da80-4a23-95fa-8f9b55616918-->
        <title>COleControlSite::InvokeHelper</title>
        <content>
            <para>Invokes the method or property specified by <parameterReference>dwDispID</parameterReference>, in the context specified by <parameterReference>wFlags</parameterReference>.</para>
            <legacySyntax>virtual void AFX_CDECL InvokeHelper(
    DISPID dwDispID,
    WORD wFlags,
    VARTYPE vtRet,
    void* pvRet,
    const BYTE* pbParamInfo, ... );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the dispatch ID of the property or method, found on the control's <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, to be invoked.</para>
                        </definition>
                        <definedTerm> <parameterReference>wFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flags describing the context of the call to IDispatch::Invoke. For possible <parameterReference>wFlags</parameterReference> values, see <unmanagedCodeEntityReference>IDispatch::Invoke</unmanagedCodeEntityReference> in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtRet</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of the return value. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pvRet</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Address of the variable that will receive the property value or return value. It must match the type specified by <parameterReference>vtRet</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pbParamInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a null-terminated string of bytes specifying the types of the parameters following <parameterReference>pbParamInfo</parameterReference>. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>...</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Variable list of parameters, of types specified in <parameterReference>pbParamInfo</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>pbParamInfo</parameterReference> parameter specifies the types of the parameters passed to the method or property. The variable list of arguments is represented by ... in the syntax declaration.</para>
                    <para>This function converts the parameters to <legacyBold>VARIANTARG</legacyBold> values, then invokes the <legacyBold>IDispatch::Invoke</legacyBold> method on the control. If the call to <legacyBold>IDispatch::Invoke</legacyBold> fails, this function will throw an exception. If the status code returned by <legacyBold>IDispatch::Invoke</legacyBold> is <unmanagedCodeEntityReference>DISP_E_EXCEPTION</unmanagedCodeEntityReference>, this function throws a <legacyBold>COleDispatchException </legacyBold>object, otherwise it throws a <unmanagedCodeEntityReference>COleException</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__invokehelperv">
        <!--55a164c6-7ef6-41ee-bd46-71f726167431-->
        <title>COleControlSite::InvokeHelperV</title>
        <content>
            <para>Invokes the method or property specified by <parameterReference>dwDispID</parameterReference>, in the context specified by <parameterReference>wFlags</parameterReference>.</para>
            <legacySyntax>virtual void InvokeHelperV(
    DISPID dwDispID,
    WORD wFlags,
    VARTYPE vtRet,
    void* pvRet,
    const BYTE* pbParamInfo,
    va_list argList );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the dispatch ID of the property or method, found on the control's <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, to be invoked.</para>
                        </definition>
                        <definedTerm> <parameterReference>wFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flags describing the context of the call to IDispatch::Invoke.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtRet</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of the return value. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pvRet</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Address of the variable that will receive the property value or return value. It must match the type specified by <parameterReference>vtRet</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>pbParamInfo</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a null-terminated string of bytes specifying the types of the parameters following <parameterReference>pbParamInfo</parameterReference>. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>argList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a variable argument list.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>pbParamInfo</parameterReference> parameter specifies the types of the parameters passed to the method or property. Extra parameters for the method or property being invoked can be passed using the                         <legacyItalic>va_list</legacyItalic> parameter.</para>
                    <para>Typically, this function is called by <unmanagedCodeEntityReference>COleControlSite::InvokeHelper</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__isdefaultbutton">
        <!--c63d933f-3c91-42e5-8b36-3cf2296e25d7-->
        <title>COleControlSite::IsDefaultButton</title>
        <content>
            <para>Determines if the control is the default button.</para>
            <legacySyntax>BOOL IsDefaultButton();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control is the default button on the window, otherwise zero.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__iswindowenabled">
        <!--5d658bcc-9fba-47b0-8f5d-095cb821a896-->
        <title>COleControlSite::IsWindowEnabled</title>
        <content>
            <para>Determines if the control site is enabled.</para>
            <legacySyntax>virtual BOOL IsWindowEnabled() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control is enabled, otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The value is retrieved from the control's Enabled stock property.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__m_biswindowless">
        <!--a84fbefc-07a2-40bf-9737-1295525dc38e-->
        <title>COleControlSite::m_bIsWindowless</title>
        <content>
            <para>Determines if the object is a windowless control.</para>
            <legacySyntax>BOOL m_bIsWindowless;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Nonzero if the control has no window, otherwise zero.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__m_ctlinfo">
        <!--34403377-ade0-4944-8965-55149091e485-->
        <title>COleControlSite::m_ctlInfo</title>
        <content>
            <para>Information on how keyboard input is handled by the control.</para>
            <legacySyntax>CONTROLINFO m_ctlInfo;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This information is stored in a                         <externalLink> <linkText>CONTROLINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms680734</linkUri>
                        </externalLink> structure.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__m_dweventsink">
        <!--f95cb091-c8d5-400d-a674-9f66285243bb-->
        <title>COleControlSite::m_dwEventSink</title>
        <content>
            <para>Contains the connection point's cookie from the control's event sink.</para>
            <legacySyntax>DWORD m_dwEventSink;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_dwmiscstatus">
        <!--1f961594-4e25-4665-945d-a8c692a95ff7-->
        <title>COleControlSite::m_dwMiscStatus</title>
        <content>
            <para>Contains miscellaneous information about the control.</para>
            <legacySyntax>DWORD m_dwMiscStatus;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see                         <externalLink> <linkText>OLEMISC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms678497</linkUri>
                        </externalLink>in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__m_dwpropnotifysink">
        <!--a8d7ca42-8f0e-4cbd-b341-21415b8dda07-->
        <title>COleControlSite::m_dwPropNotifySink</title>
        <content>
            <para>Contains the                 <externalLink> <linkText>IPropertyNotifySink</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms692638</linkUri>
                </externalLink> cookie.</para>
            <legacySyntax>DWORD m_dwPropNotifySink;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_dwstyle">
        <!--afabad25-08e1-40b0-81f8-4e0fbaae8dea-->
        <title>COleControlSite::m_dwStyle</title>
        <content>
            <para>Contains the Window styles of the control.</para>
            <legacySyntax>DWORD m_dwStyle;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_hwnd">
        <!--79e4d869-d89d-45b2-b3fb-450252f9baf7-->
        <title>COleControlSite::m_hWnd</title>
        <content>
            <para>Contains the <unmanagedCodeEntityReference>HWND</unmanagedCodeEntityReference> of the control, or <legacyBold>NULL</legacyBold> if the control is windowless.</para>
            <legacySyntax>HWND m_hWnd;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_iidevents">
        <!--847f97a2-4eba-4e7b-ae5e-02d07f6eca1c-->
        <title>COleControlSite::m_iidEvents</title>
        <content>
            <para>Contains the interface ID of the control's default event sink interface.</para>
            <legacySyntax>IID m_iidEvents;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_nid">
        <!--4affb112-c06e-41cb-8625-1adb64f5ecfb-->
        <title>COleControlSite::m_nID</title>
        <content>
            <para>Contains the control's dialog item ID.</para>
            <legacySyntax>UINT m_nID;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_pactiveobject">
        <!--86e32dae-3292-4acc-95cf-589dfdf57c3e-->
        <title>COleControlSite::m_pActiveObject</title>
        <content>
            <para>Contains the                 <externalLink> <linkText>IOleInPlaceActiveObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms691299</linkUri>
                </externalLink> interface of the control.</para>
            <legacySyntax>LPOLEINPLACEACTIVEOBJECT m_pActiveObject;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_pctrlcont">
        <!--58023161-d675-42aa-8df0-382773e645fe-->
        <title>COleControlSite::m_pCtrlCont</title>
        <content>
            <para>Contains the control's container (representing the form).</para>
            <legacySyntax>COleControlContainer* m_pCtrlCont;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_pinplaceobject">
        <!--d9740c9b-647e-4114-8518-b59e3d12ba87-->
        <title>COleControlSite::m_pInPlaceObject</title>
        <content>
            <para>Contains the <unmanagedCodeEntityReference>IOleInPlaceObject</unmanagedCodeEntityReference>                 <externalLink> <linkText>IOleInPlaceObject</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms692646</linkUri>
                </externalLink> interface of the control.</para>
            <legacySyntax>LPOLEINPLACEOBJECT m_pInPlaceObject;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_pobject">
        <!--47371ef2-2e53-4c4c-bdcc-679bd9fb9f62-->
        <title>COleControlSite::m_pObject</title>
        <content>
            <para>Contains the <legacyBold>IOleObjectInterface</legacyBold> interface of the control.</para>
            <legacySyntax>LPOLEOBJECT m_pObject;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_pwindowlessobject">
        <!--ed77e54b-5137-4c38-8f4f-12fa4da2420f-->
        <title>COleControlSite::m_pWindowlessObject</title>
        <content>
            <para>Contains the <unmanagedCodeEntityReference>IOleInPlaceObjectWindowless</unmanagedCodeEntityReference>
                <externalLink> <linkText>IOleInPlaceObjectWindowless</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms687304</linkUri>
                </externalLink> interface of the control.</para>
            <legacySyntax>IOleInPlaceObjectWindowless* m_pWindowlessObject;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_pwndctrl">
        <!--dd68ecd6-81ab-4e1d-8f2c-27b36f437f54-->
        <title>COleControlSite::m_pWndCtrl</title>
        <content>
            <para>Contains a pointer to the <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object that represents the control itself.</para>
            <legacySyntax>CWnd* m_pWndCtrl;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__m_rect">
        <!--e70b618b-c8bb-42e4-91bf-cdf317eb9ca3-->
        <title>COleControlSite::m_rect</title>
        <content>
            <para>Contains the bounds of the control, relative to the container's window.</para>
            <legacySyntax>CRect m_rect;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="colecontrolsite__modifystyle">
        <!--7858f5b7-6ae6-40a9-9b77-d8f3e6cd5a71-->
        <title>COleControlSite::ModifyStyle</title>
        <content>
            <para>Modifies the styles of the control.</para>
            <legacySyntax>virtual BOOL ModifyStyle(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwRemove</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The styles to be removed from the current window styles.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwAdd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The styles to be added from the current window styles.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Window positioning flags. For a list of possible values, see the                                 <externalLink> <linkText>SetWindowPos</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms633545</linkUri>
                                </externalLink> function in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the styles are changed, otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control's stock Enabled property will be modified to match the setting for <legacyBold>WS_DISABLED</legacyBold>. The control's stock Border Style property will be modified to match the requested setting for <unmanagedCodeEntityReference>WS_BORDER</unmanagedCodeEntityReference>. All other styles are applied directly to the control's window handle, if one is present.</para>
                    <para>Modifies the window styles of the control. Styles to be added or removed can be combined by using the bitwise OR ( | ) operator. See the                         <externalLink> <linkText>CreateWindow</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632679</linkUri>
                        </externalLink> function in the <token>winSDK</token> for information about the available window styles.</para>
                    <para>If <parameterReference>nFlags</parameterReference> is nonzero, <unmanagedCodeEntityReference>ModifyStyle</unmanagedCodeEntityReference> calls the Win32 function <unmanagedCodeEntityReference>SetWindowPos</unmanagedCodeEntityReference>, and redraws the window by combining <parameterReference>nFlags</parameterReference> with the following four flags:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOSIZE</unmanagedCodeEntityReference>   Retains the current size.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOMOVE</unmanagedCodeEntityReference>   Retains the current position.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOZORDER</unmanagedCodeEntityReference>   Retains the current Z order.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOACTIVATE</unmanagedCodeEntityReference>   Does not activate the window. </para>
                        </listItem>
                    </list>
                    <para>To modify a window's extended styles, call <legacyLink xlink:href="#colecontrolsite__modifystyleex">ModifyStyleEx</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__modifystyleex">
        <!--ebd74efd-0d5c-42f1-b6c9-f50ae1e2ef80-->
        <title>COleControlSite::ModifyStyleEx</title>
        <content>
            <para>Modifies the extended styles of the control.</para>
            <legacySyntax>virtual BOOL ModifyStyleEx(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwRemove</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The extended styles to be removed from the current window styles.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwAdd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The extended styles to be added from the current window styles.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Window positioning flags. For a list of possible values, see the                                 <externalLink> <linkText>SetWindowPos</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms633545</linkUri>
                                </externalLink> function in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the styles are changed, otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The control's stock Appearance property will be modified to match the setting for <legacyBold>WS_EX_CLIENTEDGE</legacyBold>. All other extended window styles are applied directly to the control's window handle, if one is present.</para>
                    <para>Modifies the window extended styles of the control site object. Styles to be added or removed can be combined by using the bitwise OR ( | ) operator. See the                         <externalLink> <linkText>CreateWindowEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632680</linkUri>
                        </externalLink> function in the <token>winSDK</token> for information about the available window styles.</para>
                    <para>If <parameterReference>nFlags</parameterReference> is nonzero, <unmanagedCodeEntityReference>ModifyStyleEx</unmanagedCodeEntityReference> calls the Win32 function <unmanagedCodeEntityReference>SetWindowPos</unmanagedCodeEntityReference>, and redraws the window by combining <parameterReference>nFlags</parameterReference> with the following four flags:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOSIZE</unmanagedCodeEntityReference>   Retains the current size.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOMOVE</unmanagedCodeEntityReference>   Retains the current position.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOZORDER</unmanagedCodeEntityReference>   Retains the current Z order.</para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>SWP_NOACTIVATE</unmanagedCodeEntityReference>   Does not activate the window. </para>
                        </listItem>
                    </list>
                    <para>To modify a window's extended styles, call <legacyLink xlink:href="#colecontrolsite__modifystyle">ModifyStyle</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__movewindow">
        <!--929e0381-2958-4343-a398-80b388a5d0fa-->
        <title>COleControlSite::MoveWindow</title>
        <content>
            <para>Changes the position of the control.</para>
            <legacySyntax>virtual void MoveWindow(
    int x,
    int y,
    int nWidth,
    int nHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new position of the left side of the window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new position of the top of the window.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new width of the window</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new height of the window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__quickactivate">
        <!--30519635-16d0-4ab5-a582-9f1bf67ebfe1-->
        <title>COleControlSite::QuickActivate</title>
        <content>
            <para>Quick activates the contained control.</para>
            <legacySyntax>virtual BOOL QuickActivate();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the control site was activated, otherwise zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function should be called only if the user is overriding the creation process of the control.</para>
                    <para>The <unmanagedCodeEntityReference>IPersist*::Load</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>IPersist*::InitNew</unmanagedCodeEntityReference> methods should be called after quick activation occurs. The control should establish its connections to the container's sinks during quick activation. However, these connections are not live until <unmanagedCodeEntityReference>IPersist*::Load</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>IPersist*::InitNew</unmanagedCodeEntityReference> has been called.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__safesetproperty">
        <!--9af45511-6b0a-4e70-9309-fd313efb83cb-->
        <title>COleControlSite::SafeSetProperty</title>
        <content>
            <para>Sets the control property specified by <parameterReference>dwDispID</parameterReference>.</para>
            <legacySyntax>virtual BOOL AFX_CDECL SafeSetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ... );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the dispatch ID of the property or method, found on the control's <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of property to be set. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>...</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A single parameter of the type specified by <parameterReference>vtProp</parameterReference>.</para>
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
                    <alert class="note">
                        <para>Unlike <unmanagedCodeEntityReference>SetProperty</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetPropertyV</unmanagedCodeEntityReference>, if an error is encountered (such as trying to set a nonexistent property), no exception is thrown.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setdefaultbutton">
        <!--0ccd85fc-0926-4856-bbe9-330e258ec10d-->
        <title>COleControlSite::SetDefaultButton</title>
        <content>
            <para>Sets the control as the default button.</para>
            <legacySyntax>void SetDefaultButton( BOOL bDefault );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>bDefault</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Nonzero if the control should become the default button; otherwise zero.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <alert class="note">
                        <para>The control must have the <legacyBold>OLEMISC_ACTSLIKEBUTTON</legacyBold> status bit set.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setdlgctrlid">
        <!--d71f9661-6a7f-4f88-b378-bdec21066135-->
        <title>COleControlSite::SetDlgCtrlID</title>
        <content>
            <para>Changes the value of the control's dialog item identifier.</para>
            <legacySyntax>virtual int SetDlgCtrlID( int nID );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new identifier value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the previous dialog item identifier of the window; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setfocus">
        <!--fdbef03c-d449-41a0-a8b1-99aaf06508a8-->
        <title>COleControlSite::SetFocus</title>
        <content>
            <para>Sets focus to the control.</para>
            <legacySyntax>virtual CWnd* SetFocus();

virtual CWnd* SetFocus( LPMSG lpmsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpmsg</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="dc166d27-9423-41f1-9599-5ba76d2f0138">MSG</legacyLink> structure. This structure contains the Windows message triggering the <unmanagedCodeEntityReference>SetFocus</unmanagedCodeEntityReference> request for the control contained in the current control site.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the window that previously had focus.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setproperty">
        <!--8882ee42-02b0-481b-a88c-c843f357cb42-->
        <title>COleControlSite::SetProperty</title>
        <content>
            <para>Sets the control property specified by <parameterReference>dwDispID</parameterReference>.</para>
            <legacySyntax>virtual void AFX_CDECL SetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ... );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the dispatch ID of the property or method, found on the control's <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of property to be set. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>...</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A single parameter of the type specified by <parameterReference>vtProp</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <unmanagedCodeEntityReference>SetProperty</unmanagedCodeEntityReference> encounters an error, an exception is thrown.</para>
                    <para>The type of exception is determined by the return value of the attempt to set the property or method. If the return value is <unmanagedCodeEntityReference>DISP_E_EXCEPTION</unmanagedCodeEntityReference>, a <legacyBold>COleDispatchExcpetion</legacyBold> is thrown; otherwise a <unmanagedCodeEntityReference>COleException</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setpropertyv">
        <!--a1ff585e-8a00-40e4-81f1-85fc96281c35-->
        <title>COleControlSite::SetPropertyV</title>
        <content>
            <para>Sets the control property specified by <parameterReference>dwDispID</parameterReference>.</para>
            <legacySyntax>virtual void SetPropertyV(
    DISPID dwDispID,
    VARTYPE vtProp,
    va_list argList );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwDispID</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the dispatch ID of the property or method, found on the control's <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>vtProp</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of property to be set. For possible values, see the Remarks section for <legacyLink xlink:href="3ed98daf-cdc7-4374-8a0c-cf695a8d3657#coledispatchdriver__invokehelper">COleDispatchDriver::InvokeHelper</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>argList</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the list of arguments.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Extra parameters for the method or property being invoked can be passeed using the                         <legacyItalic>arg_list</legacyItalic> parameter. If <unmanagedCodeEntityReference>SetProperty</unmanagedCodeEntityReference> encounters an error, an exception is thrown.</para>
                    <para>The type of exception is determined by the return value of the attempt to set the property or method. If the return value is <unmanagedCodeEntityReference>DISP_E_EXCEPTION</unmanagedCodeEntityReference>, a <legacyBold>COleDispatchExcpetion</legacyBold> is thrown; otherwise a <unmanagedCodeEntityReference>COleException</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setwindowpos">
        <!--8ce6c296-613f-4d23-aee7-e3316ed97f58-->
        <title>COleControlSite::SetWindowPos</title>
        <content>
            <para>Sets the size, position, and Z order of the control site.</para>
            <legacySyntax>virtual BOOL SetWindowPos(
    const CWnd* pWndInsertAfter,
    int x,
    int y,
    int cx,
    int cy,
    UINT nFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pWndInsertAfter</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new position of the left side of the window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The new position of the top of the window.</para>
                        </definition>
                        <definedTerm> <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new width of the window</para>
                        </definition>
                        <definedTerm> <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The new height of the window.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the window sizing and positioning flags. For possible values, see the Remarks section for                                 <externalLink> <linkText>SetWindowPos</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms633545</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful, otherwise zero.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__setwindowtext">
        <!--747b649a-1bad-4aa1-b9f2-ab14806d81c6-->
        <title>COleControlSite::SetWindowText</title>
        <content>
            <para>Sets the text for the control site.</para>
            <legacySyntax>virtual void SetWindowText( LPCTSTR lpszString );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a null-terminated string to be used as the new title or control text.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function first attempts to set the Caption stock property. If the Caption stock property is not supported, the Text property is set instead.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="colecontrolsite__showwindow">
        <!--197d65af-a1db-4bec-9896-2f2be1c32968-->
        <title>COleControlSite::ShowWindow</title>
        <content>
            <para>Sets the window's show state.</para>
            <legacySyntax>virtual BOOL ShowWindow( int nCmdShow );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nCmdShow</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how the control site is to be shown. It must be one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>SW_HIDE</legacyBold>   Hides this window and passes activation to another window.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_MINIMIZE</legacyBold>   Minimizes the window and activates the top-level window in the system's list.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_RESTORE</legacyBold>   Activates and displays the window. If the window is minimized or maximized, Windows restores it to its original size and position.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOW</legacyBold>   Activates the window and displays it in its current size and position.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOWMAXIMIZED</legacyBold>   Activates the window and displays it as a maximized window.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOWMINIMIZED</legacyBold>   Activates the window and displays it as an icon.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOWMINNOACTIVE</legacyBold>   Displays the window as an icon. The window that is currently active remains active.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOWNA</legacyBold>   Displays the window in its current state. The window that is currently active remains active.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOWNOACTIVATE</legacyBold>   Displays the window in its most recent size and position. The window that is currently active remains active.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SW_SHOWNORMAL</legacyBold>   Activates and displays the window. If the window is minimized or maximized, Windows restores it to its original size and position.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the window was previously visible; 0 if the window was previously hidden.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="f7ce9246-0fb7-4f07-a83a-6c2390d0fdf8">COleControlContainer</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



