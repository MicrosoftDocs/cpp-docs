---
title: "accelerator::has_display Data Member"
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
ms.assetid: ba5481af-72c5-4d81-aeef-f2090d8baa28
caps.latest.revision: 11
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
# accelerator::has_display Data Member
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Gets a Boolean value that indicates whether the <legacyLink xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator</legacyLink> can output to a display.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>__declspec(property(get= get_has_display)) bool has_display;</legacySyntax>
  </syntaxSection>
  <section>
    <title>Remarks</title>
    <content>
      <para>The value of the <unmanagedCodeEntityReference>has_display</unmanagedCodeEntityReference> property indicates whether the accelerator can output to a display, but it does not necessarily indicate that a display is physically attached to the accelerator.</para>
      <para>For hardware accelerators, <unmanagedCodeEntityReference>has_display</unmanagedCodeEntityReference> is <languageKeyword>true</languageKeyword> only when a display device is attached to the accelerator. For the REF and WARP accelerators, <unmanagedCodeEntityReference>has_display</unmanagedCodeEntityReference> is always <languageKeyword>true</languageKeyword> because they are always capable of outputting to a display. For the CPU accelerator—which cannot output to a display—<unmanagedCodeEntityReference>has_display</unmanagedCodeEntityReference> is always <languageKeyword>false</languageKeyword>. Refer to the following table for a summary of this information.</para>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <thead>
          <tr>
            <TD>
              <para>Feature</para>
            </TD>
            <TD>
              <para>CPU</para>
            </TD>
            <TD>
              <para>REF</para>
            </TD>
            <TD>
              <para>WARP</para>
            </TD>
            <TD>
              <para>C++ AMP-capable hardware,
no display attached</para>
            </TD>
            <TD>
              <para>C++ AMP-capable hardware,
display attached</para>
            </TD>
          </tr>
        </thead>
        <tbody>
          <tr>
            <TD>
              <para>has_display</para>
            </TD>
            <TD>
              <para>false</para>
            </TD>
            <TD>
              <para>true</para>
            </TD>
            <TD>
              <para>true</para>
            </TD>
            <TD>
              <para>false</para>
            </TD>
            <TD>
              <para>true</para>
            </TD>
          </tr>
        </tbody>
      </table>
      <para>The <unmanagedCodeEntityReference>has_display</unmanagedCodeEntityReference> property can be used to determine whether the operating system or other system software components might use the accelerator for display purposes. If you are using C++ AMP only for computation, you might prefer an accelerator that can't output to a display so that you can avoid contending for accelerator resources. But if you are using C++ AMP to visualize data, you might prefer an accelerator that can output to a display so that you don't have to copy the result from the accelerator just to display it.</para>
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
  <relatedTopics> <link xlink:href="4e634e82-5459-4c6d-b34a-69fbe6ab101c">accelerator::get_has_display Method</link> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

