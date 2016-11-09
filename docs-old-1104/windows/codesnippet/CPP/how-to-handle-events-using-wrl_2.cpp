    // Counts the number of enumerated devices.
    unsigned int deviceCount = 0;

    // Event registration tokens that enable us to later unsubscribe from events.
    EventRegistrationToken addedToken;
    EventRegistrationToken stoppedToken;
    EventRegistrationToken enumCompletedToken;