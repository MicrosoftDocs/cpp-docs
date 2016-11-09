    // Get the activation factory for the IDeviceWatcher interface.
    ComPtr<IDeviceInformationStatics> watcherFactory;
    hr = ABI::Windows::Foundation::GetActivationFactory(HStringReference(RuntimeClass_Windows_Devices_Enumeration_DeviceInformation).Get(), &watcherFactory);
    if (FAILED(hr))
    {
        return PrintError(__LINE__, hr);
    }