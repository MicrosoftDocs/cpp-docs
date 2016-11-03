      // Wait for the sentinel event and for all operations to finish.
      received_sentinel.wait();
      active.wait();