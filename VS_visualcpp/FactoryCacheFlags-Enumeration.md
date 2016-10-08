---
title: "FactoryCacheFlags Enumeration"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
caps.latest.revision: 1
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
# FactoryCacheFlags Enumeration
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Determines whether factory objects are cached.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax language="cpp">enum FactoryCacheFlags;</legacySyntax>
  </syntaxSection>
  <languageReferenceRemarks>
    <content>
      <para>By default, the factory caching policy is specified as the <legacyLink xlink:href="61a763af-a5a4-451d-8b40-815af507fcde">ModuleType</legacyLink> template parameter when you create a <legacyLink xlink:href="dd67e3b8-c2e1-4f53-8c0f-565a140ba649">Module</legacyLink> object. To override this policy, specify a <unmanagedCodeEntityReference>FactoryCacheFlags</unmanagedCodeEntityReference> value when you create a factory object.</para>
      <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
        <tbody>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>FactoryCacheDefault</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>The caching policy of the <unmanagedCodeEntityReference>Module</unmanagedCodeEntityReference> object is used.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>FactoryCacheEnabled</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Enables factory caching regardless of the <unmanagedCodeEntityReference>ModuleType</unmanagedCodeEntityReference> template parameter that is used to create a <unmanagedCodeEntityReference>Module</unmanagedCodeEntityReference> object.</para>
            </TD>
          </tr>
          <tr>
            <TD>
              <para>
                <unmanagedCodeEntityReference>FactoryCacheDisabled</unmanagedCodeEntityReference>
              </para>
            </TD>
            <TD>
              <para>Disables factory caching regardless of the <unmanagedCodeEntityReference>ModuleType</unmanagedCodeEntityReference> template parameter that is used to create a <unmanagedCodeEntityReference>Module</unmanagedCodeEntityReference> object.</para>
            </TD>
          </tr>
        </tbody>
      </table>
    </content>
  </languageReferenceRemarks>
  <requirements>
    <content>
      <para>
        <embeddedLabel>Header: </embeddedLabel>implements.h</para>
      <para>
        <embeddedLabel>Namespace: </embeddedLabel>Microsoft::WRL</para>
    </content>
  </requirements>
  <relatedTopics>
    <link xlink:href="01118a8f-f564-4859-b87e-9444848585a1">Microsoft::WRL Namespace</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>