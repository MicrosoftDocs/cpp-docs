    // CComPtr with error handling:
    CComPtr<IMediaControl> pControl;
    hr = pGraph->QueryInterface(IID_PPV_ARGS(&pControl));
    if(FAILED(hr)){ /*... handle hr error*/ }

    // CComQIPtr with error handling
    CComQIPtr<IMediaEvent> pEvent = pControl;
    if(!pEvent){ /*... handle NULL pointer error*/ }

    // Use the second interface.
    hr = pControl->Run();
    if(FAILED(hr)){ /*... handle hr error*/ }