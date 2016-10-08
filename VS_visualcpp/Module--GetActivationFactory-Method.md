---
title: "Module::GetActivationFactory Method"
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
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
caps.latest.revision: 4
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
# Module::GetActivationFactory Method
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>Gets an activation factory for the module.</para>
  </introduction>
  <syntaxSection>
    <legacySyntax>WRL_NOTHROW HRESULT GetActivationFactory(
   _In_ HSTRING <parameterReference>pActivatibleClassId</parameterReference>,
   _Deref_out_ IActivationFactory **<parameterReference>ppIFactory</parameterReference>,
   <?Comment ta: TechRvw the new syntax. 2011-09-28T15:12:00Z  Id='0?>wchar_t* <?CommentEnd Id='0'
    ?><parameterReference>serverName</parameterReference> = nullptr
);</legacySyntax>
  </syntaxSection>
  <parameters>
    <content>
      <definitionTable>
        <definedTerm>
          <parameterReference>pActivatibleClassId</parameterReference>
        </definedTerm>
        <definition>
          <para>IID of a runtime class.</para>
        </definition>
        <definedTerm>
          <parameterReference>ppIFactory</parameterReference>
        </definedTerm>
        <definition>
          <para>The IActivationFactory for the specified runtime class.</para>
        </definition>
        <definedTerm>
          <parameterReference>
            <?Comment ta: This parameter was changed since the topic was generated.TODO: tech review 2011-09-27T14:10:00Z  Id='1?>serverName<?CommentEnd Id='1'
    ?></parameterReference>
        </definedTerm>
        <definition>
          <para>The name of a subset of class factories in the current module. Specify the server name used in the <legacyLink xlink:href="9bd64709-ec2c-4678-8c96-ea5982622bdd">ActivatableClassWithFactoryEx</legacyLink> macro, or specify <languageKeyword>nullptr</languageKeyword> to get the default server name.</para>
        </definition>
      </definitionTable>
    </content>
  </parameters>
  <returnValue>
    <content>
      <para>S_OK if successful; otherwise, the HRESULT returned by GetActivationFactory.</para>
    </content>
  </returnValue>
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
    <link xlink:href="9bd64709-ec2c-4678-8c96-ea5982622bdd">ActivatableClass Macros</link>
  </relatedTopics>
</developerReferenceWithSyntaxDocument>