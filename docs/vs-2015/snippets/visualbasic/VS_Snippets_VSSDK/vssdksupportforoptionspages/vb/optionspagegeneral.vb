Imports Microsoft.VisualStudio.Shell
Imports System.ComponentModel

Class OptionsPageGeneral
    Inherits DialogPage

    '<Snippet3>
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
    '</Snippet3>
End Class
