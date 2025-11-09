//
//  ISTencentAdapter.h
//  ISTencentAdapter
//
//  Copyright © 2023 ironSource Mobile Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IronSource/ISBaseAdapter+Internal.h>

static NSString* const TencentAdapterVersion = @"5.1.0";
static NSString* Githash = @"1617725";

// System Frameworks For Tencent Adapter
@import AdSupport;
@import AVFoundation;
@import CoreLocation;
@import CoreTelephony;
@import libxml2;
@import QuartzCore;
@import Security;
@import StoreKit;
@import SystemConfiguration;
@import WebKit;

@interface ISTencentAdapter : ISBaseAdapter

@end
