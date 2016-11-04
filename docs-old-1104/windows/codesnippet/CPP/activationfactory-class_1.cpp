        struct MyClassFactory : public ActivationFactory<IMyAddtionalInterfaceOnFactory>
        {
            STDMETHOD(ActivateInstance) (_Outptr_result_nullonfailure_ IInspectable** ppvObject)
            {
                // my custom implementation

                return S_OK;
            }
        };

        ActivatableClassWithFactory(MyClass, MyClassFactory);
        // or if a default factory is used:
        //ActivatableClassWithFactory(MyClass, SimpleActivationFactory);