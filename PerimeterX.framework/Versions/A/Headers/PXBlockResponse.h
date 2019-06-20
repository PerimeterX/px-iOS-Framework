//
//  PXBlockResponse.h
//  PerimeterX
//
//  Created by Oded Regev on 6/11/17.
//  Copyright © 2017 PerimeterX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PXBlockResponse : NSObject

typedef NS_ENUM(NSInteger, PXBlockType) {
    Block,
    Captcha,
    NotPXBlock
};


- (id)initWithResponse:(NSDictionary *)responseJson challengeLocale:(NSString *)challengeLocaleString;

@property (readonly, nonatomic, assign) PXBlockType type;
@property (readonly, nonatomic, strong) NSString *uuid;
@property (readonly, nonatomic, strong) NSString *vid;
@property (readonly, nonatomic, strong) NSString *appId;
@property (readonly, nonatomic, strong) NSString *pageHtml;
@property (readonly, nonatomic, strong) NSString *collectorUrl;


@end
