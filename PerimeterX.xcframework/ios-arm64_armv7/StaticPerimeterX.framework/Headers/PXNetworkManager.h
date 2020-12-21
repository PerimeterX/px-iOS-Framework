//
//  PXNetworkManager.h
//  PerimeterX
//
//  Created by Oded Regev on 6/4/17.
//  Copyright © 2017 PerimeterX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PXNetworkManager : NSObject

typedef void (^PXNetworkCompletionBlock)(NSData *data, NSURLResponse *response, NSError *error);

+ (id)sharedManager;

+(NSString *) userAgent;

-(void) resetSessions;

-(void) sendGet:(NSURL *)url completionHandler:(PXNetworkCompletionBlock)completionHandler;

-(void) sendPost:(NSURL *)url postData:(NSString *)postDataString completionHandler:(PXNetworkCompletionBlock)completionHandler;

-(void) sendPost:(NSURL *)url asFormSubmit:(BOOL)sendAsFormSubmit postData:(NSData *)postData performPinning:(BOOL)shouldPerformPinning  completionHandler:(PXNetworkCompletionBlock)completionHandler;
@end
