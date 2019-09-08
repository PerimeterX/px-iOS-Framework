//
//  PXWebViewController.h
//  PerimeterX
//
//  Created by Oded Regev on 6/11/17.
//  Copyright © 2017 PerimeterX. All rights reserved.
//

#import "PXBlockResponse.h"
#import <WebKit/WebKit.h>

@protocol PXWebViewDelegate <NSObject>

-(void) captchaSuccess;

-(void) captchaFailure;

-(void) captchaClose;

@end


@interface PXWebViewController: UIViewController <WKNavigationDelegate>

@property (nonatomic, weak) id<PXWebViewDelegate> delegate;
@property (nonatomic, strong) PXBlockResponse *blockResponse;

@end
