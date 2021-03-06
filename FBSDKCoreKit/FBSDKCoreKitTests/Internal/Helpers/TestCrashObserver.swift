/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

class TestCrashObserver: CrashObserving {
  var wasEnableCalled = false
  var prefixes = [String]()
  var frameworks: [String]?

  func enable() {
    wasEnableCalled = true
  }

  func didReceiveCrashLogs(_ crashLogs: [[String: Any]]) {}
}
