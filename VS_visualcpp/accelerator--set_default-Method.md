---
title: "accelerator::set_default Method"
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
ms.assetid: 9863e4b2-35b4-4b14-b40c-917dd266605b
caps.latest.revision: 8
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
# accelerator::set_default Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Sets the default accelerator to be used for any operation that implicitly uses the default accelerator. This method only succeeds if the runtime selected default accelerator has not already been used in an operation that implicitly uses the default accelerator</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>static inline bool set_default(    std::wstring _Path );</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm> <parameterReference>_Path</parameterReference>
        </definedTerm>
        <definition>
          <para>The path to the accelerator.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para> <languageKeyword>true</languageKeyword> if the call succeeds at setting the default accelerator. Otherwise, <languageKeyword>false</languageKeyword>.</para>
    </content>
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>The C++ AMP runtime picks a default accelerator, unless you write code to pick a specific accelerator. For more information, see <link xlink:href="18f0dc66-8236-4420-9f46-1a14f2c3fba1">Using accelerator and accelerator_view objects</link>.</para>
      <para>You can specify the default accelerator object in these ways: </para>
      <list class="ordered">
        <listItem>
          <para>Call the constructor that takes a device path parameter.</para>
        </listItem>
        <listItem>
          <para>Set the default accelerator using the <link xlink:href="9863e4b2-35b4-4b14-b40c-917dd266605b">accelerator::set_default Method</link> and pass the value of <link xlink:href="dec8f6a9-333e-40ec-ad40-6e0643cf6564">accelerator::default_accelerator Data Member</link> to the constructor.</para>
        </listItem>
      </list>
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
  <relatedTopics> <link xlink:href="37eed593-cf87-4611-9cdc-e98df6c2377a">accelerator Class</link> <link xlink:href="18f0dc66-8236-4420-9f46-1a14f2c3fba1">Using accelerator and accelerator_view objects</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>

