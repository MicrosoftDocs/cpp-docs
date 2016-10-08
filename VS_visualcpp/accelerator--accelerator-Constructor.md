---
title: "accelerator::accelerator Constructor"
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
ms.assetid: 6c560bd9-7fc0-4b19-a55a-4d8d6b6f686d
caps.latest.revision: 15
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
# accelerator::accelerator Constructor
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Initializes a new instance of the <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator class</link>.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>accelerator();


explicit accelerator(
    const std::wstring &amp; _Device_path );


accelerator(
    const accelerator &amp; _Other );</legacySyntax>
  </syntaxSection>
  <parameters>
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
  </parameters>
  <section>
    <title>Overload List</title>
    <content>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <tbody>
          <tr>
            <TD>
              <para>Name</para>
            </TD>
            <TD>
              <para>Description</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para> <codeInline>accelerator();</codeInline>
              </para>
            </TD>
            <TD>
              <para>Initializes a new instance of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> class. The new instance represents the default accelerator, usually  the fastest accelerator available. This constructor is equivalent the constructor <codeInline>accelerator(accelerator::default_accelerator)</codeInline>.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para> <codeInline>explicit accelerator(
   const std::wstring &amp;_Device_path);</codeInline>
              </para>
            </TD>
            <TD>
              <para>Initializes a new instance of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> class. The new instance represents the physical device specified in the path argument. The path can be any one of the following: </para><para> <link xlink:href="dec8f6a9-333e-40ec-ad40-6e0643cf6564">accelerator::default_accelerator Data Member</link> or <codeInline>L""</codeInline>, which represents the path of the fastest accelerator available, as chosen by the runtime.</para>
              <para> <link xlink:href="132715aa-3bc7-4c81-b944-c441b515c881">accelerator::direct3d_warp Data Member</link> or <codeInline>L"direct3d\\warp"</codeInline>, which represents the WARP accelerator.</para><para> <link xlink:href="a514b1a7-3b3f-4011-be6c-f7b0d9a42663">accelerator::direct3d_ref Data Member</link> or <codeInline>L"direct3d\\ref"</codeInline>, which represents the REF accelerator.</para><para>A device path that uniquely identifies a hardware accelerator that is available on the host system.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para> <codeInline>accelerator(   const accelerator &amp;_Other);</codeInline>
              </para>
            </TD>
            <TD>
              <para>Initializes a new instance of the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> class. The new instance is a copy of another <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object. This constructor performs a shallow copy. The new <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> object points to the same underlying device that is specified in the <unmanagedCodeEntityReference>accelerator</unmanagedCodeEntityReference> parameter.</para>
            </TD>
          </tr>
        </tbody>
      </table>
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
  <relatedTopics> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>


