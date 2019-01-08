//
//  WKWebView+XHShowImage.h
//  XRWebViewJS
//
//  Created by yuanxr on 2019/1/5.
//  Copyright © 2019年 yuanxr. All rights reserved.
//

#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WKWebView (XHShowImage)

- (NSArray *)xh_getImageUrlWithWebView:(WKWebView *)webView;

- (NSArray *)getImgUrlArray;

@end

NS_ASSUME_NONNULL_END
