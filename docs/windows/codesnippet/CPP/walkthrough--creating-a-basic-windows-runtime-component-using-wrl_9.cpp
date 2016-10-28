            HRESULT __stdcall add_PrimeNumberFound(_In_ IPrimeNumberEvent* event, _Out_ EventRegistrationToken* eventCookie)
            {
                return m_events.Add(event, eventCookie);
            }

            HRESULT __stdcall remove_PrimeNumberFound(_In_ EventRegistrationToken eventCookie)
            {
                return m_events.Remove(eventCookie);
            }