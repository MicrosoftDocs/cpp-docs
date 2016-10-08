---
title: "accelerator Class"
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
ms.topic: article
ms.assetid: 37eed593-cf87-4611-9cdc-e98df6c2377a
caps.latest.revision: 23
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
# accelerator Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>An accelerator is a hardware capability that is optimized for data-parallel computing. An accelerator may be a device attached to a PCIe bus (such as a GPU), or it might be an extended instruction set on the main CPU.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class accelerator;</legacySyntax>
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
                                    <para> <link xlink:href="#accelerator__accelerator_constructor">accelerator::accelerator Constructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Initializes a new instance of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> class.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator___dtoraccelerator_destructor">accelerator::~accelerator Destructor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Destroys the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object.</para>
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
                                    <para> <link xlink:href="#accelerator__create_view_method">accelerator::create_view Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates and returns an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object on this accelerator. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_all_method">accelerator::get_all Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a vector of <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> objects that represent all the available accelerators.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_auto_selection_view_method">accelerator::get_auto_selection_view Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the auto-selection <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_dedicated_memory_method">accelerator::get_dedicated_memory Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the dedicated memory for the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>, in kilobytes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_default_cpu_access_type_method">accelerator::get_default_cpu_access_type Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the default <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> for buffers created on this accelerator.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_default_view_method">accelerator::get_default_view Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the default <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object that is associated with the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_description_method">accelerator::get_description Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a short description of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_device_path_method">accelerator::get_device_path Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the path of the device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_has_display_method">accelerator::get_has_display Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is attached to a display.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_is_debug_method">accelerator::get_is_debug Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> has the DEBUG layer enabled for extensive error reporting. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_is_emulated_method">accelerator::get_is_emulated Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is emulated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_supports_cpu_shared_memory_method">accelerator::get_supports_cpu_shared_memory Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> supports shared memory</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_supports_double_precision_method">accelerator::get_supports_double_precision Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is attached to a display.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_supports_limited_double_precision_method">accelerator::get_supports_limited_double_precision Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> has limited support for double-precision math.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__get_version_method">accelerator::get_version Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the version of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__set_default_method">accelerator::set_default Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the path of the default accelerator.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__set_default_cpu_access_type_method">Accelerator::set_default_cpu_access_type Method</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the default CPU <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> for arrays and implicit memory allocations made on this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
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
                                    <para> <link xlink:href="#accelerator__operator_neq_operator">accelerator::operator!= Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Compares this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object with another and returns <languageKeyword>false</languageKeyword> if they are the same; otherwise, returns <languageKeyword>true</languageKeyword>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__operator_eq_operator">accelerator::operator= Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the contents of the specified <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object to this one.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__operator_eq_eq_operator">accelerator::operator== Operator</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Compares this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object with another and returns <languageKeyword>true</languageKeyword> if they are the same; otherwise, returns <languageKeyword>false</languageKeyword>.</para>
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
                                    <para> <link xlink:href="#accelerator__cpu_accelerator_data_member">accelerator::cpu_accelerator Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets a string constant for the CPU <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__dedicated_memory_data_member">accelerator::dedicated_memory Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the dedicated memory for the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>, in kilobytes.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__default_accelerator_data_member">accelerator::default_accelerator Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets a string constant for the default <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__default_cpu_access_type_data_member">accelerator::default_cpu_access_type Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets or sets the default CPU <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> for arrays and implicit memory allocations made on this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__default_view_data_member">accelerator::default_view Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the default <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object that is associated with the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__description_data_member">accelerator::description Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets a short description of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__device_path_data_member">accelerator::device_path Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the path of the device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__direct3d_ref_data_member">accelerator::direct3d_ref Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets a string constant for a Direct3D reference <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__direct3d_warp_data_member">accelerator::direct3d_warp Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the string constant for an "accelerator" object that you can use for executing C++ AMP code on multi-core CPUs that use Streaming SIMD Extensions (SSE).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__has_display_data_member">accelerator::has_display Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets a Boolean value that indicates whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is attached to a display.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__is_debug_data_member">accelerator::is_debug Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> has the DEBUG layer enabled for extensive error reporting. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__is_emulated_data_member">accelerator::is_emulated Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is emulated. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__supports_cpu_shared_memory_data_member">Accelerator::supports_cpu_shared_memory Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> supports shared memory.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__supports_double_precision_data_member">accelerator::supports_double_precision Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the accelerator supports double-precision math.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__supports_limited_double_precision_data_member">accelerator::supports_limited_double_precision Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Indicates whether the accelerator has limited support for double-precision math.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#accelerator__version_data_member">accelerator::version Data Member</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the version of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <section>
        <title>Remarks</title>
        <content>
            <para>An accelerator is a hardware capability that is optimized for data-parallel computing. An accelerator is often a discrete GPU, but it can also be a virtual host-side entity such as a DirectX REF device, a WARP (a CPU-side device that is accelerated by means of SSE instructions), or the CPU itself. </para>
            <para>You can construct an <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object by enumerating the available devices, or by getting the default device, the reference device, or the WARP device.</para>
        </content>
    </section>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header: </embeddedLabel>amprt.h</para>
            <para>
                <embeddedLabel>Namespace: </embeddedLabel>Concurrency</para>
        </content>
    </requirements>
    <section address="accelerator___dtoraccelerator_destructor">
        <!--270aaa0f-aad0-4b1b-a203-601009f3d7b0-->
        <title>accelerator::~accelerator Destructor</title>
        <content>
            <para>Destroys the "accelerator" object.</para>
            <legacySyntax>~accelerator();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="accelerator__accelerator_constructor">
        <!--6c560bd9-7fc0-4b19-a55a-4d8d6b6f686d-->
        <title>accelerator::accelerator Constructor</title>
        <content>
            <para>Initializes a new instance of the "accelerator class".</para>
            <legacySyntax>accelerator();


explicit accelerator(
    const std::wstring &amp; _Device_path );


accelerator(
    const accelerator &amp; _Other );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Device_path</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The path of the physical device.</para>
                        </definition>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The accelerator to copy.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__cpu_accelerator_data_member">
        <!--c123e464-ffd8-4311-93c2-15f4b3b4fb9f-->
        <title>accelerator::cpu_accelerator Data Member</title>
        <content>
            <para>Gets a string constant for the CPU accelerator.</para>
            <legacySyntax xml:space= "preserve">static const wchar_t cpu_accelerator[];</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__create_view_method">
        <!--8f405e0f-74c0-4868-8a22-ab6cbde72598-->
        <title>accelerator::create_view Method</title>
        <content>
            <para>Creates and returns an <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object on this accelerator, using the specified queuing mode. When the queuing mode is not specified, the new <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> uses the <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#queuing_mode_enumeration">queuing_mode::immediate</legacyLink> queuing mode. </para>
            <legacySyntax>accelerator_view create_view(    queuing_mode qmode = queuing_mode_automatic);</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>qmode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The queuing mode.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A new <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object on this accelerator, using the specified queuing mode. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__dedicated_memory_data_member">
        <!--dad6b9ff-2c12-41ec-bc00-0147fc65a875-->
        <title>accelerator::dedicated_memory Data Member</title>
        <content>
            <para>Gets the dedicated memory for the "accelerator", in kilobytes.</para>
            <legacySyntax xml:space= "preserve">__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__default_accelerator_data_member">
        <!--dec8f6a9-333e-40ec-ad40-6e0643cf6564-->
        <title>accelerator::default_accelerator Data Member</title>
        <content>
            <para>Gets a string constant for the default "accelerator".</para>
            <legacySyntax>static const wchar_t default_accelerator[];</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__default_cpu_access_type_data_member">
        <!--02c9d160-610f-4d6b-bd8a-9d94df60897f-->
        <title>accelerator::default_cpu_access_type Data Member</title>
        <content>
            <para>The default cpu <legacyLink xlink:href="concurrency_namespace__c++_amp__Enumerations#access_type_enumeration">access_type</legacyLink> for arrays and implicit memory allocations made on this this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
            <legacySyntax>__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__default_view_data_member">
        <!--35751a9d-fa8d-410d-ba4e-0fe6c8176801-->
        <title>accelerator::default_view Data Member</title>
        <content>
            <para>Gets the default accelerator view that is associated with the "accelerator". </para>
            <legacySyntax>__declspec(property(get= get_default_view)) accelerator_view default_view;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__description_data_member">
        <!--aaecac1c-49a4-4bce-9b1c-9c696995bb41-->
        <title>accelerator::description Data Member</title>
        <content>
            <para>Gets a short description of the "accelerator" device.</para>
            <legacySyntax>__declspec(property(get= get_description)) std::wstring description;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__device_path_data_member">
        <!--02b5a5c9-7fbb-4fa9-a936-a03123d86f36-->
        <title>accelerator::device_path Data Member</title>
        <content>
            <para>Gets the path of the accelerator. The path is unique on the system.</para>
            <legacySyntax>__declspec(property(get= get_device_path)) std::wstring device_path;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__direct3d_ref_data_member">
        <!--a514b1a7-3b3f-4011-be6c-f7b0d9a42663-->
        <title>accelerator::direct3d_ref Data Member</title>
        <content>
            <para>Gets a string constant for a Direct3D reference accelerator.</para>
            <legacySyntax xml:space= "preserve">static const wchar_t direct3d_ref[];</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__direct3d_warp_data_member">
        <!--132715aa-3bc7-4c81-b944-c441b515c881-->
        <title>accelerator::direct3d_warp Data Member</title>
        <content>
            <para>Gets the string constant for an "accelerator" object that you can use for executing your C++ AMP code on multi-core CPUs using Streaming SIMD Extensions (SSE).</para>
            <legacySyntax>static const wchar_t direct3d_warp[];</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__get_all_method">
        <!--f5ed6195-645f-4d9b-b9c7-f55240987703-->
        <title>accelerator::get_all Method</title>
        <content>
            <para>Returns a vector of <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> objects that represent all the available accelerators. </para>
            <legacySyntax xml:space= "preserve">static inline std::vector&lt;accelerator&gt; get_all();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The vector of available accelerators </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_auto_selection_view_method">
        <!--53648239-9818-4573-b8cf-32754440693b-->
        <title>accelerator::get_auto_selection_view Method</title>
        <content>
            <para>Returns the auto selection accelerator_view, which when specified as the parallel_for_each target results in the target accelerator_view for executing the parallel_for_each kernel to be automatically selected by the runtime. For all other purposes, the accelerator_view returned by this method is the same as the default accelerator_view of the default accelerator </para>
            <legacySyntax>static accelerator_view __cdecl get_auto_selection_view();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The auto selection accelerator_view.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_dedicated_memory_method">
        <!--c7a96571-6963-4770-aa7d-b60b0c00ed6c-->
        <title>accelerator::get_dedicated_memory Method</title>
        <content>
            <para>Returns the dedicated memory for the "accelerator", in kilobytes.</para>
            <legacySyntax>size_t get_dedicated_memory() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dedicated memory for the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>, in kilobytes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_default_cpu_access_type_method">
        <!--be3213ac-3710-4925-96f0-51359565fa6d-->
        <title>accelerator::get_default_cpu_access_type Method</title>
        <content>
            <para>Gets the default cpu access_type for buffers created on this accelerator </para>
            <legacySyntax>access_type get_default_cpu_access_type() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The default cpu access_type for buffers created on this accelerator.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_default_view_method">
        <!--47f92d76-2ed1-47c2-a4e1-39c83338a8f4-->
        <title>accelerator::get_default_view Method</title>
        <content>
            <para>Returns the default <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object that is associated with the "accelerator". </para>
            <legacySyntax>accelerator_view get_default_view() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The default <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object that is associated with the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_description_method">
        <!--17924a1a-509f-44a8-86a0-ad6a6f638578-->
        <title>accelerator::get_description Method</title>
        <content>
            <para>Returns a short description of the "accelerator" device.</para>
            <legacySyntax>std::wstring get_description() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A short description of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> device.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_device_path_method">
        <!--92a9351b-818d-418e-8c82-01834ce0e49a-->
        <title>accelerator::get_device_path Method</title>
        <content>
            <para>Returns the path of the accelerator. The path is unique on the system.  </para>
            <legacySyntax>std::wstring get_device_path() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The system-wide unique device instance path.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_has_display_method">
        <!--4e634e82-5459-4c6d-b34a-69fbe6ab101c-->
        <title>accelerator::get_has_display Method</title>
        <content>
            <para>Returns a Boolean value that indicates whether the "accelerator" can output to a display.</para>
            <legacySyntax>bool get_has_display() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> can output to a display; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_is_debug_method">
        <!--88b21cb6-0605-4ed9-9376-02b995fa704d-->
        <title>accelerator::get_is_debug Method</title>
        <content>
            <para>Determines whether the "accelerator" has the DEBUG layer enabled for extensive error reporting. </para>
            <legacySyntax>bool get_is_debug() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> has the DEBUG layer enabled for extensive error reporting. Otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_is_emulated_method">
        <!--db25b773-6342-4870-912a-454392cf3e5c-->
        <title>accelerator::get_is_emulated Method</title>
        <content>
            <para>Determines whether the "accelerator" is emulated.</para>
            <legacySyntax>bool get_is_emulated() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> is emulated. Otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_supports_cpu_shared_memory_method">
        <!--e9946a1c-b467-4344-94e3-3f7b7705944c-->
        <title>accelerator::get_supports_cpu_shared_memory Method</title>
        <content>
            <para>Returns a boolean value indicating whether the accelerator supports memory accessible both by the accelerator and the CPU. </para>
            <legacySyntax>bool get_supports_cpu_shared_memory() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the accelerator supports CPU shared memory; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_supports_double_precision_method">
        <!--53344011-0b90-4d7a-8c2b-e10d00144c5c-->
        <title>accelerator::get_supports_double_precision Method</title>
        <content>
            <para>Returns a Boolean value that indicates whether the accelerator supports double precision math, including fused multiply add (FMA), division, reciprocal, and casting between <languageKeyword>int</languageKeyword> and <languageKeyword>double</languageKeyword>.</para>
            <legacySyntax>bool get_supports_double_precision() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the accelerator supports double precision math; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_supports_limited_double_precision_method">
        <!--2fdb9c32-81b0-4224-9dab-4277be44ce75-->
        <title>accelerator::get_supports_limited_double_precision Method</title>
        <content>
            <para>Returns a Boolean value that indicates whether the accelerator has limited support for double precision math. If the accelerator has only limited support, then fused multiply add (FMA), division, reciprocal, and casting between <languageKeyword>int</languageKeyword> and <languageKeyword>double</languageKeyword> are not supported.</para>
            <legacySyntax>bool get_supports_limited_double_precision() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the accelerator has limited support for double precision math; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__get_version_method">
        <!--e13f41fe-8dd7-48df-8cda-d3c5ca0a5470-->
        <title>accelerator::get_version Method</title>
        <content>
            <para>Returns the version of the "accelerator".</para>
            <legacySyntax>unsigned int get_version() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The version of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__has_display_data_member">
        <!--ba5481af-72c5-4d81-aeef-f2090d8baa28-->
        <title>accelerator::has_display Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the "accelerator" can output to a display.</para>
            <legacySyntax>__declspec(property(get= get_has_display)) bool has_display;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__is_debug_data_member">
        <!--8d131f60-71bc-4254-91a4-d9523f80cb36-->
        <title>accelerator::is_debug Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the "accelerator" has the DEBUG layer enabled for extensive error reporting. </para>
            <legacySyntax>__declspec(property(get= get_is_debug)) bool is_debug;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__is_emulated_data_member">
        <!--cc3d7621-6b74-4e23-aabc-60d71811aa77-->
        <title>accelerator::is_emulated Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the "accelerator" is emulated. </para>
            <legacySyntax>__declspec(property(get= get_is_emulated)) bool is_emulated;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__operator_neq_operator">
        <!--fafee516-c2f1-402e-ab11-1fee2e2144cf-->
        <title>accelerator::operator!= Operator</title>
        <content>
            <para>Compares this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object with another and returns <languageKeyword>false</languageKeyword> if they are the same; otherwise, returns <languageKeyword>true</languageKeyword>.</para>
            <legacySyntax>bool operator!= (    const accelerator &amp; _Other ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object to compare with this one.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>false</languageKeyword> if the two <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> objects are the same; otherwise, <languageKeyword>true</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__operator_eq_operator">
        <!--66e2f395-9000-4e4c-be53-ccf1188753ed-->
        <title>accelerator::operator= Operator</title>
        <content>
            <para>Copies the contents of the specified "accelerator" object to this one.</para>
            <legacySyntax>accelerator &amp; operator= (    const accelerator &amp; _Other );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object to copy from.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__operator_eq_eq_operator">
        <!--eba3c68a-1bbf-4617-9440-7baf9be66273-->
        <title>accelerator::operator== Operator</title>
        <content>
            <para>Compares this "accelerator" object with another and returns <languageKeyword>true</languageKeyword> if they are the same; otherwise, returns <languageKeyword>false</languageKeyword>.</para>
            <legacySyntax>bool operator= = (    const accelerator &amp; _Other ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object to compare with this one.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the other <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object is same as this <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__set_default_method">
        <!--9863e4b2-35b4-4b14-b40c-917dd266605b-->
        <title>accelerator::set_default Method</title>
        <content>
            <para>Sets the default accelerator to be used for any operation that implicitly uses the default accelerator. This method only succeeds if the runtime selected default accelerator has not already been used in an operation that implicitly uses the default accelerator</para>
            <legacySyntax>static inline bool set_default(    std::wstring _Path );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Path</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The path to the accelerator.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the call succeeds at setting the default accelerator. Otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__set_default_cpu_access_type_method">
        <!--bee89989-1a00-4319-9961-3efecf1b9c8d-->
        <title>accelerator::set_default_cpu_access_type Method</title>
        <content>
            <para>Set the default cpu access_type for arrays created on this accelerator or for implicit memory allocations as part of array_views accessed on this this accelerator. This method only succeeds if the default_cpu_access_type for the accelerator has not already been overriden by a previous call to this method and the runtime selected default_cpu_access_type for this accelerator has not yet been used for allocating an array or for an implicit memory allocation backing an array_view accessed on this accelerator. </para>
            <legacySyntax xml:space= "preserve">bool set_default_cpu_access_type(    access_type _Default_cpu_access_type );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Default_cpu_access_type</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The default cpu access_type to be used for array/array_view memory allocations on this accelerator. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A boolean value indicating if the default cpu access_type for the accelerator was successfully set. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator__supports_cpu_shared_memory_data_member">
        <!--ce1961f7-7a5c-4f62-ac92-4b890f961340-->
        <title>accelerator::supports_cpu_shared_memory Data Member</title>
        <content>
            <para>Gets a Boolean value indicating whether the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> supports shared memory.</para>
            <legacySyntax>__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__supports_double_precision_data_member">
        <!--8d075a9b-b202-4ba2-be82-bd43222287e9-->
        <title>accelerator::supports_double_precision Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the accelerator supports double precision math.</para>
            <legacySyntax>__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__supports_limited_double_precision_data_member">
        <!--3ffb9199-87c9-4da1-a46c-b93e2dadc578-->
        <title>accelerator::supports_limited_double_precision Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the accelerator has limited support for double precision math. If the accelerator has only limited support, then fused multiply add (FMA), division, reciprocal, and casting between <languageKeyword>int</languageKeyword> and <languageKeyword>double</languageKeyword> are not supported.</para>
            <legacySyntax>__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator__version_data_member">
        <!--5ffdcda8-aede-4028-88fb-f47efb9ce457-->
        <title>accelerator::version Data Member</title>
        <content>
            <para>Gets the version of the "accelerator".</para>
            <legacySyntax>__declspec(property(get= get_version)) unsigned int version;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator_view___dtoraccelerator_view_destructor">
        <!--c4a0056d-3c25-485b-8e0a-5a3fb5d747e3-->
        <title>accelerator_view::~accelerator_view Destructor</title>
        <content>
            <para>Destroys the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object.</para>
            <legacySyntax xml:space= "preserve">~accelerator_view();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content/>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__accelerator_data_member">
        <!--1772c499-7fc0-4a14-9220-3726e17cc91f-->
        <title>accelerator_view::accelerator Data Member</title>
        <content>
            <para>Gets the "accelerator" object for the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object. </para>
            <legacySyntax xml:space= "preserve">__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator_view__accelerator_view_constructor">
        <!--22342bbd-02db-4337-b88c-3d74792811ff-->
        <title>accelerator_view::accelerator_view Constructor</title>
        <content>
            <para>Initializes a new instance of the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> class by copying an existing <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object. </para>
            <legacySyntax xml:space= "preserve">accelerator_view(    const accelerator_view &amp; _Other );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object to copy.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__create_marker_method">
        <!--6a5fc539-b5a4-4ddf-8201-a5fa633385ee-->
        <title>accelerator_view::create_marker Method</title>
        <content>
            <para>Returns a future to track the completion of all commands submitted so far to this <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object. </para>
            <legacySyntax>concurrency::completion_future create_marker();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A future to track the completion of all commands submitted so far to this <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__flush_method">
        <!--914020f3-c6f4-47ec-8826-74d580807145-->
        <title>accelerator_view::flush Method</title>
        <content>
            <para>Submits all pending commands queued to the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object to the accelerator for execution. </para>
            <legacySyntax>void flush();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>void</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__get_accelerator_method">
        <!--59af4efb-18f0-47f6-a1e9-a3a6933cdc26-->
        <title>accelerator_view::get_accelerator Method</title>
        <content>
            <para>Returns the "accelerator" object for the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object. </para>
            <legacySyntax>accelerator get_accelerator() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object for the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__get_is_auto_selection_method">
        <!--6389fb49-122d-4bbc-b5cb-b792a571ff4e-->
        <title>accelerator_view::get_is_auto_selection Method</title>
        <content>
            <para>Returns a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a <legacyLink xlink:href="concurrency_namespace__c++_amp__Functions#parallel_for_each_function__c_add_add_amp_">parallel_for_each</legacyLink>.</para>
            <legacySyntax>bool get_is_auto_selection() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the runtime will automatically select an appropriate accelerator; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__get_is_debug_method">
        <!--3de75c76-715b-44c2-a8b0-0b576e4722a4-->
        <title>accelerator_view::get_is_debug Method</title>
        <content>
            <para>Returns a Boolean value that indicates whether the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object has the DEBUG layer enabled for extensive error reporting. </para>
            <legacySyntax>bool get_is_debug() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A Boolean value that indicates whether the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object has the DEBUG layer enabled for extensive error reporting. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__get_queuing_mode_method">
        <!--6f0b7fc3-157d-4e3a-a6a5-c4f61ccd4299-->
        <title>accelerator_view::get_queuing_mode Method</title>
        <content>
            <para>Returns the queuing mode for the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object.</para>
            <legacySyntax xml:space= "preserve">queuing_mode get_queuing_mode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The queuing mode for the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__get_version_method">
        <!--c51826b5-09fd-403e-8e6e-e514a0b03772-->
        <title>accelerator_view::get_version Method</title>
        <content>
            <para>Returns the version of the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink>. </para>
            <legacySyntax xml:space= "preserve">unsigned int get_version() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The version of the <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__is_auto_selection_data_member">
        <!--aeccabce-3d77-4e19-9334-eb881acf073f-->
        <title>accelerator_view::is_auto_selection Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the runtime will automatically select an appropriate accelerator when the accelerator_view is passed to a <legacyLink xlink:href="concurrency_namespace__c++_amp__Functions#parallel_for_each_function__c_add_add_amp_">parallel_for_each</legacyLink>.</para>
            <legacySyntax>__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator_view__is_debug_data_member">
        <!--a6340f3b-48bd-4a95-9e5e-bd3780132da7-->
        <title>accelerator_view::is_debug Data Member</title>
        <content>
            <para>Gets a Boolean value that indicates whether the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object has the  DEBUG layer enabled for extensive error reporting. </para>
            <legacySyntax>__declspec(property(get= get_is_debug)) bool is_debug;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator_view__operator_neq_operator">
        <!--e27cc235-d333-453c-b5d6-2eacb6c9fb9d-->
        <title>accelerator_view::operator!= Operator</title>
        <content>
            <para>Compares this <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object with another and returns <languageKeyword>false</languageKeyword> if they are the same; otherwise, returns <languageKeyword>true</languageKeyword>.</para>
            <legacySyntax xml:space= "preserve">bool operator!= (    const accelerator_view &amp; _Other ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object to compare with this one.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>false</languageKeyword> if the two objects are the same; otherwise, <languageKeyword>true</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__operator_eq_operator">
        <!--ac4aa0a2-6da9-4aea-a2e0-06b81abb81ab-->
        <title>accelerator_view::operator= Operator</title>
        <content>
            <para>Copies the contents of the specified <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object into this one.</para>
            <legacySyntax>accelerator_view &amp; operator= (    const accelerator_view &amp; _Other );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object to copy from.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A reference to the modified <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__operator_eq_eq_operator">
        <!--bd8db2fd-1c44-4e9a-ae1b-1995e915b142-->
        <title>accelerator_view::operator== Operator</title>
        <content>
            <para>Compares this <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object with another and returns <languageKeyword>true</languageKeyword> if they are the same; otherwise, returns <languageKeyword>false</languageKeyword>.</para>
            <legacySyntax>bool operator= = (    const accelerator_view &amp; _Other ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>_Other</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The <unmanagedCodeEntityReference>accelerator_view</unmanagedCodeEntityReference> object to compare with this one.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <languageKeyword>true</languageKeyword> if the two objects are the same; otherwise, <languageKeyword>false</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="accelerator_view__queuing_mode_data_member">
        <!--1bde0543-f974-4a9c-8457-52a28014683b-->
        <title>accelerator_view::queuing_mode Data Member</title>
        <content>
            <para>Gets the queuing mode for the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object.</para>
            <legacySyntax xml:space= "preserve">__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator_view__version_data_member">
        <!--d2f8717b-1dca-4157-a061-f559166cbee1-->
        <title>accelerator_view::version Data Member</title>
        <content>
            <para>Gets the version of the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink>. </para>
            <legacySyntax>__declspec(property(get= get_version)) unsigned int version;</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="accelerator_view__wait_method">
        <!--c34ac1b3-e5bf-4a4e-86a3-420d23f0e2e9-->
        <title>accelerator_view::wait Method</title>
        <content>
            <para>Waits for all commands submitted to the <legacyLink xlink:href="9f298c21-bf62-46e0-88b8-01c5c78ef144">accelerator_view</legacyLink> object to finish. </para>
            <legacySyntax>void wait();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns <languageKeyword>void</languageKeyword>.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="b5aab265-3bac-42c5-8ead-f92ce05ef267">Concurrency Namespace (C++ Accelerated Massive Parallelism)</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



