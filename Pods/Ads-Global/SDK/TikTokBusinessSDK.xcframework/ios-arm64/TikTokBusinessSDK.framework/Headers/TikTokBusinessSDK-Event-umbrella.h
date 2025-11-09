#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TikTokAppEvent.h"
#import "TikTokAppEventUtility.h"
#import "TikTokBaseEventPersistence.h"
#import "TikTokDatabase.h"
#import "TikTokSKANEventPersistence.h"
#import "NSObject+TikTokAdditions.h"
#import "TikTokAdditions.h"
#import "UIApplication+TikTokAdditions.h"
#import "UIDevice+TikTokAdditions.h"
#import "UIViewController+TikTokAdditions.h"
#import "TikTokBaseEvent.h"
#import "TikTokBusiness+private.h"
#import "TikTokBusiness.h"
#import "TikTokBusinessSDK.h"
#import "TikTokBusinessSDKMacros.h"
#import "TikTokConfig.h"
#import "TikTokConstants.h"
#import "TikTokContentsEvent.h"
#import "TikTokCurrencyUtility.h"
#import "TikTokDebugInfo.h"
#import "TikTokDeviceInfo.h"
#import "TikTokEDPConfig.h"
#import "TikTokErrorHandler.h"
#import "TikTokEventLogger.h"
#import "TikTokFactory.h"
#import "TikTokIdentifyUtility.h"
#import "TikTokLogger.h"
#import "TikTokPaymentObserver.h"
#import "TikTokRequestHandler.h"
#import "TikTokSKAdNetworkConversionConfiguration.h"
#import "TikTokSKAdNetworkRule.h"
#import "TikTokSKAdNetworkRuleEvent.h"
#import "TikTokSKAdNetworkWindow.h"
#import "TikTokSKAdNetworkSupport.h"
#import "TikTokTypeUtility.h"
#import "TikTokUnityBridge.h"
#import "TikTokUserAgentCollector.h"
#import "TikTokViewUtility.h"
#import "TikTokBusinessSDKAddress.h"
#import "TikTokCypher.h"

FOUNDATION_EXPORT double TikTokBusinessSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char TikTokBusinessSDKVersionString[];

