//
//  PXAccountDefenderManager.h
//  PerimeterX
//
//  Created by Oren Yaar on 24/08/2021.
//  Copyright © 2021 PerimeterX. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PXAccountDefenderManager : NSObject

+ (void)setUserId:(NSString * _Nullable)userId;
+ (void)registerOutgoingUrlRequest:(NSString * _Nonnull)url;

@end

NS_ASSUME_NONNULL_END
