      //
      // Connect the network.
      //

      // Connect the internal nodes of the network.
      connector.link_target(&negatives);
      connector.link_target(&positives);
      connector.link_target(&sentinel);
      increment_active.link_target(&connector);

      // Connect the _source buffer to the internal network to 
      // begin data flow.
      _source.link_target(&increment_active);