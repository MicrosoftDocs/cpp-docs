---
description: "Learn more about: Use Rule Sets to Specify the C++ Rules to Run"
title: Using Rule Sets to Specify the C++ Rules to Run
ms.date: 07/27/2020
ms.topic: "conceptual"
f1_keywords:
  - "vs.codeanalysis.rulesets.native"
---
# Use Rule Sets to Specify the C++ Rules to Run

In Visual Studio, you can create and modify a custom *rule set* to meet specific project needs associated with code analysis. The default rule sets are stored in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`*.

**Visual Studio 2017 version 15.7 and later:** You can create custom rule sets using any text editor and apply them in command line builds no matter what build system you're using. For more information, see [`/analyze:ruleset`](../build/reference/analyze-code-analysis.md).

To create a custom C++ rule set in Visual Studio, a C/C++ project must be open in the Visual Studio IDE. You then open a standard rule set in the rule set editor and then add or remove specific rules and optionally change the action that occurs when code analysis determines a rule has been violated.

To create a new custom rule set, you save it by using a new file name. The custom rule set is automatically assigned to the project.

## To create a custom rule from a single existing rule set

::: moniker range="<=msvc-150"

1. In Solution Explorer, open the shortcut menu for the project and then choose **Properties**.

1. In the **Property Pages** dialog box, select the **Configuration Properties** > **Code Analysis** > **General** property page.

1. In the **Rule Set** drop-down list, do one of the following:

   - Choose the rule set that you want to customize.

     \- or -

   - Choose **\<Browse...>** to specify an existing rule set that isn't in the list.

1. Choose **Open** to display the rules in the rule set editor.

::: moniker-end
::: moniker range=">=msvc-160"

1. In Solution Explorer, open the shortcut menu for the project and then choose **Properties**.

1. In the **Property Pages** dialog box, select the **Configuration Properties** > **Code Analysis** > **Microsoft** property page.

1. In the **Active Rules** drop-down list, do one of the following:

   - Choose the rule set that you want to customize.

     \- or -

   - Choose **\<Browse...>** to specify an existing rule set that isn't in the list.

1. Choose **Open** to display the rules in the rule set editor.

::: moniker-end

## To modify a rule set in the rule set editor

- To change the display name of the rule set, on the **View** menu, choose **Properties Window**. Enter the display name in the **Name** box. Notice that the display name can differ from the file name.

- To add all the rules of the group to a custom rule set, select the check box of the group. To remove all the rules of the group, clear the check box.

- To add a specific rule to the custom rule set, select the check box of the rule. To remove the rule from the rule set, clear the check box.

- To change the action taken when a rule is violated in a code analysis, choose the **Action** field for the rule and then choose one of the following values:

     **Warning** - generates a warning.

     **Error** - generates an error.

     **Info** - generates a message.

     **None** - disables the rule. This action is the same as removing the rule from the rule set.

## To group, filter, or change the fields in the rule set editor by using the rule set editor toolbar

- To expand the rules in all groups, choose **Expand All**.

- To collapse the rules in all groups, choose **Collapse All**.

- To change the field that rules are grouped by, choose the field from the **Group By** list. To display the rules ungrouped, choose **\<None>**.

- To add or remove fields in rule columns, choose **Column Options**.

- To hide rules that don't apply to the current solution, choose **Hide rules that do not apply to the current solution**.

- To switch between showing and hiding rules that are assigned the Error action, choose **Show rules that can generate Code Analysis errors**.

- To switch between showing and hiding rules that are assigned the Warning action, choose **Show rules that can generate Code Analysis warnings**.

- To switch between showing and hiding rules that are assigned the **None** action, choose **Show rules that are not enabled**.

- To add or remove Microsoft default rule sets to the current rule set, choose **Add or remove child rule sets**.

## To create a rule set in a text editor

You can create a custom rule set in a text editor, store it in any location with a *`.ruleset`* extension, and apply in with the [`/analyze:ruleset`](../build/reference/analyze-code-analysis.md) compiler option.

The following example shows a basic rule set file that you can use as a starting point:

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description="New rules to apply." ToolsVersion="10.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

## Ruleset schema

The following ruleset schema describes the XML schema of a ruleset file. The ruleset schema is stored in *`%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Schemas\RuleSet.xsd`*. You can use it to author your own rulesets programmatically or to validate whether your custom rulesets adhere to the correct format. For more information, see [How to: Create an XML document based on an XSD schema](/visualstudio/xml-tools/how-to-create-an-xml-document-based-on-an-xsd-schema).

```xml
<?xml version="1.0" encoding="utf-8"?>
<xs:schema xmlns:xs="http://www.w3.org/2001/XMLSchema">

  <xs:annotation>
    <xs:documentation xml:lang="en">
            Visual Studio Code Analysis Rule Set Schema Definition Language.
            Copyright (c) Microsoft Corporation. All rights reserved.
        </xs:documentation>
  </xs:annotation>

  <!-- Every time this file changes, be sure to change the Validate method for the corresponding object in the code -->

  <xs:element name="RuleSet" type="TRuleSet">
  </xs:element>

  <xs:complexType name="TLocalization">
    <xs:all>
      <xs:element name="Name" type="TName" minOccurs="0" maxOccurs="1" />
      <xs:element name="Description" type="TDescription" minOccurs="0" maxOccurs="1" />
    </xs:all>
    <xs:attribute name="ResourceAssembly" type="TNonEmptyString" use="required" />
    <xs:attribute name="ResourceBaseName" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TRuleHintPaths">
    <xs:sequence>
      <xs:element name="Path" type="TNonEmptyString" minOccurs="0" maxOccurs="unbounded" />
    </xs:sequence>
  </xs:complexType>
  
  <xs:complexType name="TName">
    <xs:attribute name="Resource" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TDescription">
    <xs:attribute name="Resource" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TInclude">
    <xs:attribute name="Path" type="TNonEmptyString" use="required" />
    <xs:attribute name="Action" type="TIncludeAction" use="required" />
  </xs:complexType>

  <xs:complexType name="TIncludeAll">
    <xs:attribute name="Action" type="TIncludeAllAction" use="required" />
  </xs:complexType>

  <xs:complexType name="TRule">
    <xs:attribute name="Id" type="TNonEmptyString" use="required" />
    <xs:attribute name="Action" type="TRuleAction" use="required" />
  </xs:complexType>

  <xs:complexType name="TRules">
    <xs:sequence>
      <xs:element name="Rule" type="TRule" minOccurs="0" maxOccurs="unbounded" />
    </xs:sequence>
    <xs:attribute name="AnalyzerId" type="TNonEmptyString" use="required" />
    <xs:attribute name="RuleNamespace" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:complexType name="TRuleSet">
    <xs:sequence minOccurs="0" maxOccurs="1">
      <xs:element name="Localization" type="TLocalization" minOccurs="0" maxOccurs="1" />
      <xs:element name="RuleHintPaths" type="TRuleHintPaths" minOccurs="0" maxOccurs="1" />
      <xs:element name="IncludeAll" type="TIncludeAll" minOccurs="0" maxOccurs="1" />
      <xs:choice minOccurs="0" maxOccurs="unbounded">
        <xs:element name="Include" type="TInclude" minOccurs="0" maxOccurs="unbounded" />
        <xs:element name="Rules" type="TRules" minOccurs="0" maxOccurs="unbounded">
          <xs:unique name="UniqueRuleName">
            <xs:selector xpath="Rule" />
            <xs:field xpath="@Id" />
          </xs:unique>
        </xs:element>
      </xs:choice>
    </xs:sequence>
    <xs:attribute name="Name" type="TNonEmptyString" use="required" />
    <xs:attribute name="Description" type="xs:string" use="optional" />
    <xs:attribute name="ToolsVersion" type="TNonEmptyString" use="required" />
  </xs:complexType>

  <xs:simpleType name="TRuleAction">
    <xs:restriction base="xs:string">
      <xs:enumeration value="Error"/>
      <xs:enumeration value="Warning"/>
      <xs:enumeration value="Info"/>
      <xs:enumeration value="Hidden"/>
      <xs:enumeration value="None"/>
    </xs:restriction>
  </xs:simpleType>

  <xs:simpleType name="TIncludeAction">
    <xs:restriction base="xs:string">
      <xs:enumeration value="Error"/>
      <xs:enumeration value="Warning"/>
      <xs:enumeration value="Info"/>
      <xs:enumeration value="Hidden"/>
      <xs:enumeration value="None"/>
      <xs:enumeration value="Default"/>
    </xs:restriction>
  </xs:simpleType>

  <xs:simpleType name="TIncludeAllAction">
    <xs:restriction base="xs:string">
      <xs:enumeration value="Error"/>
      <xs:enumeration value="Warning"/>
      <xs:enumeration value="Info"/>
      <xs:enumeration value="Hidden"/>
    </xs:restriction>
  </xs:simpleType>

  <xs:simpleType name="TNonEmptyString">
    <xs:restriction base="xs:string">
      <xs:minLength value="1" />
    </xs:restriction>
  </xs:simpleType>
  
</xs:schema>

```

Schema element details:

| Schema element | Description |
|--------------------|--------------|
| `TLocalization` | Localization information including name of the ruleset file, description of the ruleset file, name of the resource assembly containing the localized resource, and base name of the localized resource |
| `TRuleHintPaths` | File paths used as hints to search for ruleset files |
| `TName` | Name of the current ruleset file |
| `TDescription` | Description of the current ruleset file |
| `TInclude` | Path to an included ruleset with rule action |
| `TIncludeAll` | Rule action for all rules |
| `TRule` | Rule ID with rule action |
| `TRules` | Collection of one or more rules |
| `TRuleSet` | Ruleset file format consisting of localization information, rule hint paths, include all information, include information,  rules information, name, description, and tools version information |
| `TRuleAction` | Enumeration describing a rule action such as an error, warning, info, hidden, or none |
| `TIncludeAction` | Enumeration describing a rule action such as an error, warning, info, hidden, none, or default |
| `TIncludeAllAction` | Enumeration describing a rule action such as an error, warning, info, or hidden |

To see an example of a ruleset, see [To create a rule set in a text editor](#to-create-a-rule-set-in-a-text-editor), or any of the default rulesets stored in `%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`.
