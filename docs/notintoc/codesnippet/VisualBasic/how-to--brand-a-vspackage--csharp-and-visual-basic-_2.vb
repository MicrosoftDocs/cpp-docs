    Public Function IdBmpSplash(ByRef pIdBmp As UInteger) As Integer _
        Implements IVsInstalledProduct.IdBmpSplash
        pIdBmp = 300
        Return VSConstants.S_OK
    End Function
    Public Function IdIcoLogoForAboutbox(ByRef pIdIco As UInteger) As Integer _
        Implements IVsInstalledProduct.IdIcoLogoForAboutbox
        pIdIco = 400
        Return VSConstants.S_OK
    End Function
    Public Function OfficialName(ByRef pbstrName As String) As Integer _
        Implements IVsInstalledProduct.OfficialName
        pbstrName = GetResourceString("@101")
        Return VSConstants.S_OK
    End Function
    Public Function ProductDetails(ByRef pbstrProductDetails As String) As Integer _
        Implements IVsInstalledProduct.ProductDetails
        pbstrProductDetails = GetResourceString("@102")
        Return VSConstants.S_OK
    End Function
    Public Function ProductID(ByRef pbstrPID As String) As Integer _
        Implements IVsInstalledProduct.ProductID
        pbstrPID = GetResourceString("@104")
        Return VSConstants.S_OK
    End Function
    Public Function GetResourceString(ByVal resourceName As String) As String
        Dim resourceValue As String
        Dim resourceManager As IVsResourceManager = DirectCast(GetService(GetType(SVsResourceManager)), IVsResourceManager)
        If resourceManager Is Nothing Then
            Throw New InvalidOperationException("Could not get SVsResourceManager service. Make sure that the package is sited before calling this method")
        End If
        Dim packageGuid As Guid = Me.[GetType]().GUID
        Dim hr As Integer = resourceManager.LoadResourceString(packageGuid, -1, resourceName, resourceValue)
        Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure(hr)
        Return resourceValue
    End Function