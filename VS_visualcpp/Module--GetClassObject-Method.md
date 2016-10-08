---
title: "Module::GetClassObject Method"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 95b0de1b-f728-4f96-9f44-f6ea71ce56e4
caps.latest.revision: 2
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Module::GetClassObject Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Retreives a cache of class factories.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax> HRESULT GetClassObject(
   REFCLSID <parameterReference>clsid</parameterReference>,
   REFIID <parameterReference>riid</parameterReference>,
   _Deref_out_ void **<parameterReference>ppv</parameterReference>,
   <?Comment ta: TODO: TechR the new syntax. 2011-09-28T15:11:00Z  Id='2?>wchar_t* <?CommentEnd Id='2'
    ?><parameterReference>serverName</parameterReference> = nullptr
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>clsid</parameterReference>
        </definedTerm>
        <definition>
          <para>Class ID.</para>
        </definition>
        <definedTerm>
          <parameterReference>riid</parameterReference>
        </definedTerm>
        <definition>
          <para>Interface ID that you request.</para>
        </definition>
        <definedTerm>
          <parameterReference>ppv</parameterReference>
        </definedTerm>
        <definition>
          <para>Pointer to returned object.</para>
        </definition>
        <definedTerm>
          <parameterReference>serverName</parameterReference>
        </definedTerm>
        <definition>
          <para>The server name that is specified in either <?Comment ta: Macro defined in module.h, but NOT in generated list.TODO: Create topic.TODO: Create TFS item. 2011-09-28T15:09:00Z  Id='3?>the <?CommentEnd Id='3'
    ?><languageKeyword>ActivatableClassWithFactory</languageKeyword>, <languageKeyword>ActivatableClassWithFactoryEx</languageKeyword>, or <languageKeyword>ActivatableClass</languageKeyword> macro; or <languageKeyword>nullptr</languageKeyword> to get the default server name.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content />
  </returnValue>
  <section>
    <title>Remarks</title>
    <content>
      <para>
        <?Comment ta: TR: Is this remark still true; use only for COM? 2011-09-28T15:58:00Z  Id='4?>Use <?CommentEnd Id='4'
    ?>this method only for COM, not the <token>wrt</token>. This method exposes only IClassFactory methods.</para>
    </content>
  </section>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>module.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module Class</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>