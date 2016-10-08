---
title: "CPageSetupDialog Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 049c0ac8-f254-4854-9414-7a8271d1447a
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
# CPageSetupDialog Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Encapsulates the services provided by the Windows common OLE Page Setup dialog box with additional support for setting and modifying print margins. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CPageSetupDialog : public CCommonDialog</legacySyntax>
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
                                    <para> <link xlink:href="#cpagesetupdialog__cpagesetupdialog">CPageSetupDialog::CPageSetupDialog</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#cpagesetupdialog__createprinterdc">CPageSetupDialog::CreatePrinterDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a device context for printing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__domodal">CPageSetupDialog::DoModal</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Displays the dialog box and allows the user make a selection.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__getdevicename">CPageSetupDialog::GetDeviceName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the device name of the printer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__getdevmode">CPageSetupDialog::GetDevMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current <unmanagedCodeEntityReference>DEVMODE</unmanagedCodeEntityReference> of the printer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__getdrivername">CPageSetupDialog::GetDriverName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the driver used by the printer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__getmargins">CPageSetupDialog::GetMargins</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current margin settings of the printer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__getpapersize">CPageSetupDialog::GetPaperSize</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the paper size of the printer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__getportname">CPageSetupDialog::GetPortName</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the output port name.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__ondrawpage">CPageSetupDialog::OnDrawPage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework to render a screen image of a printed page.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cpagesetupdialog__predrawpage">CPageSetupDialog::PreDrawPage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the framework before rendering a screen image of a printed page.</para>
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
                                    <para> <link xlink:href="#cpagesetupdialog__m_psd">CPageSetupDialog::m_psd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>A structure used to customize a <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object.</para>
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
            <para>This class is designed to take the place of the Print Setup dialog box.</para>
            <para>To use a <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object, first create the object using the <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> constructor. Once the dialog box has been constructed, you can set or modify any values in the <unmanagedCodeEntityReference>m_psd</unmanagedCodeEntityReference> data member to initialize the values of the dialog box's controls. The <legacyLink xlink:href="#cpagesetupdialog__m_psd">m_psd</legacyLink> structure is of type <legacyBold>PAGESETUPDLG</legacyBold>.</para>
            <para>After initializing the dialog box controls, call the <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> member function to display the dialog box and allow the user to select print options. <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> returns whether the user selected the OK ( <legacyBold>IDOK</legacyBold>) or Cancel ( <legacyBold>IDCANCEL</legacyBold>) button.</para>
            <para>If <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> returns <legacyBold>IDOK</legacyBold>, you can use several of <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference>'s member functions, or access the <unmanagedCodeEntityReference>m_psd</unmanagedCodeEntityReference> data member, to retrieve information input by the user.</para>
            <alert class="note">
                <para>After the common OLE Page Setup dialog box is dismissed, any changes made by the user will not be saved by the framework. It is up to the application itself to save any values from this dialog box to a permanent location, such as member of the application's document or application class.</para>
            </alert>
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
            <para> <legacyLink xlink:href="ca64b77e-2cd2-47e3-8eff-c2645ad578f9">CDialog</legacyLink>
            </para>
            <para> <legacyLink xlink:href="1f68d65f-a0fd-4778-be22-ebbe51a95f95">CCommonDialog</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxdlgs.h</para>
        </content>
    </requirements>
    <section address="cpagesetupdialog__cpagesetupdialog">
        <!--d9ee2f2f-4202-4608-a5ce-ef2b4dbfbfd8-->
        <title>CPageSetupDialog::CPageSetupDialog</title>
        <content>
            <para>Call this function to construct a <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CPageSetupDialog(
    DWORD dwFlags = PSD_MARGINS | PSD_INWININIINTLMEASURE,
    CWnd* pParentWnd = NULL  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>One or more flags you can use to customize the settings of the dialog box. The values can be combined using the bitwise-OR operator. These values have the following meanings:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>PSD_DEFAULTMINMARGINS</legacyBold>   Sets the minimum allowable widths for the page margins to be the same as the printer's minimums. This flag is ignored if the <legacyBold>PSD_MARGINS</legacyBold> and <legacyBold>PSD_MINMARGINS</legacyBold> flags are also specified.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_INWININIINTLMEASURE</legacyBold>   Not implemented.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_MINMARGINS</legacyBold>   Causes the system to use the values specified in the <legacyBold>rtMinMargin</legacyBold> member as the minimum allowable widths for the left, top, right, and bottom margins. The system prevents the user from entering a width that is less than the specified minimum. If <legacyBold>PSD_MINMARGINS</legacyBold> is not specified, the system sets the minimum allowable widths to those allowed by the printer. </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_MARGINS</legacyBold>   Activates the margin control area.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_INTHOUSANDTHSOFINCHES</legacyBold>   Causes the units of the dialog box to be measured in 1/1000 of an inch.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_INHUNDREDTHSOFMILLIMETERS</legacyBold>   Causes the units of the dialog box to be measured in 1/100 of a millimeter.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_DISABLEMARGINS</legacyBold>   Disables the margin dialog box controls.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_DISABLEPRINTER</legacyBold>   Disables the Printer button.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_NOWARNING</legacyBold>   Prevents the warning message from being displayed when there is no default printer.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_DISABLEORIENTATION</legacyBold>   Disables the page orientation dialog control.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_RETURNDEFAULT</legacyBold>   Causes <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> to return                                         <externalLink> <linkText>DEVMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183565</linkUri>
                                        </externalLink> and <legacyLink xlink:href="aac97f60-2169-471a-ba5d-c0baed9eed9a">DEVNAMES</legacyLink> structures that are initialized for the system default printer without displaying a dialog box. It is assumed that both <legacyBold>hDevNames</legacyBold> and <legacyBold>hDevMode</legacyBold> are <legacyBold>NULL</legacyBold>; otherwise, the function returns an error. If the system default printer is supported by an old printer driver (earlier than Windows version 3.0), only <legacyBold>hDevNames</legacyBold> is returned; <legacyBold>hDevMode</legacyBold> is <legacyBold>NULL</legacyBold>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_DISABLEPAPER</legacyBold>   Disables the paper selection control.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_SHOWHELP</legacyBold>   Causes the dialog box to show the Help button. The <legacyBold>hwndOwner</legacyBold> member must not be <legacyBold>NULL</legacyBold> if this flag is specified.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_ENABLEPAGESETUPHOOK</legacyBold>   Enables the hook function specified in <legacyBold>lpfnSetupHook</legacyBold>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_ENABLEPAGESETUPTEMPLATE</legacyBold>   Causes the operating system to create the dialog box by using the dialog template box identified by <legacyBold>hInstance</legacyBold> and <legacyBold>lpSetupTemplateName</legacyBold>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_ENABLEPAGESETUPTEMPLATEHANDLE</legacyBold>   Indicates that <legacyBold>hInstance</legacyBold> identifies a data block that contains a preloaded dialog box template. The system ignores <legacyBold>lpSetupTemplateName</legacyBold> if this flag is specified.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_ENABLEPAGEPAINTHOOK</legacyBold>   Enables the hook function specified in <legacyBold>lpfnPagePaintHook</legacyBold>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PSD_DISABLEPAGEPAINTING</legacyBold>   Disables the draw area of the dialog box.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>pParentWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the dialog box's parent or owner.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use the <legacyLink xlink:href="ca64b77e-2cd2-47e3-8eff-c2645ad578f9#cdialog__domodal">DoModal</legacyLink> function to display the dialog box.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#94</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__createprinterdc">
        <!--50097a9d-f7ee-4017-af9c-146e5382d57c-->
        <title>CPageSetupDialog::CreatePrinterDC</title>
        <content>
            <para>Creates a printer device context from the                 <externalLink> <linkText>DEVMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183565</linkUri>
                </externalLink> and <legacyLink xlink:href="aac97f60-2169-471a-ba5d-c0baed9eed9a">DEVNAMES</legacyLink> structures.</para>
            <legacySyntax>HDC CreatePrinterDC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Handle to the newly created printer device context (DC).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__domodal">
        <!--09a99693-2870-413d-b316-3e7254244453-->
        <title>CPageSetupDialog::DoModal</title>
        <content>
            <para>Call this function to display the Windows common OLE Page Setup dialog box and allow the user to select various print setup options such as the printing margins, size and orientation of the paper, and destination printer.</para>
            <legacySyntax>virtual INT_PTR DoModal();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>IDOK</legacyBold> or <legacyBold>IDCANCEL</legacyBold>. If <legacyBold>IDCANCEL</legacyBold> is returned, call the Windows                         <externalLink> <linkText>CommDlgExtendedError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646916</linkUri>
                        </externalLink> function to determine whether an error occurred.</para>
                    <para> <legacyBold>IDOK</legacyBold> and <legacyBold>IDCANCEL</legacyBold> are constants that indicate whether the user selected the OK or Cancel button.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In addition, the user can access the printer setup options such as network location and properties specific to the selected printer.</para>
                    <para>If you want to initialize the various Page Setup dialog options by setting members of the <unmanagedCodeEntityReference>m_psd</unmanagedCodeEntityReference> structure, you should do so before calling <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference>, and after the dialog object is constructed. After calling <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference>, call other member functions to retrieve the settings or information input by the user into the dialog box.</para>
                    <para>If you want to propagate the current settings entered by the user, make a call to <legacyLink xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343#cwinapp__selectprinter">CWinApp::SelectPrinter</legacyLink>. This function takes the information from the <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object and initializes and selects a new printer DC with the proper attributes.</para>
                    <codeReference>NVC_MFCDocView#95</codeReference>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cpagesetupdialog__cpagesetupdialog">CPageSetupDialog::CPageSetupDialog</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__getdevicename">
        <!--fee37f54-0ea9-468a-b928-445d15b6f639-->
        <title>CPageSetupDialog::GetDeviceName</title>
        <content>
            <para>Call this function after <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> to retrieve the name of the currently selected printer.</para>
            <legacySyntax> CString GetDeviceName() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The device name used by the <legacyBold> CPageSetupDialog</legacyBold> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__getdevmode">
        <!--9fcd3f05-0fe8-4631-96e3-0b49f67472d6-->
        <title>CPageSetupDialog::GetDevMode</title>
        <content>
            <para>Call this function after calling <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> to retrieve information about the printer device context of the <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>LPDEVMODE GetDevMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The                         <externalLink> <linkText>DEVMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183565</linkUri>
                        </externalLink> data structure, which contains information about the device initialization and environment of a print driver. You must unlock the memory taken by this structure with the Windows                         <externalLink> <linkText>GlobalUnlock</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/aa366595</linkUri>
                        </externalLink> function, which is described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__getdrivername">
        <!--1f0362e1-4705-447a-8a1b-690957f3e893-->
        <title>CPageSetupDialog::GetDriverName</title>
        <content>
            <para>Call this function after calling <legacyLink xlink:href="5bdb2424-adf8-433d-a97c-df11a83bc4e4#cprintdialog__domodal">DoModal</legacyLink> to retrieve the name of the system-defined printer device driver.</para>
            <legacySyntax>CString GetDriverName() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> specifying the system-defined driver name.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use a pointer to the <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object returned by <unmanagedCodeEntityReference>GetDriverName</unmanagedCodeEntityReference> as the value of <parameterReference>lpszDriverName</parameterReference> in a call to <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2#cdc__createdc">CDC::CreateDC</legacyLink>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__getmargins">
        <!--68c857ed-f5c3-4807-a223-50635c148e7a-->
        <title>CPageSetupDialog::GetMargins</title>
        <content>
            <para>Call this function after a call to <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> to retrieve the margins of the printer device driver.</para>
            <legacySyntax>void GetMargins(
    LPRECT lpRectMargins,
    LPRECT lpRectMinMargins ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpRectMargins</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a "RECT" structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that describes (in 1/1000 inches or 1/100 mm) the print margins for the currently selected printer. Pass <legacyBold>NULL</legacyBold> for this parameter, if you are not interested in this rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpRectMinMargins</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that describes (in 1/1000 inches or 1/100 mm) the minimum print margins for the currently selected printer. Pass <legacyBold>NULL</legacyBold> for this parameter, if you are not interested in this rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__getpapersize">
        <!--7bf25faf-b928-4df7-a15f-41b249add02f-->
        <title>CPageSetupDialog::GetPaperSize</title>
        <content>
            <para>Call this function to retrieve the size of the paper selected for printing.</para>
            <legacySyntax>CSize GetPaperSize() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object containing the size of the paper (in 1/1000 inches or 1/100 mm) selected for printing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__getportname">
        <!--60444609-8e48-41ca-b44f-578e30ae4b6d-->
        <title>CPageSetupDialog::GetPortName</title>
        <content>
            <para>Call this function after calling <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> to retrieve the name of the currently selected printer port.</para>
            <legacySyntax>CString GetPortName() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The name of the currently selected printer port.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__m_psd">
        <!--e3704958-251b-4979-8f58-7a61ba3df4f2-->
        <title>CPageSetupDialog::m_psd</title>
        <content>
            <para>A structure of type <legacyBold>PAGESETUPDLG</legacyBold>, whose members store the characteristics of the dialog object.</para>
            <legacySyntax>PAGESETUPDLG m_psd;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After constructing a <unmanagedCodeEntityReference>CPageSetupDialog</unmanagedCodeEntityReference> object, you can use <unmanagedCodeEntityReference>m_psd</unmanagedCodeEntityReference> to set various aspects of the dialog box before calling the <unmanagedCodeEntityReference>DoModal</unmanagedCodeEntityReference> member function.</para>
                    <para>If you modify the <unmanagedCodeEntityReference>m_psd</unmanagedCodeEntityReference> data member directly, you will override any default behavior.</para>
                    <para>For more information on the                         <externalLink> <linkText>PAGESETUPDLG</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646842</linkUri>
                        </externalLink> structure, see the <token>winSDK</token>.</para>
                    <para>See the example for <legacyLink xlink:href="#cpagesetupdialog__cpagesetupdialog">CPageSetupDialog::CPageSetupDialog</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__ondrawpage">
        <!--ba40bb7a-c1bc-446f-8d14-2337c926811c-->
        <title>CPageSetupDialog::OnDrawPage</title>
        <content>
            <para>Called by the framework to draw a screen image of a printed page.</para>
            <legacySyntax>virtual UINT OnDrawPage(
    CDC* pDC,
    UINT nMessage,
    LPRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the printer device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>nMessage</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a message, indicating the area of the page currently being drawn. Can be one of the following:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>WM_PSD_FULLPAGERECT</legacyBold>   The entire page area.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WM_PSD_MINMARGINRECT</legacyBold>   Current minimum margins.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WM_PSD_MARGINRECT</legacyBold>   Current margins.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WM_PSD_GREEKTEXTRECT</legacyBold>   Contents of the page.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WM_PSD_ENVSTAMPRECT</legacyBold>   Area reserved for a postage stamp representation.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WM_PSD_YAFULLPAGERECT</legacyBold>   Area for a return address representation. This area extends to the edges of the sample page area.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> or "RECT" object containing the coordinates of the drawing area.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero value if handled; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This image is then displayed as part of the common OLE Page Setup dialog box. The default implementation draws an image of a page of text.</para>
                    <para>Override this function to customize the drawing of a specific area of the image, or the entire image. You can do this by using a <languageKeyword>switch</languageKeyword> statement with <legacyBold>case</legacyBold> statements checking the value of <parameterReference>nMessage</parameterReference>. For example, to customize the rendering of the contents of the page image, you could use the following example code:</para>
                    <codeReference>NVC_MFCDocView#96</codeReference>
                    <para>Note that you do not need to handle every case of <parameterReference>nMessage</parameterReference>. You can choose to handle one component of the image, several components of the image, or the whole area.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cpagesetupdialog__predrawpage">
        <!--5ff204ee-e0db-4d6a-b3f9-9cc5ad25188a-->
        <title>CPageSetupDialog::PreDrawPage</title>
        <content>
            <para>Called by the framework before drawing the screen image of a printed page.</para>
            <legacySyntax>virtual UINT PreDrawPage(
    WORD wPaper,
    WORD wFlags,
    LPPAGESETUPDLG pPSD );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>wPaper</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies a value that indicates the paper size. This value can be one of the <legacyBold>DMPAPER_</legacyBold> values listed in the description of the                                 <externalLink> <linkText>DEVMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183565</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                        <definedTerm> <parameterReference>wFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Indicates the orientation of the paper or envelope, and whether the printer is a dot-matrix or HPPCL (Hewlett Packard Printer Control Language) device. This parameter can have one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para>0x001   Paper in landscape mode (dot matrix)</para>
                                </listItem>
                                <listItem>
                                    <para>0x003   Paper in landscape mode (HPPCL)</para>
                                </listItem>
                                <listItem>
                                    <para>0x005   Paper in portrait mode (dot matrix)</para>
                                </listItem>
                                <listItem>
                                    <para>0x007   Paper in portrait mode (HPPCL)</para>
                                </listItem>
                                <listItem>
                                    <para>0x00b   Envelope in landscape mode (HPPCL)</para>
                                </listItem>
                                <listItem>
                                    <para>0x00d   Envelope in portrait mode (dot matrix)</para>
                                </listItem>
                                <listItem>
                                    <para>0x019   Envelope in landscape mode (dot matrix)</para>
                                </listItem>
                                <listItem>
                                    <para>0x01f   Envelope in portrait mode (dot matrix)</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>pPSD</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <legacyBold>PAGESETUPDLG</legacyBold> structure. For more information on                                 <externalLink> <linkText>PAGESETUPDLG</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms646842</linkUri>
                                </externalLink>, see the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero value if handled; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Override this function to customize the drawing of the image. If you override this function and return <legacyBold>TRUE</legacyBold>, you must draw the entire image. If you override this function and return <legacyBold>FALSE</legacyBold>, the entire default image is drawn by the framework.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <legacyLink xlink:href="76798022-5886-48e7-a7f2-f99352b15cbf">MFC Sample WORDPAD</legacyLink> <link xlink:href="1f68d65f-a0fd-4778-be22-ebbe51a95f95">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



