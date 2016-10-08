---
title: "system_error Class"
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
ms.assetid: 2eeaacbb-8a4a-4ad7-943a-997901a77f32
caps.latest.revision: 14
manager: ghogen
translation.priority.mt: 
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
# system_error Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Represents the base class for all exceptions thrown to report a low-level system error.</para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class system_error : public runtime_error {
public:
    explicit system_error(error_code _Errcode, const string&amp; _Message = "");
    system_error(error_code _Errcode, const char *_Message);
    system_error(error_code::value_type _Errval,
        const error_category&amp; _Errcat, const string&amp; _Message);
    system_error(error_code::value_type _Errval,
        const error_category&amp; _Errcat, const char *_Message);
    const error_code&amp; code() const throw();
    const error_code&amp; code() const throw();
    };</legacySyntax>
    </syntaxSection>
    <languageReferenceRemarks>
        <content>
            <para>The value returned by <languageKeyword>what</languageKeyword> in the class exception is constructed from <codeInline>_Message</codeInline> and the stored object of type <legacyLink xlink:href="c09b4a96-cb14-4281-a319-63543f9b2b4a">error_code</legacyLink> (either <codeInline>code</codeInline> or <codeInline>error_code(_Errval, _Errcat)</codeInline>).</para>
            <para>The member function <languageKeyword>code</languageKeyword> returns the stored <legacyLink xlink:href="c09b4a96-cb14-4281-a319-63543f9b2b4a">error_code</legacyLink> object.</para>
        </content>
    </languageReferenceRemarks>
    <requirements>
        <content>
            <para>
                <embeddedLabel>Header:</embeddedLabel> &lt;system_error&gt;</para>
            <para>
                <embeddedLabel>Namespace:</embeddedLabel> std</para>
        </content>
    </requirements>
    <relatedTopics> <link xlink:href="5e046c6e-48d9-4740-8c8a-05f3727c1215">&lt;system_error&gt;</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



