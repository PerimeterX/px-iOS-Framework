//
//  PXManager.h
//  PerimeterX
//
//  Created by Oded Regev on 6/4/17.
//  Copyright © 2017 PerimeterX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PXBlockResponse.h"
#import "PXWebViewController.h"

@class PXCookie;

@protocol PXManagerDelegate <NSObject>

-(void) newHeaders:(NSDictionary *)httpHeaders;

@end


@interface PXManager : NSObject <PXWebViewDelegate>

extern NSString * const PX_SDK_VERSION;
extern NSString * const PX_JS_CLIENT_TAG;

+(PXManager *) sharedInstance;

@property (nonatomic, weak) id<PXManagerDelegate> delegate;
@property (readonly, nonatomic, strong) NSString *appId;
@property (readonly, nonatomic, strong) NSString *collectorUrl;
@property (readonly, nonatomic, assign) BOOL forceCaptcha;
@property (readonly, nonatomic, assign) BOOL forceBlock;


-(void) managerWithCustomBlockCode:(NSUInteger)blockCode;

-(void) startWith:(NSString *)appId;

-(void) setCustomParameters:(NSDictionary *)customParams;

-(NSDictionary *) httpHeaders;

-(void) setHeadersForRequest:(NSMutableURLRequest *)request;
-(void) setHeadersForConfiguration:(NSURLSessionConfiguration *)configuration;

-(void) forceBlockToken;
-(void) forceCaptchaToken;

-(PXBlockResponse *) checkError:(NSDictionary *)responseJson;

-(void) handleBlockResponse:(PXBlockResponse *)blockResponse with:(UIViewController *)presentingViewController;

-(void) setTimerForTokenRenewIfNeeded:(PXCookie *)cookie;

-(void) wakeup;

-(void) resetDebugSettings;

@end
