Imports Microsoft.VisualStudio.Shell
Imports System.ComponentModel

Class OptionsPageCustom
    Inherits DialogPage

    Private _optionInt As Integer

    <Category("My Options"),
    DisplayName("Integer Option"),
    Description("My integer option")>
    Public Property OptionInteger() As Integer
        Get
            Return _optionInt
        End Get
        Set(ByVal value As Integer)
            _optionInt = value
        End Set
    End Property
End Class
