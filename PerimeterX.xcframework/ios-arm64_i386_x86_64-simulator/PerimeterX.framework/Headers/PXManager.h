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

-(void) managerReady:(NSDictionary *)httpHeaders;

@end


@interface PXManager : NSObject

typedef void (^PXCompletionBlock)(void);


extern NSString * const PX_SDK_VERSION;
extern NSString *const PX_AUTH_HEADER_KEY;

+(PXManager *) initSharedInstance:(NSString *)appId;
+(PXManager *) sharedInstance;

@property (nonatomic, weak) id<PXManagerDelegate> delegate;
@property (readonly, nonatomic, strong) NSString *appId;
@property (readonly, nonatomic, strong) NSString *collectorUrl;
@property (readonly, nonatomic, assign) BOOL forceCaptcha;
@property (readonly, nonatomic, assign) BOOL forceBlock;

@property (readonly, nonatomic, strong) NSDictionary *customParams;
@property (nonatomic, assign) NSTimeInterval timeoutInterval;
@property (nonatomic, assign) NSInteger retryBaseValue;
@property (nonatomic, assign) NSInteger maxRetryCount;
@property (nonatomic, assign) NSString *challengeLocale;

-(void) startWith:(NSString *)appId;

-(void) setCustomParameters:(NSArray *)customParams __deprecated __deprecated_msg("Please use setCustomParametersDictionary");
-(void) setCustomParametersDictionary:(NSDictionary *)customParamsDictionary;


-(NSDictionary *) httpHeaders;
-(NSString *) getVid;

-(void) setHeadersForRequest:(NSMutableURLRequest *)request;
-(void) setHeadersForConfiguration:(NSURLSessionConfiguration *)configuration;

-(void) forceBlockToken;
-(void) forceCaptchaToken;

-(PXBlockResponse *) checkError:(NSDictionary *)responseJson;

-(void) handleBlockResponse:(PXBlockResponse *)blockResponse with:(UIViewController *)presentingViewController captchaSuccess:(PXCompletionBlock)successBlock captchaFailure:(PXCompletionBlock)failureBlock __deprecated __deprecated_msg("Please remove the captchaFailure callback");

-(void) handleBlockResponse:(PXBlockResponse *)blockResponse with:(UIViewController *)presentingViewController captchaSuccess:(PXCompletionBlock)successBlock;

-(void) handleBlockResponse:(PXBlockResponse *)blockResponse with:(UIViewController *)presentingViewController captchaSuccess:(PXCompletionBlock)successBlock captchaClose:(PXCompletionBlock)closeBlock;

-(void) wakeup:(PXCompletionBlock) completionBlock;

-(void) resetDebugSettings;

-(void) refreshToken;

+(NSString *) formatCollectorUrl:(NSString *)appId with:(BOOL)isIPv6;

@end
