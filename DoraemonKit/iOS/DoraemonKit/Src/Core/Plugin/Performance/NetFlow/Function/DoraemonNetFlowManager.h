//
//  DoraemonNetFlowManager.h
//  Aspects
//
//  Created by didi on 2020/3/15.
//

#import <Foundation/Foundation.h>

@interface DoraemonNetFlowManager : NSObject

+ (DoraemonNetFlowManager *)shareInstance;

@property (nonatomic, strong) NSDate *startInterceptDate;
@property (nonatomic, assign) BOOL canIntercept;

- (void)canInterceptNetFlow:(BOOL)enable;

@end
