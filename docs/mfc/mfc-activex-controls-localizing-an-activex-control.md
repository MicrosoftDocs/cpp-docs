---
description: "Learn more about: MFC ActiveX Controls: Localizing an ActiveX Control"
title: "MFC ActiveX Controls: Localizing an ActiveX Control"
ms.date: "09/12/2018"
f1_keywords: ["LocaleID", "AfxOleRegisterTypeLib"]
helpviewer_keywords: ["localization, ActiveX controls", "MFC ActiveX controls [MFC], localizing", "LocaleID ambient property [MFC]", "LOCALIZE sample [MFC]"]
ms.assetid: a44b839a-c652-4ec5-b824-04392708a5f9
---
# MFC ActiveX Controls: Localizing an ActiveX Control

This article discusses procedures for localizing ActiveX control interfaces.

>[!IMPORTANT]
> ActiveX is a legacy technology that should not be used for new development. For more information about modern technologies that supersede ActiveX, see [ActiveX Controls](activex-controls.md).

If you want to adapt an ActiveX control to an international market, you may want to localize the control. Windows supports many languages in addition to the default English, including German, French, and Swedish. This can present problems for the control if its interface is in English only.

In general, ActiveX controls should always base their locale on the ambient LocaleID property. There are three ways to do this:

- Load resources, always on demand, based on the current value of the ambient LocaleID property. The MFC ActiveX controls sample [LOCALIZE](../overview/visual-cpp-samples.md) uses this strategy.

- Load resources when the first control is instanced, based on the ambient LocaleID property, and use these resources for all other instances. This article demonstrates this strategy.

    > [!NOTE]
    >  This will not work correctly in some cases, if future instances have different locales.

- Use the `OnAmbientChanged` notification function to dynamically load the proper resources for the container's locale.

    > [!NOTE]
    >  This will work for the control, but the run-time DLL will not dynamically update its own resources when the ambient LocaleID property changes. In addition, run-time DLLs for ActiveX controls use the thread locale to determine the locale for its resources.

The rest of this article describes two localizing strategies. The first strategy [localizes the control's programmability interface](#_core_localizing_your_control.92.s_programmability_interface) (names of properties, methods, and events). The second strategy [localizes the control's user interface](#_core_localizing_the_control.92.s_user_interface), using the container's ambient LocaleID property. For a demonstration of control localization, see the MFC ActiveX controls sample [LOCALIZE](../overview/visual-cpp-samples.md).

## <a name="_core_localizing_your_control.92.s_programmability_interface"></a> Localizing the Control's Programmability Interface

When localizing the control's programmability interface (the interface used by programmers writing applications that use your control), you must create a modified version of the control .IDL file (a script for building the control type library) for each language you intend to support. This is the only place you need to localize the control property names.

When you develop a localized control, include the locale ID as an attribute at the type library level. For example, if you want to provide a type library with French localized property names, make a copy of your SAMPLE.IDL file, and call it SAMPLEFR.IDL. Add a locale ID attribute to the file (the locale ID for French is 0x040c), similar to the following:

[!code-cpp[NVC_MFC_AxLoc#1](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_1.idl)]

Change the property names in SAMPLEFR.IDL to their French equivalents, and then use MKTYPLIB.EXE to produce the French type library, SAMPLEFR.TLB.

To create multiple localized type libraries you can add any localized .IDL files to the project and they will be built automatically.

#### To add an .IDL file to your ActiveX control project

1. With your control project open, on the **Project** menu, click **Add Existing Item**.

   The **Add Existing Item** dialog box appears.

1. If necessary, select the drive and directory to view.

1. In the **Files of Type** box, select **All Files (\*.\*)**.

1. In the file list box, double-click the .IDL file you want to insert into the project.

1. Click **Open** when you have added all necessary .IDL files.

Because the files have been added to the project, they will be built when the rest of the project is built. The localized type libraries are located in the current ActiveX control project directory.

Within your code, the internal property names (usually in English) are always used and are never localized. This includes the control dispatch map, the property exchange functions, and your property page data exchange code.

Only one type library (.TLB) file may be bound into the resources of the control implementation (.OCX) file. This is usually the version with the standardized (typically, English) names. To ship a localized version of your control you need to ship the .OCX (which has already been bound to the default .TLB version) and the .TLB for the appropriate locale. This means that only the .OCX is needed for English versions, since the correct .TLB has already been bound to it. For other locales, the localized type library also must be shipped with the .OCX.

To ensure that clients of your control can find the localized type library, register your locale-specific .TLB file(s) under the TypeLib section of the Windows system registry. The third parameter (normally optional) of the [AfxOleRegisterTypeLib](reference/registering-ole-controls.md#afxoleregistertypelib) function is provided for this purpose. The following example registers a French type library for an ActiveX control:

[!code-cpp[NVC_MFC_AxLoc#2](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_2.cpp)]

When your control is registered, the `AfxOleRegisterTypeLib` function automatically looks for the specified .TLB file in the same directory as the control and registers it in the Windows registration database. If the .TLB file is not found, the function has no effect.

## <a name="_core_localizing_the_control.92.s_user_interface"></a> Localizing the Control's User Interface

To localize a control's user interface, place all of the control's user-visible resources (such as property pages and error messages) into language-specific resource DLLs. You then can use the container's ambient LocaleID property to select the appropriate DLL for the user's locale.

The following code example demonstrates one approach to locate and load the resource DLL for a specific locale. This member function, called `GetLocalizedResourceHandle` for this example, can be a member function of your ActiveX control class:

[!code-cpp[NVC_MFC_AxLoc#3](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_3.cpp)]

Note that the sublanguage ID could be checked in each case of the switch statement, to provide more specialized localization. For a demonstration of this function, see the `GetResourceHandle` function in the MFC ActiveX controls sample [LOCALIZE](../overview/visual-cpp-samples.md).

When the control first loads itself into a container, it can call [COleControl::AmbientLocaleID](reference/colecontrol-class.md#ambientlocaleid) to retrieve the locale ID. The control can then pass the returned locale ID value to the `GetLocalizedResourceHandle` function, which loads the proper resource library. The control should pass the resulting handle, if any, to [AfxSetResourceHandle](reference/application-information-and-management.md#afxsetresourcehandle):

[!code-cpp[NVC_MFC_AxLoc#4](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_4.cpp)]

Place the code sample above into a member function of the control, such as an override of [COleControl::OnSetClientSite](reference/colecontrol-class.md#onsetclientsite). In addition, *m_hResDLL* should be a member variable of the control class.

You can use similar logic for localizing a control's property page. To localize the property page, add code similar to the following sample to your property page's implementation file (in an override of [COlePropertyPage::OnSetPageSite](reference/colepropertypage-class.md#onsetpagesite)):

[!code-cpp[NVC_MFC_AxLoc#5](codesnippet/cpp/mfc-activex-controls-localizing-an-activex-control_5.cpp)]

## See also

[MFC ActiveX Controls](mfc-activex-controls.md)
