        // Produces HTTP requets.
        Web::HttpRequest m_httpRequest;
        // Enables us to cancel the active HTTP request.
        concurrency::cancellation_token_source m_cancelHttpRequestSource;