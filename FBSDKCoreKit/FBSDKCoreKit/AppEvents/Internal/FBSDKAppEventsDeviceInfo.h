/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <FBSDKCoreKit/FBSDKSettingsProtocol.h>

#import "FBSDKDeviceInformationProviding.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(AppEventsDeviceInfo)
@interface FBSDKAppEventsDeviceInfo : NSObject <FBSDKDeviceInformationProviding>

@property (class, nonnull, nonatomic, readonly) FBSDKAppEventsDeviceInfo *shared;

@property (nullable, nonatomic, readonly) id<FBSDKSettings> settings;

#if !FBTEST
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
#endif

- (void)configureWithSettings:(id<FBSDKSettings>)settings;

#if FBTEST && DEBUG
- (void)resetDependencies;
#endif

@end

NS_ASSUME_NONNULL_END
